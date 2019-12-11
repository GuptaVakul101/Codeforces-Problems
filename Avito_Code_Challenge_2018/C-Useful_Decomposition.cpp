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

    int e[n+1] = {0} ;
    int a[n+1] = {0} ;
    int b[n+1] = {0} ;

    for (int i = 0 ; i < n-1 ; i++) {
        cin >> a[i] >> b[i] ;

        e[a[i]]++ ;
        e[b[i]]++ ;
    }

    int spv = 0 ;
    int ver = -1 ;
    for (int i = 1 ; i <= n ; i++) {
        if (e[i] > 2) {
            spv++ ;
            ver = i ;
        }
    }

    if (spv == 1) {
        cout << "Yes" << endl ;
        int c = 0 ;
        for (int i = 1 ; i <= n ; i++) {
            if (e[i] == 1) {
                c++ ;
            }
        }

        cout << c << endl ;
        for (int i = 1 ; i <= n ; i++) {
            if (e[i] == 1) {
                cout << ver << " " << i << endl ;
            }
        }
    }
    else if (spv == 0) {
        cout << "Yes" << endl ;
        cout << 1 << endl ;
        for (int i = 1 ; i <= n ; i++) {
            if (e[i] == 1) {
                cout << i << " " ;
            }
        }
        cout << endl ;
    }
    else {
        cout << "No" << endl ;
    }

    return 0;
}
