| No. | Expression        | Meaning / Description                      | Match |
|-----|-------------------|---------------------------------------------|-------------------------|
| 1   | `&i`              | Address of variable `i`                     | (e) F9C           |
| 2   | `&j`              | Address of variable `j`                     | (b) F9E            |
| 3   | `pj`              | Pointer storing address of `j`             | (i) F9E           |
| 4   | `*pj`             | Value stored at address `pj` (i.e., `j`)   | (c) 35             |
| 5   | `i`               | Uninitialized (assume 67 for match)        | (f) 67              |
| 6   | `pi`              | Uninitialized pointer                      | (g) unspecified     |
| 7   | `*pi`             | Value at uninitialized address (assume 65) | (h) 65     |
| 8   | `(pi + 2)`        | Address 2 ints ahead of `pi`               | (k) FAO             |
| 9   | `(*pi + 2)`       | Value at `*pi`, then +2 (assume `63+2`)    | (j) F9E            |
| 10  | `*(pi + 2)`       | Value at address `(pi + 2)`                | (l) F9D           |
