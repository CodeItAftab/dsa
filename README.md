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

```markdown
# dsa — Data Structures & Algorithms

Educational C++ implementations of basic algorithms and data-structures.
This workspace focuses on simple, easy-to-follow examples useful for learning
and experimentation.

## Repository layout

- `bits/` — utility headers (e.g. `stdc++.h`).
- `sorting/` — sorting algorithm examples and sample IO files.
  - `bubble_sort.cpp` — bubble sort implementation (example).
  - `selection_sort.cpp` — selection sort implementation.
  - `insertion_sort.cpp` — insertion sort implementation.
  - `merge_sort.cpp` — merge sort implementation.
  - `quick_sort.cpp` — quick sort implementation.
  - `input.txt` — example input used for testing.
  - `output.txt` — expected or sample output (optional).

> Note: file list may change as you add examples or helper utilities.

## Build & run (Windows, PowerShell)

Open PowerShell and change to the `sorting` directory:

```powershell
cd D:\workspace\dsa\sorting
```

Compile one of the examples with `g++` (MinGW/MSYS2):

```powershell
# compile (example)
g++ -std=c++17 -O2 bubble_sort.cpp -o bubble_sort.exe

# run reading from input.txt
.\bubble_sort.exe < input.txt

# run with inline input
echo 5 3 5 1 2 4 | .\bubble_sort.exe
```

Common input format used by the examples:
- First token: integer `n` (number of elements)
- Next `n` tokens: the `n` integers to sort

Example `input.txt`:

```
5
4 2 1 5 3
```

Expected output (sorted list):

```
1 2 3 4 5
```

## Verbose visual traces

Some sorting examples include an optional, educational `-v` (verbose)
mode which prints step-by-step descriptions to the console (swaps, merges,
and pivot placements). Run like this to see a trace:

```powershell
.\bubble_sort.exe -v < input.txt
.\quick_sort.exe -v < input.txt
```

The verbose traces are intended for learning and debugging only; the
default behavior (no `-v`) prints only the final sorted array.

## Notes & troubleshooting

- If compilation fails, ensure a C++ compiler (g++) is installed and on `PATH`.
- Use `-Wall -Wextra` when compiling to surface helpful warnings:

```powershell
g++ -std=c++17 -Wall -Wextra bubble_sort.cpp -o bubble_sort.exe
```

- Output formatting: examples generally print the sorted values space-separated.
  Some older examples may omit spaces — if you want consistent formatting I can
  standardize all programs.

## Next steps (suggested)

- Standardize final output formatting across all examples.
- Add an automated test-harness to run multiple algorithms on the same inputs
  and record traces for side-by-side comparison.
- Produce an HTML/JS visualization that animates the verbose traces.

## Contributing

Pull requests and improvements are welcome. If you add new algorithm files,
please update this README with a short description and example usage.

## License

This repository uses a permissive license. Add a `LICENSE` file to make it explicit.

---
Updated: added usage examples and `-v` verbose trace instructions.

```
