#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n, i;
	double *p, den = 0;
	
	printf("Digite a quantidade de números a se calcular: ");
	scanf("%d", &n);

	p = (double *)malloc(n * sizeof(double));

	printf("\nDigite-os abaixo:\n");
	
	for(i = 0; i < n; i++){
		scanf("%lf", &p[i]);
		den += pow(p[i] + 1, (-1));
	}
	den = (n / den) - 1;

	printf("\nO resultado final é: %0.4lf\n", den);
	
	free(p);
	return 0;
}
