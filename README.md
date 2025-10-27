# dsa — Data Structures & Algorithms

A small collection of data-structures and algorithms examples (C++). This repository contains simple, educational implementations of common sorting algorithms and small helper code used for learning and practice.

## Repository layout

- `bits/` — utility headers (e.g. `stdc++.h`).
- `sorting/` — sorting algorithm examples and sample IO files.
  - `bubble_sort.cpp` — bubble sort implementation (example).
  - `selection_sort.cpp` — selection sort implementation.
  - `insertion_sort.cpp` — insertion sort implementation.
  - `input.txt` — example input used for testing.
  - `output.txt` — expected or sample output (optional).

> Note: File list may change as you add more examples.

## Build & run (Windows, PowerShell)

1. Open a PowerShell terminal and change to the `sorting` directory:

```powershell
cd D:\workspace\dsa\sorting
```

2. Compile a source file with g++ (from MinGW or similar):

```powershell
# compile
g++ -std=c++17 bubble_sort.cpp -O2 -o bubble_sort.exe

# run (reading from input.txt and writing to console)
.\bubble_sort.exe < input.txt

# or capture output to a file
.\bubble_sort.exe < input.txt > output.txt
```

3. Input format used by the examples (common pattern):

- First line: an integer n (number of elements).
- Next n values: the sequence of integers to sort.

Example `input.txt`:

```
5
4 2 1 5 3
```

Expected output (sorted list):

```
1 2 3 4 5
```

## Notes & troubleshooting

- If compilation fails, ensure you have a C++ compiler installed and available in PATH (e.g. g++ from MinGW or MSYS2).
- If the program produces wrong results, double-check array indexing and loop boundaries (off-by-one bugs are common in simple sorting code).
- Use `-Wall -Wextra` when compiling to see helpful warnings:

```powershell
g++ -std=c++17 -Wall -Wextra bubble_sort.cpp -o bubble_sort.exe
```

## Contributing

Pull requests and small improvements are welcome. If you add new algorithm files, update this README with a short description and examples.

## License

This repository uses a permissive license. Add a license file (e.g. `LICENSE`) if you want to make the license explicit.

---
Created/updated: README to help build and run the sorting examples.
