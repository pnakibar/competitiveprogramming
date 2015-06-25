#include<iostream>
using namespace std;

int main(){
	int n, m, size, i;
	cin>>size;
	for (i=0; i<size; i++){
		cin>>n;
		cin>>m;

		int result = (n/3)*(m/3);
		cout<<result<<endl;	
	}

	return 0;
}
