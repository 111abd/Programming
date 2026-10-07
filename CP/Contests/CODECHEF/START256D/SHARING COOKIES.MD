# Sharing Cookies

A C++ solution to the **Sharing Cookies** problem. Alice has more cookies than Bob and gives some to Bob so that they end up with the same number.

## Problem

Given two integers `A` and `B`, where `A > B`, determine how many cookies Alice must give Bob to make their amounts equal. If it is impossible, print `-1`.

## How it works

If Alice gives Bob `x` cookies, their amounts become `A - x` and `B + x`. Equality requires `A - x = B + x`, so `x = (A - B) / 2`. This is possible only when `A - B` is even. Equivalently, the total `A + B` must be even.

- If the difference is even, output `(A - B) / 2`.
- Otherwise, output `-1`.

## Complexity

- **Time:** `O(1)`
- **Space:** `O(1)`

## Example

**Input**

```text
6 2
```

**Output**

```text
2
```

Alice gives Bob 2 cookies: Alice then has 4 and Bob has 4.

## C++ solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if ((A - B) % 2 != 0) {
        cout << -1 << endl;
    } else {
        cout << (A - B) / 2 << endl;
    }

    return 0;
}
```
