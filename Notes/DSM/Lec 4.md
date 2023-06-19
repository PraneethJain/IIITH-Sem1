### Signed magnitude representation

- The number consists of a magntiude and a symbol (+ or -) or a bit (0 or 1) indicating the sign
- This is similar to the representation of signed numbers used in ordinary arithmetic
- Eg: 01001 represents +9, 11001 represents -9 in signed magnitude representation
- **Note**: +0 is represented as 0000 and -0 is represented as 1000. So, two representations for zero - inefficient and may cause errors

### Signed complement representation

- In digital hardware, it is more convenient to use **_signed complement_** system for representing negative numbers.
- In this system, a negative number is indicated by its complement
	- Signed complement system negates a number by taking its complement
- Since positive numbers always start with 0 (plus) in the leftmost position (in all representations), it follows that the complement will always start with a 1, indicating a negative number
- In signed-1's complement, -9 is obtained by taking the 1's complement of all the bits of +9 (01001), including the sign bit, i.e, **10110**
- The signed-2's complement representation of -9 is obtained by taking the 2's complement of +9, including the sign bit, i.e, **10111**

### Reading and Writing signed complements

##### Finding signed 2's complement representation
- +3 in 4 bits: 0011
- -7 in 4 bits: 0111 -> 1001
- 0  in 4 bits: 0000
- -39 in 8 bit: 00100111 -> 11011001

## Signed Addition

- If the numbers are represented in memory in 2's complement form, the sign of the sum takes care of itself. The result is also in 2's complement representation
- The sign bit is to be included in the addition and if there is a carry, it is discarded
- Ex:
	-  6 + 13 = 19
		00000110 + 00001101 = 00010011
	- -6 + 13 = 7
		11111010 + 00001101 = 00000111 (drop the carry)

- **Note**: In order to obtain a correct answer, we must ensure that the result has a sufficient number of bits to accommodate the sum
- If we start with two n bit numbers and the sum occupies n+1 bits, we say that an overflow occurs

## Signed Subtraction

- Subtraction of two signed binary numbers when negative numbers are in 2's complement form is simple and can be stated as follows:
	- Take the 2's complement of the subtrahend (including the sign bit) and add it to the minuend (including the sign bit)
	- A carry out is discarded
- This works because: M-N = M + (-N)
