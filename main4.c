#include <stdio.h>
#include <stdlib.h>   // para usar system("pause")

//Exercicio 1:
/*int main(){
	int i;
	for(i= 0;i < 11;i++){
		printf("%d\n",i);
	}
	return 0;
}*/

//Exercicio 2:
#include <stdio.h>

/*int main() {
    int i = 5;

    // Pós-incremento (i++):
    // Primeiro imprime o valor atual de i (5),
    // depois incrementa i (fica 6 após o printf).
    printf("Valor de i++ = %d\n", i++);
    

    // Pré-incremento (++i):
    // Primeiro incrementa i (de 6 para 7),
    // depois imprime o valor já atualizado.
    printf("Valor de ++i = %d\n", ++i);

    // Valor final de i após as operações
    printf("Valor final de i = %d\n", i);

    return 0;
}*/

//Exercicio 3:
/*int main() {
	//Mais compacto e organizado quando você sabe quantas vezes o loop deve rodar.
	//Variável de controle, condição e incremento ficam na mesma linha, facilitando a leitura.
	//Ideal para contagens simples e iteráveis.
    int i,N, soma = 0;
    printf("Soma com for:\n ");
    printf("Digite um numero N: ");
    scanf("%d", &N);

    
    for ( i = 1; i <= N; i++) {
        soma += i;  // soma = soma + i
    }

    printf("A soma de 1 a %d e: %d\n", N, soma);
    
    //Mais flexível quando a quantidade de iterações não é conhecida de antemão.
    //Precisa inicializar a variável antes do loop e incrementar dentro do bloco, o que pode deixar o código um pouco mais longo.
    //Bom para loops baseados em condições externas, não apenas em contagem.
    int i2 = 0, n, soma2 = 0;
	printf("Soma com while:\n ");
	printf("Digite um numero n: ");
	scanf("%d",&n);
	
	while(i2 <= n){
		soma2 += i2;
		i2++;
	}
	printf("A soma de 1 a %d e: %d\n", n, soma2);
	return 0;
}*/

//Exercicio 4:
/*int main(){
	int opcao;
	int num;
	do{
	printf("--Menu--\n");
	printf("1-- Calcular o quadrado de um numero\n");
	printf("2-- Calcular o cubo de um numero\n");
	printf("3-- Sair\n");
	printf("Digite sua escolha: ");
	scanf("%d",&opcao);
	if(opcao == 1){
		printf("Digite um numero: ");
		scanf("%d",&num);
		int qd = num * num;
		printf("O quadrado desse numero e: %d\n",qd);
		
	}else if(opcao == 2){
		printf("Digite um numero: ");
		scanf("%d",&num);
		int cu = num * num * num;
		printf("O cubo desse numero e: %d\n",cu);
	}
	
	}while(opcao < 3);
}*/

//Exercicio 5:
/*int main() {
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue; // pula números pares
        }
        if (i > 15) {
            printf("Maior numero que 15 e: %d\n", i);
            break; // para o laço
        }
        printf("%d\n", i); // imprime apenas ímpares até 15
    }
    return 0;
}*/

//Exercicio 6:
//int potencia_recursiva(int x, int n) {
    //if (n == 0) {
        //return 1; // caso base
    //}
    //return x * potencia_recursiva(x, n - 1); // chamada recursiva
//}

// Função iterativa (com laço) para potência
//int potencia_iterativa(int x, int n) {
	//int i;
    //int resultado = 1;
    //for ( i = 0; i < n; i++) {
        //resultado *= x;
    //}
    //return resultado;
//}

//int main() {
    //int base, expoente;

    //printf("Digite a base: ");
    //scanf("%d", &base);

    //printf("Digite o expoente: ");
    //scanf("%d", &expoente);

    //printf("Resultado recursivo: %d\n", potencia_recursiva(base, expoente));
    //printf("Resultado iterativo: %d\n", potencia_iterativa(base, expoente));

    //return 0;
//}

//Exercicio 7:
// Função recursiva para Fibonacci
//int fibonacci_recursivo(int n) {
    //if (n == 0) return 0;   // caso base
    //if (n == 1) return 1;   // caso base
    //return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
//}

// Função iterativa (com laço) para Fibonacci
//void fibonacci_iterativo(int termos) {
    //int a = 0, b = 1, c;

    //printf("Iterativo: ");
    //int i;
    //for ( i = 0; i < termos; i++) {
        //printf("%d ", a);
        //c = a + b;  // próximo termo
        //a = b;
        //b = c;
    //}
    //printf("\n");
//}

//int main() {
    //int n;

    //printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    //scanf("%d", &n);

    // Recursivo: imprime termo por termo
    //prinf("Recursivo: ");
    //int i;
    //for ( i = 0; i < n; i++) {
        //printf("%d ", fibonacci_recursivo(i));
    //}
    //printf("\n");

    // Iterativo
    //fibonacci_iterativo(n);

    //return 0;
//}

//Exercicio 8:
//int main() {
    //int linhas;

    //printf("Digite o numero de linhas do triangulo: ");
    //scanf("%d", &linhas);

    // Laço externo controla as linhas
    //int i;
    //for ( i = 1; i <= linhas; i++) {
        // Laço interno imprime os asteriscos da linha
        //int j;
        //for ( j = 1; j <= i; j++) {
            //printf("*");
        //}
        //printf("\n"); // quebra de linha ao final de cada linha
    //}

    //return 0;
//}

//Exercicio 9:
//int main() {
    //int numero;
    //int soma = 0, quantidade = 0;

    //printf("Digite numeros entre 1 e 100 (0 para sair):\n");
    //printf("Digite um numero: ");
    //scanf("%d", &numero);

    //while (numero != 0) {
        // Validação do número
        //while (numero < 1 || numero > 100) {
            //printf("Numero invalido! Digite entre 1 e 100: ");
            //scanf("%d", &numero);
        //}

        // Número válido
        //soma += numero;
        //quantidade++;

        // Pede o próximo número
        //printf("Digite um numero: ");
        //scanf("%d", &numero);
    //}

    //if (quantidade > 0) {
        //float media = (float)soma / quantidade;
        //printf("Voce digitou %d numeros validos. Media = %.2f\n", quantidade, media);
    //} else {
        //printf("Nenhum numero valido foi digitado.\n");
    //}

    //return 0;
//}

//Exercicio 10:
//int collatz(int n) {
    //if (n == 1) return 0;        // caso base: chegou em 1
    //if (n % 2 == 0)              // se par
        //return 1 + collatz(n / 2);
    //else                         // se ímpar
        //return 1 + collatz(3 * n + 1);
//}

//int main() {
    //int n;

    //printf("Digite um numero inteiro positivo: ");
    //scanf("%d", &n);

    //if (n < 1) {
        //printf("Numero invalido!\n");
        //return 0;
    //}

    //int passos = collatz(n);
    //printf("Numero de passos para chegar a 1: %d\n", passos);

    //return 0;
//}













