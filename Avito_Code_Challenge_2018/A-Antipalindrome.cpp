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

    string s;
    cin>>s;
    int n=s.length();
    if(n==1){
        cout<<0<<endl;
        return 0;
    }

    bool check=false;
    for(int i=0;i<=s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            check=true;
            break;
        }
    }
    if(check==true){
        cout<<n<<endl;
        return 0;
    }else{
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<(n-1)<<endl;
            return 0;
        }else{
            cout<<(0)<<endl;
            return 0;
        }
    }
    return 0;
}
