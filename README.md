*Ben Gant*

*bengant3@gmail.com*

### Monty Hall Problem Simulator

##### What is the Monty Hall Problem?

The Monty Hall "Paradox" is a famous math problem that shows that probability is not always intuitive.

Monty Hall was the host of the game show Let's Make a Deal. Part of the game consisted of three doors, one with a prize 
behind it, the other two having a goat or some non-prize object. A contestant chooses a door, and before it is opened, 
Monty Hall opens one of the other two doors, always revealing a goat. He then asks the contestant if they would like to 
switch their choice. Many people guess that switching doesn't make a difference, surmising that there are only 2 
possible doors now and thus they have a 50% chance at the prize.

In fact, switching doors doubles the odds of a contestant winning the prize. Sticking with your original door gives you 
a 1/3 chance, while switching to the other possible door when Monty offers makes the odds of winning the prize 2/3.

##### What is this program?

This program is a simulator that allows you to run numerous iterations of the Monty Hall problem to see for yourself 
that this is true. If you run many iterations, you will see you win approximately 2/3 if you switch, and 1/3 if you 
don't.

The user inputs the number of iterations and whether to switch doors or not. For each iteration, simulator chooses a 
door for the contestant at random, so the user can not input a choice. It chooses a prize door at random. If they are 
the same door, one of the other two is randomly chosen to be "shown" to the contestant. Otherwise, the door that was 
neither chosen nor has the prize is "shown". The door to be shown is determined using modulus arithmetic. A win is added
the total wins count based on whether the right door was either "chosen" or "switched to."

I wrote this program to investigate this infamous math problem for myself, and to show my competence in coding in C++.