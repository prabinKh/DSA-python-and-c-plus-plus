

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

