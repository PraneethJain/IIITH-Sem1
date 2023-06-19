****
$$
\newcommand{\N}{\mathbb{N}}
\newcommand{\t}{\hspace{0.2cm}}
$$
# Definitions

### Complete
A formal system $F$ is complete if for any statement (proposition) $p$ in $F$, either $p$ or $\neg p$ can be proven using $F$'s axioms.

$F$ is incomplete if it is not complete.

### Consistent
A formal system $F$ is consistent if for any statement (proposition) $p$ in $F$, both $p$ and $\neg p$ cannot be proven together using $F$'s axioms.

F is inconsistent if it is not consistent.

### Elementary Arithmetic
A formal system $F$ is said to be able to carry out elementary arithmetic if the set of theorems of [Robinson Arithmetic](https://en.wikipedia.org/wiki/Robinson_arithmetic) can be proven using $F$'s axioms.

****
# Theorem Statement

Any consistent formal system $F$ within which a certain amount of elementary arithmetic can be carried out is incomplete.

## Implications

For any mathematical system (**group, ring or field**) with any amount of axioms (with which elementary arithmetic can be performed), there will always exist theorems whose truth can not be determined.

Even in the field of real numbers, there exist propositions which can neither be proven true or false. For example, the continuum hypothesis is independent of ZFC, i.e, it is proven that the continuum hypothesis can neither be proven nor disproven with our current set of axioms.

Various philosophical arguments stem from the results of this theorem regarding the pursuit of rigorous proofs.

****
# Proof Sketch

## Assumptions

We assume our formal system to be **Peano Arithmetic** ($P$), based on the [Peano Axioms](https://en.wikipedia.org/wiki/Peano_axioms).
We assume that $P$ is consistent.
This formal system consists of 15 symbols:
- 0
- S for increment
- $+$ and x for addition and multiplication
- $\land$, $\lor$, and $\neg$ for logical and, logical or and logical negation.
- $\forall$, $\exists$ for universal and existential quantifiers.
- $=$ and $<$ for equality and less than.
- $($ and $)$ for order precedence.
- $x$ as a variable, and $*$  for creating more variables. ($x^*, x^{**}$, ...)
Let the set of these symbols be $S$
(This system is capable of performing elementary arithmetic.)

## Proof

- Every formula in $P$ can be expressed as a combination of the 15 symbols.
- Let ${J_n}$ be the $n^{th}$ segment of $\N$ = ${\{1, 2, 3, ..., n\}}$.
- We assign a natural number to each $s \in S$ from $0 \textnormal{ to } n-1\textnormal{, } \mathbf{card}(S) = n$ with a function $f: S \rightarrow J_n$.
- Let the set of all collections of $s \in S$ be $T$. We can construct T by
	$\displaystyle \LARGE T = \bigcup_{k \in \N}^{} {\{f: J_{k} \rightarrow S \} }$
- T is the set of all propositions of $P$.
- Define a function G:
	$\Large G: T \rightarrow \N$
	$\displaystyle \Large G(t) = \sum_{i = 0}^{len(t)-1} n^i  f(t_i)$
- This function G is trivially injective. Since G is an injective function from $T$ to $\N$, $T$ is a countably infinite set.
- $G(t)$ is called the Gödel number of t. Such a numbering is called **Gödel numbering**
- Every provable proposition is either an axiom or deduced in finite steps from axioms. Therefore, using the same function $G$, we can map entire proofs to $n \in \N$. 
- Let any arbitrary proposition be $Q$. Define a formula $Proof(x, y)$ such that
	$Proof(x, y)$ is provable $\iff$  $x = G(\textnormal{proof of }Q)$ and $y = G(Q)$
- Therefore, the provability of a proposition is a proposition itself, and it also has a corresponding Gödel number.
- $$
\begin{align}
\forall n \in \N \t \forall F \textnormal{ such that } F(x) \textnormal{ is a formula,} \\
\textnormal{let }q(n, G(F)) \textnormal{ be a binary relation that is true} \iff n \neq G(\textnormal{ proof of } F(G(F)))
\end{align}$$
- Define $K(x) = \forall y \t q(y, x)$
- Now, $K(G(K)) = \forall y \t q(y, G(k))$
	i.e, For all y, y is not the Gödel number of  G(K)
	If no Gödel number correspongs to G(K), then there is no proof of K(G(K))
- Therefore, there always exists a formula in any consistent system which cannot be proven.
- **Hence, any such consistent system is incomplete**

$\LARGE QED$
