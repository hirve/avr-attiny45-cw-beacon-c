PORT=/dev/ttyUSB0
MCU=attiny45
CFLAGS=-g -Wall -mcall-prologues -mmcu=$(MCU) -Os
LDFLAGS=-Wl,-gc-sections -Wl,-relax
CC=avr-gcc
TARGET=main
OBJECT_FILES=main.o


all: $(TARGET).hex

clean:
	rm -f *.o *.hex *.obj *.hex

%.hex: %.obj
	avr-objcopy -R .eeprom -O ihex $< $@

%.obj: $(OBJECT_FILES)
	$(CC) $(CFLAGS) $(OBJECT_FILES) $(LDFLAGS) -o $@

flash: $(TARGET).hex
	avrdude -p $(MCU) -c avrispmkII -P $(PORT) -U flash:w:$(TARGET).hex

erase: $(TARGET).hex
	avrdude -p $(MCU) -c avrispmkII -P $(PORT) -e

