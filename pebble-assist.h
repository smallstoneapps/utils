/***
 * Pebble Assist
 * Copyright (C) 2013 Matthew Tole
 *
 * Version 0.1.0
 ***/

#pragma once

#ifndef MENU_CELL_BASIC_CELL_HEIGHT
#define MENU_CELL_BASIC_CELL_HEIGHT 44
#endif

#ifndef PEBBLE_HEIGHT
#define PEBBLE_HEIGHT 168
#endif

#ifndef PEBBLE_WIDTH
#define PEBBLE_WIDTH 144
#endif

#ifndef STATUS_HEIGHT
#define STATUS_HEIGHT 16
#endif

// Layer Helpers
#define layer_create_fullscreen(window) layer_create(layer_get_bounds(window_get_root_layer(window)));
#define layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), layer)
#define layer_destroy_safe(layer) if (layer != NULL) { layer_destroy(layer); }
#define layer_show(layer) layer_set_hidden(layer, false)
#define layer_hide(layer) layer_set_hidden(layer, true)

// Scroll Layer Helpers
#define scroll_layer_create_fullscreeen(window) scroll_layer_create(layer_get_bounds(window_get_root_layer(window)))
#define scroll_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), scroll_layer_get_layer(layer))
#define scroll_layer_destroy_safe(layer) if (layer != NULL) { scroll_layer_destroy(layer); }

// Text Layer Helpers
#define text_layer_create_fullscreen(window) text_layer_create(layer_get_bounds(window_get_root_layer(window)));
#define text_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), text_layer_get_layer(layer))
#define text_layer_set_system_font(layer, font) text_layer_set_font(layer, fonts_get_system_font(font))
#define text_layer_set_colours(layer, foreground, background) text_layer_set_text_color(layer, foreground); text_layer_set_background_color(layer, background)
#define text_layer_set_colors(layer, foreground, background) text_layer_set_text_color(layer, foreground); text_layer_set_background_color(layer, background)
#define text_layer_destroy_safe(layer) if (layer != NULL) { text_layer_destroy(layer); }

// Bitmap Layer Helpers
#define bitmap_layer_create_fullscreen(window) bitmap_layer_create(layer_get_bounds(window_get_root_layer(window)));
#define bitmap_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), bitmap_layer_get_layer(layer))
#define bitmap_layer_destroy_safe(layer) if (layer != NULL) { bitmap_layer_destroy(layer); }

// Inverter Layer Helpers
#define inverter_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), inverter_layer_get_layer(layer))
#define inverter_layer_create_fullscreen(layer, window) inverter_layer_create(layer_get_bounds(window_get_root_layer(window)))
#define inverter_layer_destroy_safe(layer) if (layer != NULL) { bitmap_layer_destroy(layer); }

// Menu Layer Helpers
#define menu_layer_create_fullscreen(window) menu_layer_create(layer_get_bounds(window_get_root_layer(window)))
#define menu_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), menu_layer_get_layer(layer))
#define menu_layer_destroy_safe(layer) if (layer != NULL) { menu_layer_destroy(layer); }

// Simple Menu Layer Helpers
#define simple_menu_layer_create_fullscreen(window, sections, num_sections, callback_context) simple_menu_layer_create(layer_get_bounds(window_get_root_layer(window)), sections, num_sections, callback_context)
#define simple_menu_layer_add_to_window(layer, window) layer_add_child(window_get_root_layer(window), simple_menu_layer_get_layer(layer))
#define simple_menu_layer_destroy_safe(layer) if (layer != NULL) { simple_menu_layer_destroy(layer); }

// Action Bar Layer Helpers
#define action_bar_layer_create_in_window(action_bar, window) action_bar = action_bar_layer_create(); action_bar_layer_add_to_window(action_bar, window)
#define action_bar_layer_destroy_safe(layer) if (layer != NULL) { action_bar_layer_destroy(layer); }
#define action_bar_layer_clear_icons(action_bar) action_bar_layer_clear_icon(action_bar, BUTTON_ID_SELECT); action_bar_layer_clear_icon(action_bar, BUTTON_ID_DOWN); action_bar_layer_clear_icon(action_bar, BUTTON_ID_UP)

// Window Helpers
#define window_destroy_safe(window) if (window != NULL) { window_destroy(window); }

// Number Window Helpers
#define number_window_destroy_safe(window) if (window != NULL ) { number_window_destroy(window); }

// App Timer Helpers
#define app_timer_cancel_safe(timer) if (timer != NULL) { app_timer_cancel(timer); timer = NULL; }

// Font Helpers
#define fonts_load_resource_font(resource) fonts_load_custom_font(resource_get_handle(resource))

// App Message Helpers
#define app_message_open_max() app_message_open(app_message_inbox_size_maximum(), app_message_outbox_size_maximum())
