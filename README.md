:warning: I was walking down the street when a rocket landed next to me. Some time ago it was simply unbelievable, now the destruction of my city and the killing of civilians is my reality. The organized criminal group has occupied Russia and now is destroying my peaceful city. 

<a title="Mvs.gov.ua, CC BY 4.0 &lt;https://creativecommons.org/licenses/by/4.0&gt;, via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:Kharkiv_downtown_street_destroyed_by_Russian_bombardment.jpg"><img width="99%" alt="Kharkiv downtown street destroyed by Russian bombardment" src="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f1/Kharkiv_downtown_street_destroyed_by_Russian_bombardment.jpg/1280px-Kharkiv_downtown_street_destroyed_by_Russian_bombardment.jpg"></a>

<a title="Mvs.gov.ua, CC BY 4.0 &lt;https://creativecommons.org/licenses/by/4.0&gt;, via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:Bomb_attack_on_Saltivske_tram_depot_in_Kharkiv.jpg"><img width="99%" alt="Bomb attack on Saltivske tram depot in Kharkiv" src="https://upload.wikimedia.org/wikipedia/commons/c/cf/Bomb_attack_on_Saltivske_tram_depot_in_Kharkiv.jpg"></a>

<a title="Main Directorate of the State Emergency Service of Ukraine in Kharkiv Oblast, CC BY 4.0 &lt;https://creativecommons.org/licenses/by/4.0&gt;, via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:Kharkiv_after_Russian_shelling,_31_March_2022_(14).jpg"><img width="99%" alt="Kharkiv after Russian shelling, 31 March 2022 (14)" src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/85/Kharkiv_after_Russian_shelling%2C_31_March_2022_%2814%29.jpg/1280px-Kharkiv_after_Russian_shelling%2C_31_March_2022_%2814%29.jpg"></a>

<a title="Photo: Kharkivian (Serhii Petrov). From Wikimedia Commons. License CC BY-SA 4.0.Фото: Kharkivian (Сергій Петров). З Wikimedia Commons. Ліцензія CC BY-SA 4.0" href="https://commons.wikimedia.org/wiki/File:Destroyed_apartment_building_3_Kholodnohirska_Street,_Kharkiv_after_Russian_airstrike_by_Kharkivian_(03.2022)_01.jpg"><img width="99%" alt="Destroyed apartment building 3 Kholodnohirska Street, Kharkiv after Russian airstrike by Kharkivian (03.2022) 01" src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/a1/Destroyed_apartment_building_3_Kholodnohirska_Street%2C_Kharkiv_after_Russian_airstrike_by_Kharkivian_%2803.2022%29_01.jpg/1280px-Destroyed_apartment_building_3_Kholodnohirska_Street%2C_Kharkiv_after_Russian_airstrike_by_Kharkivian_%2803.2022%29_01.jpg"></a>

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
