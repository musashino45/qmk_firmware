// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
		//matrix size is [12][7]. (left: [5][7], right: [7][7]. Because of adjusting the key codes, to insert a blank line between the left and right.)
		//left
		//
        KC_ESCAPE,      KC_1,   	  KC_2,  		 KC_3,          KC_4,   		KC_5,
        KC_TAB,         KC_Q,   	  KC_W,  		 KC_E,          KC_R,   		KC_T,
        KC_LEFT_CTRL,   KC_A,   	  KC_S,  		 KC_D,          KC_F,   		KC_G,
        KC_LEFT_SHIFT,  KC_Z,   	  KC_X,  		 KC_C,          KC_V,   		KC_B,
                 	        		         		 KC_LEFT_ALT,   MO(1),	    KC_SPACE,
		
		//right
        							  	   		                    KC_BACKSLASH,   KC_GRAVE,         KC_BACKSPACE,
        KC_6,           KC_7,   	  KC_8,  		 KC_9,          KC_0,           KC_MINUS,         KC_EQUAL,
        KC_Y,           KC_U,   	  KC_I,  		 KC_O,          KC_P,           KC_LEFT_BRACKET,  KC_RIGHT_BRACKET,
        KC_H,           KC_J,   	  KC_K,  		 KC_L,          KC_SEMICOLON,   KC_QUOTE,         KC_ENTER,
        KC_N,           KC_M,   	  KC_COMMA,      KC_DOT,        KC_SLASH,       KC_RIGHT_SHIFT,   MO(1),
        KC_SPACE,       KC_RIGHT_GUI, KC_RIGHT_ALT
    ),

    [1] = LAYOUT(
		//left
        _______,        KC_F1,  	  		KC_F2,  		  KC_F3,         KC_F4,   		  KC_F5,
        KC_CAPS_LOCK,   _______,   	  		_______,  		  _______,       _______,   	  _______,
        _______,  	    KC_KB_VOLUME_DOWN,  KC_KB_VOLUME_UP,  KC_KB_MUTE,    KC_MEDIA_EJECT,  _______,
        _______,  		_______,   	  		_______,  		  _______,       _______,   	  _______,
                 	        		         		 		  _______,       _______,  		  _______,

		//right
         							  	   		   	    	          	  KC_INSERT,      KC_DELETE,        _______,
        KC_F6,          KC_F7,  	    KC_F8,  		 KC_F9,       	  KC_F10,         KC_F11,           KC_F12,
        _______,        _______,   	KC_PRINT_SCREEN, KC_SCROLL_LOCK,  KC_PAUSE,       KC_UP,			_______,
        KC_KP_ASTERISK, KC_KP_SLASH,  KC_HOME,  	   	 KC_PAGE_UP,      KC_LEFT, 	      KC_RIGHT,         _______,
        KC_KP_PLUS,     KC_KP_MINUS,  KC_END,   	   	 KC_PAGE_DOWN,    KC_DOWN,        _______,   		_______,
        _______,        _______,  	_______
    )
};
