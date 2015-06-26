#include<iostream>
#include<string>
#include<regex>

int main(){
	int qtyUrls = 10;
	string words[qtyUrls];
	int value[qtyUrls];


	int t;
	cin >> t;

	int max = 0;
	
	for (int i = 0; i < qtyUrls; i++){
		string url;
		int rate;

		cin >> url;
		cin >> rate;

		if (rate > max) max = rate;
	}

	int min = max+1-t;	
	for (int i=0; i < t; i++){
		min = min + i;
		cout<<"Case #"<<i+1<<":"<<endl;
		for (int e=0; e<qtyUrls; e++){
			if  

