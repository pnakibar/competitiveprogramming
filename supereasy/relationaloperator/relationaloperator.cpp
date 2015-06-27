#include<iostream>

using namespace std;

int main(){
	int k;
	cin >> k;

	while (k--){
		long long a, b;
		cin >> a;
		cin >> b;

		if (a == b) cout<<"="<<endl;
		else if (a > b) cout<<">"<<endl;
		else cout<<"<"<<endl;
	}

	return 0;
}
