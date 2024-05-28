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
The project has no ability to set fuse bytes. I use default ones for my attiny45. If it's different for your chip - you need to set fuses manually.
