#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
	string song[]= {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	int songLength = (sizeof(song)/sizeof(*song));
	cout << songLength << endl;


	int qtyOfPeople;
	cin >> qtyOfPeople;
	
	string people[qtyOfPeople];
	for (int i=0; i<qtyOfPeople; i++){
		cin>>people[i];
	}
	
	int p = 0;
	int qtyOfLoops = (int) qtyOfPeople/songLength;
	
	for (int l = 0; l<=qtyOfLoops; l++){
		for (int s = 0; s<songLength;s++){
			if (p>=qtyOfPeople){
				p=0;
			}

			cout << people[p] << ":" << song[s] << endl;

			p++;
		}
	}

	return 0;
}




			
