#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int testCases;
	cin >> testCases;

	for (int t = 0; t < testCases; t++){
		int qtyStores;
		cin>>qtyStores;

		int stores[qtyStores];

		double bestParkingSpot = 0;
		for (int s = 0; s < qtyStores; s++){
			cin>>stores[s];
			bestParkingSpot = bestParkingSpot + stores[s]; 
		}

		bestParkingSpot = bestParkingSpot/qtyStores;
		
		sort(stores, stores + qtyStores);

		double total = bestParkingSpot - stores[0];
		for (int i=0; i<qtyStores-1; i++){
			total = total + stores[i+1] - stores[i];
		}	
		total = total + stores[qtyStores-1] - bestParkingSpot;

		cout<<total<<endl;
	}
	
	return 0;
}
		 
