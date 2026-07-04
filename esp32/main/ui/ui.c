#include "ui.h"
#include "lvgl.h"

void ui_init(void)
{
    /* TODO: replace with your own LVGL UI code */

    lv_obj_t *label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Hello LVGL!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
}
