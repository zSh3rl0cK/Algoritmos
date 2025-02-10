#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct info
{
    char nome[50]; //nome do padawan
    int nota[1000]; //bota tirada no teste
};

int main()
{
    
    info padawan; // informacoes dos padawans
    int N; // numero de padawans
    int i; // contador
    float soma; // s0ma das notas
    float media; // media das notas
    float maior; // maior nota
    char melhor[50]; // nome do melhor padawan
    
    // valores iniciais de maior e a soma
	maior = 0;
    soma = 0;
    
    // lendo o numero padawans
    cin >> N;
    
    // lendo o nome do padawan e sua nota
    for(i = 0; i < N; i++)
    {
		cin.ignore();
        cin.getline(padawan.nome, 20);
        cin >> padawan.nota[i];
        
        if(padawan.nota[i] > maior)
        {
            maior = padawan.nota[i];
            strcpy(melhor, padawan.nome);
        }
        
        soma = soma + padawan.nota[i];
    }
    
    // calculando a media
    media = soma/N;
    
    // imprimindo o padawan com a maior nota, seus pontos e a media
    cout << "Padawan com mais pontos: " << melhor << endl;
    cout << "Pontos: " << maior << endl;
    
    // definindo o numero de casas decimais
    cout << fixed << setprecision(2);
    
    cout << "Media da turma: " << media << endl;
    
    return 0;
}