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
Solution:
All numbers that have 5 in their prime factorisation
will contribute to an additional trailing zero.
This is due to a few facts

1) Factorisation of 10 is only 2 * 5

2) Number of 2s as prime factors will DEFINITELY
   be greater than the number of 5s as prime factor

3) For numbers greater than 24, we also have to
   consider multiple 5s in the prime factorisation
   e.g. 25 = 5*5. So this will actually contribute
   to 2 trailing zeroes instead of just one.

   To account for this we just step in powers of 5
   (5**1=5, 5**2=25, 5**3=125, ...)
*/

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, x = 0, d = 5;
    cin >> n;
    while(d <= n){
        x += n/d;
        d *= 5;
    }
    cout << x;

    return 0;
}
