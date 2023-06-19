### Get smaller number

```c
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 5;

	int z = y ^ ((x ^ y) & -(x < y));

	printf("%i", z);
	return 0;
}
```
> 5

### ~p

```c
#include <stdio.h>

int main()
{
	int x = 60;
	printf("%i", x);

	return 0;
}
```
> -61

### Odd or even
```c
#include <stdio.h>

int main()
{
	int x = 11;
	printf("%i\n", x&1);
	x++;
	printf("%i", x&1);

	return 0;
}
```
> 1
> 0

