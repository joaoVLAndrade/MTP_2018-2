/* P1.c */
/* João_Victor_Luiz_De_Andrade */
/* 11811EAU003 */

#include <stdio.h>

int main(){
	int estado = 0, cont;
	char bits[256];
	printf("Insira o numero desejado(Binario): ");
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
		printf("O numero digitado e multiplo de tres");
	else
		printf("O numero digitado nao e multiplo de tres");
	getch();
	return 0;
}
