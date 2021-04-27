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

    string s;
    cin >> s;
    char cur = s[0];
    ll best = 1, ctr = 1;
    for(int i = 1; i < s.size(); i++){
        char c = s[i];
        if(c == cur){
            ctr++;
        }
        else{
            cur = c;
            ctr = 1;
        }
        best = max(best, ctr);
    }
    cout << best;

    return 0;
}
