#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const ll INF = 1LL << 60;

/*
 * 素因数分解
 * 2以上の正の整数Nが与えられたとき、Nの素因数分解した結果を出力せよ。
 * 2<=N<=10^12
 */
vector<pair<ll, ll>> prime_factorize(ll n){
    // {素数, 出現回数}のpairの形で格納する
    vector<pair<ll, ll>> fac;
    for(ll i = 2; i * i <= n; i++){
        if(n % i != 0) continue;
        // 出現回数
        ll cnt = 0;

        // iで割り切れる限り割る
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        fac.push_back({i, cnt});
    }
    if(n != 1) fac.push_back({n, 1});
    return fac;
}


int main() {
    ll n; cin >> n;

    auto fac = prime_factorize(n);
    for(auto f : fac){
        rep(i, f.second) cout << f.first << " ";
    }
    cout << endl;
}