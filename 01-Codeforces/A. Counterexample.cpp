#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,m;
    cin>>n>>m;
    if(m-n<=1){
        cout<<-1<<endl;
        return 0;
    }
    if(m-n<=2&&n%2==1){
        cout<<-1<<endl;
        return 0;
    }
    ll a;
    if(n%2==0) a=n;
    else a=n+1;
    cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    return 0;
}
