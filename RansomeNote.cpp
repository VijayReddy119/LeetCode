#include<iostream>
#include<unordered_map>
using namespace std;

static auto _______ = [](){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();


int main(){

	string ransomNote = "aa";
	string magazine = "aab";
	
	/*
	unordered_map<char, int> hm;
	for(int i=0; i<magazine.size(); i++){
		hm[magazine[i]]++;
	}
	for(int i=0; i<ransomNote.size(); i++){
		--hm[ransomNote[i]];
		if(hm[ransomNote[i]] < 0){
			cout<<"False"<<"\n";
			return 0;
		}
	}
	cout<<"True";
	*/

	int freq_count[128]={0};

	for(int i=0; i<magazine.size(); i++){
		freq_count[magazine[i]]++;
	}
	for(int i=0; i<ransomNote.size(); i++){
		--freq_count[ransomNote[i]];
		if(freq_count[ransomNote[i]] < 0){
			cout<<"False";
		}
	}

	cout<<"True";

	return 0;
}