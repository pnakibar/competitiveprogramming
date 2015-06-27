#include<iostream>

using namespace std;

int main(){
	int tests;
	cin >> tests; 

	for (int t = 0; t < tests; t++){
		int numberOfCalls;

		cin >> numberOfCalls;


		int totalPaidJuice = 0;
		int totalPaidMile = 0;

		for (int n=0; n<numberOfCalls; n++){
			int time;
			cin >> time;

			totalPaidMile += ((time/30) + 1) * 10;
			totalPaidJuice += ((time/60) + 1) * 15;
		}

		

		cout<<"Case "<<t+1<<": ";
		if (totalPaidMile == totalPaidJuice){
			cout<<"Mile Juice "<<totalPaidJuice<<endl;
		}
		else if (totalPaidMile > totalPaidJuice){
			cout<<"Juice "<<totalPaidJuice<<endl;
		}
		else{
			cout<<"Mile "<<totalPaidMile<<endl;
		}
	}
	return 0;
}
		


