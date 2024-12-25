# std::vector<bool> Out-of-Bounds Access

This repository demonstrates a common, yet subtle, bug in C++ involving out-of-bounds access to `std::vector<bool>`.  Unlike other standard vector types, `std::vector<bool>` often optimizes memory usage, potentially leading to unexpected behavior when accessing elements outside its valid range.

The bug is demonstrated in `bug.cpp`, while the solution and explanation are provided in `bugSolution.cpp`.

**How to reproduce:**
1. Clone this repository.
2. Compile and run `bug.cpp`. Observe the erratic behavior or potential crashes.
3. Compare to the corrected code in `bugSolution.cpp` to see how to avoid the problem.

This example highlights the importance of carefully validating array indices and handling potential edge cases to prevent undefined behavior in C++.