# → Source
            
            
        Copy

## Solution Details
- **Platform**: codeforces
- **Language**: C++
- **Date**: 2026-02-25
- **Problem Link**: [https://codeforces.com/contest/160/submission/334178717](https://codeforces.com/contest/160/submission/334178717)

## Solution Code

```cpp
#include <iostream>#include <vector>#include <algorithm>using namespace std; int main() {    int n;    cin >> n;    vector<int> coins(n);    int total = 0;    for(int i = 0; i < n; ++i) {        cin >> coins[i];        total += coins[i];    }    sort(coins.rbegin(), coins.rend());    int curr_sum = 0, num_coins = 0;    for(int i = 0; i < n; ++i) {        curr_sum += coins[i];        num_coins++;        if(curr_sum > total - curr_sum) break;    }    cout << num_coins << endl;    return 0;}
```

---
*Pushed by CodeMerge*
