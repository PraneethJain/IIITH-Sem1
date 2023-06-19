## Data Types

- Void 

### Basic Data Types
- Integer (%d or %i)
- Float (%f)
- Char (%c)
- Double (%lf)

### Enumerated Data Types
- Enum

### Derived Types
- Arrays
- Structs
- Unions
- Pointers

### Sizes
- Int: 4 bytes
- Char: 1 byte
- Short: 2 bytes
- Long: 8 bytes
- Unsigned char: 1 byte
- Float: 4 bytes
- Double: 8 bytes
- Long Double: 10 bytes

```c
#include<stdio.h>

int main()
{
	double a;
	scanf("%lf", &a);
	printf("Inputted value is %lf\n", a);

	return 0;
}
```

```bash
gcc -o double double.c
./double
5.567
```
> Inputted value is 5.56700



![[Lec 3 2022-11-08 11.30.21.excalidraw]]
Return value of assignment operator is the RValue

```c
int x=10, y=5, z=3;
x = y;
y = z;
z = x;
```
`x=5, y=3, z=5`
