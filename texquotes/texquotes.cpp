#include<iostream>
#include<string>
#include<cmath>


using namespace std;


int main(){
	string quotes[2] = {"``", "''"};
	int q = 0;

	while (true){
		string phrase;
		getline(cin, phrase);
		if (phrase.length() == 0){
			return 0;
		}

		string::iterator it;



		for (it = phrase.begin() ; it < phrase.end(); ++it){
			string toPrint;

			if (*it == '\"'){
			       cout<<quotes[q];
			       q = abs(q - 1);
			}
			else{
				cout<<*it;
			}
		}

		cout<<endl;
	}			
}

