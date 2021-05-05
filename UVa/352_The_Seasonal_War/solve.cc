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

void dfs(int r, int c, int n, vvi &img, vvi &vis){
    for(int i = -1; i <= 1; i++){
        for(int j = -1; j <= 1; j++){
            if( !i && !j )
                continue;
            if((r+i < 0) || (r+i >= n))
                continue;
            if((c+j < 0) || (c+j >= n))
                continue;
            if(!vis[r+i][c+j]){
                vis[r+i][c+j] = 1;
                if(img[r+i][c+j]){
                    dfs(r+i, c+j, n, img, vis);
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, i=1;
    while(cin >> n){
        int eagles = 0;
        vvi img;
        for(int i = 0; i < n; i++){
            vi v;
            for(int j = 0; j < n; j++){
                char tmp;
                cin >> tmp;
                v.pb(tmp-'0');
            }
            img.pb(v);
        }

        vvi vis(n, vi(n, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!vis[i][j]){
                    if(img[i][j]){
                        dfs(i,j,n,img,vis);
                        eagles++;
                    }
                }
            }
        }
        cout << "Image number " << i << " contains " << eagles << " war eagles." << '\n';
        i++;
    }

    return 0;
}
