#include<stdio.h>
#include<string.h>
int main()
{
	char number[20] ;
	int n;
	memset(number,0,20);
	fgets(number, 20, stdin);
	//test the fget can not judge the enter key
	for(n=0;n<20;n++)
	{
		printf("number[%d]= %c\n",n,number[n]);
	}
	return 0;
}
