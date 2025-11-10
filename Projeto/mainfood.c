#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cadastro(){
	char nome[50], usu[50], senha[50];
	FILE *file1;
	
	printf("\n--- Cadastrar ---\n");
	printf("Digite seu nome:");
	scanf("%s", nome);
	
	printf("Digite o nome de usuario que deseja utilizar: ");
	scanf("%s",usu);
	
	printf("Digite uma senha: ");
	scanf("%s",senha);
	
	file1 = fopen("usuarios.txt", "a");//criando arquivo
	fprintf(file1,"%s;%s;%s\n",nome,usu,senha);
	fclose(file1);
	
	printf("Cadastro realizado com sucesso!");
	
	return 1;
}


int login(char *usuLogado){
	char usu[50], senha[50];
	char nomeArquivo[50], usuArquivo[50], senhaArquivo[50];
	FILE * file1;
	int logado = 0;
	
    do{
    	printf("\n--- Login ---\n");
	    printf("Digite o nome de usuario:");
	    scanf("%s",usu);
	
	    printf("Digite a senha:");
	    scanf("%s",senha);
	
	    file1 = fopen("usuarios.txt","r");//Ler o arquivo
	    if(file1 == NULL){
		   printf("Nenhum usuario encontrado!\n");
		   return 0;
	    }
	
	    //Ler oq tem em cada linha do arquivo e depois ver se esta tudo certo para o usuario conseguir logar
	    while(fscanf(file1,"%[^;];%[^;];%[^\n]\n", nomeArquivo,usuArquivo,senhaArquivo) != EOF){//EOF avisa se o arquivo chegou no final ou não
		  if(strcmp(usu, usuArquivo) == 0 && strcmp(senha, senhaArquivo) == 0){
			strcpy(usuLogado, usuArquivo); //Guarda o usuario logado
			printf("Login realizado com sucesso!\n");
			logado = 1;
			break;
		  }
	    }
	
	    fclose(file1);
	
	    if(!logado){
		  printf("Senha ou usuario incorreto!");
	    }
	}while(!logado);
	
	return logado;
}

void cardapio(){
    printf("\n--- Cardapio ---\n");
    printf("1. Hamburguer - R$30,00\n");
    printf("2. Pizza (8 pedaços: R$60,00 | 4 pedacos: R$40,00)\n");
    printf("3. Sushi - Cada peca R$10,00\n");
    printf("4. Acai (300g: R$20,00 | 500g: R$35,00)\n");
    printf("5. Pastel - R$15,00\n");
    printf("6. Sorvete - R$10,00 por bola\n");
    printf("7. Lasanha - R$50,00\n");
    printf("8. Espetinho - R$7,00\n");
    printf("9. Hot Dog - R$20,00\n");
}

void buscar(){
	int i;
    char alimentos [9][50] = 
	{
	"hamburguer", "pizza", "sushi", "acai", "pastel",
	"sorvete", "lasanha", "espetinho", "hot dog"
	};
	char info1 [9][50] = 
	{
	"RS30,00","8 pedacos:RS60,00 e 4 pedacos:RS40,00","cada peca e RS10,00","300g:RS20,00 e 500g:RS35,00", "RS15,00",
	"RS10,00 cada bola","RS50,00","RS7,00","RS20,00"
	};
	char info2 [9][100] =
	{
	"Pao brioche, hamburguer de carne bovina, alface, queijo e tomate","Mussarela ou portuguesa","Pecas diversificadas","Acai com leite ninho, leite codensado e fruta a sua escolha",
	"Carne ou queijo","Sabores de creme,chocolate e morango","Bolonhesa","Queijo, frango, carne","Salsicha, mostarda, pure e ketchup"
	};
	
	char nomeAli[50];
	int encontrado, opcao;
	FILE *file2;
	
    do{
    	encontrado = 0;
    	
        printf("\n--- Buscar Alimentos ---\n");
        cardapio();
	    printf("Digite o nome do alimento que deseja buscar:");
	    scanf("%s", nomeAli);
	
	    
	
	    for(i = 0; i < 9; i++){
		   if(strcmp(nomeAli, alimentos[i]) == 0){
			   printf("\n Alimento encontrado com sucesso!\n");
			   printf("\nAlimento: %s\n", alimentos[i]);
			   printf("Preco: %s\n", info1[i]);
			   printf("Descricao: %s\n",info2[i]);
			
			   file2 = fopen("alimentos.txt", "a");
	           if(file2 != NULL){
	     	       fprintf(file2, "%s;%s;%s\n", alimentos[i],info1[i],info2[i]);
	     	       fclose(file2);
		        }else{
		 	        printf("Erro ao abrir o arquivo.\n");
		        }
	
			   encontrado = 1;
			   break;
		    }
	     }
	     
	     
	    if(!encontrado){
		   printf("Nenhum alimento encontrado!\n");
	    } 
	    
	    
	    printf("\n1-- Deseja buscar outra comida?\n");
	    printf("2-- Deseja voltar para o menu?\n");
	    printf("Digite sua escolha:");
	    scanf("%d", &opcao);
	    
	}while(opcao == 1);
}

int verbuscas(){
	char opcao[10];
	FILE *filebusca;
	char alimento[50], info1[50], info2[50];
	
	filebusca = fopen("alimentos.txt", "r");
	if(filebusca == NULL){
		printf("Nenhuma busca foi feita!\n");
		return;
	}
	
	printf("\n--- Historico de busca dos alimentos! ---\n");
	
	while(fscanf(filebusca, "%[^;];%[^;];%[^\n]\n", alimento, info1, info2) != EOF){
	    printf("\n %s, %s, %s\n",alimento,info1,info2);
	}
	
	fclose(filebusca);
	    
	return;   
}

void pedidos(char *usuLogado){
	int escolha;
	char alimentos[50], quantidade[50];
	char usuArquivo[50], alimentoArquivo[50], qtdArquivo[50];
	FILE *fileped, *filetemp; //Esse arquivo serve para editar ou excluir dados de um arquivo de texto
	int i, encontrado;
	
	do{
		printf("\n--- Cadastrar pedidos ---\n");
		printf("Escolha o que deseja fazer:\n");
		printf("1--Fazer um pedido.\n");
		printf("2--Editar pedido.\n");
		printf("3--Excluir pedido.\n");
		printf("4--Visualizar pedidos.\n");
		printf("5--Voltar ao menu.\n");
		printf("Digite sua escolha:");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\n--- Faca seu pedido aqui! ---\n");
			printf("Digite o nome do alimento que deseja adicionar no pedido:");
			scanf("%s", alimentos);
			printf("Digite a quantidade que deseja adicionar:");
			scanf("%s", quantidade);
			
			fileped = fopen("pedidos.txt", "a");
			if(fileped != NULL){
				fprintf(fileped,"%s;%s\n",alimentos,quantidade);
				fclose(fileped);
				printf("Pedido feito com sucesso!\n");
			}else{
				printf("Erro ao fazer o pedido\n");
			}
		}
		
		else if(escolha == 2){
			int escolha2;
			do{
				printf("\n--- Faca suas alteracoes aqui! ---\n");
				printf("Temos essas opcoes:\n");
				printf("1--Alterar quantidade de um alimento.\n");
				printf("2--Adicionar novo alimento.\n");
				printf("3--Voltar\n");
				printf("Digite sua escolha:");
				scanf("%d", &escolha2);
				
				if(escolha2 == 1){
					fileped = fopen("pedidos.txt", "r");
					if(fileped == NULL){
						printf("Nenhum pedido encontrado");
						break;
					}
					
					char pedidosexistentes[100][50];
					char qtdexistentes[100][50];
					i = 0;
					printf("\n Lista de pedidos: \n");
					while(fscanf(fileped, "%[^;];%[^\n]\n",alimentoArquivo, qtdArquivo) != EOF){
						printf("%d--%s (%s)\n", i + 1, alimentoArquivo, qtdArquivo);
						strcpy(pedidosexistentes[i], alimentoArquivo);//Copia uma string de origem para o destino
						strcpy(qtdexistentes[i], qtdArquivo);
						i++;
					}
					fclose(fileped);
					
					if(i == 0){
						printf("Nenhum pedido encontrado.\n");
						continue;
					}
					
					int numpedido;
					printf("Escolha o numero do pedido que deseja alterar:");
					scanf("%d", &numpedido);
					if(numpedido < 1 || numpedido > i){
						printf("Numero invalido.\n");
						continue;
					}
					
					printf("Digite a nova quantidade: ");
					scanf("%s", quantidade);
					
					fileped = fopen("pedidos.txt", "r");
					filetemp = fopen("temp.txt", "w");
					encontrado = 0;
					while(fscanf(fileped, "%[^;];%[^\n]\n", alimentoArquivo, qtdArquivo) != EOF){
						if(strcmp(alimentoArquivo, pedidosexistentes[numpedido - 1]) == 0 && !encontrado){
							fprintf(filetemp, "%s;%s\n",alimentoArquivo, quantidade);
							encontrado = 1;
						}else{
							fprintf(filetemp, "%s;%s\n",alimentoArquivo, qtdArquivo);
						}
					}
					fclose(fileped);
					fclose(filetemp);
					remove("pedidos.txt");
					rename("temp.txt", "pedidos.txt");
					
					printf("Pedido atualizado com sucesso!\n");
					
				}
				
				else if(escolha2 == 2){
					printf("Digite o nome do novo alimento: ");
					scanf("%s", alimentos);
					printf("Digite a qtd: ");
					scanf("%s", quantidade);
					
					fileped = fopen("pedidos.txt", "a");
					if(fileped != NULL){
						fprintf(fileped, "%s;%s\n", alimentos, quantidade);
						fclose(fileped);
						printf("Novo alimento adicionado com sucesso!\n");
					}else{
						printf("Erro ao salvar o alimento.\n");
					}
				}
				
				else if(escolha2 == 3){
					break;
				}
			}while(escolha2 !=4);
		}
		
		else if(escolha == 3){
			printf("\n --- Exclua seu pedido --\n");
			fileped = fopen("pedidos.txt", "r");
			if(fileped == NULL){
				printf("Nenhum pedido encontrado\n");
				continue;
			}
					
			char pedidosexistentes[100][50];
			char qtdexistentes[100][50];
			i = 0;
			printf("\nLista de pedidos: \n");
			while(fscanf(fileped, "%[^;];%[^\n]\n",alimentoArquivo, qtdArquivo) != EOF){
					printf("%d--%s (%s)\n", i + 1, alimentoArquivo, qtdArquivo);
					strcpy(pedidosexistentes[i], alimentoArquivo);//Copia uma string de origem para o destino
					strcpy(qtdexistentes[i], qtdArquivo);
					i++;
				}
				fclose(fileped);
					
				if(i == 0){
					printf("Nenhum pedido encontrado.\n");
					continue;
				}
					
				int numpedido;
				printf("Escolha o numero do pedido que deseja excluir:");
				scanf("%d", &numpedido);
				if(numpedido < 1 || numpedido > i){
					printf("Numero invalido.\n");
					continue;
				}
				
				fileped = fopen("pedidos.txt", "r");
				filetemp = fopen("temp.txt", "w");
				encontrado = 0;
				while(fscanf(fileped, "%[^;];%[^\n]\n", alimentoArquivo, qtdArquivo) != EOF){
					if(strcmp(alimentoArquivo, pedidosexistentes[numpedido - 1]) == 0 && !encontrado){
						encontrado = 1; //Pula a escrita para excluir
						continue; 
					}else{
						fprintf(filetemp, "%s;%s\n", alimentoArquivo, qtdArquivo);
					}
				}
				fclose(fileped);
				fclose(filetemp);
				remove("pedidos.txt");
				rename("temp.txt", "pedidos.txt");
					
				printf("Pedido excluido com sucesso!\n");
				
		}
		
		else if(escolha == 4){
			printf("\n --- Seus pedidos ---\n");
			fileped = fopen("pedidos.txt", "r");
			if(fileped == NULL){
				printf("Nenhum pedido encontrado.\n");
			}else{
				while(fscanf(fileped, "%[^;];%[^\n]\n", alimentoArquivo, qtdArquivo) != EOF){
					printf("- %s (%s)\n", alimentoArquivo, qtdArquivo);
				}
				fclose(fileped);
			}
		}
		
		
		else if(escolha == 5){
			return;
		}
	}while(escolha != 5);
}

void avaliacao(char *usuLogado){
	FILE *fileped, *fileaval;
	char alimentoArquivo[50], qtdArquivo[50];
	char pedidosexistentes[100][50];
	int i, numpedido, nota;
	
	printf("\n--- Avaliar pedidos ---\n");
	
	fileped = fopen("pedidos.txt","r");
	if(fileped == NULL){
		printf("Nenhum pedido encontrado.\n");
		return;
	}
	
	i = 0;
	printf("Lista de pedidos:\n");
	while(fscanf(fileped, "%[^;];%[^\n]\n", alimentoArquivo, qtdArquivo) != EOF){
		printf("%d --%s (%s)\n", i + 1,alimentoArquivo, qtdArquivo);
		strcpy(pedidosexistentes[i], alimentoArquivo);
		i++;
	}
	fclose(fileped);
	
	if(i == 0){
		printf("Nenhum pedido para avaliar.\n");
		return;
	}
	do{
		printf("Digite o numero do pedido quwe deseja avaliar:");
	    scanf("%d", &numpedido);
	    if(numpedido < 1 || numpedido > i){
		   printf("Numero invalido.\n");
		}
	}while(numpedido < 1 || numpedido > i);
	
	do{
    	printf("De uma nota de 1 a 5 para '%s':", pedidosexistentes[numpedido - 1]);
	    scanf("%d", &nota);
	
	    if(nota < 1 || nota > 5){
		   printf("Nota ivalida!Digite um numero entre 1 a 5.\n");
	    }
	}while(nota < 1 || nota > 5);
	
	fileaval = fopen("avaliacoes.txt", "a");
	if(fileaval != NULL){
		fprintf(fileaval, "%s;%d\n", pedidosexistentes[numpedido - 1], nota);
		fclose(fileaval);
		printf("Avaliacao feita com sucesso!\n");
	}else{
		printf("Erro ao fazer avaliacao.\n");
	}
	
	printf("\n--- Avaliacoes atuais ---\n");
    fileaval = fopen("avaliacoes.txt", "r");
    if(fileaval != NULL){
        char alimento[50];
        while(fscanf(fileaval, "%[^;];%d\n", alimento, &nota) != EOF){
            printf(" Pedido: %s | Nota: %d\n", alimento, nota);
        }
        fclose(fileaval);
    }
}

void Principal(char *usuLogado){
	int menu;
	
	do{
	  printf("\n==== Bem vindo ao FEIfood %s! ====\n", usuLogado);
	  printf("Fique a vontade para navegar aqui:\n");
	  printf("\n--- Menu principal --\n");
	  printf("1--Buscar alimentos\n");
	  printf("2--Ver alimentos buscados\n");
	  printf("3--Cadastrar pedido\n");
	  printf("4--Avaliar pedido\n");
	  printf("5--Encerrar\n");
	  printf("Escolha o que quer fazer:");
	  scanf("%d",&menu);
	  
	  if(menu == 1){
	  	buscar(usuLogado);
	  }
	  else if(menu == 2){
	  	verbuscas(usuLogado);
	  }
	  else if(menu == 3){
	  	pedidos(usuLogado);
	  }
	  else if(menu == 4){
	  	avaliacao(usuLogado);
	  }
	  else if(menu == 5){
	  	exit(0);//Encerrar o codigo inteiro
	  }
	  else{
	  	printf("\nOpcao invalida digite algum dos numeros acima.\n");
	  }
	  	
	}while(menu != 5);
}

int main(){
	int opcao;
	char usuLogado[50];
	
	do{
		printf("\n==== Area de Cadastro/Login ====\n");
		printf("1--Cadastrar\n");
		printf("2--Login\n");
		printf("Digite sua escolha:");
		scanf("%d", &opcao);
		
		if(opcao == 1){
			cadastro();
		}
		
		else if(opcao == 2){
			if(login(usuLogado)){
				Principal(usuLogado);
			}
		}
		
		else if(opcao != 2){
			printf("\nOpcao invalida, digite algum dos numeros acima!\n");
		}
	}while(opcao != 2);
	
	
	
	
	system("pause");
	return 0;
}
