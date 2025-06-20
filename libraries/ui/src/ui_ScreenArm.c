// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.2
// LVGL version: 8.3.11
// Project name: Roboticarm

#include "ui.h"

lv_obj_t * ui_ScreenArm;
lv_obj_t * ui_Base;
lv_obj_t * ui_Shoulder;
lv_obj_t * ui_Elbow;
lv_obj_t * ui_Wrist_Pitch;
lv_obj_t * ui_Wrist_Roll;
lv_obj_t * ui_Wrist_Yaw;
lv_obj_t * ui_Gripper;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label4;
lv_obj_t * ui_sliderBase;
lv_obj_t * ui_sliderWrist2;
lv_obj_t * ui_sliderShoulder;
lv_obj_t * ui_sliderElbow;
lv_obj_t * ui_sliderWrist1;
lv_obj_t * ui_sliderWrist3;
lv_obj_t * ui_sliderGripper;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label5;
lv_obj_t * ui_btnSend;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Resetbtn;
lv_obj_t * ui_Label3;
lv_obj_t * ui_labelBaseVal;
lv_obj_t * ui_labelShoulderVal;
lv_obj_t * ui_labelElbowVal;
lv_obj_t * ui_labelWristVerVal;
lv_obj_t * ui_labelWristRotVal;
lv_obj_t * ui_labelGripperVal;
lv_obj_t * ui_labelSpeedVal;

// event funtions
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_PRESSED) {
        _ui_state_modify(ui_sliderBase, LV_STATE_USER_1, _UI_MODIFY_STATE_ADD);
    }
}

void ui_event_sliderBase(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderBase_event_cb(e);
    }
}

void ui_event_sliderWrist2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderWristRot_event_cb(e);
    }
}

void ui_event_sliderShoulder(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderShoulder_event_cb(e);
    }
}

void ui_event_sliderElbow(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderElbow_event_cb(e);
    }
}

void ui_event_sliderWrist1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderWristVer_event_cb(e);
    }
}

void ui_event_sliderWrist3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderGripper_event_cb(e);
    }
}

void ui_event_sliderGripper(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_VALUE_CHANGED) {
        sliderSpeed_event_cb(e);
    }
}

void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenPower, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ScreenPower_screen_init);
    }
}

// build funtions

void ui_ScreenArm_screen_init(void)
{
    ui_ScreenArm = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenArm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenArm, lv_color_hex(0xF6F8D5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenArm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Base = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Base, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Base, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Base, -340);
    lv_obj_set_y(ui_Base, -200);
    lv_obj_set_align(ui_Base, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Base, "	Base");
    lv_obj_set_style_text_font(ui_Base, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Shoulder = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Shoulder, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Shoulder, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Shoulder, 27);
    lv_obj_set_y(ui_Shoulder, -380);
    lv_obj_set_align(ui_Shoulder, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_Shoulder, "Shoulder");
    lv_obj_set_style_text_font(ui_Shoulder, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Elbow = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Elbow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Elbow, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Elbow, -340);
    lv_obj_set_y(ui_Elbow, -100);
    lv_obj_set_align(ui_Elbow, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Elbow, "Elbow");
    lv_obj_set_style_text_font(ui_Elbow, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wrist_Pitch = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Wrist_Pitch, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wrist_Pitch, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wrist_Pitch, -340);
    lv_obj_set_y(ui_Wrist_Pitch, -50);
    lv_obj_set_align(ui_Wrist_Pitch, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wrist_Pitch, "Wrist Pitch");
    lv_obj_set_style_text_font(ui_Wrist_Pitch, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wrist_Roll = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Wrist_Roll, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wrist_Roll, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wrist_Roll, -340);
    lv_obj_set_y(ui_Wrist_Roll, 0);
    lv_obj_set_align(ui_Wrist_Roll, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wrist_Roll, "Wrist Roll");
    lv_obj_set_style_text_font(ui_Wrist_Roll, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Wrist_Yaw = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Wrist_Yaw, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Wrist_Yaw, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Wrist_Yaw, -340);
    lv_obj_set_y(ui_Wrist_Yaw, 50);
    lv_obj_set_align(ui_Wrist_Yaw, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Wrist_Yaw, "Wrist Yaw");
    lv_obj_set_style_text_font(ui_Wrist_Yaw, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Gripper = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_Gripper, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Gripper, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Gripper, -340);
    lv_obj_set_y(ui_Gripper, 100);
    lv_obj_set_align(ui_Gripper, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Gripper, "Gripper");
    lv_obj_set_style_text_font(ui_Gripper, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_ScreenArm);
    lv_obj_set_width(ui_Button2, 125);
    lv_obj_set_height(ui_Button2, 75);
    lv_obj_set_x(ui_Button2, -200);
    lv_obj_set_y(ui_Button2, 180);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_Button2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -2);
    lv_obj_set_y(ui_Label4, 1);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "HOME");

    ui_sliderBase = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderBase, 0, 15000);
    lv_slider_set_value(ui_sliderBase, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderBase) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderBase, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderBase, 600);
    lv_obj_set_height(ui_sliderBase, 25);
    lv_obj_set_x(ui_sliderBase, 30);
    lv_obj_set_y(ui_sliderBase, -200);
    lv_obj_set_align(ui_sliderBase, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_sliderBase, LV_STATE_USER_1);       /// States

    ui_sliderWrist2 = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderWrist2, 0, 2000);
    lv_slider_set_value(ui_sliderWrist2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderWrist2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderWrist2, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderWrist2, 600);
    lv_obj_set_height(ui_sliderWrist2, 25);
    lv_obj_set_x(ui_sliderWrist2, 30);
    lv_obj_set_y(ui_sliderWrist2, 0);
    lv_obj_set_align(ui_sliderWrist2, LV_ALIGN_CENTER);

    ui_sliderShoulder = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderShoulder, 0, 7700);
    lv_slider_set_value(ui_sliderShoulder, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderShoulder) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderShoulder, 0,
                                                                                                   LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderShoulder, 600);
    lv_obj_set_height(ui_sliderShoulder, 25);
    lv_obj_set_x(ui_sliderShoulder, 30);
    lv_obj_set_y(ui_sliderShoulder, -150);
    lv_obj_set_align(ui_sliderShoulder, LV_ALIGN_CENTER);

    ui_sliderElbow = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderElbow, 0, 8800);
    lv_slider_set_value(ui_sliderElbow, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderElbow) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderElbow, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderElbow, 600);
    lv_obj_set_height(ui_sliderElbow, 25);
    lv_obj_set_x(ui_sliderElbow, 30);
    lv_obj_set_y(ui_sliderElbow, -100);
    lv_obj_set_align(ui_sliderElbow, LV_ALIGN_CENTER);

    ui_sliderWrist1 = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderWrist1, 400, 2500);
    lv_slider_set_value(ui_sliderWrist1, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderWrist1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderWrist1, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderWrist1, 600);
    lv_obj_set_height(ui_sliderWrist1, 25);
    lv_obj_set_x(ui_sliderWrist1, 30);
    lv_obj_set_y(ui_sliderWrist1, -50);
    lv_obj_set_align(ui_sliderWrist1, LV_ALIGN_CENTER);

    ui_sliderWrist3 = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderWrist3, 150, 760);
    lv_slider_set_value(ui_sliderWrist3, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderWrist3) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderWrist3, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderWrist3, 600);
    lv_obj_set_height(ui_sliderWrist3, 25);
    lv_obj_set_x(ui_sliderWrist3, 30);
    lv_obj_set_y(ui_sliderWrist3, 50);
    lv_obj_set_align(ui_sliderWrist3, LV_ALIGN_CENTER);

    ui_sliderGripper = lv_slider_create(ui_ScreenArm);
    lv_slider_set_range(ui_sliderGripper, 0, 1000);
    lv_slider_set_value(ui_sliderGripper, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_sliderGripper) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_sliderGripper, 0,
                                                                                                  LV_ANIM_OFF);
    lv_obj_set_width(ui_sliderGripper, 600);
    lv_obj_set_height(ui_sliderGripper, 25);
    lv_obj_set_x(ui_sliderGripper, 30);
    lv_obj_set_y(ui_sliderGripper, 100);
    lv_obj_set_align(ui_sliderGripper, LV_ALIGN_CENTER);

    ui_Button3 = lv_btn_create(ui_ScreenArm);
    lv_obj_set_width(ui_Button3, 125);
    lv_obj_set_height(ui_Button3, 75);
    lv_obj_set_x(ui_Button3, 100);
    lv_obj_set_y(ui_Button3, 180);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xF50000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Button3, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "OFF");

    ui_btnSend = lv_btn_create(ui_ScreenArm);
    lv_obj_set_width(ui_btnSend, 125);
    lv_obj_set_height(ui_btnSend, 75);
    lv_obj_set_x(ui_btnSend, -50);
    lv_obj_set_y(ui_btnSend, 180);
    lv_obj_set_align(ui_btnSend, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSend, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSend, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnSend, lv_color_hex(0x00CA7A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnSend, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnSend, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_add_event_cb(ui_btnSend, handleNewButtonEvent, LV_EVENT_ALL, NULL);
    ui_Label1 = lv_label_create(ui_btnSend);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "SEND");

    ui_Resetbtn = lv_btn_create(ui_ScreenArm);
    lv_obj_set_width(ui_Resetbtn, 125);
    lv_obj_set_height(ui_Resetbtn, 75);
    lv_obj_set_x(ui_Resetbtn, 250);
    lv_obj_set_y(ui_Resetbtn, 179);
    lv_obj_set_align(ui_Resetbtn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Resetbtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Resetbtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Resetbtn, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Resetbtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Resetbtn, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_add_event_cb(ui_Resetbtn, resetAllSliders, LV_EVENT_ALL, NULL);

    ui_Label3 = lv_label_create(ui_Resetbtn);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "RESET");

    ui_labelBaseVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelBaseVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelBaseVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelBaseVal, 375);
    lv_obj_set_y(ui_labelBaseVal, -200);
    lv_obj_set_align(ui_labelBaseVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelBaseVal, "15000");
    lv_obj_set_style_text_color(ui_labelBaseVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelBaseVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelBaseVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelBaseVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelBaseVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelBaseVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelShoulderVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelShoulderVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelShoulderVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelShoulderVal, 375);
    lv_obj_set_y(ui_labelShoulderVal, -150);
    lv_obj_set_align(ui_labelShoulderVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelShoulderVal, "0");
    lv_obj_set_style_text_color(ui_labelShoulderVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelShoulderVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelShoulderVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelShoulderVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelShoulderVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelShoulderVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelElbowVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelElbowVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelElbowVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelElbowVal, 375);
    lv_obj_set_y(ui_labelElbowVal, -100);
    lv_obj_set_align(ui_labelElbowVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelElbowVal, "0");
    lv_obj_set_style_text_color(ui_labelElbowVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelElbowVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelElbowVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelElbowVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelElbowVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelElbowVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelWristVerVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelWristVerVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelWristVerVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelWristVerVal, 375);
    lv_obj_set_y(ui_labelWristVerVal, -50);
    lv_obj_set_align(ui_labelWristVerVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelWristVerVal, "0");
    lv_obj_set_style_text_color(ui_labelWristVerVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelWristVerVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelWristVerVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelWristVerVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelWristVerVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelWristVerVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelWristRotVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelWristRotVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelWristRotVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelWristRotVal, 375);
    lv_obj_set_y(ui_labelWristRotVal, 0);
    lv_obj_set_align(ui_labelWristRotVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelWristRotVal, "0");
    lv_obj_set_style_text_color(ui_labelWristRotVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelWristRotVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelWristRotVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelWristRotVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelWristRotVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelWristRotVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelGripperVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelGripperVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelGripperVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelGripperVal, 375);
    lv_obj_set_y(ui_labelGripperVal, 50);
    lv_obj_set_align(ui_labelGripperVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelGripperVal, "0");
    lv_obj_set_style_text_color(ui_labelGripperVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelGripperVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelGripperVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelGripperVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelGripperVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelGripperVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_labelSpeedVal = lv_label_create(ui_ScreenArm);
    lv_obj_set_width(ui_labelSpeedVal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_labelSpeedVal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_labelSpeedVal, 375);
    lv_obj_set_y(ui_labelSpeedVal, 100);
    lv_obj_set_align(ui_labelSpeedVal, LV_ALIGN_CENTER);
    lv_label_set_text(ui_labelSpeedVal, "0");
    lv_obj_set_style_text_color(ui_labelSpeedVal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelSpeedVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_labelSpeedVal, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_labelSpeedVal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_labelSpeedVal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_labelSpeedVal, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderBase, ui_event_sliderBase, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderWrist2, ui_event_sliderWrist2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderShoulder, ui_event_sliderShoulder, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderElbow, ui_event_sliderElbow, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderWrist1, ui_event_sliderWrist1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderWrist3, ui_event_sliderWrist3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_sliderGripper, ui_event_sliderGripper, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);

}

void ui_ScreenArm_screen_destroy(void)
{
    if(ui_ScreenArm) lv_obj_del(ui_ScreenArm);

    // NULL screen variables
    ui_ScreenArm = NULL;
    ui_Base = NULL;
    ui_Shoulder = NULL;
    ui_Elbow = NULL;
    ui_Wrist_Pitch = NULL;
    ui_Wrist_Roll = NULL;
    ui_Wrist_Yaw = NULL;
    ui_Gripper = NULL;
    ui_Button2 = NULL;
    ui_Label4 = NULL;
    ui_sliderBase = NULL;
    ui_sliderWrist2 = NULL;
    ui_sliderShoulder = NULL;
    ui_sliderElbow = NULL;
    ui_sliderWrist1 = NULL;
    ui_sliderWrist3 = NULL;
    ui_sliderGripper = NULL;
    ui_Button3 = NULL;
    ui_Label5 = NULL;
    ui_btnSend = NULL;
    ui_Label1 = NULL;
    ui_Resetbtn = NULL;
    ui_Label3 = NULL;
    ui_labelBaseVal = NULL;
    ui_labelShoulderVal = NULL;
    ui_labelElbowVal = NULL;
    ui_labelWristVerVal = NULL;
    ui_labelWristRotVal = NULL;
    ui_labelGripperVal = NULL;
    ui_labelSpeedVal = NULL;

}
