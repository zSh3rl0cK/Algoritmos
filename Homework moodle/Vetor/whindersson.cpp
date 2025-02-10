#include <iostream>

using namespace std;

int main()
{	
	
	int numVideos;
	int views[1000];
	int videosMenos;
	int videosMais;
	int i;
	
	cin >> numVideos;
	
	for(i = 0; i < numVideos; i++)
		cin >> views[i];
	
	videosMenos = 0;
	videosMais = 0;
	
	for(i = 0; i < numVideos; i++)
	{
		if(views[i] > 10000000)
			videosMais += 1;
		
		if(views[i] < 10000000)
			videosMenos += 1;
	}
	
	cout << videosMais << " video(s) com mais de 10M views\n";
	cout << videosMenos << " video(s) com menos de 10M views\n";

	
	return 0;
}