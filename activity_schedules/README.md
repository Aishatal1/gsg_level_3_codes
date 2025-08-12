Problem Statement

Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set:
{"Swimming", "Running", "Football"}
subject to the constraint that no two consecutive days have the same activity.

Input

A single integer n (1 ≤ n ≤ 10).

Output

Print each valid schedule on its own line, with activities separated by a single space.

After listing all schedules, print a final line: COUNT: X where X is the total number of schedules
generated.

Example

Input

2

Valid schedules

Football Running

Football Swimming

Running Football

Running Swimming

Swimming Football

Swimming Running

COUNT: 6

Hints

This is a recursion problem.

At each day, try the 3 activities but skip the one equal to the previous day's choice.

output of running an example in the solution:


2

 Swimming Running
 
 Swimming Football
 
 Running Swimming
 
 Running Football
 
 Football Swimming
 
 Football Running
 
CONUT: 6

Process finished with exit code 0

COUNT formula: 3 * 2^(n-1)

Aisha Taleb Ahmad Ahmad
aishataleb81@gmail.com
