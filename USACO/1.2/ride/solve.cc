/*
ID: 0xlordi1
TASK: ride
LANG: C++
*/
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

int f(string s){
    int res = 1;
    for(int i = 0; i < s.size(); i++){
        res = (res * (s[i]-'A'+1)) % 47;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("ride.in",  "r", stdin);
    freopen("ride.out", "w", stdout);

    string c, g;
    cin >> c >> g;
    if(f(c) == f(g)){
        cout << "GO" << '\n';
    }
    else{
        cout << "STAY" << '\n';
    }

    return 0;
}
