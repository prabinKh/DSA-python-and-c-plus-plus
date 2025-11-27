
#### 1. Arithmetic Operators

| Operator | Name                  | Example          | Result     |
|----------|-----------------------|------------------|------------|
| `+`      | Addition              | `5 + 3`          | `8`        |
| `-`      | Subtraction           | `5 - 3`          | `2`        |
| `*`      | Multiplication        | `5 * 3`          | `15`       |
| `/`      | Division (float)      | `10 / 3`         | `3.333...` |
| `//`     | Floor Division        | `10 // 3`        | `3`        |
| `%`      | Modulus (remainder)   | `10 % 3`         | `1`        |
| `**`     | Exponentiation        | `2 ** 4`         | `16`       |

```python
print(10 / 3)   # 3.3333333333333335
print(10 // 3)  # 3 (drops decimal part)
print(2 ** 10)  # 1024
```

#### 2. Relational (Comparison) Operators

Return `True` or `False`

| Operator | Meaning                  | Example      | Result |
|----------|--------------------------|--------------|--------|
| `==`     | Equal to                 | `5 == 5`     | True   |
| `!=`     | Not equal to             | `5 != 3`     | True   |
| `>`      | Greater than             | `5 > 3`      | True   |
| `<`      | Less than                | `5 < 3`      | False  |
| `>=`     | Greater than or equal    | `5 >= 5`     | True   |
| `<=`     | Less than or equal       | `3 <= 5`     | True   |

Also works with strings (lexicographical order):
```python
"apple" < "banana"  # True
"abc" == "abc"      # True
```

#### 3. Logical Operators

Used to combine conditional statements

| Operator | Name    | Description                          | Example                    |
|----------|---------|--------------------------------------|----------------------------|
| `and`    | AND     | True if both are True                | `True and False` → False   |
| `or`     | OR      | True if at least one is True         | `True or False` → True     |
| `not`    | NOT     | Inverts the truth value              | `not True` → False         |

```python
x = 10
print(x > 5 and x < 15)   # True
print(x < 5 or x > 15)    # False
print(not (x == 10))      # False
```

Short-circuit evaluation: `and` and `or` stop evaluating as soon as result is determined.

#### 4. Increment / Decrement Operators

Python does NOT have `++` or `--` like C/C++/Java.

Use `+= 1` or `-= 1` instead:



#### 5. Assignment Operators

| Operator | Example     | Equivalent To     |
|----------|-------------|-------------------|
| `=`      | `x = 5`     | x = 5             |
| `+=`     | `x += 3`    | x = x + 3         |
| `-=`     | `x -= 3`    | x = x - 3         |
| `*=`     | `x *= 3`    | x = x * 3         |
| `/=`     | `x /= 3`    | x = x / 3         |
| `//=`    | `x //= 3`   | x = x // 3        |
| `%=`     | `x %= 3`    | x = x % 3         |
| `**=`    | `x **= 3`   | x = x ** 3        |
| `&=`     | `x &= 3`    | x = x & 3 (bitwise)|
| `|=`     | `x \|= 3`   | x = x \| 3        |
| `^=`     | `x ^= 3`    | x = x ^ 3         |
| `>>=`    | `x >>= 3`   | x = x >> 3        |
| `<<=`    | `x <<= 3`   | x = x << 3        |

#### 6. Bitwise Operators

Work on binary representation of integers

| Operator | Name                  | Example       | Binary Example (5=101, 3=011) |
|----------|-----------------------|---------------|-------------------------------|
| `&`      | AND                   | `5 & 3` → 1   | 101 & 011 = 001 → 1           |
| `|`      | OR                    | `5 | 3` → 7   | 101 \| 011 = 111 → 7          |
| `^`      | XOR                   | `5 ^ 3` → 6   | 101 ^ 011 = 110 → 6           |
| `~`      | NOT (invert bits)     | `~5` → -6     | ~101 = ...11111010 (-6)       |
| `<<`     | Left shift            | `5 << 1` → 10 | 101 << 1 = 1010 → 10          |
| `>>`     | Right shift           | `5 >> 1` → 2  | 101 >> 1 = 010 → 2            |


#### 7. Ternary (Conditional) Operator

Python has a concise conditional expression:

```python
# Syntax: value_if_true if condition else value_if_false

x = 10
result = "Even" if x % 2 == 0 else "Odd"
print(result)  # Even

# Equivalent to longer if-else:
if x % 2 == 0:
    result = "Even"
else:
    result = "Odd"
```

Can be nested (but avoid too much nesting for readability):

```python
age = 20
category = "Child" if age < 13 else "Teen" if age < 20 else "Adult"
```

#### 8. Operator Precedence (Highest to Lowest)

| Precedence | Operators                              | Description                          |
|------------|----------------------------------------|--------------------------------------|
| 1          | `()`                                   | Parentheses                          |
| 2          | `**`                                   | Exponentiation                       |
| 3          | `+x`, `-x`, `~x`                       | Unary plus, minus, bitwise NOT       |
| 4          | `*`, `/`, `//`, `%`                    | Multiplication, division, etc.      |
| 5          | `+`, `-`                               | Addition, subtraction                |
| 6          | `<<`, `>>`                             | Bitwise shifts                       |
| 7          | `&`                                    | Bitwise AND                          |
| 8          | `^`                                    | Bitwise XOR                          |
| 9          | `|`                                    | Bitwise OR                           |
| 10         | `==`, `!=`, `>`, `>=`, `<`, `<=`       | Comparisons                          |
| 11         | `is`, `is not`, `in`, `not in`         | Identity and membership             |
| 12         | `not`                                  | Logical NOT                          |
| 13         | `and`                                  | Logical AND                          |
| 14         | `or`                                   | Logical OR                           |
| 15         | `if ... else`                          | Ternary operator                     |
| 16         | `=`, `+=`, `-=`, etc.                  | Assignment operators                 |

Use parentheses `()` to control or clarify order!
