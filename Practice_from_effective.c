#include <stdio.h>
#include <stdlib.h>

/*just learning structure*/
typedef struct  abc
{
	int age;
	char name[10];
}abc;
 int ade(int *ac){
 	
 }
int main(int argc, char const *argv[])
{
	
	abc ab;
	ab.age=11; //assigning the values of struct
	char *p;
	int *in;
	
	/*use of pointer is similar to the other easy variable*/
	in = &ab.age;
	*in=13;


	for (int i = 0; i < 10; ++i)
	{
		/* code */
		ab.name[i]=i+10;
	}
	printf("%ld\n",sizeof(ab));
	printf("%d\n", ab.age);


	return EXIT_SUCCESS;
}