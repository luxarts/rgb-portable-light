#ifndef MATRIX_H
#define MATRIX_H

#include <Arduino.h>
#include <FastLED.h>

#define MATRIX_PIN 4
#define NUM_LEDS 64
#define COLOR_ORDER GRB
#define CHIPSET WS2812B

class Matrix{
    public:
        Matrix();
        void SetColor(uint8_t r, uint8_t g, uint8_t b);
    private:
        uint8_t ledPin;
        CRGB leds[NUM_LEDS];
};

#endif