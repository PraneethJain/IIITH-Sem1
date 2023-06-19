### Range of signed integer numbers

- For 2's complement signed numbers, the range of values for n-bit numbers is: 
	$-2^{n-1}$ to $2^{n-1}-1$
- Ex: with 2 bytes, $n=16$, range is -32,768 to +32,767
- How to represent large integers and numbers with integer and fractional parts:
	- Fixed Point Vs Floating point representation

## Representing fractions (real numbers)

- We need to operate with fractions all the time
- This means we need a method to store / represent them in binary

### Fixed Point Representation

- The simplest way is to have a **"fixed" point representation**, where the binary point is assumed to be fixed at a certain location
- For example, for a 4-bit system, if given fixed point representation is ii.ff, then the smallest positive value is 00.01 (0001) and maximum value si 11.11 (1111)
- The point is not actually stored - it is assumed to be there
- There are three parts of a fixed point number representation: the sign field, integer field, and fractional field - which means we can also have signed magnitude fixed point numbers and signed complement fixed point numbers.
- The advantage of using a fixed point representation is performance and ease of arithmetic.
- The disadvantage is relatively limited range of values that they can represent
- So, it is usually inadequate for numerical analysis as it does not allow enough numbers and accuracy
- For instance, using a 32-bit format: the 1 sign bit, 15 bits for integer, and 16 bits for the fractional part, the smallest positive number is $2^{-16} \approx 0.000015$, and the largest positive number is 32768

### Floating Point Representation

- This representation does not reserve a specific number of bits for the integer part or the fractional part
- Number is first converted to the form $N=M*r^c$ and store mantissa $M$ and exponent $e$ as binary
	- Ex: $241,506,800 = 0.2415068 * 10^9$
- Clearly, a large mantissa and small exponent can give both high precision and high range
- For binary floating point numbers, the format is dfined by **IEEE Standard 752 1985** in three forms: single precision (32 bits), double precision (64 bits) and extended precision (80 bits).
- **_a_**
