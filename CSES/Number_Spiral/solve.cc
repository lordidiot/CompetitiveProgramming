#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const double EPS = 1e-9;

// square macro
#define SQR(x) ((x)*(x))
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // 1 4 9 16
    ll t,y,x;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> y >> x;
        if(y == 1 && x == 1){
            cout << 1 << '\n';
            continue;
        }
        ll l = max(y,x); //layer
        ll f = l & 1;    //1 = min to max, 0 = max to min
        if(x < y){ // horizontal
            ll s = (f) ? SQR(l-1)+1 : SQR(l);
            cout << ( s + ((f)?1:-1) * (x-1) ) << '\n';
        } 
        else{
            ll s = (!f) ? SQR(l-1)+1 : SQR(l);
            cout << ( s + ((!f)?1:-1) * (y-1) ) << '\n';
        }
    }

    return 0;
}
