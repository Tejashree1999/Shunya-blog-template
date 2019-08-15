//Light intensity
#include<stdio.h>
#include<stdlib.h>
#include<shunyaInterfaces.h>
#include<pcf8591.h>

int main()
{

	shunyaInterfacesSetup();
	pcf8591Setup();
	while(1)
	{
		int value;
		value = pcf8591Read(A1);
		printf("X pin : %d",value);
	}
	return 0;
}