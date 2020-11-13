#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const ll INF = 1LL << 60;

/*
 * 素数判定
 * 正の整数Nが与えられたとき、Nが素数であるならばYesを出力、そうでないならNoを出力せよ。
 * 1<=N<=10^12
 */

bool is_prime_num(ll n){
    // Nが2以上√N以下の整数で割り切れないならば、それ以上の整数で割り切れることもないため、
    // √Nまで探索すればよい
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ll n; cin >> n;

    if(is_prime_num(n)) cout << "Yes" << endl;
    else cout << "No" << endl;
}