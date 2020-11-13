#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const ll INF = 1LL << 60;

/*
 * 約数列挙
 * 正の整数Nが与えられたとき、Nの約数を小さい順に全て出力せよ。
 * 1<=N<=10^12
 */
vector<ll> divisors(ll n){
    vector<ll> div;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            // n / i がiと重複しないならば、対となる値も配列に格納する
            // 例えば、24 / 4 は4も約数で、6も約数
            // 25 / 5 は対となる値も5のため、配列に格納すると同値が複数含まれてしまうため格納しない
            if(n / i != i) div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    return div;
}


int main() {
    ll n; cin >> n;

    auto div = divisors(n);
    rep(i, div.size()) cout << div[i] << " ";
    cout << endl;
}