#include<stdio.h>
/*
* Aula de 20.set.24;
* Versão 1.0 da criação na linguagem C de 
* um software que implemente os critérios de aprovação 
* da presente UC.
* Haverá uma versão 2.0 com os critérios finais.
*/

int main(int argc, char const *argv[]) // os agumentos argc e argv não sã relevante;
{
	// declaração de variáveis necessárias para recolha e manipulação de dados;
	int notaComponenteTeorica, notaComponentePratica;
    float notaFinal;
	
	//recolha de dados 
	printf(" Introduza o Valor da Componente Teorica:");
	scanf("%d",&notaComponenteTeorica);
	printf(" Introduza o Valor da Componente Pratica:");
	scanf("%d",&notaComponentePratica);
	
	// Cálculo da nota final
	notaFinal=notaComponenteTeorica*0.4 + notaComponentePratica*.6;
	
	// outuput em função do valor da nota final	
	if(notaFinal>=9.5)
		printf(" Aluno APROVADO com da nota final: %2.1f", notaFinal);
	else
		printf(" Aluno NAO APROVADO");
	return 0;
}