#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	while(true){
		int init, n0, n1, n2;

		cin >> init;
		cin >> n0;
	      	cin >> n1;
		cin >> n2;	

		if ((init == 0) && (n0 == 0) && (n1 == 0) && (n2 == 0)) return 0;

		int degrees = 720;
		degrees += ((init - n0) > 0 ? init - n0 : 40 - (n0 - init)) * 9; //first clockwise
		degrees += 360;
		degrees += ((n1 - n0) > 0 ? n1 - n0 : 40 - (n0 - n1)) * 9; //counter clock wise
		degrees += ((n1 - n2) > 0 ? n1 - n2 : 40 - (n2 - n1)) * 9; //second clockwise

		cout << degrees << endl;
	}

	return 0;
}
