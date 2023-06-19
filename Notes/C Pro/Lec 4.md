## Swap two variables

#### With third variable
```c
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 5;
	printf("x=%i\tx=%i\n", x, y);
	int temp = x;
	x = y;
	y = temp;
	// Swapped

	return 0;
}
```

#### Without third variable
```c
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	// Swapped

	return 0;
}
```

#### In one line
```c
#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;
    x = x + y - (y=x);
    // Swapped

    return 0;
}
```

## Incremenent

- `b = a++` (post increment operator): Copies value of `a` to `b` and then increments `a`.
- `b = ++a` (pre increment operator): Increments `a` and then assigns value of `a` to `b` (**faster**).
- `a += 1` is same as `a = a + 1`

## Relational Operators

- a <= b;
- a >= b;
- a == b;
- a > b;
- a < b;
- a != b;

```c
#include <stdio.h>

int main()
{
	int p;
	p = 8 > 5;
	printf("%i\n", p);
	p = 4==4;
	printf("%i\n", p);

	return 0;
}
```
> 1
> 1
