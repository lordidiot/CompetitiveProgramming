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

#define BIN(x,n) bitset<64>((x)).to_string().substr(64-(n), (n))
char visited[65540];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    int i=0, cur=0;
    visited[cur] = 1;
    cout << BIN(cur, n) << '\n';
    while(i < n){
        // single bit flip for neighbour
        int tmp = cur ^ (1 << i);
        if(!visited[tmp]){
            visited[tmp] = 1;
            cout << BIN(tmp, n) << '\n';
            cur = tmp;
            i = 0;
        }
        else{
            i++;
        }
    }

    return 0;
}
