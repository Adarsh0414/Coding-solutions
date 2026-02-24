# → Source
            
            
        Copy

## Solution Details
- **Platform**: codeforces
- **Language**: Unknown
- **Date**: 2026-02-24
- **Problem Link**: [https://codeforces.com/contest/118/submission/332400339](https://codeforces.com/contest/118/submission/332400339)

## Solution Code

```unknown
s = input().lower()vowels = set("aoyeui")result = []for c in s:    if c not in vowels:        result.append(f".{c}")print(''.join(result))
```

---
*Automatically pushed by CodeMerge*
