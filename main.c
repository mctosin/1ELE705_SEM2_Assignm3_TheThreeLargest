#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	float a[1000];
	int i, Q_elem_a;

	for (i = 1; i < argc; i++) {
		a[i - 1] = atof(argv[i]);
		fprintf(stderr, "%.2f ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1;

	// N�o modifique o c�digo acima

	// Encontre os tr�s maiores elementos do vetor de 
	// float a[]. Os tr�s valores devem ser retornados
	// segundo as regras explicadas adiante.
	// Ao desenvolver seu algoritmo, n�o � permitido
	// modificar ou duplicar o vetor a[].
	// Tamb�m n�o � permitido usar um algoritmo de 
	// ordena��o para compor o seu algoritmo.
	// Crie suas vari�veis aqui
	



	// Crie o corpo do seu c�digo aqui
	
	


	// A sa�da deve ser para a stdout e deve ser na forma de 
	// uma string contendo os 3 maiores elementos em ordem
	// decrescente, serados por um espa�o entre eles.
	// O �ltimo caractere da string deve ser o
	// pula linha '\n'. 
	// Exemplo: "<maior>< ><2o_maior>< ><3o_maior><\n>"
	// <  > servem para representar os componentes da string
	// e n�o devem ser impressos.
	// Os valores devem ser arredondados com 2 casas decimais.
	// Crie a sa�da para o programa de testes autom�tico aqui




	// N�o modifique o c�digo abaixo

	
	return 0;
}

