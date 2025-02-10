#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int numVotos; //numero de votos
	int opiniao[1000]; //gostaram ou nao gostaram?
	int like;
	int deslike;
	int i;
	
	cin >> numVotos;
	
	like = 0;
	deslike = 0;
	
	for(i = 0; i < numVotos; i++)
		cin >> opiniao[i];
	
	for(i = 0; i < numVotos; i++)
	{
		if(opiniao[i] > 0)
			like += 1;
		else
			deslike += 1;
	}
	
	if(like > deslike)
		cout << "A maioria gostou" << endl;
	else if(like < deslike)
		cout << "A maioria nao gostou" << endl;
	else
		cout << "Deu empate" << endl;
	
	return 0;
}