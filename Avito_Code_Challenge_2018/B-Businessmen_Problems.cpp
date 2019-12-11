#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pi pair<int,int>
#define ppi pair<int,pi >
#define ld long double
#define pb push_back
#define mod 1000000007
#define F first
#define S second

int modular(int a,int b,int c){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return modular(((a*a)%c),b/2,c);
    }else{
        return ((a%c)*(modular(((a*a)%c),b/2,c)%c))%c;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ;
    cin >> n ;

    map<int,int> m ;

    for (int i = 0 ; i < n ; i++) {
        int a,b ;
        cin >> a >> b ;

        m[a] = b ;
    }

    cin >> n ;
    for (int i = 0 ; i < n ; i++) {
        int a,b ;
        cin >> a >> b ;

        m[a] = max(m[a], b) ;
    }

    int ans = 0 ;
    for (auto it: m) {
        ans += it.S ;
    }
    cout << ans << endl ;

    return 0;
}
