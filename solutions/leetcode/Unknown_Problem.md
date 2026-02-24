# Unknown Problem

## Solution Details
- **Platform**: leetcode
- **Language**: Unknown
- **Date**: 2026-02-24
- **Problem Link**: [https://leetcode.com/problems/word-search-ii/](https://leetcode.com/problems/word-search-ii/)

## Solution Code

```unknown
            # Explore 4 directions            for dr, dc in [(1,0), (-1,0), (0,1), (0,-1)]:                nr, nc = r + dr, c + dc                if 0 <= nr < rows and 0 <= nc < cols and board[nr][nc] != "#":                    dfs(nr, nc, next_node)                        # Restore cell            board[r][c] = char                # Step 3: Start DFS from each cell        for r in range(rows):            for c in range(cols):                dfs(r, c, root)                return result
```

---
*Automatically pushed by CodeMerge*
