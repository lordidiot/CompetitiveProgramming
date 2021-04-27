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

ll arr[200005];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll sum = 0;
    for(int i = 1; i < n; i++){
        int diff = arr[i]-arr[i-1];
        if(diff < 0){
            sum -= diff;
            arr[i] = arr[i-1];
        }
    }

    cout << sum;

    return 0;
}
