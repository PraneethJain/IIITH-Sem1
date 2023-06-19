### Radix Complement

- The r's complement of an n-digit number _N_ in base _r_ is defined as $r^n-N$ for $N\neq0$ and as 0 for N = 0
- r's complement can be obtained by adding 1 to the (r-1)'s complement since $r^n-N = [(r^n-N)-N]+1$
- Thus, the 10's complement of decimal 2389 is 7610 + 1 = 7611 and is obtained by adding 1 to the 9's complement value
- The 2's complement of binary 101100 is 010011+1=010100 and is obtained by adding 1 to the 1's complement value
- Examples:
	- (66772)$_{10}$ = 33227 + 1 = 33228
	- (10011)$_2$ = 01100 + 1 = 01101

### Some notes on Complements

- If the original number N contains a radix point, the point should be removed temporarily in order to form the r's or (r-1)'s complement
- The radix point is then restored to the complemented number in the same relative position
- Example: (82.314)$_{10}$
	- 9's complement: 17.685
	- 10's complement: 17.686
- The complement of the complement restores the number to its original value
- r's complement of N is $r^n-N$, so that the complement of the complement is $r^n-(r^n-N) = N$ and is equal to the original number.

## Subtraction with Radix Complements

- Subtraction using method of borrowing is less efficient when implemented with digital hardware
- Consider subtraction $M - N$ in base _r_
- The algorithm using **Radix Complement**:
	- Take radix complement of subtrahend N : $r^n-N$
	- Add this to M: $(r^n-N)+M=r^n+(M-N)=r^n-(N-M)$
	- If you get a carry in the $(n+1)^{th}$ digit, then the result is **positive**, discard the carry and you are done.
	- If you **_do not_** get a carry in the $(n+1)^{th}$ digit, then the result is **negative**. Take the radix complement of the number to get the answer, then put a negative sign.

#### Subtraction using 10's complement

- (4637)$_{10}$ - (2579)$_{10}$
	- 10's complement of 2579 is 7421
	- 4637+2579 = 12058 ($r^n+(M-N)$)
	- Result after removing the end carry: **2058**
- (2579)$_{10}$ - (4637)$_{10}$
	- 10's complement of 4637 = 5363
	- 2579+5363=7942 ($r^n-(N-M)$)
	- No end carry, hence answer is -(10's complement of 7942) = **-2058**

## Subtraction with Diminished Radix Complements

- Lets assume we have to perform $M-N$ in base _r_
- The algorithm using **Diminshed Radix Complement**
	- Take diminshed radix complement of N: $r^n-1-N$
	- Add this to M: $r^n-1-N+M = r^n + (M-N-1) = (r^n - 1) - (N-M)$
	- If you get carry in the $(n+1)^{th}$ digit, then the result is **positive**, add the carry to the result and you are done
	- If you do not get a carry in the $(n+1)^{th}$ digit, then the result is **negative**. Take the diminshed radix complement of the number to get the answer, then put a negative sign.

#### Subtraction using 9's complement

- (76425)$_{10}$ - (28321)$_{10}$
	- 9's complement of 28321 is 71678
	- 76425+71678 = 148103 ($r^n+(M-N-1)$)
	- Drop the carry and add 1 to 48103
	- Sum is **48104**
- (2124)$_{10}$ - (9667)$_{10}$
	- 9's complement of 9667 is 0332
	- 2124+0332 = 2456 ($r^n-1-(N-M)$)
	- No end carry -> Answer is -(9's complement of 2456) = **-7543**

### Binary subtraction with complements

**With One's Complement**
- $(101011)_2-(111001)_2$
	- 1's complement of 111001 = 000110
	- 101011+000110 = 110001
	- No end carry -> answer is -(1's complenet of 110001) = **-1110**

**With Two's complement**
- $(110001)_2 - (010100)_2$
	- 2's complement of 010100 = 101100
	- 110001 + 101100 = 1011101
	- Result obtained by dropping end carry: **011101**

## Representation of negative numbers

- In ordinary arithmetic, a negative number is indicated by a minus sign and a positive number by a plus sign
- Computers must represent everything with binary digits
- It is customary to represent the sign with a bit placed in the leftmost poisition of the number
- The convention is to make the sign bit 0 for positive and 1 for negative
- This can be done using:
	- Signed magnitude representation
	- Signed complement representation
		- Signed 1's complement representation
		- SIgned 2's complement representation