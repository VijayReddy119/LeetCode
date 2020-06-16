#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=2147483647;
	int mask = 1;

	while(mask < n)
		mask = (mask<<1)+1;

	cout<< (n^mask);

	return 0;
}