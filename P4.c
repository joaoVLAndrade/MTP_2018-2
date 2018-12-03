/* P4.c */
/* João Victor Luiz De Andrade */
/* 11811EAU003 */
#include <stdio.h>
int f_ackerman(int m, int n){
	if(m==0) 
		return n+1;
	else if(m>0 && n==0) 
		f_ackerman(m-1,1);
   	else 
	   	f_ackerman(m-1, f_ackerman(m, n-1));
}
int main() {
	int m, n, a;
	scanf("%d", &m);
	scanf("%d", &n);
	a = f_ackerman(m,n);	
	printf("%d", a);
	return 0;
}
