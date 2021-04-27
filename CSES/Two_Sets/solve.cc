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
    if(n & 1){ // extra 1 (odd nums)
        if(!((n/2)&1)){
            cout << "NO";
        }
        else{
            cout << "YES" << '\n';
            cout << (n/2)+1 << '\n';
            cout << 1 << ' ';
            int delta = 0; 
            for(int i = 2; i <= n; i += 2){
                cout << i+delta << ' ';
                delta ^= 1;
            }
            cout << '\n';
            cout << (n/2) << '\n';
            delta = 1; 
            for(int i = 2; i <= n; i += 2){
                cout << i+delta << ' ';
                delta ^= 1;
            }
        }
    }
    else {
        if((n/2)&1){
            cout << "NO";
            return 0;
        }
        else{
            cout << "YES" << '\n';
            cout << (n/2) << '\n';
            int delta = 0; 
            for(int i = 1; i <= n; i += 2){
                cout << i+delta << ' ';
                delta ^= 1;
            }
            cout << '\n';
            cout << (n/2) << '\n';
            delta = 1; 
            for(int i = 1; i <= n; i += 2){
                cout << i+delta << ' ';
                delta ^= 1;
            }
        }
    }


    return 0;
}
