#include<iostream>

using namespace std;

int main(){
	while (true){
		string r;
		getline(cin, r);
		if (r == "\0") return 0;
		cout << r << endl;
	}

	return 0;
}
