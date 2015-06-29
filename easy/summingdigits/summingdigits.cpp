#include<iostream>
#include<string>

using namespace std;

string sumf(string s){
	long r = 0;

	for (int i=0; i<s.length(); i++){
		r += s[i] - '0';
	}

	string rf = to_string(r);
	return rf;
}
	


int main(){
	string k;
	long long t = 1;
	while (t++){
		cin >> k;

		if (k == "0") return 0;

		for (long long i=0; i<t; i++) k = sumf(k);
		cout<<k<<endl;
	}

	return 0;
}

