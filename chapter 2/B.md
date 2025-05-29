### **(a)**
Expression:  
ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;  
Given: a = 3, b = 2, x = 5, y = 4 (all integers)  

Step-by-step evaluation (BODMAS / PEMDAS):  
1. First, evaluate all multiplications:  
    - 5 * b * b * x = 5 * 2 * 2 * 5 = 100

    - 3 * a * y * y = 3 * 3 * 4 * 4 = 144

    - 8 * b * b * x = 8 * 2 * 2 * 5 = 160

    - 10 * a * y = 10 * 3 * 4 = 120

2. Now plug into expression:  
    - ans = 100 - 144 - 160 + 120

3. Perform the additions/subtractions:

    - 100 - 144 = -44

    - -44 - 160 = -204

    - -204 + 120 = -84

Final Answer (a):  
ans = -84

### **(b)**  
Expression:  
res = 4 * a * y / c - a * y / c;  
Given: a = 4, y = 1, c = 3 (res is an integer)

Step-by-step:

1. Evaluate each multiplication and division (integer division):

    - 4 * a * y / c = 4 * 4 * 1 / 3 = 16 / 3 = 5 (integer division)

    - a * y / c = 4 * 1 / 3 = 4 / 3 = 1 (integer division)

2. Plug into expression:

    - res = 5 - 1 = 4

Final Answer (b):  
res = 4

### **(c)**  
Expression:  
s = c + a * y * y / b;  
Given: a = 2.2, b = 0.0, c = 4.1, y = 3.0 (all floats)

Step-by-step:

1. Evaluate inner multiplication:

    - a * y * y = 2.2 * 3.0 * 3.0 = 2.2 * 9.0 = 19.8

2. Try dividing by b:

    - 19.8 / 0.0 → Division by zero!

Final Answer (c):  
Error: Division by zero. (undefined)

### **(d)**  
Expression:  
R = x * x + 2 * x * x + 1 / 2 * x * x + x + 1;  
Given: x = 3.5 (R is a float)

Step-by-step using correct hierarchy:

1. Multiplications:

    - x * x = 3.5 * 3.5 = 12.25

    - 2 * x * x = 2 * 12.25 = 24.5

    - 1 / 2 * x * x = 0.5 * 12.25 = 6.125

    - x = 3.5

2. Add all:

    - 12.25 + 24.5 + 6.125 + 3.5 + 1 = 47.375

Final Answer (d):  
R = 47.375