# cs50x-problem-set-1
Dive into problem set 1 of Harvard's CS50x! Explore my solutions, learn computer science fundamentals, and join the coding adventure.

📂 Contents

- hello.c — Prints "hello, world"
- hello_user.c — Greets the user by name
- mario.c — Builds a half-pyramid based on user input
- cash.c — Calculates minimum coins for change using a greedy algorithm

1. Hello, World!

The classic starting point for every programmer!  
This program simply prints:

hello, world

A great way to get familiar with compiling and running C code.

2.Hello with User Name

A small twist on Hello World:  
*This program prompts the user for their name and greets them personally. Example:*

What's your name?
Alice
hello, Alice

It’s a simple introduction to user input and string handling.


3.Mario Game (Pyramid Builder)

Inspired by Nintendo’s Mario, this program builds a half-pyramid of bricks (#) with a user-specified height.

*Example for input = 3:*

  #
 ##
###


*How does the code handle various inputs?*
- *Negative numbers (-1, etc.):* Prompts the user again until a valid value is entered.
- *Zero (0):* Produces no output (since pyramid with zero height is just… nothing).
- *Positive numbers (1, 2, 3, etc.):* Builds a half-pyramid of the specified height.
- *Letters or words:* Prompts the user again (expects a number).
- *No input (just Enter):* Prompts the user again.


 4. Cash Code (Greedy Algorithm for Change)

This program determines the minimum number of coins needed to give a user change, using U.S. coin denominations (quarters, dimes, nickels, pennies) and a *greedy algorithm*.

*How does it work?*  
- Always uses the largest coin possible for the remaining amount.
- Continues until the change is given with as few coins as possible.

*Example outputs:*
- Input -1: Prompts again for valid input.
- Input 0: Outputs 0 (no coins needed).
- Input 1: Outputs 1 (one penny).
- Input 4: Outputs 4 (four pennies).
- Input 5: Outputs 1 (one nickel).
- Input 24: Outputs 6 (two dimes, four pennies).
- Input 25: Outputs 1 (one quarter).
- Input 26: Outputs 2 (one quarter, one penny).
- Input 99: Outputs 9 (three quarters, two dimes, four pennies).

This program demonstrates the power and simplicity of greedy algorithms when the optimal solution can always be found by taking the biggest immediate “bite” out of the problem.
