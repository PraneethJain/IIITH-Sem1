****
# Definitions

### [Sequential Game](https://en.wikipedia.org/wiki/Sequential_game)
A game where one player chooses their action before the other choose theirs, and the other players have information on the first player's choice so that the difference in time has no strategic effect.

### [Perfect Information](https://en.wikipedia.org/wiki/Perfect_information)
A sequential game has perfect information if each player is perfectly informed of all events that have previously occurred when making any decision, including the start of the game.
****
# Theorem Statement

In a finite two-person game of **perfect information**, either player 1 can force a win, or player 1 can force a tie, or player 2 can force a win.

## Implications

- In chess, either white can always win, black can always win or they can force a draw.
- In tic-tac-toe, either the first player always wins, or the second player can force a draw.
****
# Proof Sketch (by induction)

- Since the game is finite, assume the maximum length of the game is $n$.

#### Base Case

For $n=1$, only player 1 gets to move. After player 1 moves, an outcome has to be reached. If player 1 loses, then player 2 can force a win. If player 1 wins, then player 1 can force a win. If the game ends in a draw, then player 1 can force a draw.
Therefore, the hypothesis holds true for the base case.


#### Inductive Step

Assume that the hypothesis holds true for $n = k$
Now, it's either player 1's turn or player 2's turn.
If it is player 1's turn, the hypothesis holds true trivially, just like the base case.
If it is player 2's turn, after player 2 moves, the game has to end. So player 2 can either force a win, or end the game in a draw.

Therefore, if the hypothesis holds true for $n = k$, then it also holds true for $n = k+1$

Hence, in any such game, either player 1 can force a win, or player 1 can force a tie, or player 2 can force a win.

$\LARGE QED$
