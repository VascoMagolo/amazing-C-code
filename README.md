# amazing-C-code

![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)
![Language](https://img.shields.io/badge/Language-C-orange.svg)

Welcome to **amazing-C-code**, home to some of the most groundbreaking and explicitly typed C algorithms on the internet. 

Currently, this repository features our flagship program: a highly deterministic, AI-free `isEven` evaluator.

## Features

* **O(1)* Time Complexity Lookup:** Forget modulo operators (`%`). Our `isEven` algorithm uses direct branch evaluation to determine if a number is even or odd. 
* **Zero Dependencies:** Written in pure, unadulterated C. No bloated libraries required.
* **Safety First:** Hand-crafted conditional statements ensure precision for all supported integers (0 through 38, mostly).

*\*Note: Time complexity is technically O(N) through the if/else chain, but it executes blazing fast anyway.*

## Getting Started

### Prerequisites

You will need a C compiler (like GCC or Clang) installed on your system. 

### Compilation

Clone the repository and compile the source code:

```bash
git clone [https://github.com/vascomagolo/amazing-C-code.git](https://github.com/vascomagolo/amazing-C-code.git)
cd amazing-C-code
gcc isEven.c -o isEven