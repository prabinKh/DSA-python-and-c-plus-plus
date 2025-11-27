### Operators in C++

 complete and clear overview of all major operators in C++ with examples.

| Category                  | Operator                          | Name                        | Example                     | Description / Result |
|---------------------------|-----------------------------------|-----------------------------|-----------------------------|----------------------|
| **Arithmetic**            | `+`                               | Addition                    | `5 + 3` → 8                 | Adds two operands |
|                           | `-`                               | Subtraction                 | `5 - 3` → 2                 | Subtracts second from first |
|                           | `*`                               | Multiplication              | `5 * 3` → 15                | Multiplies |
|                           | `/`                               | Division                    | `10 / 3` → 3 (int)          | Integer division if both int, floating if any is float/double |
|                           | `%`                               | Modulus (remainder)         | `10 % 3` → 1                | Remainder of integer division |
| **Relational**            | `==`                              | Equal to                    | `5 == 5` → true             | Checks equality |
|                           | `!=`                              | Not equal to                | `5 != 3` → true             | |
|                           | `>`                               | Greater than                | `5 > 3` → true              | |
|                           | `<`                               | Less than                   | `5 < 3` → false             | |
|                           | `>=`                              | Greater than or equal       | `5 >= 5` → true             | |
|                           | `<=`                              | Less than or equal          | `3 <= 5` → true             | |
| **Logical**               | `&&`                              | Logical AND                 | `(5>3) && (2<4)` → true     | True only if both are true |
|                           | `||`                              | Logical OR                  | `(5<3) || (2<4)` → true     | True if at least one is true |
|                           | `!`                               | Logical NOT                 | `!(5>3)` → false            | Inverts the boolean value |
| **Increment/Decrement**   | `++`                              | Increment                   | `x++` or `++x`              | Increases value by 1 |
|                           | `--`                              | Decrement                   | `x--` or `--x`              | Decreases value by 1 |
| **Assignment**            | `=`                               | Simple assignment           | `x = 10`                    | Assigns value |
|                           | `+=`                              | Add and assign              | `x += 5` → `x = x + 5`      | |
|                           | `-=`                              | Subtract and assign         | `x -= 3` → `x = x - 3`      | |
|                           | `*=`                              | Multiply and assign         | `x *= 2` → `x = x * 2`      | |
|                           | `/=`                              | Divide and assign           | `x /= 4` → `x = x / 4`      | |
|                           | `%=`                              | Modulus and assign          | `x %= 3` → `x = x % 3`      | |
|                           | `&=` `|=` `^=` `<<=` `>>=`       | Bitwise assignments         | (see bitwise below)         | |
| **Bitwise**               | `&`                               | AND                         | `5 & 3` → 1 (0101 & 0011)   | Bit-by-bit AND |
|                           | `|`                               | OR                          | `5 | 3` → 7 (0101 | 0011)   | Bit-by-bit OR |
|                           | `^`                               | XOR                         | `5 ^ 3` → 6 (0101 ^ 0011)   | Bit-by-bit XOR |
|                           | `~`                               | NOT (ones complement)       | `~5` → -6 (in 2's complement) | Inverts all bits |
|                           | `<<`                              | Left shift                  | `5 << 1` → 10               | Shifts bits left (×2 per shift) |
|                           | `>>`                              | Right shift                 | `5 >> 1` → 2                | Shifts bits right (÷2 per shift, sign-extended for signed) |
| **Ternary (Conditional)** | `? :`                             | Conditional operator        | `x > 0 ? "pos" : "neg"`     | Short if-else |
| **Others**                | `sizeof`                          | Size of                     | `sizeof(int)` → 4           | Returns size in bytes |
|                           | `,`                               | Comma operator              | `x=5, y=10`                 | Evaluates left then right, returns right |
|                           | `->` `.`                          | Member access               | `ptr->x` or `obj.x`         | |
|                           | `&` `*`                           | Address-of / Dereference    | `&x`, `*ptr`                | |

### Pre-increment vs Post-increment Example

```cpp
int x = 5;
cout << x++ << endl;   // prints 5, then x becomes 6
cout << ++x << endl;   // x becomes 7, then prints 7
```

### Ternary Operator Example

```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;   // max = 20
string result = (a % 2 == 0) ? "even" : "odd";
```

### Operator Precedence Table (Highest to Lowest)

| Precedence | Operators                              | Description                          | Associativity |
|------------|----------------------------------------|--------------------------------------|---------------|
| 1          | `::`                                   | Scope resolution                     | Left-to-right |
| 2          | `++ --` `()` `[]` `.` `->` `sizeof`    | Postfix inc/dec, function call, etc. | Left-to-right |
| 3          | `++ --` `! ~` `+ -` `* &` (unary)      | Prefix inc/dec, unary operators      | Right-to-left |
| 4          | `type*`, `type&` (pointer/reference)   | Casts                                | Right-to-left |
| 5          | `* / %`                                | Multiplicative                       | Left-to-right |
| 6          | `+ -`                                  | Additive                             | Left-to-right |
| 7          | `<< >>`                                | Bitwise shifts                       | Left-to-right |
| 8          | `< <= > >=`                            | Relational                           | Left-to-right |
| 9          | `== !=`                                | Equality                             | Left-to-right |
| 10         | `&`                                    | Bitwise AND                          | Left-to-right |
| 11         | `^`                                    | Bitwise XOR                          | Left-to-right |
| 12         | `|`                                    | Bitwise OR                           | Left-to-right |
| 13         | `&&`                                   | Logical AND                          | Left-to-right |
| 14         | `||`                                   | Logical OR                           | Left-to-right |
| 15         | `?:`                                   | Ternary conditional                  | Right-to-left |
| 16         | `= += -= *= /= %=` `&=` etc.           | Assignment operators                 | Right-to-left |
| 17         | `,`                                    | Comma                                | Left-to-right |

**Tip**: When in doubt, use parentheses `()` — they have the highest precedence and make code much clearer!

```cpp
// Ambiguous without parentheses
int result = a + b * c;        // * has higher precedence → a + (b*c)

// Explicit and safer
int result = a + (b * c);
```

