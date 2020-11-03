#include <stdio.h>
/*	
	Write a program to print all input lines that are longer than 80
characters. 0
*/

int main(int argc, char const *argv[])
{
    /* code */


	//take input basic setup
	int length=0;
	char data[4];
	int a;
	while ((a = getchar()) != EOF){
		if (a == '\n'){
			if(length > 4){
				data[length] = a;
				goto BREAK;
			}
		} 
		//count the char in input
		if(a != '\n' & a != ' '){
			length++;
		}
		
		//if the input is greater than 80 print output
		//if \n encountered press new line

	}

	BREAK:
	for (int i = 0; i < sizeof data /sizeof data[0]; ++i)
	{
		/* code */
		printf("%c\n",data[i]);
	}
    return 0;
}
