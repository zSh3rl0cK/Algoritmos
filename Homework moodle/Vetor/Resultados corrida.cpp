#include <iostream>

using namespace std;

int main()
{
	
	int i; //contador
	int j; //contador 2
	int N; //numero de corredores
	float tempo[100]; //resultado dos corredores
	float tempoA[100];
	float auxi; //auxiliar tempo dos corredores
	float aux2;
	

	N = 0;
	i = 0;
	
	cin >> aux2;
	
	do
	{
		tempo[i] = aux2;
		i++;
		cin >> aux2;
		N++;
	}
	while(aux2 != -1);
	
	for(i = 0; i < N; i++)
	{
		auxi = tempo[i];
		
		j = 0;
		
		for(j = 0; j < N; i++)
		{
			if(auxi > tempo[j])
			{
				auxi = tempo[j];
				tempoA[j] = auxi;
			}
		}
		
	}
	
	for(i = 0; i < N; i++)
	{
		cout << tempoA[i] << endl;
	}
			
	return 0;
}