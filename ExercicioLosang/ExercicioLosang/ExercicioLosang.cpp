// ExercicioLosang.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

//IMPORTANTE
//esse eu fiz em java primeiro, l� funciona .. mas n�o sei como concatenar e nem a declarar stings em C (n�o aprendi ainda!)
//e como demorei muito para entender e conseguir instalar as ferramentas necess�rias (principalmente o github)
//e tamb�m sem tempo devido estudar para provas de outras mat�rias, e meu trabalho ...
//tive que entregar assim mesmo! Eu vi a l�gica dos meus amigos e compreendi o que fizeram,
//mas n�o vale copiar! Professor ... espero que considere.
//Aline Castro


int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	int resp = 0;
	char linha;
	int a;
	int b;
	

	printf("Digite a quantidade de linhas: ");
	scanf("%d", &resp);

	while ((resp == 0) || (resp < 1) || (resp > 19))
	{
		printf("Digite um numero entre 1 e 19: ");
		scanf("%d", &resp);

	}

	for (a = 0; a < resp; a++){

		linha = '*';
	
		for (b = 0; b < a; b++){
		
			linha = '*' + linha + '*';

		}

		for (b = 0; b < resp - a; b++){
		
			linha = ' ' + linha + ' ';
		
		}

		printf("%s", linha);
	
	}

	for (a = resp - 2; a >= 0; a--){
	
		linha = '*';

		for (b = 0; b < a; b++){
		
			linha = '*' + linha + '*';
		
		}

		for (b = 0; b < resp - 1; b++){
		
			linha = ' ' + linha + ' ';
		
		}

		printf("%s", linha);
	
	}


	scanf("%d", &i);
	return 0;
}

