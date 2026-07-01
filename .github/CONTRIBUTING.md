# Contributing to amazing-C-code

First off, thank you for considering contributing to `amazing-C-code`! It's people like you that make this codebase truly amazing.

We are actively looking to expand our collection of highly deterministic, zero-dependency C algorithms. Whether you are improving existing code or adding completely new algorithms (e.g., `isOdd.c`, `isPrime.c`, `factorial.c`), your contributions are welcome!

## The Golden Rules of amazing-C-code

To maintain the architectural integrity, pure determinism, and unique style of this project, all contributors must adhere to the following strict coding guidelines when modifying or adding files:

1. **No Modulo Operators:** The use of `%` is strictly forbidden across the entire repository.
2. **No Bitwise Shortcuts:** Do not use bitwise operators (like `& 1`) as a crutch for logic. We consider this a shortcut that undermines the readability of our explicitly typed codebase.
3. **No Loops:** Recursion and loops (`for`, `while`) add unnecessary overhead and unpredictability. If you need to iterate, write it out line by line.
4. **Explicit Definition:** Every supported state or input MUST have its own dedicated `if` or `else if` block.
   * *Example:* `else if (n == 42) { return true; }`
5. **No External Libraries:** Standard I/O (`stdio.h`) and booleans (`stdbool.h`) are fine, but do not rely on math libraries or external dependencies.

## How to Contribute

### 1. Find or Create an Issue

Check out our Issue Tracker for open bugs or feature requests. Look for the `good first issue` label if you are new here! Common tasks include:

* Expanding the supported input range of existing algorithms.
* Finding and fixing skipped logic in sequence checks.
* Proposing and writing entirely new C files using our Golden Rules.

### 2. Fork and Clone

Fork the `amazing-C-code` repository to your GitHub account and clone it to your local machine.

### 3. Create a Branch

Create a new branch for your feature, bug fix, or new program:

```bash
git checkout -b feature/add-isPrime-code
```

### 4. Make Your Changes

Write your highly optimized, heavily branched C code. Ensure your indentation matches the rest of the repository.

### 5. Test Your Changes

Compile and run the code to ensure your inputs evaluate correctly.

```bash
gcc yourNewCode.c -o yourNewCode
./yourNewCode
```

### 6. Submit a Pull Request

Push your branch to your fork and submit a Pull Request against our `main` branch.

* Please use the provided **Pull Request Template** to describe your changes.
* Ensure you check off all the items in the PR checklist.

## Code Review Process

The core team will review your Pull Request. We will specifically be looking for:

* Strict adherence to the "Golden Rules" (no math/bitwise shortcuts, no loops).
* Correct and accurate outputs for the integers/logic provided.
* Zero compiler warnings.

Thank you for helping us build the most explicit C codebase in the world!
