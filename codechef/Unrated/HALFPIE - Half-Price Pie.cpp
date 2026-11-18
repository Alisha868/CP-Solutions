#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    
	    long long A[105];
	    long long sum = 0;
	    
	    for(int i =0;i<N;i++){
	        cin>>A[i];
	        sum+=A[i];
	    }
	    
	    long long mini = LLONG_MAX;
	    
	    for(int i =0;i<N-1;i++){
	        mini = min(mini,A[i]+A[i+1]);
	    }
	    cout<<sum-mini/2<<endl;
	}

}
