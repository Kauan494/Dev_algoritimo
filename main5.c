#include <stdio.h>

//Exercicio 1:
//int main(){
    //int array[5];
    //int i;

    // Lendo valores para o array
    //for(i = 0; i < 5; i++){
        //printf("Digite o numero %d: ", i+1);
        //scanf("%d", &array[i]);
    //}

    // Imprimindo os valores
    //printf("Os numeros digitados foram: ");
    //for(i = 0; i < 5; i++){
        //printf("%d ", array[i]);
    //}

    //return 0;
//}

//Exercicio 2:
//int main(){
	//int array[10];
	//int i;
	//int soma = 0;
	//int positivo = 0;
	
	//for( i = 0;i < 10; i++){
		//printf("Digite um numero: ", i+1);
		//scanf("%d",&array[i]);
	//}
	
	//for(i = 0; i < 10; i++){
		//soma +=array[i];
		//if(array[i] > 0){
			//positivo++;
		//}
	//}
	
	//printf("A soma dos elementos e: %d\n",soma);
	//printf("Quantidade de numeros positivos: %d",positivo);
	
	//return 0;
//}

//Exercicio 3:
//int main() {
    //int array[8];
    //int i;
    //int maior, menor;
    //int posMaior, posMenor;

    // Leitura dos números
    //for(i = 0; i < 8; i++){
        //printf("Digite um numero: ", i + 1);
        //scanf("%d", &array[i]);
    //}

    // Inicializando maior e menor com o primeiro elemento
    //maior = menor = array[0];
    //posMaior = posMenor = 0;

    // Encontrando maior e menor
    //for(i = 1; i < 8; i++){
        //if(array[i] > maior){
            //maior = array[i];
            //posMaior = i;
        //}
        //if(array[i] < menor){
            //menor = array[i];
            //posMenor = i;
        //}
    //}

    // Exibindo os números
    //printf("\nOs numeros digitados foram: ");
    //for(i = 0; i < 8; i++){
        //printf("%d ", array[i]);
    //}

    // Exibindo maior e menor com posição
    //printf("\nO maior numero e: %d na posicao %d\n", maior, posMaior);
    //printf("O menor numero e: %d na posicao %d\n", menor, posMenor);

    //return 0;
//}

//Exercicio 4:
//int main(){
    //int numeros[15];
    //int pares, impares;
    //int opcao; 
    //int i;

    //do {
        //pares = 0;
        //impares = 0;

        //printf("Digite 15 numeros inteiros:\n");
        //for (i = 0; i < 15; i++) {
            //printf("Numero %d: ", i + 1);
            //scanf("%d", &numeros[i]);

            //if (numeros[i] % 2 == 0)
                //pares++;
            //else
                //impares++;
        //}

        //printf("\nQuantidade de pares: %d\n", pares);
        //printf("Quantidade de impares: %d\n", impares);

        //printf("\nDeseja continuar? (1 para continuar / 0 para sair): ");
        //scanf("%d", &opcao);

    //} while (opcao == 1);
    //system("pause");
    //return 0;
    
//}

//Exercicio 5:
//int main() {
    //int numeros[10];
    //int i, busca, posicao = -1;

    // Lê 10 números
    //for (i = 0; i < 10; i++) {
        //printf("Digite um numero: ", i + 1);
        //scanf("%d", &numeros[i]);
    //}

    // Pede o número para buscar
    //printf("Digite o numero que deseja buscar: ");
    //scanf("%d", &busca);

    // Busca o número no array
    //for (i = 0; i < 10; i++) {
        //if (numeros[i] == busca) {
            //posicao = i;
            //break;
        //}
    //}

    // Exibe o resultado
    //if (posicao != -1) {
        //printf("Numero %d encontrado na posicao %d.\n", busca, posicao);
    //} else {
        //printf("Numero %d não encontrado no array.\n", busca);
    //}

    //return 0;
//}

//Exercicio 6:
//int main() {
    //int matriz[3][3]; // declara a matriz 3x3
    //int i, j;

    // preenchendo a matriz
    //printf("Digite os elementos da matriz 3x3:\n");
    //for (i = 0; i < 3; i++) {
        //for (j = 0; j < 3; j++) {
            //printf("Elemento [%d][%d]: ", i, j);
            //scanf("%d", &matriz[i][j]);
        //}
    //}

    // exibindo a matriz em formato tabular
    //printf("\nMatriz 3x3:\n");
    //for (i = 0; i < 3; i++) {
        //for (j = 0; j < 3; j++) {
            //printf("%4d", matriz[i][j]); // %4d para alinhar em colunas
        //}
        //printf("\n");
    //}

    //return 0;
//}

//Exercicio 7:
//int main(){
	//int matriz[4][4];
	//int i,j;
	
	//printf("Digite os elementos da matriz:\n");
	//for(i = 0; i < 4; i++){
		//for(j = 0; j < 4; j++){
			//printf("Elemento [%d][%d]: ",i,j);
		    //scanf("%d",&matriz[i][j]);
		//}
	//}
	
	 //printf("\nSoma de cada linha:\n");
    //for (i = 0; i < 4; i++) {
        //int somaLinha = 0;
        //for (j = 0; j < 4; j++) {
            //somaLinha += matriz[i][j];
        //}
        //printf("Linha %d: %d\n", i, somaLinha);
    //}

    
    //printf("\nSoma de cada coluna:\n");
    //for (j = 0; j < 4; j++) {
        //int somaColuna = 0;
        //for (i = 0; i < 4; i++) {
            //somaColuna += matriz[i][j];
        //}
        //printf("Coluna %d: %d\n", j, somaColuna);
    //}

    //return 0;
//}

//Exercicio 8:
//int main() {
    //int matriz[3][3];
    //int i, j, soma = 0;

    // leitura da matriz
    //printf("Digite os elementos da matriz 3x3:\n");
    //for (i = 0; i < 3; i++) {
        //for (j = 0; j < 3; j++) {
            //printf("Elemento [%d][%d]: ", i, j);
            //scanf("%d", &matriz[i][j]);
        //}
    //}

    // exibir diagonal principal e calcular soma
    //printf("\nDiagonal principal: ");
    //for (i = 0; i < 3; i++) {
        //printf("%d ", matriz[i][i]);  // elementos onde i == j
        //soma += matriz[i][i];
    //}

    //printf("\nSoma da diagonal principal: %d\n", soma);

    //return 0;
//}

//Exercicio 9: 
//int main() {
    //int matriz[5][5];
    //int i, j;

    // preenche a matriz com o padrão i + j
    //for (i = 0; i < 5; i++) {
        //for (j = 0; j < 5; j++) {
            //matriz[i][j] = i + j;
        //}
    //}

    // exibe a matriz
    //printf("Matriz 5x5 com o padrao matriz[i][j] = i + j:\n");
    //for (i = 0; i < 5; i++) {
        //for (j = 0; j < 5; j++) {
            //printf("%3d ", matriz[i][j]); // %3d para alinhar
        //}
        //printf("\n");
    //}

    //return 0;
//}

//Exercicio 10:
//int main() {
    //int matriz1[2][2], matriz2[2][2];
    //int i, j, iguais = 1; // flag para indicar se são iguais

    // leitura da primeira matriz
    //printf("Digite os elementos da primeira matriz 2x2:\n");
    //for (i = 0; i < 2; i++) {
        //for (j = 0; j < 2; j++) {
            //printf("Matriz1[%d][%d]: ", i, j);
            //scanf("%d", &matriz1[i][j]);
        //}
    //}

    // leitura da segunda matriz
    //printf("\nDigite os elementos da segunda matriz 2x2:\n");
    //for (i = 0; i < 2; i++) {
        //for (j = 0; j < 2; j++) {
            //printf("Matriz2[%d][%d]: ", i, j);
            //scanf("%d", &matriz2[i][j]);
        //}
    //}

    // comparação
    //for (i = 0; i < 2; i++) {
        //for (j = 0; j < 2; j++) {
            //if (matriz1[i][j] != matriz2[i][j]) {
                //iguais = 0; // encontrou diferente
            //}
        //}
    //}

    // resultado
    //if (iguais == 1) {
       // printf("\nMatrizes iguais\n");
    //} else {
        //printf("\nMatrizes diferentes\n");
    //}

    //return 0;
//}
