#include<iostream>
#include<string>

using namespace std;
int compare(string word1, string word2){
	int different = 0;
	for (int i=0; i<word1.length(); i++){
		if (word1[i] != word2[i]) different++;
	}
	return different;
}

int main(){
	int qty;
	string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	cin >> qty;
	cin.clear();

	for (int i=0; i<qty; i++){
		string word = "";
		cin >> word;

		for (int j=0; j<10; j++){
			if (compare(words[j], word)<=1){
			      cout<<(j+1)<<endl;
			      j = 10;
			}
		}

	}
}
		

