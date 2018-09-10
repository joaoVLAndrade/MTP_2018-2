/* P1.c */
/* Joao Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>
int main(){
	int estado = 0, cont;
	char bits[256];
	scanf("%s", bits);
	for(cont = 0; bits[cont] != '\0'; cont++){
		if(bits[cont] == '0'){
			if(estado == 0)
				estado = 0;
			else if(estado == 1)
				estado = 2;
			else
				estado = 1;
		}
		else{
			if(estado == 0)
				estado = 1;
			else if(estado == 1)
				estado = 0;
			else
				estado = 2;
		}
	}
	if(estado == 0)
		printf("\"%s\" e multiplo de tres", bits);
	else
		printf("\"%s\" nao e", bits);
	return 0;
}
