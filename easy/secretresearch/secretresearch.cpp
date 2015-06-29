#include<iostream>
#include<string>

using namespace std;

int main(){
	int k;
	cin >> k;
	cin.ignore();

	for (int i=0; i<k; i++){
		string s;
		getline(cin, s);	

		if (s == "1" || s=="4" || s=="78") cout<<"+"<<endl;
		else if (s.length() > 1){
			if (s[0] == '9' && s[s.length()-1] == '4') cout<<"*"<<endl;
			else if (s.substr(s.length()-2, 2) == "35") cout<<"-"<<endl;
			else if (s.length() > 2){
				if (s.substr(0,3) == "190") cout<<"?"<<endl;
			}
		}

	}

	return 0;
}
