#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
using ll = long long;
using P = pair<int, int>;
const ll INF = 1LL << 60;

int main() {
    string n; cin >> n;

    int ans = n.size();
    bool flag = false;

    // 2^n.size()通りの探索
    for(int bit = 0; bit < (1<<n.size()); bit++){
        int sum = 0, cnt = 0;
        for(int i = 0; i < n.size(); i++){
            if(bit & (1<<i)){
                sum += n[i] - '0';
                cnt++;
            }
        }
        if(sum != 0 && sum % 3 == 0){
            flag = true;
            ans = min(ans, (int)n.size() - cnt);
        }
    }
    if(!flag) ans = -1;

    cout << ans << endl;
}