#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int N; //numero a ser inserido
	int tab[11]; //tabuada
	int i; //contador
	
	//inserindo o numero 
	cin >> N;
	
	//calculando a tabuada de N e imprimindo-a
	for(i = -1; i <= 10; i++)
	{
		tab[i] = N*i;
		
		cout << N << " X " << i << " = " << tab[i] << endl;
	}

	return 0;
}