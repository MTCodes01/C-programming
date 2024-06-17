| Precedence | Operators                               | Description                            | Associativity    |
|------------|-----------------------------------------|----------------------------------------|------------------|
| 1          | `++` `--` `()` `[]` `.` `->`            | Increment/decrement, function call, subscript, member access | Left-to-right    |
| 2          | `++` `--` `+` `-` `!` `~` `()` `(type)` `*` `&` `sizeof` `_Alignof` | Increment/decrement, unary operators, cast, dereference, address-of, sizeof, alignment | Right-to-left   |
| 3          | `*` `/` `%`                             | Multiplication, division, remainder   | Left-to-right    |
| 4          | `+` `-`                                 | Addition, subtraction                 | Left-to-right    |
| 5          | `<<` `>>`                               | Bitwise left shift, right shift        | Left-to-right    |
| 6          | `<` `<=` `>` `>=`                       | Relational operators                  | Left-to-right    |
| 7          | `==` `!=`                               | Equality operators                    | Left-to-right    |
| 8          | `&`                                     | Bitwise AND                            | Left-to-right    |
| 9          | `^`                                     | Bitwise XOR                            | Left-to-right    |
| 10         | `\|`                                    | Bitwise OR                             | Left-to-right    |
| 11         | `&&`                                    | Logical AND                            | Left-to-right    |
| 12         | `\|\|`                                  | Logical OR                             | Left-to-right    |
| 13         | `?:`                                    | Ternary conditional                    | Right-to-left    |
| 14         | `=` `+=` `-=` `*=` `/=` `%=` `&=` `\|=` `^=` `<<=` `>>=` | Assignment operators  | Right-to-left    |
| 15         | `,`                                     | Comma                                  | Left-to-right    |
