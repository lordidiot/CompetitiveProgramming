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

int arr[1005];
int scores[2];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int lb=0, ub=n-1, p=0;
    // while game is running
    while(lb <= ub){
        if(arr[lb] > arr[ub]){
            scores[p] += arr[lb++];
        }
        // no need check EQ coz distinct cards
        else{
            scores[p] += arr[ub--];
        }
        p ^= 1;
    }
    cout << scores[0] << ' ' << scores[1];


    return 0;
}
