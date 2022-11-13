#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll M =1000000007;
ll arr[1000001];
void factorial(){
    arr[0]=0;
    arr[1]=1;
    for(ll i=2;i<10000000;i++){
        arr[i]=((i*arr[i-1])%M)%M;
    }
}
int main() {
    factorial();
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll s=0;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto trav:mp){
            s=(s+(arr[trav.first]*trav.second)%M)%M;
        }
        cout<<s<<endl;
    }
	// your code goes here
	return 0;
}
