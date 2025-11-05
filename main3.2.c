#include <stdio.h>
//Exercicio 1:
//int main(){
	//float a = 34, b = 36.90;
	
	//if (a > b){
	 //printf("%.2f e maior\n",a);
	//}else if (b > a){
	 //printf("%.2f e maior\n",b);
	//}
	//return 0;
//}

//Exercicio 2:
/*
int main() {
    float num1, num2, num3;
    
    printf("Digite um numero:\n");
    scanf("%f", &num1);
    
    printf("Digite um numero:\n");
    scanf("%f", &num2);
    
    printf("Digite um numero:\n");
    scanf("%f", &num3);
    
    float media = (num1 + num2 + num3) / 3;
    
    if (media >= 7.0) {
        printf("O aluno foi aprovado com media %.2f\n", media);
    } else if (media >= 5.0 && media < 7.0) {
        printf("O aluno ficou de recuperacao com media %.2f\n", media);
    } else {
        printf("O aluno foi reprovado com media %.2f\n", media);
    }
    
    return 0;
}*/

//Exercicio 3:
/*
int main(){
	int x;
	const char *maior;
	
	printf("Digite sua idade: ");
	scanf("%d",& x);
	
	maior = (x >= 18) ? "e" : "nao e";
	
	printf("Voce %s maior de idade.",maior);
	
	return 0;
}*/

//Exercicio 4:
/*
int main() {
    int opcao;
    float x, y, resultado;

    printf("Digite um numero: ");
    scanf("%f", &x);
    
    printf("Digite outro numero: ");
    scanf("%f", &y);
    
    printf("Escolha uma opcao:\n");
    printf("1- Somar\n");
    printf("2- Subtrair\n");
    printf("3- Multiplicar\n");
    printf("4- Dividir\n");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            resultado = x + y;
            printf("A soma e: %.2f\n", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("A subtracao e: %.2f\n", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("A multiplicacao e: %.2f\n", resultado);
            break;
        case 4:
            if (y != 0) {
                resultado = x / y;
                printf("A divisao e: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}*/

//Exercicio 5:
/*
int main(){
	int opcao;
	
	printf("Escolha um número: \n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
	printf("7\n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case(1):
			printf("Segunda-feira");
			break;
		
		case(2):
			printf("Terca-feira");
			break;
		
		case(3):
			printf("Quarta-feira");
			break;
		
		case(4):
			printf("Quinta-feira");
			break;
		
		case(5):
			printf("Sexta-feira");
			break;
		
		case(6):
			printf("Sabado");
			break;
		
		case(7):
			printf("Domingo");
			break;
		
		default:
			printf("Opcao invalida");
			break;
		
		return 0;
	}
}*/

//Exercicio 6:


