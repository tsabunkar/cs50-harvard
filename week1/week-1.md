- Source Code ==> Compiler ==> Machine Code
- To Compile C source code (.c) in Machine code we use ==> GCC Compiler
- To Compile Java source code (.java) in Machine code we use ==> JVM

---

# To Compile and Run C code in Linux CLI

- gcc --version
- Compile : gcc <file_name.c> -o <output_file_name.out>
  - Ex : gcc hello.c -o hello.out
- Run : ./<output_file_name.out>
  - Ex : ./hello.out
- Shortcut (Compile and Run) :
  - gcc hello.c -o hello.out && ./hello.out
  - gcc fgets.c -o out/fgets.out && out/fgets.out

---

# Data-type in C

- bool, a Boolean expression of either true or false
- char, a single character like a or 2
- double, a floating-point value with even more digits
- float, a floating-point value, or real number with a decimal value
- int, integers up to a certain size, or number of bits
- long, integers with more bits, so they can count higher
- string, a string of characters

---

# printf, too, there are different placeholders for each type:

- %c for chars
- %f for floats, doubles
- %d for ints
- %li for longs
- %s for strings

---
