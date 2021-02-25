/*
 * Led.c
 *
 * Created: 2021-02-24 오후 10:10:50
 * Author : ksq11
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
   DDRA = 0xff;
   while(1)
   {
		PORTA = 0xff;   
   }
   
   return 0;
}

