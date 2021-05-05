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

    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        // make both upper
        if( ('a' <= s1[i]) && (s1[i] <= 'z') ){
            s1[i] ^= 0x20;
        }
        if( ('a' <= s2[i]) && (s2[i] <= 'z') ){
            s2[i] ^= 0x20;
        }
        if(s1[i] < s2[i]){
            cout << -1;
            return 0;
        }
        else if(s1[i] > s2[i]){
            cout << 1;
            return 0;
        }
    }
    cout << 0;

    return 0;
}
