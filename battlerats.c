/************************
This is to certify that this project is my own work, based on my personal efforts in studying and
applying the concepts learned. I have constructed the functions and their respective algorithms and
corresponding code by myself. The program was run, tested, and debugged by my own efforts. I further
certify that I have not copied in part or whole or otherwise plagiarized the work of other students
and/or persons.

OMANG, ELYANA DE GUZMAN
************************/

/************************
DOCUMENTATION

/
  Description:  what the function does
  Parameters:
      param1    what this param1 is for
      param2    description of param2
          :
  Return value: description
/

TO-DOs
  >> Players must ENLIST help but the stronger the unit, the more expensive it will be.
  >> Both players are given 3000 coins (integers) and a castle health of 1300 HP (int).
  >> Player 1 is Rodentopolis and Player 2 is Squeaktopia.
  >> Kingdom name, current coins, and current castle health should be displayed during the player's turn.
  >> Each round is quantified in decades. The game starts in the year 1300 and ends on year 1400.
     The current year should be displayed during the player's turn
  >> During a turn, the player is prompted with the following actions:
                                              Strength  |  Cost  |  Reward  |  Multiple?
        - Enlist a footmouse/mice                 5     |  100   |   110    |     YES
        - Enlist a rat knight(s)                  35    |  500   |   650    |     YES
        - Enlist the rat king                     300   |  5000  |   5500   | 1 per turn
        - Rally army (this ends their turn)
  >> The current number of enlisted units per unit type in the army should be displayed in the entirety of
     player's turn.
  >> The player will be asked for footmouse or knight quantity. They can enlist as much as their coins
     allows them to.
  >> An error message should be displayed if the player cannot afford the amount.
  >> After displaying the message, the game should prompt the four actions again.
  >> After both players have rallied their army, the victorious army will then be determined based on the
     total strength of the armies. Once the result of the battle is decided, the round ends and the current
     year progresses to the next decade.
  >> Both players are awarded 500 coins at the end of every round
  >> To determine the outcome of the battle, both armies' TOTAL STRENGTH is compared, with the higher
     strength army becoming the victor.
  >> The TOTAL STRENGTH should be displayed the entire time during the player's turn.
  >> The amount of damage the winner will deal is the difference between the two armies' total strengths.
  >> The winner is awarded coins based on the TOTAL COST of the enemy army's composition.
  >> During the battle phase, both players' army composition and total strength should be displayed. The 
     winner of the battle is displayed, as well as the:
         - Amount of rewards the winning player will gain
         - Amount of damage (strength difference) it will deal to the losing player's castle.
  >> After a battle, both players' armies will all retire and will not be a part of the next round's battle.
  >> Remigods trigger a GOLDEN AGE for the struggling kingdom which reduces enlistment cost on the years
     1340 and 1380.
  >> The struggling player is determined by score = castleHP + (0.33 * coins).
  >> At the beginning of 1340 and 1380, the struggling player is given 1500 to 3000 coins using C random
     function (stdlib.h), as well as a 20% discount (the discounted price should be in integers) on all of
     their enlists costs for that round. The discount no longer applies after the round.
  >> The amount of coins awarded to the struggling player at the beginning of the golden age round should
     also be displayed during the struggling player's turn.
  >> The game ends whether:
        - a player's castle loses all of their HP or the end of the medieval era is reached.
        - the game reaches the end of the era (i.e. after the round of year 1400) and the winner is decided
          based on the same SCORE SYSTEM described earlier. The player with the higher score wins.
************************/
