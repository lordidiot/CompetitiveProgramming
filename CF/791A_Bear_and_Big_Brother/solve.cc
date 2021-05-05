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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // Trivial soln (non math)
    ll a, b;
    cin >> a >> b;
    ll i = 0;
    while( a <= b ){
        a *= 3;
        b *= 2;
        i++;
    }
    cout << i;


    return 0;
}
