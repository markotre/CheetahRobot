# Štvornohý robot
__Autori:__ Bc. Eva Štalmachová, Bc. Bálint Sallay, Bc. Alisher Sarsekeyev, Bc. Marek Trebuľa,
 ## Zadanie

Cieľom projektu je zostrojiť a naprogramovať [štvornohého robota](https://www.youtube.com/watch?v=btEk4j-RCMY), ktorého budeme riadiť pomocou mobilnej aplikácie.
Robot bude mať viacero módov. Bude vedieť chodiť dopredu, dozadu, otočiť sa doprava a doľava atď. Módy budeme môcť
meniť pomocou mobilnej android aplikácie cez Bluetooth, pomocou protokolu UART. Na konštrukciu robota použijeme 3D
tlačiareň. Nohy robota a držiaky na servo pohony vytlačíme podľa predlohy \cite{Predloha}. Servo pohony budeme riadiť
pulzno-šírkovou moduláciu (PWM).

  ### 1. Ciele projektu
* __Zostrojiť robota podľa [predlohy](https://www.youtube.com/watch?v=btEk4j-RCMY)__
* __Vytvoriť mobilnú aplikáciu na ovládanie robota__

## Konštrukcia robota

### Podvozok robota

Podvozok robota pozostáva z držiakov na servo pohony vytlačené na 3D tlačiarni, ktoré sú upevnené na podvozku z plexiskla. Podvozok sme vyrezali laserom. Nohy nášho štvornohého robota boli vytlačené na 3D tlačiarni. Každá noha pozostáva zo 7 dielov  a je poháňaná 2 servo pohonmi.

### Prototypová doska

Na podvozku sa nachádza prototypová doska. Riadiacou jednotkou robota je kit STM32F303K8, ktorý je osadený v prototypovacej doske na konštrukcii robota. Spolu s kitom je na doske osadené uloženie pre Bluetooth modul HC-06. Ďalej sa na doske nachádzajú 2 konektory (5,5/2,1 mm) slúžiace na napájanie kitu STM32 (9V) a rovnaký konektor pre napájanie motorov (4-6V). Poslednou súčasťou dosku sú piny pre pripojenie servo motorov.

### Potrebné komponenty
* Mikropočítač STM32F303K8T6
* 8 micro servo pohonov
* HC-06 bluetooth module - Na komunikáciu sme použili bluetooth modul upevnený na prototypovacej doske. Modul je napajaný kontrolérom a komunikuje s ním pomocou protokolu UART. 
* Napájacie batérie - Robot má 2 rôzne zdroje napájania, ktoré sú upevnené pod podvozkom robota. Prvým zdrojom je 9V batéria, ktorá napája mikrokontrolér. Druhý zdroj sú štyri 1,2V batérie zapojené v sérií, ktoré poháňajú 8 servo pohonov.
* Vytlačené časti konštrukcie robota

## Záver

Podarilo sa nám zostrojiť robota podľa špecifikácie. Splnili sme všetky ciele zo špecifikácie. Využili sme periférie __UART, GPIO, TIMER__. Pomocou aplikácie dokážeme robota riadiť smerom vpred, vzad a otočiť sa do obidvoch strán. Robot nemá žiadnu spätnú väzbu zo servo pohonov, preto vplyvom nepresnoti servo motorov a zlého umiestnenia ťažiska nedokáže ísť rovno.



## Literatúra
https://www.instructables.com/id/Baby-MIT-Cheetah-Robot/

http://www.elektromys.eu/clanky/stm-nucleo/clanek
