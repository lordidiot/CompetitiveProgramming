/*
ID: 0xlordi1
TASK: beads
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("beads.in",  "r", stdin);
    freopen("beads.out", "w", stdout);

    int N;
    string s;
    cin >> N;
    cin >> s;
    s.append(s);
    // round 1 sum
    vector<ii> v1;
    char prev = s[0];
    int ctr = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == prev){
            ctr++;
        }
        else{
            v1.pb(mp(prev, ctr));
            prev = s[i];
            ctr = 1;
        }
    }
    if(ctr)
        v1.pb(mp(prev,ctr));
    // round 2 max
    int best = v1[0].second;
    for(int i = 0; i < v1.size(); i++){
        int flips=0;
        char cur = v1[i].first;
        int sum  = v1[i].second;
        if(cur == 'w')
            flips = -1;
        for(int j = i+1; j<v1.size(); j++){
            // need flip
            if(v1[j].first != cur &&
               v1[j].first != 'w'){
                if(flips >= 1){
                    break;
                }
                else{
                    flips++;
                    cur = v1[j].first;
                    sum+= v1[j].second;
                }
            }
            // no flip
            else{
                sum += v1[j].second;
            }
        }
        best = max(best, sum);
    }
    cout << min(N,best) << '\n';

    return 0;
}
