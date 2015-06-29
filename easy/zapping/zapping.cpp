#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	while (true){
		int a, b;

		cin >> a;
		cin >> b;

		if ((a==-1) && (b==-1)) return 0;

		
		int pressesUp = (b-a) >= 0 ? b-a : 100 + b - a; 
		int pressesDown = (a-b) >= 0 ? a-b : 100 + a - b; 

		cout << (pressesUp > pressesDown? pressesDown : pressesUp)  << endl;
	}

	return 0;
}	
