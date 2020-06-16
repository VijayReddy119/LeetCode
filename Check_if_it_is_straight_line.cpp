#include<iostream>
#include <vector>
using namespace std;

int main(){

	//vector<vector<int>> coordinates{{1,2}, {2,3}, {3,4}};
	//vector<vector<int>> coordinates{{-3,-2}, {-1,-2}, {2,-2}, {-2,-2}, {0,-2}};
	vector<vector<int>> coordinates{{-5,1}, {-4,-1}, {-7,4}, {-7,7}, {5,-7}, {-3,2}, {2,-5}};

	int slope=0;
	
	if((coordinates[0][1] - coordinates[1][1])!=0)
		slope = (coordinates[0][0]-coordinates[1][0])/(coordinates[0][1] - coordinates[1][1]);

	for(int i=1; i <coordinates.size()-1; i++) { 
		int next_slope = 0;
		if((coordinates[i][1] - coordinates[i+1][1])!=0)
			next_slope = (coordinates[i][0]-coordinates[i+1][0])/(coordinates[i][1] - coordinates[i+1][1]);
		
		cout<<slope<<"    "<<next_slope<<"   \n";

		if(slope!=next_slope){
			cout<<"Not a St.Line";
		}else{
			slope = next_slope;
		}
	}
	cout<<"\nSt. Line";
	return 0;
}