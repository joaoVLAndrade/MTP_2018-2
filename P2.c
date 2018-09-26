/* P2.c */
/* Joao Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>

int main()
{
	int opc, cont = 0,soma = 0, estado = 0,base = 2, exp = 0, potencia = 1, tam = 0, cont2=0, hex, decbi, oct, dec;
	char num[256];
	printf("1 - Binario --> Decimal\n2 - Binario --> Hexadecimal\n3 - Hexadecimal --> Decimal\n4 - Hexadecimal --> Binario\n5 - Decimal --> Binario\n6 - Decimal --> Hexadecimal\n7 - Octal --> Decimal\n8 - Decimal --> Octal\n_________________________________________________");
	printf("\n\nDigite a opcao desejada: ");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1:
			printf("Binario --> Decimal\n");
			scanf("%s", num);
			for(cont = 0; num[cont] != '\0'; cont++,tam++){
			}
			for(cont = tam - 1;cont > 0; cont--,cont2++)
			{
				potencia = 1;
				for(exp = 0; exp < cont2; exp++)
				potencia = potencia * base;
				if(num[cont] == '0')
				estado = 0;
				else
				estado = 1;
				soma = soma + estado * potencia;
			}
			printf("%d", soma);
			break;
		case 2:
			printf("Binario --> Hexadecimal\n");
			scanf("%s", num);
			for(cont = 0; num[cont] != '\0'; cont++,tam++){
			}
			for(cont = tam - 1;cont > 0; cont--,cont2++)
			{
				potencia = 1;
				for(exp = 0; exp < cont2; exp++)
				potencia = potencia * base;
				if(num[cont] == '0')
				estado = 0;
				else
				estado = 1;
				soma = soma + estado * potencia;
			}
			printf("%X", soma);
			break;
		case 3:	
			printf("Hexadecimal --> Decimal\n");
			scanf("%X", &hex);
			printf("%d", hex);
			break;
		case 4:
			printf("Hexadecimal --> Binario\n");
			scanf("%X", &hex);
			itoa(hex,num,2);
			printf("%s", num);			
			break;		
		case 5:
			printf("Decimal --> Binario\n");
			scanf("%d", &dec);
			itoa(dec,num,2);
			printf("%s", num);
			break;
		case 6:
			printf("Decimal --> Hexadecimal\n");
			scanf("%d", &dec);
			itoa(dec,num,16);
			printf("%s", num);
			break;
		case 7:
			printf("Octal --> Decimal\n");
			scanf("%o", &oct);
			printf("%d", oct);
			break;
		case 8:
			printf("8 - Decimal --> Octal\n");
			scanf("%d", &dec);
			printf("%o", dec);
	}
	return 0;
}
