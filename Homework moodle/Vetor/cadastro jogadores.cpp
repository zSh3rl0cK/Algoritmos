#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	int N; //numero de atletas a serem cadastrados
	int i; //contador
	char nome[100]; //nome dos jogadores
	int idade[100]; //idade dos jogadores
	
	cin >> N;
	
	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(nome, 100);
		cin >> idade[i];
		
		if(idade[i] >= 18)
			cout << nome << " " << idade[i] << endl;
	}
	
	
	return 0;
}