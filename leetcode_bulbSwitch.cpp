#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int n;
	std::cin>>n;
	std::cout<<(int)sqrt(n);

	/*vector<bool> v;

	for(int i=0;i<n;i++){
		v.push_back(true);
	}
	
	for(int i=2;i<n;i++){
		for(int j=0;j<n;){
			if(v[j])
				v[j] = false;
			else
				v[j]= true;

			j += i;
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	
	int count=0;
	for(int i=0;i<n;i++){
		if(v[i]){
			count++;
		}
	}

	cout<<count<<" "<<sqrt(n);*/
	return 0;
}