// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

// /////////
// User remixes / tweaks -- these take precidence above all else
#ifdef ARTSEY_REMIX
#include "remixes/remix_layers.h"
#endif

// //////////
// Shared custom defines (combo definitions need these too)
#include "shared_defines.h"

#ifndef ARTSEY_STD_LAYER_BASE_LEFT
#define ARTSEY_STD_LAYER_BASE_LEFT \
LT(LAYER_ID_NUMBERS, KC_S),    KC_T,             KC_R,             LT(LAYER_ID_PARENTHETICALS, KC_A),    \
LT(LAYER_ID_CUSTOM, KC_O),     KC_I,             KC_Y,             LT(LAYER_ID_SYMBOLS, KC_E)
#endif

#ifndef ARTSEY_STD_LAYER_PAR_LEFT
#define ARTSEY_STD_LAYER_PAR_LEFT                                       \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO
#endif

#ifndef ARTSEY_STD_LAYER_NUM_LEFT
#define ARTSEY_STD_LAYER_NUM_LEFT \
KC_TRNS,          KC_3,             KC_2,             KC_1,             \
KC_NO,            KC_6,             KC_5,             KC_4
#endif

#ifndef ARTSEY_STD_LAYER_NAV_LEFT
#define ARTSEY_STD_LAYER_NAV_LEFT \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_RIGHT
#endif

#ifndef ARTSEY_STD_LAYER_SYM_LEFT
#define ARTSEY_STD_LAYER_SYM_LEFT \
KC_GRV,           KC_SCLN,          KC_BSLS,          KC_EXLM,          \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS
#endif

#ifndef ARTSEY_STD_LAYER_CUS_LEFT
#define ARTSEY_STD_LAYER_CUS_LEFT \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT
#endif

#ifndef ARTSEY_STD_LAYER_MSE_LEFT
#define ARTSEY_STD_LAYER_MSE_LEFT \
KC_WH_U,          KC_BTN2,          KC_MS_U,          KC_BTN1,          \
KC_WH_D,          KC_MS_L,          KC_MS_D,          KC_MS_R
#endif

#ifndef ARTSEY_STD_LAYER_BASE_RIGHT
#define ARTSEY_STD_LAYER_BASE_RIGHT \
LT(LAYER_ID_PARENTHETICALS, KC_A),    KC_R,             KC_T,             LT(LAYER_ID_NUMBERS, KC_S),    \
LT(LAYER_ID_SYMBOLS, KC_E),           KC_Y,             KC_I,             LT(LAYER_ID_CUSTOM, KC_O)
#endif

#ifndef ARTSEY_STD_LAYER_PAR_RIGHT
#define ARTSEY_STD_LAYER_PAR_RIGHT \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR
#endif

#ifndef ARTSEY_STD_LAYER_NUM_RIGHT
#define ARTSEY_STD_LAYER_NUM_RIGHT \
KC_1,             KC_2,             KC_3,             KC_TRNS,          \
KC_4,             KC_5,             KC_6,             KC_NO
#endif

#ifndef ARTSEY_STD_LAYER_NAV_RIGHT
#define ARTSEY_STD_LAYER_NAV_RIGHT \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          \
KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_PGDN
#endif

#ifndef ARTSEY_STD_LAYER_SYM_RIGHT
#define ARTSEY_STD_LAYER_SYM_RIGHT \
KC_EXLM,          KC_BSLS,          KC_SCLN,          KC_GRV,           \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL
#endif

#ifndef ARTSEY_STD_LAYER_CUS_RIGHT
#define ARTSEY_STD_LAYER_CUS_RIGHT \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS
#endif

#ifndef ARTSEY_STD_LAYER_MSE_RIGHT
#define ARTSEY_STD_LAYER_MSE_RIGHT \
KC_BTN1,          KC_MS_U,          KC_BTN2,          KC_WH_U,          \
KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_WH_D
#endif

#ifndef ARTSEY_BIG_LAYER_BASE_LEFT
#ifdef ARTSEY_SIZE_40P
#define ARTSEY_MINUS TD(TD_40P)
#else
#define ARTSEY_MINUS KC_MINS
#endif

#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BASE_LEFT_THUMBS MO(LAYER_ID_BIG_SYM), KC_SPC
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BASE_LEFT_THUMBS MO(LAYER_ID_BIG_SYM), KC_SPC, KC_ENT
#endif
#define ARTSEY_BIG_LAYER_BASE_LEFT \
BIG_LEADING_NONES \
LT(LAYER_ID_NUMBERS, KC_S),             KC_T,             KC_R,             LT(LAYER_ID_PARENTHETICALS, KC_A),      ARTSEY_MINUS,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
LT(LAYER_ID_CUSTOM, KC_O),              KC_I,             KC_Y,             LT(LAYER_ID_SYMBOLS, KC_E),             OSM_SHIFT,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
LALT_T(OSM_CTRL),                        KC_AT,            KC_DEL,           KC_EQL,                                 KC_TAB,           \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BASE_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_NAV_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NAV_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NAV_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_NAV_LEFT \
BIG_LEADING_NONES \
KC_PGUP,          KC_HOME,          KC_UP,            KC_END,           KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_PGDN,          KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_NAV_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_NUM_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NUM_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NUM_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_NUM_LEFT \
BIG_LEADING_NONES \
KC_TRNS,          KC_3,             KC_2,             KC_1,             KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_6,             KC_5,             KC_4,             KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_NUM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_SYM_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_SYM_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_SYM_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_SYM_LEFT \
BIG_LEADING_NONES \
KC_GRV,           KC_SCLN,          KC_BSLS,          KC_EXLM,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_EQL,           KC_MINS,          KC_QUES,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_SYM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_PAR_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_PAR_LEFT_LEFT KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_PAR_LEFT_LEFT KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_PAR_LEFT \
BIG_LEADING_NONES \
KC_RCBR,          KC_LPRN,          KC_RPRN,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LCBR,          KC_LBRC,          KC_RBRC,          KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_PAR_LEFT_LEFT \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_CUS_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_CUS_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_CUS_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_CUS_LEFT \
BIG_LEADING_NONES \
KC_NO,            KC_VOLU,          KC_INS,           KC_MUTE,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_VOLD,          KC_PSCR,          KC_RSFT,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_CUS_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_MSE_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_MSE_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_MSE_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_MSE_LEFT \
BIG_LEADING_NONES \
KC_WH_U,          KC_BTN2,          KC_MS_U,          KC_BTN1,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_WH_D,          KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_MSE_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_BIG_SYM_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_SYM_LEFT_THUMBS KC_TRNS, KC_SCLN
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_SYM_LEFT_THUMBS KC_TRNS, KC_SCLN, KC_NO
#endif

#define ARTSEY_BIG_LAYER_BIG_SYM_LEFT \
BIG_LEADING_NONES \
KC_CIRC,          KC_LCBR,          KC_RCBR,          KC_HASH,          KC_GRV,           \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_AMPR,          KC_LPRN,          KC_RPRN,          KC_DLR,           KC_BSLS,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_ASTR,          KC_LBRC,          KC_RBRC,          KC_PERC,          KC_PIPE,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BIG_SYM_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_BIG_FUN_LEFT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_FUN_LEFT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_FUN_LEFT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_BIG_FUN_LEFT \
BIG_LEADING_NONES \
KC_F4,            KC_F3,            KC_F2,            KC_F1,            KC_NO,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_F8,            KC_F7,            KC_F6,            KC_F5,            FUN_1,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_F12,           KC_F11,           KC_F10,           KC_F9,            FUN_2,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BIG_FUN_LEFT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_BASE_RIGHT
#ifdef ARTSEY_SIZE_40P
#define ARTSEY_MINUS TD(TD_40P)
#else
#define ARTSEY_MINUS KC_MINS
#endif

#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BASE_RIGHT_THUMBS KC_SPC, MO(LAYER_ID_BIG_SYM)
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BASE_RIGHT_THUMBS KC_ENT, KC_SPC, MO(LAYER_ID_BIG_SYM)
#endif

#define ARTSEY_BIG_LAYER_BASE_RIGHT \
BIG_LEADING_NONES \
ARTSEY_MINUS,     LT(LAYER_ID_PARENTHETICALS, KC_A),             KC_R,             KC_T,             LT(LAYER_ID_NUMBERS, KC_S),             \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
OSM_SHIFT,          LT(LAYER_ID_SYMBOLS, KC_E),                    KC_Y,             KC_I,             LT(LAYER_ID_CUSTOM, KC_O),              \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_TAB,           KC_EQL,                    KC_DEL,           KC_AT,            OSM_CTRL,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BASE_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_NAV_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NAV_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NAV_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_NAV_RIGHT \
BIG_LEADING_NONES \
KC_HOME,          KC_UP,            KC_END,           KC_PGUP,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_PGDN,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_NAV_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_NUM_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NUM_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_NUM_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif
#define ARTSEY_BIG_LAYER_NUM_RIGHT \
BIG_LEADING_NONES \
KC_1,             KC_2,             KC_3,             KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_4,             KC_5,             KC_6,             KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_NUM_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_SYM_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_SYM_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_SYM_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_SYM_RIGHT \
BIG_LEADING_NONES \
KC_EXLM,          KC_BSLS,          KC_SCLN,          KC_GRV,           KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_QUES,          KC_MINS,          KC_EQL,           KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_SYM_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_PAR_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_PAR_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_PAR_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_PAR_RIGHT \
BIG_LEADING_NONES \
KC_TRNS,          KC_LPRN,          KC_RPRN,          KC_LCBR,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_NO,            KC_LBRC,          KC_RBRC,          KC_RCBR,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_PAR_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_CUS_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_CUS_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_CUS_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_CUS_RIGHT \
BIG_LEADING_NONES \
KC_MUTE,          KC_INS,           KC_VOLU,          KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_RSFT,          KC_PSCR,          KC_VOLD,          KC_TRNS,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_CUS_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_MSE_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_MSE_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_MSE_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_MSE_RIGHT \
BIG_LEADING_NONES \
KC_BTN1,          KC_MS_U,          KC_BTN2,          KC_WH_U,          KC_NO,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_MS_L,          KC_MS_D,          KC_MS_R,          KC_WH_D,          KC_NO,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,            \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_MSE_RIGHT_THUMBS  \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_BIG_SYM_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_SYM_RIGHT_THUMBS KC_SCLN, KC_TRNS
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_SYM_RIGHT_THUMBS KC_NO, KC_SCLN, KC_TRNS
#endif

#define ARTSEY_BIG_LAYER_BIG_SYM_RIGHT \
BIG_LEADING_NONES \
KC_GRV,           KC_HASH,          KC_LCBR,          KC_RCBR,          KC_CIRC,          \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_BSLS,          KC_DLR,           KC_LPRN,          KC_RPRN,          KC_AMPR,          \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_PIPE,          KC_PERC,          KC_LBRC,          KC_RBRC,          KC_ASTR,          \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BIG_SYM_RIGHT_THUMBS \
BIG_TRAILING_NONES
#endif

#ifndef ARTSEY_BIG_LAYER_BIG_FUN_RIGHT
#ifdef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_FUN_RIGHT_THUMBS KC_NO, KC_NO
#endif
#ifndef ARTSEY_TWO_THUMB
#define ARTSEY_BIG_LAYER_BIG_FUN_RIGHT_THUMBS KC_NO, KC_NO, KC_NO
#endif

#define ARTSEY_BIG_LAYER_BIG_FUN_RIGHT \
BIG_LEADING_NONES \
KC_TRNS,          KC_F1,            KC_F2,            KC_F3,            KC_F4,            \
BIG_BETWEEN_ROW_ONE_TWO_NONES \
KC_TRNS,          KC_F5,            KC_F6,            KC_F7,            KC_F8,            \
BIG_BETWEEN_ROW_TWO_THREE_NONES \
KC_NO,            KC_F9,            KC_F10,           KC_F11,           KC_F12,           \
BIG_BETWEEN_ROW_THREE_THUMBS_NONES \
ARTSEY_BIG_LAYER_BIG_FUN_RIGHT_THUMBS     \
BIG_TRAILING_NONES
#endif

#ifdef ARTSEY_SIZE_40P // 40% artsey (off by default)
// Main 40% ANSI layer setup
// Uses shared defines
#ifndef ARTSEY_40P_LAYER_ANSI
#define ARTSEY_40P_LAYER_ANSI \
F0P_LEADING_NONES \
LEFT_ANSI_SIX_ONE LEFT_NUMBERS, KC_W, KC_E, LEFT_PARENTHETICALS, TD(TD_ARTSEY_LEFT),    F0P_ROW_ONE_MID_NONES     TD(TD_ARTSEY_RIGHT), RIGHT_PARENTHETICALS, KC_I, KC_O, RIGHT_NUMBERS, RIGHT_ANSI_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_ANSI_SIX_TWO LEFT_CUSTOM, KC_S, KC_D, LEFT_SYMBOLS, KC_G,    F0P_ROW_TWO_MID_NONES    KC_H, RIGHT_SYMBOLS, KC_K, KC_L, RIGHT_CUSTOM, RIGHT_ANSI_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_ANSI_SIX_THREE KC_Z, KC_X, KC_C,  KC_V, KC_B,    F0P_ROW_THREE_MID_NONES    KC_N, KC_M, KC_COMMA, KC_DOT, TD(TD_SLSH_BK_FW), RIGHT_ANSI_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_ANSI \
F0P_TRAILING_NONES
#endif

#ifndef ARTSEY_40P_LAYER_FUNCTION
// FUNCTION Five column support
#ifdef ARTSEY_FIVE_COLUMN
#define LEFT_FUNCTION_SIX_ONE
#define LEFT_FUNCTION_SIX_TWO
#define LEFT_FUNCTION_SIX_THREE
#define RIGHT_FUNCTION_SIX_ONE
#define RIGHT_FUNCTION_SIX_TWO
#define RIGHT_FUNCTION_SIX_THREE
#else
#define LEFT_FUNCTION_SIX_ONE KC_GRAVE,
#define LEFT_FUNCTION_SIX_TWO KC_TRNS,
#define LEFT_FUNCTION_SIX_THREE KC_TRNS,
#define RIGHT_FUNCTION_SIX_ONE KC_DEL,
#define RIGHT_FUNCTION_SIX_TWO KC_INSERT,
#define RIGHT_FUNCTION_SIX_THREE KC_PSCR,
#endif

// Function Thumb row (handedness changes layout)
#ifdef ARTSEY_TWO_THUMB
#define BOTTOM_ROW_40P_FUN KC_LALT, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_LALT
#else
#define BOTTOM_ROW_40P_FUN KC_LALT, KC_TRNS, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_TRNS, KC_LALT
#endif

#define ARTSEY_40P_LAYER_FUNCTION \
F0P_LEADING_NONES \
LEFT_FUNCTION_SIX_ONE KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,    F0P_ROW_ONE_MID_NONES    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RIGHT_FUNCTION_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_FUNCTION_SIX_TWO KC_1, KC_2, KC_3, KC_4, KC_5,    F0P_ROW_TWO_MID_NONES    KC_6, KC_7, KC_8, KC_9, KC_0, RIGHT_FUNCTION_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_FUNCTION_SIX_THREE KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,    F0P_ROW_THREE_MID_NONES    KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RIGHT_FUNCTION_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_FUN \
F0P_TRAILING_NONES
#endif

#ifndef ARTSEY_40P_LAYER_NAVIGATION
// Navigation Five column support
#ifdef ARTSEY_FIVE_COLUMN
#define LEFT_NAV_SIX_ONE
#define LEFT_NAV_SIX_TWO
#define LEFT_NAV_SIX_THREE
#define RIGHT_NAV_SIX_ONE
#define RIGHT_NAV_SIX_TWO
#define RIGHT_NAV_SIX_THREE
#else
#define LEFT_NAV_SIX_ONE KC_TRNS,
#define LEFT_NAV_SIX_TWO KC_TAB,
#define LEFT_NAV_SIX_THREE KC_LCTRL,
#define RIGHT_NAV_SIX_ONE KC_DEL,
#define RIGHT_NAV_SIX_TWO KC_TRNS,
#define RIGHT_NAV_SIX_THREE KC_RSFT,

#endif

// Navigation Thumb row (handedness changes layout)
#ifdef ARTSEY_TWO_THUMB
#define BOTTOM_ROW_40P_NAV KC_LGUI, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_LGUI
#else
#define BOTTOM_ROW_40P_NAV KC_LGUI, KC_TRNS, KC_TRNS,    F0P_THUMB_MID_NONES    KC_TRNS, KC_TRNS, KC_LGUI
#endif

#define ARTSEY_40P_LAYER_NAVIGATION \
F0P_LEADING_NONES \
LEFT_NAV_SIX_ONE KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS,    F0P_ROW_ONE_MID_NONES    KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, RIGHT_NAV_SIX_ONE \
F0P_BETWEEN_ROW_ONE_TWO_NONES \
LEFT_NAV_SIX_TWO KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS,    F0P_ROW_TWO_MID_NONES    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, RIGHT_NAV_SIX_TWO \
F0P_BETWEEN_ROW_TWO_THREE_NONES \
LEFT_NAV_SIX_THREE KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    F0P_ROW_THREE_MID_NONES    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RIGHT_NAV_SIX_THREE \
F0P_BETWEEN_ROW_THREE_THUMBS_NONES \
BOTTOM_ROW_40P_NAV \
F0P_TRAILING_NONES
#endif


#endif // 40% artsey ifdef
