#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s , ans;
	cin>>s;
	
	for(int i = 0; i <s.length();i++){
	    if(s[i] == '#'){
	        if(!ans.empty()){
	            ans.pop_back();
	        }
	    }
	    else{
	        ans += s[i];
	    }
	}
	
	cout<<ans<<endl;

}
