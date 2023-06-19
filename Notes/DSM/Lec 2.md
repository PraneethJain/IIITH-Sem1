## Decimal Point

In general: $(a_2a_1a_0.a_{-1}a_{-2})_r$  can be expressed as $a_2r^2 + a_1r^1 + a_0r^0 + a_{-1}r^{-1} + a_{-2}r^{-2}$

Example: $(1.011)_2 = 1*2^0 + 0*2^{-1} + 1*2^{-2} + 1*2^{-3} = (1.375)_{10}$

#### Convert 0.3125 into binary
0.3125 * 2 = 0.625     integer part: 0 (MSB)
0.625 * 2 = 1.25         integer part: 1
0.25 * 2 = 0.50           integer part: 0
0.50 * 2 = 1.00           integer part: 1 (LSB)
$(0.3125)_{10} = (0.0101)_2$

#### Binary to Hex
(10 1100 0110 1011 . 1111 0010)$_2$ = (2C6B.F2)$_{16}$

#### Decimal to Octal
(0.510)$_{10}$
0.510 * 8 = 4.104
0.104 * 8 = 0.832
.
.
.
$(0.406517...)_{8}$

## Addition in various number systems

#### Octal
   1 6 7
\+  7 6 5
 1 1 5 4
 
#### Hexadecimal
   B A 3
 \+5 D E
 1 1 8 1

#### Binary
$(1101)_2 + (111)_2 = (10100)_2$

## Complements of numbers

* Complements are used in digital computers to simplify the subtraction operation and for logical manipulation
* Simplifying operations leads to simpler, less expensive circuits to implement the operations
* There are 2 types of complements for each base-_r_ system:
	*  The radix complement (r's complement) - called the 10's complement in decimal, 2's complement in binary and so on.
	*  The diminished radix complement ((r-1)'s complement') - called the 9's complement in decimal, 1's complement in binary and so on.

### Diminished Radix Complement

Given a number N in base _r_ having _n_ digits, the (r-1)'s  complement of N, i.e, its **diminished radix complement** is defined as $(r^n-1)-N$

#### Decimal
- For decimal numbers, the 9's complement of N is $(10^n-1)-N$
- In this case, $10^n-1$ is a number represented by n 9s
- It follows that the 9's complement of a decimal number is obtained by subtracting each digit from 9
- Examples:
	- 1242 -> 8757
	- 9981 -> 18

#### Binary
- For binary numbers, the 1's complement of N is $(2^n-1)-N$.
- $2^n-1$ is a binary number represented by n 1s.
- For n=4, $2^4 = (10000)_2$ and $2^4-1 = (1111)_2$. Thus, the 1's complement of a binary number is obtained by subtracting each digit from 1.
- However, when subtracting binary digits from 1, we can have either 1 - 0 = 1 or 1 - 1 = 0, which causes the bit to change from 0 to 1 or from 1 to 0 respectively.
- Therefore, the 1's complement of a binary number is formed by **changing 1's to 0's and 0's to 1's**.
- Examples:
	- 1011000 -> 0100111
	- 10000 -> 01111

