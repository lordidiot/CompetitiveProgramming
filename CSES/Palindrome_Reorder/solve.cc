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

int _set[26];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        _set[s[i]-'A']++;
    }
    int cnt = 0;
    int mid_i = -1;
    for(int i = 0; i < 26; i++){
        if(_set[i]&1){
            mid_i = i;
            cnt++;
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    // start outputting
    for(int i = 0; i < 26; i++){
        if(i == mid_i)
            continue;
        for(int j = 0; j < _set[i]/2; j++){
            cout << (char)('A'+i);
        }
    }
    // output middle elem
    for(int i = 0; i < _set[mid_i]; i++){
        cout << (char)('A'+mid_i);
    }
    // last sandwich (reversed)
    for(int i = 25; i >= 0; i--){
        if(i == mid_i)
            continue;
        for(int j = 0; j < _set[i]/2; j++){
            cout << (char)('A'+i);
        }
    }

    return 0;
}
