#include<iostream>
#include<algorithm>

using namespace std;

int middleOne(int a, int b, int c){
	int smaller = min(min(a,b), c);
	int greater = max(max(a,b) ,c);
	if ((a != smaller) && (a != greater)) return a;
	else if ((b != smaller) && (b != greater)) return b;
	else return c;
}


int main(){
	int qty;
	cin>>qty;

	for (int i=0; i<qty; i++){
		int a, b, c;
		cin>>a;
		cin>>b;
		cin>>c;

		cout<<"Case "<<i+1<<": "<<middleOne(a,b,c)<<endl;
	}
	return 0;
}
