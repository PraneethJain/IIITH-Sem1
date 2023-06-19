> Textbook: M. Morris Mano and Michael D. Ciletti, "Digital Design"

## Logistics

* Three 1-hour lectures / week
* One 3-hour lab / week
* One 1-hour tut / week

## Assessment

*  Quizzes (x2)        10%
*  Midsem               20%
*  Lab Reports (x9)  15%
*  Lab Exam             20%
*  End Sem              30%

## About

* Number Systems 
* Boolean Algebra
* Logic Functions
* Combinational Circuits
* Sequential Circuits
* Memory  Design
* Processor Design

## Number System

* Put symbols in positions to denote their "power"
* The _base_ or the _radix_ of the decimal number system is 10

### Octal
* The base or radix is 8
* Symbols are 0,1,2,3,4,5,6,7
* After 7, 10

### Hexadecimal
* The base or radix is 16
* Symbols are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
* After F, 10

### Binary
* The base or radix is 2
* The symbols are: 0, 1 (bit)
* The counting is as: 0, 1, 10, 11, ...
* Leftmost digit is MSB (Most significant bit)
* RIghtmost digit is LSB (Least significant bit)

We denote base of the number using subscript.
In general a number $(a_4a_3a_2a_1a_0)_r = a_4 r^4 + a_3 r^3 + a_2 r^2 + a_1 r^1 + a_0 r^0$

## Conversions

#### From Oct to Binary
Take each digit and convert it individually into _three_ bits
$(433)_8 = 100  011 011$

### From Hex to Binary
Take each digit and convert it individually into _four_ bits
$(DEAD)_{16} = 1101 1110 1010 1101$

#### From Decimal to Binary
* Divide by radix
* Save the remainder
* Repeat till quotient is 0
* Arrange the remainders in reverse order

### From Binary to Oct
Take three bits and convert it individually to a symbol
$(110 101 011)_2 = (653)_8$

### From Binary to Hex
Take four bits and convert it individually to a symbol
$(1110 1011)_2 = (EB)_{16}$

