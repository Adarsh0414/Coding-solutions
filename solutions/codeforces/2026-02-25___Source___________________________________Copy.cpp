# → Source
            
            
        Copy

## Solution Details
- **Platform**: codeforces
- **Language**: C++
- **Date**: 2026-02-25
- **Problem Link**: [https://codeforces.com/contest/41/submission/334178527](https://codeforces.com/contest/41/submission/334178527)

## Solution Code

```cpp
#include <iostream>#include <algorithm>using namespace std; int main() {    string s, t;    cin >> s >> t;    reverse(s.begin(), s.end());    if (s == t)        cout << "YES" << endl;    else        cout << "NO" << endl;    return 0;}
```

---
*Pushed by CodeMerge*
