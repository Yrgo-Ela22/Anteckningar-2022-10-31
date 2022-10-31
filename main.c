/********************************************************************************
* main.c: Demonstration av datastruktur f�r enkel styrning av lysdioder.
********************************************************************************/
#include "led.h"

/********************************************************************************
* main: Ansluter en lysdiod till pin 8 / PORTB0. Denna lysdiod s�tts till att
*       blinka kontinuerligt var 100:e millisekund.
********************************************************************************/
int main(void)
{
   struct led l1;
   led_init(&l1, 8);
   
   while (1)
   {
      led_blink(&l1, 100);
   }

   return 0;
}

