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

    int n;
    cin >> n;
    if(n < 4){
        if(n == 1)
            cout << 1;
        else
            cout << "NO SOLUTION";
        return 0;
    }
    if((n%4) > 1){
        if((n%4) == 2){
            cout << n << ' ';
        }
        else{ //3
            cout << n-1 << ' ';
        }
    }
    for(int i = 1; i < 1+(n/4)*4; i+=4){
        cout << i+2 << ' ' << i << ' ' << i+3 << ' ' << i+1 << ' ';
    }
    if((n%4)){
        if((n%4) == 1){
            cout << n;
        }
        else if((n%4) == 2){
            cout << n-1;
        }
        else{ //3
            cout << n-2 << ' ' << n;
        }
    }

    return 0;
}
