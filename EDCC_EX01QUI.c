// --- EDCC_EX01QUI ---
// Problema:
// Biblitecas
#include <stdio.h>
// tipo_do_retorno nome_da_função(tipo_do_parametro nome_do_parametro, ...)
int ler_valor_inteiro(char);
void ler_valor_por_referencia(char, int *);
void exibir_variavel(char, int *);
void calcular_soma_dobro(int *, int *, int *);
// Protótipos de Funções
int main()
{
	// Declaração de Variávies: a, b, c (inteiros)
	int a;
	int b;
	int c;

	// Função: Ler os valores das três variávies
	// ... opção 1: executar a função para cada variável passando o parâmetro por valor
	a = ler_valor_inteiro('a');
	b = ler_valor_inteiro('b');
	// c = ler_valor_inteiro('c');
	// ... opção 2: excutar a função uma vez passando os parâmetros por referencia
	ler_valor_por_referencia('c', &c);
	// Exibir o valor de cada variável e seu endereço de memória
	// printf("O valor da variável %c é %i e esta no endereço de memória %p\n", 'a', a, &a);
	exibir_variavel('a', &a);
	// printf("O valor da variável %c é %i e esta no endereço de memória %p\n", 'b', b, &b);
	exibir_variavel('b', &b);
	// printf("O valor da variável %c é %i e esta no endereço de memória %p\n", 'c', c, &c);
	exibir_variavel('c', &c);

	// Função: Calcular a soma do dobro de cada variável retornando a soma
	// Imprimir o valor de cada variável atualizado e a soma obtida na função
	// ... formato: variável1 (valor1) + variável2 (valor2) + variável3 (valor3) = resultado
	calcular_soma_dobro(&a, &b, &c);
	return 0;
}

int ler_valor_inteiro(char nome_variavel)
{
	int valor_lido = 0;
	printf("Entre com o valor da variavel %c : ", nome_variavel);
	scanf("%d", &valor_lido);
	return valor_lido;
}

void ler_valor_por_referencia(char nome_variavel, int *ponteiro)
{
	printf("Entre com o valor da variavel %c : ", nome_variavel);
	scanf("%d", ponteiro);
}

void exibir_variavel(char nome_variavel, int *ponteiro)
{
	printf("O valor da variável %c é %i e esta no endereço de memória %p\n", nome_variavel, *ponteiro, ponteiro);
}

void calcular_soma_dobro(int *ponteiro_a, int *ponteiro_b, int *ponteiro_c)
{
	int dobro_a = *ponteiro_a * 2;
	int dobro_b = *ponteiro_b * 2;
	int dobro_c = *ponteiro_c * 2;
	int resultado = dobro_a + dobro_b + dobro_c;
	printf("variável1 (%i) + variável2 (%i) + variável3 (%i) = %i", dobro_a, dobro_b, dobro_c, resultado);
}
