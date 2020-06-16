#include<iostream>
#include<unordered_set>
#include<map>
using namespace std;

int main(){

	string J ="evr";
	string S ="fsdelqgvwn";
    
    /*
	int freq_stones[58] = {0};
    int freq_jewels[58] = {0};
        
    for(int i=0;i<S.size();i++)
        freq_stones[S[i]-'A']++;
        
    for(int i=0;i<J.size();i++)
        freq_jewels[J[i]-'A']++;
        
    int sum=0;
        
    for(int i=0; i<58; i++){
        if(freq_stones[i]!=0 && freq_jewels[i]!=0){ 
            sum += freq_stones[i];
        }
    }
    cout<<sum;
    */

    /*
    unordered_set<char> hs;
    for(char x : J)
        hs.insert(x);
    
    int count=0;
    for(int i=0;i<S.size();i++){
        if(hs.find(S[i])!=hs.end()){
            count++;
        }
    }

    cout<<count;
    */

    
    map<char,int>m;
    for(auto it:  S) m[it]++;
    int ans = 0;
    for(auto it: J) ans += m[it];
    
    cout<<ans;
     
     
	return 0;
}