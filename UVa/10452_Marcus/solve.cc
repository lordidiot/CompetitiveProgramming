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

string al("IEHOVA#"); // 7
void dfs(int x, int y, int n, int m, vector<string> &map, vvi &vis){
    vis[y][x] = 1;
    if(map[y][x] == '#'){
        return;
    }
    // left
    if(x-1 >= 0){
        if(!(string::npos == al.find(map[y][x-1]))){
            if(!vis[y][x-1]){
                cout << "left";
                if(map[y][x-1] != '#')
                    cout << ' ';
                dfs(x-1, y, n, m, map, vis);
                return;
            }
        }
    }
    // right
    if(x+1 < n){
        if(!(string::npos == al.find(map[y][x+1]))){
            if(!vis[y][x+1]){
                cout << "right";
                if(map[y][x+1] != '#')
                    cout << ' ';
                dfs(x+1, y, n, m, map, vis);
                return;
            }
        }
    }
    // forth
    if(y-1 >= 0){
        if(!(string::npos == al.find(map[y-1][x]))){
            if(!vis[y-1][x]){
                cout << "forth";
                if(map[y-1][x] != '#')
                    cout << ' ';
                dfs(x, y-1, n, m, map, vis);
                return;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,m,n;
    cin >> t;
    for(int _i = 0; _i < t; _i++){
        cin >> m >> n; 
        vector<string> map;
        for(int i = 0; i < m; i++){
            string s;
            cin >> s;
            map.pb(s);
        }
        // begin
        vvi vis(m, vi(n, 0));
        int x = map[m-1].find('@');
        int y = m-1;
        dfs(x,y,n,m,map,vis);
        cout << '\n';
    }

    return 0;
}
