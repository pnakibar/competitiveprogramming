#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int testCases;
	cin >> testCases;
	
	while(testCases--){
		int numberOfFarmers;
		cin >> numberOfFarmers;
		double result = 0;
		while(numberOfFarmers--){
			double size, numberAnimals, enviromentFriendly;

			cin >> size;
			cin >> numberAnimals;
			cin >> enviromentFriendly;
			if ((size > 0) && (numberAnimals > 0) && enviromentFriendly > 0){
				double premium = (size/numberAnimals)*enviromentFriendly; 	
				result += premium * numberAnimals;
			}
		}
		long res = result;
		cout << res << endl;
		//cout << result << endl;
	}

	return 0;
}
