#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    string S;
	    cin>>N>>S;
	    
	    int count = 0;
	    char prev = ' ';
	    int ans = 0;
	    
	    for(int i = 0;i<N;i++){
	        if(S[i] == prev){
	            count++;
	        }else{
	            prev = S[i];
	            count = 1;
	        }
	        if(count == 3){
	            ans++;
	            count = 0;
	            prev = ' ';
	        }
	    }
	    cout<<ans<<endl;
	}

}
