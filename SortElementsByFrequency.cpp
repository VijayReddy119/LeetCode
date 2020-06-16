#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){

	string s = "Aabb";
	int freq_count[52]={0};
	int max_idx = 0;
	vector<string> v;

	for(int i=0; i<s.size(); i++)
		freq_count[s[i]-'a']++;

	int j=0;
	for(int i=0; i<s.size(); i++){
		if(freq_count[s[i]-'a'] > max_idx){
			
		}
	}
	for(string x: v){
		cout<<x;
	}
	return 0;
}