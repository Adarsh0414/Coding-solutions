# → Source
            
            
        Copy

## Solution Details
- **Platform**: codeforces
- **Language**: C++
- **Date**: 2026-02-24
- **Problem Link**: [https://codeforces.com/contest/266/submission/334178919](https://codeforces.com/contest/266/submission/334178919)

## Solution Code

```c++
#include <iostream>#include <string>using namespace std; int main() {    int n, t;    cin >> n >> t;    string s;    cin >> s;     for(int time = 0; time < t; ++time) {        for(int i = 0; i < n - 1; ++i) {            if(s[i] == 'B' && s[i+1] == 'G') {                swap(s[i], s[i+1]);                ++i; // Skip next index to avoid double swap            }        }    }    cout << s << endl;    return 0;}
```

---
*Automatically pushed by CodeMerge*
