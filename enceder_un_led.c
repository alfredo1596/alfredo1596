#include <18f4550.h>  
#fuses XT,NOWDT
#use delay(clock=4M)

#byte portb = 0xf81
#byte portc = 0xf82

#define Boton  PIN_C0
#define Led    PIN_B0

void main()
{
   set_tris_c(0x00); //Definir el pin RC0 como salida
   set_tris_b(0x01); //Definir el pin RB0 como entrada
   output_low(Led); //Inicializar el led apagado
   while(true)
   {
      if(input(Boton) == 1) //Boton pulsado
      {
         output_high(Led); //Enceder el led 
      }
      
      else
      {
         output_low(Led); // Apagar el led
      }
   
   }
}
