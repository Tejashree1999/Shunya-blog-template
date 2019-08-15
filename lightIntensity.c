#include<stdio.h>
#include<stdlib.h>
#include<Wire.h>
#include<shunyaInterfaces.h>
#include<bh1750.h>
int main()
{
	int luxmeter = bh1750Read();
	printf("Light Intensity :%d lux...",luxmeter);  
	return 0;
}