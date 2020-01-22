# Štvornohý robot
__Autori:__ Bc. Eva Štalmachová, Bc. Bálint Sallay, Bc. Alisher Sarsekeyev, Bc. Marek Trebuľa,
## Zadanie

Cieľom projektu je zostrojiť a naprogramovať [štvornohého robota](https://www.youtube.com/watch?v=btEk4j-RCMY), ktorého budeme riadiť pomocou mobilnej aplikácie.
Robot bude mať viacero módov. Bude vedieť chodiť dopredu, dozadu, otočiť sa doprava a doľava atď. Módy budeme môcť
meniť pomocou mobilnej android aplikácie cez Bluetooth, pomocou protokolu UART. Na konštrukciu robota použijeme 3D
tlačiareň. Nohy robota a držiaky na servo pohony vytlačíme podľa predlohy \cite{Predloha}. Servo pohony budeme riadiť
pulzno-šírkovou moduláciu (PWM).

## Potrebné komponenty
* Mikropočítač STM32F303K8T6
* 8 micro servo pohonov

![ Micro servo MG90S ](https://github.com/markotre/CheetahRobot/blob/develop/Documentation/Pictures/servo.jpg "Micro servo MG90S")

* HC-06 bluetooth module
* Napájacie batérie
* Vytlačené časti konštrukcie robota
## Bloková schéma zapojenia
![Blokova schema zapojenia ](https://github.com/markotre/CheetahRobot/blob/develop/Documentation/Pictures/Block_diagram.png "Blokova schema zapojenia")

## Ciele projektu
* Zostrojiť robota podľa predlohy

![Predloha robota](https://github.com/markotre/CheetahRobot/blob/develop/Documentation/Pictures/robot.jpg"Predloha robota")

* Vytvoriť mobilnú aplikáciu na ovládanie robota
## Literatúra
https://www.instructables.com/id/Baby-MIT-Cheetah-Robot/
https://www.towerpro.com.tw/product/mg90s-3/
