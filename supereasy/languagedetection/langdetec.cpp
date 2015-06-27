#include<iostream>
#include<string>
using namespace std;

int main(){
	string words[] = {"HELLO"  , "HOLA"   , "HALLO" , "BONJOUR", "CIAO"   , "ZDRAVSTVUJTE"};
	string langs[] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH" , "ITALIAN", "RUSSIAN", "UNKNOWN"};
	int qty = 6;

	for (int i = 0; i < 2000; i++){
		string word;
		cin >> word;
		
		if (word == "#") return 0;

		for (int j=0; j<7; j++){

			if (j == 6){
			       cout<<"Case "<<i+1<<": "<<langs[j]<<endl;
			}

			else if (words[j] == word){
				cout<<"Case "<<i+1<<": "<<langs[j]<<endl;
				j = 8;
			}
		}
	}

	return 0;
}
