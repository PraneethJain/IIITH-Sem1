## Tokens

**_smallest individual element in C_**

- Keywords: `if`, `else`, etc.
- Identifier: Names given to variables.
- Constant.
- String: A sequence of characters
- Symbols: `~`, `%`, etc.

## Bitwise Operators

```c
#include <stdio.h>

int main()
{
    int p = 60, q = 13;

    // 111100 | 001101 = 111101
    // 111101 = 1+4+8+16+32 = 61
    // Or
    printf("%i\n", p | q);

    // 111100 & 001101 = 001100
    // 001100 = 4+8 = 12
    // And
    printf("%i\n", p & q);
    
    // 111100 ^ 001101 = 110001
    // 110001 = 1+16+32 = 49
    // Xor
    printf("%i\n", p ^ q);

    // 111100 >> 1 = 11110
    // 11110 = 2+4+8+16 = 30
    printf("%i\n", p >> 1);

    // 111100 << 1 = 1111000
    // 1111000 = 8+16+32+64 = 120
    printf("%i\n", p << 1);

    return 0;
}
```
> 61
> 12
> 30
> 120

**Note**: p ^ q = pq' + p'q

$\oplus$ is symbol for **xor** in math.
^ is symbol for **xor** in computer science.

### Swap two variables using xor (^)

```c
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 5;

	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("%i\n%i", x, y);

	return 0;
}
```
> 5
> 10

