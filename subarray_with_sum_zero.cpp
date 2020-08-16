//Author: Fuadul Hasan(fuadul202@gmail.com)
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N   = 2e5 + 5;

vector<pair<int,int>> findArray(int a[],int n){

	//creat an empty map
	unordered_map<int,vector<int>>map;
	vector<pair<int,int>>out;

	int sum = 0;

	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum == 0){
			out.push_back({0,i});
		}
		if(map.find(sum) != map.end()){
			vector<int> vc = map[sum];
			for(auto it: vc){
				out.push_back(make_pair(it+1,i));
			}
		}
		map[sum].push_back(i);
	}
	return out;
}

void print(vector<pair<int,int>>out){
	for(auto i: out){
		cout<<i.first<<" to "<<i.second<<endl;
	}
}


int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<pair<int,int>>out = findArray(a,n);

	print(out);
	

	return 0;
}