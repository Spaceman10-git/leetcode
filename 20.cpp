#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <unordered_map> 

using namespace std;

class Solution {
public:
    bool isValid(string s) {

    	unordered_map<char, char> bracs;
        bracs[')'] = '(';
        bracs['}'] = '{';
        bracs[']'] = '[';

        stack<char> st;
        int n = s.size();


        for(int i = 0; i < n; i++){

        	if(s[i] == '(' || s[i] == '{' || s[i] == '['){
        		st.push(s[i]);
        	}

	        else if(st.size() > 0 && st.top() == bracs[s[i]]){
	        	st.pop();
	        }
	    }

        return st.size() == 0;
    }
};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	return 0;
}