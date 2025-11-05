#include <stdio.h>
#include <string.h>
#include <ctype.h>

// EXERCÍCIO 1: Contador de Caracteres Básico
int conta_caracteres(char *str, char c) {
    int count = 0;
    while (*str != '\0') {
        if (*str == c) {
            count++;
        }
        str++;
    }
    return count;
}

// EXERCÍCIO 2: Inversor de String
void inverte_string(char *str) {
    if (str == NULL) return;
    
    char *inicio = str;
    char *fim = str;
    
    // Encontra o final da string
    while (*fim != '\0') {
        fim++;
    }
    fim--; // Volta para o último caractere válido
    
    // Troca caracteres das pontas para o centro
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

// EXERCÍCIO 3: Validador de Palíndromo
int eh_palindromo(char *str) {
	int i;
    if (str == NULL) return 0;
    
    char temp[256] = {0};
    int j = 0;
    
    // Remove espaços e converte para minúsculas
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            temp[j++] = tolower(str[i]);
        }
    }
    
    // Verifica palíndromo
    int len = strlen(temp);
    for ( i = 0; i < len / 2; i++) {
        if (temp[i] != temp[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

// EXERCÍCIO 4: Formatador de Nome
void formatar_nome(char *nome) {
    if (nome == NULL) return;
    
    int len = strlen(nome);
    int nova_palavra = 1;
    int write_pos = 0;
    
    // Remove espaços do início
    int i = 0;
    while (nome[i] == ' ') i++;
    
    // Processa cada caractere
    while (i < len) {
        if (nome[i] == ' ') {
            // Pula espaços extras
            while (nome[i] == ' ') i++;
            if (nome[i] != '\0') {
                nome[write_pos++] = ' ';
                nova_palavra = 1;
            }
        } else {
            if (nova_palavra) {
                nome[write_pos++] = toupper(nome[i]);
                nova_palavra = 0;
            } else {
                nome[write_pos++] = tolower(nome[i]);
            }
            i++;
        }
    }
    
    nome[write_pos] = '\0';
}

// EXERCÍCIO 5: Extrator de Números
int extrair_numeros(char *str, int numeros[]) {
    if (str == NULL || numeros == NULL) return 0;
    
    int count = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            int num = 0;
            // Extrai o número completo
            while (isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            numeros[count++] = num;
        } else {
            i++;
        }
    }
    
    return count;
}

// EXERCÍCIO 6: Substituto de Substring
void substituir_primeira_substring(char *str, char *antiga, char *nova, char *resultado) {
    if (str == NULL || antiga == NULL || nova == NULL || resultado == NULL) return;
    
    char *pos = strstr(str, antiga);
    
    if (pos == NULL) {
        // Não encontrou, copia original
        strcpy(resultado, str);
        return;
    }
    
    // Copia parte antes da substring
    int pos_inicio = pos - str;
    strncpy(resultado, str, pos_inicio);
    resultado[pos_inicio] = '\0';
    
    // Adiciona a nova substring
    strcat(resultado, nova);
    
    // Adiciona o resto da string original
    strcat(resultado, str + pos_inicio + strlen(antiga));
}

// EXERCÍCIO 7: Analisador de Senha
int validar_senha(char *senha) {
	int i;
    if (senha == NULL || strlen(senha) < 8) return 0;
    
    int tem_maiuscula = 0, tem_minuscula = 0, tem_digito = 0, tem_especial = 0;
    char especiais[] = "!@#$%^&*";
    
    for ( i = 0; senha[i] != '\0'; i++) {
        if (isupper(senha[i])) tem_maiuscula = 1;
        else if (islower(senha[i])) tem_minuscula = 1;
        else if (isdigit(senha[i])) tem_digito = 1;
        else if (strchr(especiais, senha[i])) tem_especial = 1;
    }
    
    return tem_maiuscula && tem_minuscula && tem_digito && tem_especial;
}

// EXERCÍCIO 8: Compactador de Espaços
void compactar_espacos(char *str) {
    if (str == NULL) return;
    
    int len = strlen(str);
    int write_pos = 0;
    int i = 0;
    
    // Remove espaços do início
    while (str[i] == ' ') i++;
    
    // Processa resto da string
    while (i < len) {
        if (str[i] == ' ') {
            // Adiciona apenas um espaço
            str[write_pos++] = ' ';
            // Pula espaços extras
            while (str[i] == ' ') i++;
        } else {
            str[write_pos++] = str[i++];
        }
    }
    
    // Remove espaços do final
    while (write_pos > 0 && str[write_pos - 1] == ' ') {
        write_pos--;
    }
    
    str[write_pos] = '\0';
}


// FUNÇÃO MAIN PARA TESTES
int main() {
    printf("=== TESTES DOS EXERCICIOS ===\n\n");
    
    // Teste Exercício 1
    printf("Exercicio 1: Contador de Caracteres\n");
    char texto[] = "programacao em c";
    printf("Texto: '%s'\n", texto);
    printf("Quantidade de 'a': %d\n\n", conta_caracteres(texto, 'a'));
    
    // Teste Exercício 2
    printf("Exercicio 2: Inversor de String\n");
    char str2[] = "hello";
    printf("Antes: %s\n", str2);
    inverte_string(str2);
    printf("Depois: %s\n\n", str2);
    
    // Teste Exercício 3
    printf("Exercicio 3: Validador de Palindromo\n");
    char pal1[] = "arara";
    char pal2[] = "A base do teto desaba";
    printf("'%s' e palindromo: %s\n", pal1, eh_palindromo(pal1) ? "Sim" : "Não");
    printf("'%s' e palindromo: %s\n\n", pal2, eh_palindromo(pal2) ? "Sim" : "Não");
    
    // Teste Exercício 4
    printf("Exercicio 4: Formatador de Nome\n");
    char nome[] = "  jOAO  sILVA  DOS   santos  ";
    printf("Antes: '%s'\n", nome);
    formatar_nome(nome);
    printf("Depois: '%s'\n\n", nome);
    
    // Teste Exercício 5
    printf("Exercicio 5: Extrator de Números\n");
    char str_nums[] = "Tenho 25 anos e peso 70kg, nasci em 1998";
    int numeros[10];
    int i;
    int qtd = extrair_numeros(str_nums, numeros);
    printf("String: '%s'\n", str_nums);
    printf("Numeros encontrados: ");
    for ( i = 0; i < qtd; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");
    
    // Teste Exercício 7
    printf("Exercicio 7: Validador de Senha\n");
    char senha1[] = "MinhaSenh@123";
    char senha2[] = "senha123";
    printf("'%s' e valida: %s\n", senha1, validar_senha(senha1) ? "Sim" : "Nao");
    printf("'%s' e valida: %s\n\n", senha2, validar_senha(senha2) ? "Sim" : "Nao");
       
    return 0;
}
