#include<iostream>
using namespace std;


int main(){
	int t;
	cin >> t;
	
	for (int i=0; i<t; i++){
		int l, w, h;
		cin >> l;
		cin >> w;
		cin >> h;

		cout<<"Case "<<(i+1)<<": ";
		if ((l>20) || (w>20) || (h>20)){
			cout<<"bad";
		}
		else cout << "good";
			
		cout<<endl;
	}
}
