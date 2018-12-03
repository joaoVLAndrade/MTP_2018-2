/* P6.c */
/* João Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
	double x,y;
} Ponto;
int main(){
	int n, i; 
	float a, pi = 3.141592;
   	Ponto *coordenadas;
   	scanf("%d", &n);
	getchar();
   	coordenadas = (Ponto *) malloc(n*sizeof(Ponto)); 
   	for(i=0; i<n; i++){
   		a = ((i*2.0*pi)/(n-1));
   		coordenadas->x= cos(a);
   		coordenadas->y= sin(a);
   		printf("(%.3f, %.3f) ", coordenadas->x, coordenadas->y);
   	}
	free(coordenadas);
   	return 0;
}	
