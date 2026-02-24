# Unknown Problem

## Solution Details
- **Platform**: leetcode
- **Language**: Unknown
- **Date**: 2026-02-24
- **Problem Link**: [https://leetcode.com/problems/kth-largest-element-in-an-array/](https://leetcode.com/problems/kth-largest-element-in-an-array/)

## Solution Code

```unknown
                while nums[r] > pivot:                    r -= 1                if l <= r:                    nums[l], nums[r] = nums[r], nums[l]                    l += 1                    r -= 1                        if target <= r:                return quickselect(left, r)            if target >= l:                return quickselect(l, right)                        return nums[target]                return quickselect(0, n - 1)

```

---
*Automatically pushed by CodeMerge*
