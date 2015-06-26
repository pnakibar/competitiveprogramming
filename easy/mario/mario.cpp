#include<iostream>
#include<string>
using namespace std;

int main(){
	int testCases;
	cin >> testCases;

	for (int t = 0; t < testCases; t++){
		int nWalls;
		cin >> nWalls;
		
		int highJumps = 0;
		int lowJumps = 0;	

		int actual;
		cin >> actual;
		for (int n=0; n<nWalls-1; n++){
			int next;
			cin >> next;
			
			if (next > actual) highJumps++;
			if (actual > next) lowJumps++;
			
			actual = next;
		}

		cout << "Case "<<t+1<<": "<<highJumps<<" "<<lowJumps<<endl;
	}

	return 0;
}
