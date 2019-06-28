#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)


void main (void)
   {
      setup_oscillator(OSC_16MHZ);
         
         int contadora=0b10000000;
         int contadorb=0b10000000;
         int contadord=0b10000000;
             
            set_tris_A(0x00);
            set_tris_B(0x00);
            set_tris_D(0x00);
            
            
      while(1)
      {
         output_A(contadora);
         delay_ms(100);
         output_A(0x00);
         
         contadora/=2;
            if(contadora==0)
            {
               contadora=0b10000000;
            }
            
            
         output_B(contadorb);
         delay_ms(300);
         output_B(0x00);
         
         contadorb/=2;
            if(contadorb==0)
            {
               contadorb=0b10000000;
            }
            
            
         output_D(contadord);
         delay_ms(500);
         output_D(0x00);
         
         contadord/=2;
            if(contadord==0)
            {
               contadord=0b10000000;
            }
      
      
      }
   }

