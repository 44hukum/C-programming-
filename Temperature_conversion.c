#include <stdio.h>
/*

The next program uses the formula 0 C - (519)(0 F-32) to print the Fahrenheit temperature 
and their centigrade or celsius equivalents
*/
#define LOWER 0 /*lower limit of the temprature*/
#define UPPER 300 /*upper limit of the temperature*/
#define STEP 20 /*step size*/

int main(int argc, char const *argv[])
{
	float fahr, celsius;
	fahr = LOWER;
	/**/
	printf("%s\t%s\n","Fahrenheit", "centigrade");
	while (fahr <= UPPER){
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f\t\t\t%6.1f\n",fahr,celsius);
		fahr = fahr + STEP;
	}
	return 0;
}