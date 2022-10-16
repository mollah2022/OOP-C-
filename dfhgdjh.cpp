#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	int mx=0;
	unordered_map<int,int>mp;
	cin>>tc;
	int n= (tc*(tc-1))/2;
	while(n--)
	{
	    int arr[4];

	    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	    if(arr[2]>arr[3]){
	        mp[arr[0]]+=4;
	    }
	    else if(arr[3]>arr[2]){
	        mp[arr[1]]+=4;
	    }
	    else if(arr[2]==arr[3])
	    {
	        mp[arr[1]]+=1;
	        mp[arr[0]]+=1;
	    }
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
	for(auto i: mp)
	{
	    minh.push({i.second,i.first});
	}
	cout<<minh.top().second-1;
	return 0;
}
