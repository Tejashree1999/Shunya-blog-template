#include<stdio.h>
#include<shunyaInterfaces.h>
int sensorpin = 40;
int val;
int main()
{
        shunyaInterfacesSetup();
        pinMode(sensorpin,INPUT);
        while(true)
        {
                val = digitalRead(sensorpin);
                if(val == HIGH)
                {
       printf("Detected ...");                       
                }
                else
                {
                printf("Not Detected ...");
                }
                delay(100);
        }
        
        return 0;
}
