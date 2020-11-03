#include <stdio.h>

void abc(int *p){
printf("%d\n",*(p+2));
}

int main(int argc, char const *argv[])
{
	int arr[4][4];
	

	for (int i = 0; i < 4; ++i)
	{
		/* code */
		arr[i][i]=i*10;
	}
	abc(arr);

	
	return 0;
}