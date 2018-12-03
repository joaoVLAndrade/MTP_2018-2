/* P5.c */
/* João Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>
typedef
	unsigned long long int
Bytes8;
typedef
	struct LCG { Bytes8 a, c, m, rand_max, atual; }
LCG;

void semente(LCG * r, Bytes8 seed) {
	r->a = 0x5DEECE66DULL;
	r->c = 11ULL;
	r->m = (1ULL << 48);
	r->rand_max = r->m - 1;
	r->atual = seed;
}
Bytes8 lcg_rand(LCG * r) {
	r->atual = (r->a * r->atual + r->c) % r->m;
	return r->atual;
}
double lcg_rand_01(LCG * r) {
	return ((double) lcg_rand(r))/(r->rand_max);
}
void gera_numeros(float * vetor, int tam, float min, float max, LCG * r) {
	int i;
	for(i = 0; i < tam; i++)
		vetor[i] = (max-min)*lcg_rand_01(r) + min;
}
float soma(float *inicio_vetor, float *fim_vetor){
	return (inicio_vetor == fim_vetor+1)? 0 : *inicio_vetor + soma(inicio_vetor+1, fim_vetor);
}
float produtorio(float *inicio_vetor, float *fim_vetor){
	if(inicio_vetor == fim_vetor+1)
		return 1;
	else 	
		return *inicio_vetor * produtorio(inicio_vetor+1, fim_vetor);
}
int main()
{
	LCG random;
	semente(&random, 123456);
	int opc, N = 50;
	float vetor[50], somatorio, produto;
	gera_numeros(&vetor[0], N, 0.5, 1.5, &random);
	printf("1- Somatorio \n2- Produtorio\n\n");
	scanf("%d", &opc); 
	getchar();
	switch(opc)
	{
    	case 1:
    	somatorio = soma(&vetor[0], &vetor[0] + N-1);
    	printf("%f", somatorio);
    	break;
    	case 2:
    	produto = produtorio(&vetor[0], &vetor[0] + N-1);
    	printf("%f", produto);
   		break;
    	default:
    	printf("\n\n\tOpcao invalida\n\n");
   }
	return 0;
}
