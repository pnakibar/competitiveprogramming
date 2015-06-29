#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	for (int i=0; i<t; i++){
		int max = 0;

		string urls[10];
		int importances[10];

		for (int c=0; c<10; c++){
			cin >> urls[c];
			cin >> importances[c];

			if (importances[c] > max) max = importances[c];
		}

		cout<<"Case #"<<i+1<<":"<<endl;

		for (int c=0; c<10; c++)
			if (importances[c] == max)
				cout<<urls[c]<<endl;
	}

	return 0;
}
