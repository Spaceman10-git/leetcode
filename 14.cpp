#include <iostream>
#include <bits/sttdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> &strs){
	int flag = true;
	int maxIndex = -1;
	int n = strs.size();
	int min = INT_MAX;
	for(int i = 0; i < n; i++){
		if(strs[i].length() < min) min = strs[i].length();
	}
	while(flag && maxIndex < min-1){
		char cur = strs[0][maxIndex+1];
		for(int i = 1; i < n; i++){
			if(strs[i][maxIndex+1] != cur){
				flag = 0;
				break;
			}
		}
		if(flag) maxIndex++;
	}
	string ans(strs[i][0], 0, maxIndex+1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}