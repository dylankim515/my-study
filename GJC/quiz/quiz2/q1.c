#include <stdio.h>

int main(){

	double TempC, TempF;
	TempF = 90.0;
	TempC = (TempF - 32) * (5.0/9.0);
	
	printf("Fahrenheit %lf = Celsius %lf\n",TempF,TempC);

	return 0;
}


