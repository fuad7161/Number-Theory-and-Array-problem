//Author: Fuadul Hasan(fuadul202@gmail.com)
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N   = 2e5 + 5;

ll subArraysum(ll a[],ll n,ll sum){
	ll curr_sum = a[0];
	ll st = 0;
	for(ll i=1;i<=n;i++){
		while(curr_sum > sum and st< i-1){
			curr_sum -= a[st];
			st++;
		}
		if(sum == curr_sum){
			cout<<st+1<<" "<<i<<endl;
			return 0;
		}
		if(i<n){
			curr_sum += a[i];
		}
	}

	cout<<-1<<endl;
	return 0;
}

int main(){
	
	
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];

		for(ll i=0;i<n;i++){
			cin>>a[i];
		}


		subArraysum(a,n,k);
	}


	

	return 0;
}