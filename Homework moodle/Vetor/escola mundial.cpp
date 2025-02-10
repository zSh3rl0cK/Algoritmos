#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int numAlunos; //numero de alunos
	int notas[100]; //notas
	int i; //contador
	float media; //media da turma
	int soma; //soma das notas
	int alunosAbaixo; //alunos com nota abaixo da media
	int alunosAcima; //alunos com nota acima da media
	
	//inserindo o numero de alunos
	cin >> numAlunos;
	
	soma = 0;
	
	//inserindo as notas e somando-as
	for(i = 0; i < numAlunos; i++)
	{
		cin >> notas[i];
		
		soma += notas[i];
	}

    //definindo o numero de casas decimais
	cout << fixed << setprecision(2);
	
	//valor inicial de alunos acima e abaixo da media
	alunosAbaixo = 0;
	alunosAcima = 0;
	
	//calculando
	media = 1.0*soma/numAlunos;
	
	//checando a quantidade de alunos acima e abaixo da media
	for(i = 0; i < numAlunos; i++)
	{
		
		if(notas[i] >= media)
			alunosAcima += 1;
		
		if(notas[i] < media)
			alunosAbaixo += 1;
	}
	
	//imprimindo os resultados
	cout << "Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << alunosAcima << endl;
	cout << "Alunos com nota abaixo da media: " << alunosAbaixo << endl;
	
	return 0;
}