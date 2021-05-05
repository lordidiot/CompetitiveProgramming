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

    int lower = 0;
    string s;
    cin >> s;
    // count
    for(int i = 0; i < s.size(); i++){
        if(('a' <= s[i]) && (s[i] <= 'z')){
            lower++;
        }
        else{
            lower--;
        }
    }
    // MORE / EQ UPPER
    if(lower < 0){
        for(int i = 0; i < s.size(); i++){
            if(('a' <= s[i]) && (s[i] <= 'z')){
                s[i] ^= 0x20;
            }
        }
    }
    // MORE LOWER
    else{
        for(int i = 0; i < s.size(); i++){
            if(('A' <= s[i]) && (s[i] <= 'Z')){
                s[i] ^= 0x20;
            }
        }
    }
    cout << s;

    return 0;
}
