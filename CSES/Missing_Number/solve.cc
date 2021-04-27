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

    ll n, sum;
    cin >> n;
    if(n & 1){
        ll _n = n-1;
        sum = (_n/2)*(1+_n);
        sum+= n;
    }
    else {
        sum = (n/2)*(1+n);
    }
    
    int j;
    for(int i = 0; i < n-1; i++){
        cin >> j;
        sum -= j;
    }
    cout << sum << endl;

    return 0;
}
