**Array of Pointers to Strings:**
- There are 4 strings.
- Each pointer takes 4 bytes (on 32-bit systems) or 8 bytes (on 64-bit systems).
- Each string occupies bytes equal to its length + 1 (for null character).

**String lengths:**
- ```"Hammer and tongs"``` → 17 bytes
- ```"Tooth and nail"``` → 15 bytes
- ```"Spit and polish"``` → 16 bytes
- ```"You and C"``` → 9 bytes

**Total string bytes:** 17 + 15 + 16 + 9 = 57 bytes  
**Pointers (on 64-bit):** 4 × 8 = 32 bytes  
**Total = 57 + 32 = 89 bytes**