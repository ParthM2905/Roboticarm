SET(SOURCES ui_comp_switch2.c
    ui_comp.c
    ui_ScreenPower.c
    ui_ScreenArm.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c)

add_library(ui ${SOURCES})
