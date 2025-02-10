#include <iostream>

using namespace std;

int main()
{	
	
	int amizades[1000];
	int i;
	int N;
	int maiorNumC;
	int menorNumC;
	
	cin >> N;
	
	for(i = 0; i < N; i++)
		cin >> amizades[i];
	
	maiorNumC = 0;
	menorNumC = 10000;
	
	for(i = 0; i < N; i++)
	{
		if(maiorNumC < amizades[i])
			maiorNumC = amizades[i];
		
		if(menorNumC > amizades[i])
			menorNumC = amizades[i];
	}
	
	cout << "Menor numero de contatos: " << menorNumC << endl;
	cout << "Maior numero de contatos: " << maiorNumC << endl;
	
	return 0;
}