#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    ll ar[30];
    memset(ar,0,sizeof(ar));
    getline(cin,s);
    //cout<<"here is="<<s<<endl;
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            ll x=s[i]-'a';
            //cout<<x<<endl;
            if(ar[x]<=0){
                ar[x]++;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}

