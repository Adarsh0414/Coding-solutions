# → Source
            
            
        Copy

## Solution Details
- **Platform**: codeforces
- **Language**: Unknown
- **Date**: 2026-02-24
- **Problem Link**: [https://codeforces.com/contest/158/submission/332251018](https://codeforces.com/contest/158/submission/332251018)

## Solution Code

```unknown
n, k = map(int, input().split())scores = list(map(int, input().split()))kth_score = scores[k-1]count = sum(1 for x in scores if x >= kth_score and x > 0)print(count)
```

---
*Automatically pushed by CodeMerge*
