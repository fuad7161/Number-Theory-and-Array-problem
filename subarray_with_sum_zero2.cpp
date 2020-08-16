#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    ll sum = 0;
	    ll cnt = 0;
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++){
	        sum += a[i];
	        if(sum == 0) cnt++;
	       	cnt+=m[sum];
	        m[sum]++;
	    }
	    cout<<cnt<<endl;
	}
	
	return 0;
}