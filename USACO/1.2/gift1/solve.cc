/*
ID: 0xlordi1
TASK: gift1
LANG: C++
*/
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

void add_money(int val, string name, vi &wallets, vector<string> &names){
    for(int i = 0; i < names.size(); i++){
        if(!names[i].compare(name)){
            wallets[i] += val;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("gift1.in",  "r", stdin);
    freopen("gift1.out", "w", stdout);

    int NP;
    cin >> NP;
    vi wallets(NP, 0);
    vector<string> names;
    for(int i = 0; i < NP; i++){
        string s;
        cin >> s;
        names.push_back(s);
    }
    for(int i = 0; i < NP; i++){
        int n, money;
        string s;
        cin >> s;
        cin >> money >> n;
        // remainder 
        int remainder;
        if(n) // remember to account for fpe (divide-by-zero)
            remainder = money % n;
        else
            remainder = 0;
        add_money(-money+remainder, s, wallets, names);
        // pay per person
        for(int j = 0; j < n; j++){
            string rec;
            cin >> rec;
            add_money(money/n, rec, wallets, names);
        }
    }
    for(int i = 0; i < NP; i++){
        cout << names[i] << ' ' << wallets[i] << '\n';
    }

    return 0;
}
