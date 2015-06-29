#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	cout << "Lumberjacks:" << endl;
	while(n--){
		int anterior, actual;

		cin >> anterior;	
		cin >> actual;

		int increasing = (actual > anterior? 1:0);


		int ordered = 1;

		for (int i = 0; i < 8; i++) {
			anterior = actual;
			cin >> actual;

			if (increasing){
				if (actual < anterior){
					ordered = 0;		
				}
			}
			else {
				if (anterior < actual){
					ordered = 0;
				}
			}

		}
		if (ordered) cout << "Ordered" << endl;	
		else cout << "Unordered" << endl;
	}
	
	return 0;
}
