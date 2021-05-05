/*
ID: 0xlordi1
TASK: friday
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

int month_days(int y, int m){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(!(y % 400)){
        days[1]++;
    }
    else{
        if(!(y % 100)){
        }
        else{
            if(!(y % 4)){
                days[1]++;
            }
        }
    }
    return days[m];
}

int days[7];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("friday.in",  "r", stdin);
    freopen("friday.out", "w", stdout);

    int N;
    cin >> N;
    int d = 0;
    for(int y = 1900; y < 1900+N; y++){
        for(int m = 0; m < 12; m++){
            d += 12; // 13 - 1 = 12
            days[d%7]++;
            d += month_days(y,m)-12;
        }
    }
    // +5 coz printing starts from Saturday
    for(int i = 0+5; i < 7+5-1; i++){
        cout << days[i%7] << ' ';
    }
    // output urgh
    cout << days[4] << '\n';

    return 0;
}
