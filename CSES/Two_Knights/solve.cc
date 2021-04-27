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

/*
 * Idea #1:
 * Sieve like idea, based on the fact that
 * if one knight can kill that other position
 * that other position can kill the start pos
 * this can eliminate places very fast
 *
 *
 */

char arr[100*100+5];
ll knight(int k){
    // hardcode edge cases
    if(k <= 1){
        return 0;
    }
    else if(k == 2){
        return 6; // 4c2
    }
    // pre calc
    else if(k <= 4){
        if(k == 3){
            return 28;
        }
        else{ //4
            return 96;
        }
    }
    // general case
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        cout << knight(i) << '\n';
    }

    return 0;
}
