#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    
	    vector<long long> A(N);
	    long long sum = 0,mx = 0;
	    
	    for(int i = 0;i<N; i++){
	        cin>>A[i];
	        sum += A[i];
	        mx = max(mx,A[i]);
	    }
	    long long ans = sum - mx;
	    
	    for(int i = 0;i<N;i++){
	        long long newSum = sum + A[i];
	        
	        long long newMax = max(mx,2*A[i]);
	        
	        long long score = newSum - newMax;
	        
	        ans = max(ans,score);
	    }
	    cout<<ans<<endl;
	}

}
