/*
ID: 0xlordi1
TASK: milk2
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
    freopen("milk2.in",  "r", stdin);
    freopen("milk2.out", "w", stdout);

    int N, start=1e9, end=-1;
    cin >> N;
    vector<bool> is_m(1e6+5, false);
    for(int i = 0; i < N; i++){
        int s, e;
        cin >> s >> e;
        fill_n(is_m.begin()+s, e-s, true);
        end = max(end, e);
        start = min(start, s);
    }
    int milk=0, idle=0;
    bool cur = is_m[start];
    int time = 1;
    for(int i = start+1; i < end; i++){
        if(is_m[i] == cur){
            time++;
        }
        else{
            if(cur)
                milk = max(milk, time);
            else
                idle = max(idle, time);
            time = 1;
            cur = is_m[i];
        }
    }
    // one last iteration
    if(cur)
        milk = max(milk, time);
    else
        idle = max(idle, time);

    cout << milk << ' ' << idle << '\n';

    return 0;
}
