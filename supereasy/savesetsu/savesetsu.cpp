#include<iostream>

using namespace std;

int main(){
	int t;
	long long totalDonated = 0;
	cin >> t;

	while (t--){
		string op;
		cin >> op;
		if (op == "donate"){
			long long value;
			cin >> value;
			totalDonated += value;
		}

		else{
			cout << totalDonated << endl;
		}
	}

	return 0;
}
	      		      
