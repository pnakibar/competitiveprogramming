#include<iostream>
using namespace std;


int main(){
	int tests;
	cin >> tests;

	int instruction[100*100]; //100*100 because maximum T multiplied by maxium N

	//number of tests
	for (int t=0; t<tests; t++){
		int p = 0;

		int qtyIns;
		cin >> qtyIns;
		

		//number of instructions
		for (int i=0; i<qtyIns; i++){
			string ins; //instruction
			cin >> ins;
			
			if (ins == "LEFT"){
				instruction[i] = -1;
				p--;
			}
			else if (ins == "RIGHT"){
				instruction[i] = 1;
				p++;
			}
			else{
				// 'same as i' instruction
				cin >> ins; //hack to ignore the 'as'

				int numberIns;
				cin >> numberIns; //getting the 'i'

				numberIns--; //descreasing because array

				instruction[i] = instruction[numberIns]; //replicating the instruction
				p = p + instruction[numberIns]; //adding the instruction to p
			}
		}

		cout<<p<<endl;
	}
	return 0;
}
