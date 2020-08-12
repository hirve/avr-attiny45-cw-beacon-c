// Controller ATtiny45
// FUSES: Clock at 8 MHz internal RC oscillator, Brown-out at 1.8V, CKDIV8 is ON
// Avrdude output: "avrdude: safemode: Fuses OK (E:FF, H:DE, L:62)"

#define F_CPU 1000000UL

#ifndef DOT_LENGTH_MS
#define DOT_LENGTH_MS 75
#endif

#ifndef MESSAGE
#define MESSAGE "QRPP BCN TEST    QRPP BCN TEST        "
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <avr/pgmspace.h>

const int first_letter_num = 32;
const unsigned char letters[61][8] PROGMEM = {
  " ",      //   32
  "",       // !
  "",       // "
  "",       // #
  "",       // $
  "",       // %
  "",       // &
  ".----.", // '
  "",       // ( 40
  "",       // )
  "",       // *
  "",       // +
  "--..--", // ,
  "",       // -
  ".-.-.-", // .
  "-..-.",  // /
  "-----",  // 0
  ".----",  // 1
  "..---",  // 2 50
  "...--",  // 3
  "....-",  // 4
  ".....",  // 5
  "-....",  // 6
  "--...",  // 7
  "---..",  // 8
  "----.",  // 9
  "",       // :
  "",       // ;
  "",       // < 60
  "",       // =
  "",       // >
  "..--..", // ?
  "",       // @
  ".-",     // A
  "-...",   // B
  "-.-.",   // C
  "-..",    // D
  ".",      // E
  "..-.",   // F 70
  "--.",    // G
  "....",   // H
  "..",     // I
  ".---",   // J
  "-.-",    // K
  ".-..",   // L
  "--",     // M
  "-.",     // N
  "---",    // O
  ".--.",   // P 80
  "--.-",   // Q
  ".-.",    // R
  "...",    // S
  "-",      // T
  "..-",    // U
  "...-",   // V
  ".--",    // W
  "-..-",   // X
  "-.--",   // Y
  "--.."    // Z 90
};

void dot (void) {
  PORTB = 0b00011000;
  _delay_ms(DOT_LENGTH_MS);
  PORTB = 0b00010000;
}

void dash (void) {
  PORTB = 0b00011000;
  _delay_ms(DOT_LENGTH_MS * 3);
  PORTB = 0b00010000;
}

void dot_space (void) {
  _delay_ms(DOT_LENGTH_MS);
}

void dash_minus_dot_space (void) {
  _delay_ms(DOT_LENGTH_MS * 2);
}

void word_minus_dot_space (void) {
  _delay_ms(DOT_LENGTH_MS * 6);
}

int main (void) {
  int i, j;
  DDRB = 0b00011000;
  PORTB = 0b00010000;
  char message[] = MESSAGE;
  while (1) {
    for (i = 0; message[i] != 0; i++) {
      for (j = 0; pgm_read_byte(&(letters[message[i] - first_letter_num][j])) != 0; j++) {
        if (pgm_read_byte(&(letters[message[i] - first_letter_num][j])) == '-') {
          dash();
        } else if (pgm_read_byte(&(letters[message[i] - first_letter_num][j])) == '.') {
          dot();
        } else if (pgm_read_byte(&(letters[message[i] - first_letter_num][j])) == ' ') {
          word_minus_dot_space();
        }
        dot_space();
      }
      dash_minus_dot_space();
    }
  }
}
