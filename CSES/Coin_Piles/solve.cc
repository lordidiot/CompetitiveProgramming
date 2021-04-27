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

bool solve(ll a, ll b){
    // swap to make sure a > b
    if(a < b){
        a ^= b; // a = ab
        b ^= a; // b = bba = a
        a ^= b; // a = aba = b
    }
    // clear any zero cases
    if(a == 0){
        return true;
    }
    else if(b == 0){
        return false;
    }
    // a > 0, b > 0;
    ll diff = a - b;
    if(diff){
        if(diff <= b){
            a -= diff*2;
            b -= diff;
        }
        else{
            return false;
        }
    }
    return !(a%3);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t,a,b;
    cin >> t;
    for(ll i = 0; i < t; i++){
        cin >> a >> b;
        if(solve(a,b)){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

    return 0;
}
