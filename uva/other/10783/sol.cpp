#include <bits/stdc++.h>
#define endl "\n"
#define IO ios::sync_with_stdio(0), cin.tie(0),  cout.tie(0)
#define MAXN maxn
#define MOD modn

using namespace std;

signed main(){
    IO;
    int n, a, b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        a%2?a:a++;
        b%2?b:b--;
        //cout<<a<<' '<<b<<endl;
        int res = (a+b)*((b-a)/2+1)/2;
        cout<<"Case "<<i+1<<": "<<res<<endl;
    }
    return 0;
}
