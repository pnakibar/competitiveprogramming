#include<iostream>

using namespace std;
#define NE(x,y) (((x>0) && (y>0))? 1 : 0)
#define NO(x,y) (((x<0) && (y>0))? 1 : 0)
#define SO(x,y) (((x<0) && (y<0))? 1 : 0)
#define SE(x,y) (((x>0) && (y<0))? 1 : 0)

int main(){
	while (true){
		long k;
		cin >> k;
		
		if (!k) return 0;

		long m, n;
		cin >> n;
		cin >> m;

		for (int i=0; i<k; i++){
			long x, y;

			cin >> x;
			cin >> y;

			if (NE(x-n, y-m)) cout<<"NE"<<endl;
			else if (NO(x-n, y-m)) cout<<"NO"<<endl;
			else if (SO(x-n, y-m)) cout<<"SO"<<endl;
			else if (SE(x-n, y-m)) cout<<"SE"<<endl;
			else cout<<"divisa"<<endl;
		}
	}


	return 0;
}
