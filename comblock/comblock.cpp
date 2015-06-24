#include<iostream>
#include<cmath>
using namespace std;
int turn(int actual, int next){
	int degrees = 360/40;
	return abs(next-actual)*degrees;
}
int main(){
	int a,b,c,d;
	do{
		int result = 720;

		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;

		result = result + turn(a, b);
		result = result + turn(b, c);
		result = result + turn(c, d);

		cout<<result<<endl;
	}while ((a!=0) && (b!=0) && (c!=0) && (d!=0));
}

