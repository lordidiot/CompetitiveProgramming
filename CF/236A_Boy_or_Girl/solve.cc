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

int table[256];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        table[s[i]]++;
    }
    int sum = 0;
    for(int i = 0; i < 256; i++){
        sum += !!(table[i]);
    }
    if(sum & 1){
        cout << "IGNORE HIM!";
    }
    else{
        cout << "CHAT WITH HER!";
    }


    return 0;
}
