#include<iostream>
using namespace std;


int main(){
	for (int l=0; l<1000; l++){
		int n;
		cin >> n;

		if (n == 0) return 0;
		int treat = 0;
		for (int i=0; i<n; i++){
			int v;
			cin >> v;

			if (v) treat++;
			else treat--;
		} 

		cout << "Case "<<l+1<<": "<<treat<<endl;
	}
	return 0;
}
