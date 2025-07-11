**(a)** 
- ```int a(25);```  = ❌ Incorrect
- ```int size = 10, b[size];``` = ✅ Correct

**(b)** 5th element

**(c)** 
- ```int num[5];``` – The 5 defines the size of the array (number of elements, indexed 0 to 4).
- ```num[5] = 11;``` – The 5 is the index being accessed, which is out of bounds because valid indices are 0 to 4.

**(d)** It causes undefined behavior. The compiler may give an error or the program may crash.

**(e)** The remaining elements are automatically initialized to 0 (in global/static arrays). In local (automatic) arrays, uninitialized elements will have garbage values.

**(f)** It leads to undefined behavior. The program may crash or corrupt memory.

**(g)** The base address (pointer) of the array is passed, not the entire array.

**(h)** All elements of a static array will be automatically initialized to zero.

**(i)** ```*(s + 2)```
