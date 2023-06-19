$$
\newcommand{\Q}{\mathbb{Q}}
\newcommand{\R}{\mathbb{R}}
\newcommand{\Z}{\mathbb{Z}}
\newcommand{\N}{\mathbb{N}}
\newcommand{\t}{\hspace{0.2cm}}
$$
****
## Question

Prove that the given function is discontinuous $\forall x \in \Q$
$f(x) = 1/q \textnormal{ if } x=p/q \t with \t p \in \Z \t and \t q \in \N, \t gcd(p, q) = 1$
$f(x) = 0 \textnormal { if x is irrational}$

## Solution

### Given: 
$f(x) = 1/q \textnormal{ if } x=p/q \t with \t p \in \Z \t and \t q \in \N, \t gcd(p, q) = 1$
$f(x) = 0 \textnormal { if x is irrational}$

### To Prove:
$f$ is discontinuous $\forall x \in \Q$ 

### Proof:

Choose arbitrary $x_0 \in \Q$ such that $x_0 = p/q \t with \t p \in \Z \t and \t q \in \N, \t gcd(p, q) = 1$ 
$f(x_0) = 1/q$
Let $y$ be an irrational number, i.e, $y \in \R \setminus \Q$
Define $x_n = x_0 + y/n \t \forall n \in \N$
$$
\begin{align}
x_n - x_0 = y/n \t \forall n \in \N \\
|x_n - x_0| = y/n \t \forall n \in \N \\
|x_0-x_n| = y/n \t \forall n \in \N
\end{align}
$$
  
  Since $x_n$ is irrational for all n
  $$
  \begin{align}
  f(x_n) = 0 \t \forall n \in \N \\
  f(x_0) = 1/q \\
  f(x_0) - f(x_n) = 1/q \\
  |f(x_0) - f(x_n)| = 1/q \\
  \end{align}
 $$
Now, choose $\epsilon = 1/q$, and for some $\delta > 0$, choose $n = 1 + \lceil{y/\delta}\rceil$ ($\lceil x \rceil$ is the least integer $\ge$ $x$)

We have
$$
\begin{aligned}
|x_0-x_n|=\frac{y}{1+\lceil y/\delta \rceil} < \frac{y}{\lceil y/\delta \rceil} \le \delta \\
|f(x_0)-f(x_n)| = 1/q \ge \epsilon
\end{aligned}
$$
Therefore, from the definition of continuity, $f$ is discontinuous at $x_0 \t \forall x_0 \in \Q$
Hence, $f$ is discontinuous $\forall x \in \Q$

$\LARGE QED$
