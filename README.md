# ProgAssignments
programming assignments from the school (C++)


Assignment 1.1
  Define a function void sockerkaka(int antal), that writes a list of ingredients needed to make a sockerkaka for the amount(antal) of people.
  The recepie can be found at http://www.recepten.se/recept/sockerkaka.html and is for 4 people.
  Observe that your function must function for an okay amount of people and that 'egg' can only be natural numbers.

Assignment 1.2
  A variant of paying back a debt is the so called 'rak amortering'. 
  This means that the debt is payed back in an amount of equally large pieces, and that the interest that is formed from the remaining debt 
  becomes smaller after each payment. 
  The total cost 'k' of a loan (both 'amortering' and interest) can with 'rak armortering' be calculated with the following formula.
  
  k = P + ((r * P * (a + 1))/2)
  
  Where 'P' is the amount that has been loaned, 'r' is the interest, 'a' the amount of years to pay it back.
  Write a function void kostnad(float P, float r, int a) that calculates and writes 'k' as the formula above.

Assignment 1.3
  - Write a function bounce(n) that takes a natural number 'n' and writes all the numbers from n to 0 back to n.
    Example: bounce(4); would spell: 4 3 2 1 0 1 2 3 4
    The function is to be implemented with recursion.
  - Write a function bounce2(n) that does the same as bounce(n), but is not recursive but iterative.

Assignment 1.4
  In this assignment we will implement a simple dictionary with C++. 
  The dictionary will be interactive and the user shall be able to add and look up words in the dictionary.
  The dictionary will be implemented in two different ways, with two different ways to save the dictionary.


   The first way is to have two vectors of strings. 
    The first vector shall have the words in it and the second shall have the descriptions of the words in it.
    Use the class std::string for the strings, and std::vector to save them.

 The second way is to use the dictionary function. A function that keeps the word you want to look up as 'key' and the description as a
    value. Use the class std::map for it.
    
   The dictionary shall present the user with a main menu where the following alternatives are choiceable: 
   1: Insert
   2: Lookup
   The user shall be able to choose an alternative by pressing a number that represents the alternative.
   The program will then ask the user for the word that the alternative will operate with, in case of 'Insert' also ask for a description.
   It will not be allowed to have the same word twice in the dictionary, instead an error message will be printed when tried.
   In the case of 'Lookup', the description shall be printed on the screen if there is one, else an error message as well.
