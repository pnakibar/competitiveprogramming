#include<iostream>

using namespace std;

bool inArray(int number, int arr[]){
	int sizeArr = (sizeof(arr)/sizeof(*arr));
	
	for (int i=0; i<sizeArr; i++)
		if (arr[i] == number) return true;

	return false;
}

int main(){
	
	while (true){
		int k; //courses
		int m; //categories

		cin >> k;
		
		if (k==0) return 0;

		cin >> m;
		int selectedcourses[k];

		//inserting courses selected
		for (int i=0; i<k; i++){
			cin >> selectedcourses[i];
		}

		int qtyOfOk = 0;

		for (int i=0; i<m; i++){
			int qtyOfCourses;
			int qtyNecessaryToPass;
			cin >> qtyOfCourses;
			cin >> qtyNecessaryToPass;

			int passed = 0;
			for (int j=0; j<qtyOfCourses; j++){
				int course;
				cin >> course;

				//analyzing selected courses array
				for (int r=0; r<k; r++){
					if (selectedcourses[r] == course){
						passed++;
					}
				}
				
			}
			if (passed >= qtyNecessaryToPass)
				qtyOfOk++;
		}
		//finally the yes or no
		if (qtyOfOk >= m)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	
	return 0;
}
