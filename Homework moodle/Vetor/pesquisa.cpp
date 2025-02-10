#include <iostream>

using namespace std;

int main()
{
	
	int numeros[100]; //numeros a serem inseridos
	int X; //numero a ser pesquisado
	int i; //contador
	int N; //numero de casas dentro do vetor
	int encont; //numero encontrado ou nao
	int aux; //variavel auxiliar
	
	cin >> aux;
	
	while(aux != 0)
	{
	    numeros[i] = aux;
	    i++;
	    cin >> aux;
	    N++;
	}
	
	//inserindo o numero para ser pesquisado
	cin >> X;
	
	//atribuindo um valor inicial para encontrado
	encont = 0;
	
	//procurando por X nos numeros
	for(i = 0; i < N;i++)
	{
		if(X == numeros[i])
		{
			encont = 1;
			
			cout << "Elemento " << X << " encontrado na posicao " << i << endl; 
		}
	}
	
	//se X nao for encontrado
	if(encont != 1)
		cout << "Elemento " << X << " nao foi encontrado" << endl;
	
	return 0;
}