#include<iostream>
#include<string>
using namespace std;

int main(){
	int i = 1;
	string output = "Hajj-e-";
	string cases = "Case ";

	while (true){
		string name;
		cin>>name;

		if (name == "*"){
			return 0;
		}

		if (name == "Hajj")
			cout<<cases<<i<<": "<<output<<"Akbar"<<endl;
		else
			cout<<cases<<i<<": "<<output<<"Asghar"<<endl;
		i++;
	}
}
