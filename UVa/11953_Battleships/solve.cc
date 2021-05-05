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

int dfs(int alive, int r, int c, int N, vector<string> &grid, vvi &vis){
    //cout << "@ " << r << ", " << c << endl;
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if( !i && !j )
                continue;
            if( abs(i) + abs(j) == 2 )
                continue;
            int x = c+j, y = r+i;
            if((y < 0) || (y >= N))
                continue;
            if((x < 0) || (x >= N))
                continue;
            if(!vis[y][x]){
                vis[y][x] = 1;
                if(grid[y][x] == '@'){
                    // cout << "going to " << y << ", " << x << endl;
                    return alive|dfs(0,y,x,N,grid,vis);
                }
                else if(grid[y][x] == 'x'){
                    // cout << "going to " << y << ", " << x << endl;
                    return alive|dfs(1,y,x,N,grid,vis);
                }
            }
        }
    }
    return alive;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T, N;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> N;
        vector<string> grid;
        for(int i = 0; i < N; i++){
            string s;
            cin >> s;
            grid.pb(s);
        }
        vvi vis(N, vi(N, 0));
        int ships = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(!vis[i][j]){
                    vis[i][j] = 1;
                    if(grid[i][j] == '@' || grid[i][j] == 'x'){
                        ships += dfs((grid[i][j]=='x')?1:0,i,j,N,grid,vis);
                    }
                }
            }
        }

        cout << "Case " << t << ": " << ships << '\n';
        /*
        if(t != T)
            cout << '\n';
        */
    }

    return 0;
}
