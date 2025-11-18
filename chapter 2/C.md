### **(a)**
g = 10 / 5 / 2 / 1  
Operators involved: / (left to right, same precedence)

- Step-by-step:  
  1. 10 / 5 = 2  
  2. 2 / 2 = 1  
  3. 1 / 1 = 1  

✅ Final value: g = 1  
📌 Order of evaluation: ((10 / 5) / 2) / 1

---

### **(b)**
b = 3 / 2 + 5 * 4 / 3  
Operators: /, *, +  
Precedence: * and / before +, evaluated left to right

- Step-by-step:  
  1. 3 / 2 = 1  
  2. 5 * 4 = 20  
  3. 20 / 3 = 6  
  4. 1 + 6 = 7  

✅ Final value: b = 7  
📌 Order of evaluation: ((3 / 2) + ((5 * 4) / 3))

---

### **(c)**
a = b = c = 3 + 4  
Right-to-left assignment

- Step-by-step:  
  1. 3 + 4 = 7  
  2. c = 7  
  3. b = 7  
  4. a = 7  

✅ Final values: a = b = c = 7  
📌 Order of evaluation: a = (b = (c = (3 + 4)))

---

### **(d)**
x = 2 - 3 + 5 * 2 / 8 % 3  
Operators: *, /, %, +, -  
Precedence: *, /, % (left to right), then + and - (left to right)

- Step-by-step:  
  1. 5 * 2 = 10  
  2. 10 / 8 = 1  
  3. 1 % 3 = 1  
  4. 2 - 3 = -1  
  5. -1 + 1 = 0  

✅ Final value: x = 0  
📌 Order of evaluation: ((2 - 3) + (((5 * 2) / 8) % 3))

---

### **(e)**
z = 5 % 3 / 8 * 3 + 4  
Operators: %, /, *, +

- Step-by-step:  
  1. 5 % 3 = 2  
  2. 2 / 8 = 0  
  3. 0 * 3 = 0  
  4. 0 + 4 = 4  

✅ Final value: z = 4  
📌 Order of evaluation: (((5 % 3) / 8) * 3) + 4

---

### **(f)**
y = z = -3 % -8 / 2 + 7  
Operators: %, /, + with right-to-left assignment

- Step-by-step:  
  1. -3 % -8 = -3  
  2. -3 / 2 = -1  
  3. -1 + 7 = 6  
  4. z = 6, then y = 6  

✅ Final values: y = z = 6  
📌 Order of evaluation: y = (z = (((-3 % -8) / 2) + 7))
