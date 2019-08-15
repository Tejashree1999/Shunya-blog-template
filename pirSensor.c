#include<stdio.h>
#include<shunyaInterfaces.h>

#define inputpin 40

int main()
{
        int pir = 0 ;
        
        shunyaInterfacesSetup();
        pinMode(inputpin,INPUT);
        while(true)
        {
            
                if(digitalRead(inputpin))
                {
                        if(!pir)
                        {
                                printf("Motion Detected..!!!");
                                delay(1000);
                                pir = 1;
                        }
                    
                }
                else
                {
                        if(pir)
                        {
                                printf("Motion ended...!!!!\n");
                                delay(1000);
                                pir = 0;
                        }
                }
           
        }
        
        return 0;
}
