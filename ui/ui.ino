#include "Arduino_H7_Video.h"
#include "Arduino_GigaDisplayTouch.h"
#include "lvgl.h"
#include "ui.h"

// Display and Touch setup
Arduino_H7_Video Display(800, 480, GigaDisplayShield);
Arduino_GigaDisplayTouch TouchDetector;

// Previous positions for relative slider values
int prev_base = 0;
int prev_shoulder = 0;
int prev_elbow = 0;

void setup() {
  Serial.begin(9600);
  Serial4.begin(9600);
  Display.begin();
  TouchDetector.begin();
  ui_init();  // Initialize UI
}

void loop() {
  lv_timer_handler();  // Required for LVGL
  delay(5);            // Small delay to keep UI responsive
}

// Get direction from a delta
String getDirection(int delta) {
  return (delta >= 0) ? "CW" : "CCW";
}
String getDirection1(int delta) {
  return (delta >= 0) ? "CCW" : "CW";
}
// Get slider values and return formatted string
String getRoboticArmSliderValues() {
  // Current slider positions
  int base = lv_slider_get_value(ui_sliderBase);
  int shoulder = lv_slider_get_value(ui_sliderShoulder);
  int elbow = lv_slider_get_value(ui_sliderElbow);
  int wrist1 = lv_slider_get_value(ui_sliderWrist1);
  int wrist2 = lv_slider_get_value(ui_sliderWrist2);
  int wrist3 = lv_slider_get_value(ui_sliderWrist3);
  int gripper = lv_slider_get_value(ui_sliderGripper);

  // Calculate relative movement for base, shoulder, elbow
  int delta_base = base - prev_base;
  int delta_shoulder = shoulder - prev_shoulder;
  int delta_elbow = elbow - prev_elbow;

  // Construct the command string
  String values = "M1 " + getDirection(delta_base) + " " + String(abs(delta_base)) + " " +
                  "M2 " + getDirection(delta_shoulder) + " " + String(abs(delta_shoulder)) + " " +
                  "M3 " + getDirection1(delta_elbow) + " " + String(abs(delta_elbow)) + " " +
                  "M4 " + getDirection(wrist1) + " " + String(wrist1) + " " +
                  "M5 " + getDirection(wrist2) + " " + String(wrist2) + " " +
                  "M6 " + getDirection(wrist3) + " " + String(wrist3) + " " +
                  "M7 " + getDirection(gripper) + " " + String(gripper);

  return values;
}

// Send button event callback
void handleNewButtonEvent(lv_event_t *e) {
  lv_event_code_t code = lv_event_get_code(e);
  if (code == LV_EVENT_CLICKED) {
    String command = getRoboticArmSliderValues();
    Serial.println(command);
    Serial4.println(command);

    // Update previous values
    prev_base = lv_slider_get_value(ui_sliderBase);
    prev_shoulder = lv_slider_get_value(ui_sliderShoulder);
    prev_elbow = lv_slider_get_value(ui_sliderElbow);
  }
}

// Reset button event callback
void resetAllSliders(lv_event_t * e) {
  // Get current slider values
  int base = lv_slider_get_value(ui_sliderBase);
  int shoulder = lv_slider_get_value(ui_sliderShoulder);
  int elbow = lv_slider_get_value(ui_sliderElbow);
  int wrist1 = lv_slider_get_value(ui_sliderWrist1);
  int wrist2 = lv_slider_get_value(ui_sliderWrist2);
  int wrist3 = lv_slider_get_value(ui_sliderWrist3);
  int gripper = lv_slider_get_value(ui_sliderGripper);

  // Send command to return to zero position
  String command = "M1 " + getDirection(-base) + " " + String(abs(base)) + " " +
                   "M2 " + getDirection(-shoulder) + " " + String(abs(shoulder)) + " " +
                   "M3 " + getDirection1(-elbow) + " " + String(abs(elbow)) + " " +
                   "M4 " + getDirection(-wrist1) + " " + String(abs(wrist1)) + " " +
                   "M5 " + getDirection(-wrist2) + " " + String(abs(wrist2)) + " " +
                   "M6 " + getDirection(-wrist3) + " " + String(abs(wrist3)) + " " +
                   "M7 " + getDirection(-gripper) + " " + String(abs(gripper));

  Serial.println(command);
  Serial4.println(command);

  // Set sliders back to zero (with animation)
  lv_slider_set_value(ui_sliderBase, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderShoulder, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderElbow, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderWrist1, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderWrist2, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderWrist3, 0, LV_ANIM_ON);
  lv_slider_set_value(ui_sliderGripper, 0, LV_ANIM_ON);;
//   // After resetting slider values to zero



  // Reset previous values for relative calculation
  prev_base = 0;
  prev_shoulder = 0;
  prev_elbow = 0;
}





