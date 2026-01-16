#Algorithm for guesser game

```
main():
  make a 20 lenghth caharacter array
  ask user for name and set to userName
  greet user

  make an int called guess and init to 999
  make an int called turns and init to 0
  make an int (bool) called keepGoing init -1 (TRUE)

  seed random number gen
  make an int called correct set it to a randon number beteen 1 and 100
  
  while(keepGoing is TRUE:
    ask user for number assign to guess
    incriment turn by 1
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
