#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

	vector<int> nums{1,2,2,4};
	unordered_map<int,int> hm;
    
    for(int i=1; i<=nums.size(); i++)
    	hm.insert({i,0});
    
    int num=0;
        for(int i=0; i<=nums.size(); i++){
        	hm[nums[i]]++;
        	if(hm[nums[i]] == 2)
        		num = nums[i];
        }
        
        for(auto it : hm){
            if(it.second==0){
                cout<<num<<" "<<it.first;
                break;
            }
        }

	return 0;
}