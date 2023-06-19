**Program**: A sequence of instructions along with data.

### Printing
```c
#include<stdio.h> // Preprocessor Directive

int main() // main function with return type int
{
	printf("Hello World");
	
	return 0;
}
```

```bash
gcc hello_world.c -o hello
./hello
```
>Hello World

### Reading
```c
#include<stdio.h>

int main()
{
    int a;
    scanf("%i", &a);
    printf("a = %i", a);

    return 0;
}
```

```bash
gcc scan.c -o scan
./scan
42
```
>a = 42
