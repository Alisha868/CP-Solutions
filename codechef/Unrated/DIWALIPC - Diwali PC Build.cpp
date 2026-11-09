#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int P,D,K,B;
	    cin>>P>>D>>K>>B;
	    
	    int total = P+(D*K);
	    
	    if(total <= B){
	        cout<<"YES"<<endl;
	        
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;

}
