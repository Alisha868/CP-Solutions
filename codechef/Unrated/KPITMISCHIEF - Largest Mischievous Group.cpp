#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	string s;
	cin>>s;
	
	int maxLen = 0;
	int start = 0;
	int end = 0;
	
	int i = 0;
	
	while(i<N){
	    if(s[i]== 'm'){
	        int j = i;
	        while(j<N && s[j] == 'm'){
	            j++;
	        }
	        int len = j - i;
	        
	        if(len>maxLen){
	            maxLen = len;
	            start = i;
	            end = j-1;
	        }
	        i=j;
	    }
	    else{
	        i++;
	    }
	}
	cout<<start<<" "<<end<<endl;

}
