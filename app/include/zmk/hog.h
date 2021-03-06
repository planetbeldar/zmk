
#pragma once

#include <zmk/keys.h>
#include <zmk/hid.h>

int zmk_hog_init();

int zmk_hog_send_keypad_report(struct zmk_hid_keypad_report_body *body);
int zmk_hog_send_consumer_report(struct zmk_hid_consumer_report_body *body);
