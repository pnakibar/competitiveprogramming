#include<iostream>
#include<string>

using namespace std;
int main(){
	int t;
	cin>>t;

	for (int i = 0; i < t; i++) {
		int n;
		int max=0;

		cin >> n;

		while (n--){
			int k;
			cin >> k;
			if (k>max) max = k;
		}
		cout<<"Case "<<i+1<<": "<<max<<endl;
	}
	return 0;
}
