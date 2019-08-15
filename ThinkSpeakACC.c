#include<stdio.h>
#include<stdlib.h>
#include<shunyaInterfaces.h>
#include<pcf8591.h>
#include<thingSpeak.h>

void main(){
        int x,y,z;
        shunyaInterfacesSetup();
        pcf8591Setup();
        thingSpeakSetWrite("INSERT-THINGSPEAK-API"); 
        while (1)
         {
                x = pcf8591Read(A1);
                y = pcf8591Read(A2);
                z = pcf8591Read(A3);

	thinkSpeakSetField(1,x);
	thinkSpeakSetField(2,y);
	thinkSpeakSetField(3,z);		
	thingSpeakWriteFields();
	delay(25000);
         
	//printf("X  : %d\n",x); 
                //delay(100);
                //printf("Y  : %d\n",y); 
                //delay(100);
                //printf("Z  : %d\n",z);

                
        }
	return 0;
}