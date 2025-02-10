#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int i; //contador
	int N; //num de casos
	int X[100]; //N numeros inteiros
	int Y[100]; //N numeros inteiros
	char Op[100]; //operadores matemáticos
	float Cal[100]; //numero calculado

	//inserindo o num de casos
	cin >> N;
	
	//inserindo N numeros inteiros para o conjunto X
	for(i = 0; i < N; i++)
		cin >> X[i];
	
	//inserindo N numeros inteiros para o conjunto Y
	for(i = 0; i < N; i++)
		cin >> Y[i];
	
	//inserindo N operadores aritmetcos a serem usados
	for(i = 0; i < N; i++)
		cin >> Op[i];
	
	//Calculando e imprimindo o resultado das operacoes entre X e Y
	for(i = 0; i < N; i++)
	{
		if(Op[i] == '/')
		{
			//definido 2 casas decimais para um resultado real
			if(X[i]%Y[i] != 0)
				cout << fixed << setprecision(2);
			
			Cal[i] = 1.0*X[i]/Y[i];
		}
		else if(Op[i] == '*')
			Cal[i] = X[i]*Y[i];
		else if(Op[i] == '+')
			Cal[i] = X[i]+Y[i];
		else if(Op[i] == '-')
			Cal[i] = X[i]-Y[i];
		
		cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << Cal[i] << endl;
	}
	
	return 0;
}