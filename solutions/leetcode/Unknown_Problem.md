# Unknown Problem

## Solution Details
- **Platform**: leetcode
- **Language**: Unknown
- **Date**: 2026-02-24
- **Problem Link**: [https://leetcode.com/problems/shortest-palindrome/submissions/1929924985/](https://leetcode.com/problems/shortest-palindrome/submissions/1929924985/)

## Solution Code

```unknown
class Solution:    def shortestPalindrome(self, s: str) -> str:        if not s:            return s                rev = s[::-1]        temp = s + "#" + rev                # Build LPS array (KMP preprocessing)        lps = [0] * len(temp)        j = 0                for i in range(1, len(temp)):            while j > 0 and temp[i] != temp[j]:                j = lps[j - 1]

```

---
*Automatically pushed by CodeMerge*
