#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao;
	int valor;
	int continuar = 1;
	while (continuar == 1)
	{
		printf("Calculadora de Conversao de Base, escolha opcao;\n");
		printf("1 - para converter Decimal para Hexadecimal\n");
		printf("2 - para converter Hexadecimal pra Decimal\n");
		printf("0 - para encerrar o programa\n");
		printf("\nInforme opcao: ");
		scanf_s("%d", &opcao);

		if (opcao == 1)
		{
			printf("\nInformar valor em decimal para conversao: ");
			scanf_s("%d", &valor);
			printf("\n%d em Hexadecimal e: %x \n\n", valor, valor);

		}
		else if (opcao == 2)
		{
			printf("\nInformar valor em Hexadecimal para conversao: ");
			scanf_s("%x", &valor);
			printf("\n%x em Decimal e: %d \n\n", valor, valor);
		}
		else if (opcao == 0)
		{
			printf("Programa finalizado!");
			continuar = 0;
		}
		else
			printf("valor invalido!");
	}
}

