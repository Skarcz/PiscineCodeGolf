# Piscine Code Golf

A small code golf event for the 42 C Piscine: solve each exercise in valid C using as few bytes as possible.

## How it works

- `ex00` is a guided example.
- `ex01`-`ex04` contain a `main.c`, reference implementation, expected output, and test script.
- Write your entry in `solution.c`. It must compile with `-Wall -Wextra -Werror` and match the expected output exactly.
- The shortest working solution wins. Creative use of the C standard library is welcome. 
- Feel free to change the function signatures (you will need to change it in main.c aswell) but keep the test case output intact. 

Run an exercise from its directory:

```sh
sh test_ouptut.sh
```

Check your score with `wc -c solution.c`.

## Exercises

- [ex00 — How to Golf](ex00/README.md)
- [ex01 — Limited Alphabet](ex01/README.md)
- [ex02 — Staircase](ex02/README.md)
- [ex03 — Pyramid](ex03/README.md)
- [ex04 — Reverse Number](ex04/README.md)
