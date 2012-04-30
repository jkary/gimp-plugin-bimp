#ifndef __GUI_FLIPROTATE_H__
#define __GUI_FLIPROTATE_H__

#include <gtk/gtk.h>
#include "../bimp-manipulations.h"

#define FLIPROTATE_WINDOW_W 300
#define FLIPROTATE_WINDOW_H 220

#define BUTTON_FLIP_W 90
#define BUTTON_FLIP_H 55

#define COMBO_ROTATE_W 100
#define COMBO_ROTATE_H 30

GtkWidget* bimp_fliprotate_gui_new(fliprotate_settings);
void bimp_fliprotate_save(fliprotate_settings);

#endif
