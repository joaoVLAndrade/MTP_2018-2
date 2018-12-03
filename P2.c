/* P2.c */
/* Joao Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>
int tamanho(char str[]){
  int i;
  for(i=0; str[i]; i++);
  return i;
}
int Para_Decimal(int base, char str[]){
   int i, dec=0, potencia=1, b;
   for(i=tamanho(str)-1; i>=0; i--){
      if(str[i]<='9') 
        b=str[i]-'0'; 
      else 
        b=str[i]-'A'+10;
     
     dec = dec + b*potencia;
     potencia = potencia*base;
   }
   return dec;
}
void removeZeros(char bits[]){
  int i=0, flag=0, j=0;
  for(;i<=20; i++){
    if(bits[i]!='0') 
    flag=1;
    if(flag==1){
      bits[j]=bits[i];
      j++;
    }
  }
  bits[j]=0;
}
void Decimal(int base, int dec, char str[]){
  int i;
  for(i=20; i>=0; i--){
    str[i]=dec%base+'0';
    dec/=base;
    if(str[i]>'9') 
    str[i]='A'-1+(str[i]-'9');
  }
  removeZeros(str);
}

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
			scanf("%s", num);
     		Decimal(2,Para_Decimal(16,num), num);
     		printf("\"%s\"\n", num);
     		break;
		case 5:
			printf("Decimal --> Binario\n");
			scanf("%i", &dec);
     		Decimal(2, dec, num);
    		printf("%s", num);
    		break;
		case 6:
			printf("Decimal --> Hexadecimal\n");
			scanf("%i", &dec);
  		    Decimal(16, dec, num);
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
