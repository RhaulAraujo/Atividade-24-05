#include<stdio.h>
#include<stdlib.h>
#include"lib.h"

void main(){
	float num1;
	float num2;
	int opca;
	
	printf("Escolha uma das seguintes operações:\n\n");
	printf("\t1-Soma\n");
	printf("\t2-Subtracao\n");
	printf("\t3-Multiplicacao\n");
	printf("\t4-Divisao\n");
	scanf("%d", &opca);

	printf("\nDigite um valor:\n");
	scanf("%f", &num1);
	printf("\nDigite outro valor:\n");
	scanf("%f", &num2);

	switch (opca){

		case 1:
	float retorno;
	retorno = Soma(num1,num2);
	printf("\nretorno:%.2f\n", retorno);
	break;
	        case 2:
        float retorno1;
	retorno1 = Subtracao(num1,num2);
	printf("\nretorno:%.2f\n", retorno1);
	break;
	        case 3:
	float retorno2;
	retorno2 = Multiplicacao(num1,num2);
	printf("\nretorno:%.2f\n", retorno2);
        break;
	        case 4:
	float retorno3;
	while (num2 == 0){
		printf("valor invalido, digite outro numero\n");
		scanf("%f", &num2);
	}
	retorno3 = Divisao(num1,num2);
	printf("\nretorno:%.2f\n", retorno3);
	break;	
	}
}
