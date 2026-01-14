#Algorithm for guesser game

```
main():
  make a 20 lenghth caharacter array
  make an int called guess and init to 999
  make an int called correct and randomly generate the value
  make an int called turns and init to 0
  make an int (bool) called keepGoing init -1 (TRUE)

  seed random number gen
  generate random number between 1 and 100 and set that number to correct
  ask user for name and set to userName
  greet user
  
  while(keepGoing is TRUE:
    incriment turn by 1
    ask user for number assign to guess
    if guess < correct:
      tell the user "too low"
    else if guess > correct:
       tell the user "too high"
    else:
      tell the user "you win"
      set keep going to FALSE

  ecaluate performance
  if turns < 7:
    tell the user "you did good"
  else if turns > 7:
    tell the user "you can do better"
  else:
    tell the user "good job"

```
