# Programátorská príručka

## Ovládanie
STM32 dostáva príkazy z BT modulu prostredníctvom UART komunikácie medzi modulom a STM32. Do BT modulu sa príkazy posielajú z mobilnej aplikácie, ktorá je vyrobená pre ovládanie tohto robota. 
Osem servo motorov vykonávajúcich chôdzu je riadených PWM signálmi, ktoré sú generované dvoma dvomi časovačmi (TIM2, TIM3). Vstupom do časovačov je hodinový signál s frekvenciou 8 MHz. Na výstupe potrebujeme 50Hz. To dosiahneme tak, že hodnotu PRSC (Prescaler) nastavíme na 7. To nám zabezpečí vzorkovanie s periódou 1 mikrosekunda. Potom uŽ len nastavíme hodnotu ARR (Auto Reaload Register) na 19 999. Teda výstupná frekvencia bude 50Hz. 
Natočenie serva sa riadi teda šírkou pulzu PWM signálu. Obyčajne sa šírka pulzu pohybuje na 1000 – 2000 mikrosekúnd, avšak po preskúšaní motorov sa ukazuje, že nami použité servá majú rozsah cca 600 – 2200 milisekúnd. 
Pri UARTe je dôležité spomenúť, že BaudRate je nastavený na hodnotu 9600.  

## Program
Po spustení STM32 a zapnutí napájania motorov sa robot do niekoľkých sekúnd postaví. Hlavní program v tomto momente nevykonáva žiadnu funkciu. Keď UART vygeneruje prerušenie po prijatí dát z BT modulu, sa v prerušení nastaví globálna premenná na základe, ktorej sa vo vetvení hlavnej funkcie volajú jednotlivé funkcie, ktoré ovládajú pohyb robota. Vždy po prijatí dát z UARTu sa v prerušení nastaví riadiaca premenná.

![Program](https://github.com/markotre/CheetahRobot/blob/develop/Documentation/Pictures/Program_diagram.PNG "Program")

## Mobilná aplikácia
Mobilnú aplikáciu sme vytvorili v prostredí __Android Studio__. Na komunikáciu s mikropočítačom cez bluetooth,sme použili voľne dostupnú knižnicu BluetoothSPPLibrary. Táto knižnica má implementované všetky potrebné metódy na vytvorenie komunikácia. Má vstavaný všetkých zoznam dostupných zariadení. 
Pri zapnutí aplikácie sa vytvorí BluetoothSPP. V prípade, že používateľ nie je pripojený na robota a klikne na niektoré z tlačtok zobrazí sa upozornenie, že nie je pripojený na žiadne zariadenie. Ak je používateľ pripojený na robota a klikne na niektoré z tlačítiek v aplikácií, pomocou bluetooth sa odošle znak (napr. A). Každý povel má svoj vlastný znak. 

