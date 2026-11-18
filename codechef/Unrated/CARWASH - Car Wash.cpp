#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin>>T;
	
	while(T--){
	    int N,M,K;
	    cin>>N>>M>>K;
	    
	    vector<pair<int,int>> v(K);
	    
	    for(int i = 0;i<K;i++){
	        cin>>v[i].first>>v[i].second;
	    }
	    sort(v.begin(),v.end());
	    
	    vector<int> dp;
	    
	    for(int i=0;i<K;i++){
	        int y = v[i].second;
	        
	        auto it = upper_bound(dp.begin(),dp.end(),y);
	        
	        if(it == dp.end()){
	            dp.push_back(y);
	        }
	        else{
	            *it = y;
	        }
	    }
	    
	    long long ans = (long long)N+M-1+dp.size();
	    
	    cout<<ans<<endl;
	}

}
