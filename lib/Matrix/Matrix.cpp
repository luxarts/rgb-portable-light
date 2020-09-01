#include "Matrix.h"

// Constructor
Matrix::Matrix(void){
    pinMode(MATRIX_PIN, OUTPUT);
    FastLED.addLeds<CHIPSET, MATRIX_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalSMD5050);
    FastLED.setBrightness(10);
}

// Methods
void Matrix::SetColor(uint8_t r, uint8_t g, uint8_t b){
    for(uint8_t i=0; i<NUM_LEDS; i++){
        leds[i] = CRGB(r, g, b);
    }
}