//João Victor Luiz De Andrade
//11811EAU003
#include <stdio.h>
int main()
{
	int i, numc = 0;
	char num[256];
	scanf("%s", num);
	for(i = 0; num[i] != '\0';i++)
		if('0' <= num[i] && num[i] <= '9')
			numc = numc*10 + num[i] - '0';
	printf("%d", numc);
	return 0;
}
