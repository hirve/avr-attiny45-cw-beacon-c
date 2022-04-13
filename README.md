:warning: The organized criminal group has occupied Russia and now is destroying my peaceful city. I was walking down the street when a rocket landed next to me. Some time ago it was simply unbelievable, now the destruction of my city and the killing of civilians is my reality.

If you are a responsible citizen of Russia, you are personally guilty of this. Stop it. If you are an irresponsible resident of Russia, just ignore this message.

# The simple CW beacon controller
C version of attiny45 CW beacon.

## The video how it works
https://youtu.be/Up1wdF8RhrY

## Dependencies
```
sudo apt install avr-libc avrdude gcc-avr
```

## Compilling and programming
```
make flash
```

## Fuse bytes
The project has no ability to set fuse bytes. I use default ones for my attiny45. If it's different for your chip - you need to set fuses manually. Or even commit it to project :)

## Example
The possible PCB sample is in **beacon.l.svg**
Use https://veiseliha.com/ converter to get G-code to cut it. The tool diameter is 0.1 mm.
