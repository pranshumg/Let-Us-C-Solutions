You can use the -E option with the gcc compiler to stop the compilation after the preprocessing stage and output the expanded code.
For example:
```
gcc -E program.c -o output.i
```
Then, check output.i to see how the macro was expanded.