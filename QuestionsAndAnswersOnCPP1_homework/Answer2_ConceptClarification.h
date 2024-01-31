#pragma once

/*2.	Concept Clarification:
Explain the difference between a while loop and do-while loop in C++.

Answer (EN):
"While loop" and "do-while loop" are ways of repeating specific code until a given condition is met.
While the "while loop" checks whether the condition is met before the code itself is executed, the "do-while loop" first executes the code and then checks whether the condition is met. In this way, at least one execution of the code is guaranteed, whether it meets the condition or not.

Answer (BG):
"While loop" и "do-while loop" са начини за повтаряне на конкретен код, докато не бъде изпълнено дадено условие.
Докато "while цикълът" проверява дали условието е изпълнено, преди самото изпълнение на кода, "do-while цикълът" първоначално изпълнява кода и след това проверява дали условието е изпълнено. По този начин се гарантира поне едно изпълнение на кода, независимо дали отговаря на условието или не.

Example:

#include <iostream>
using std::cout;
using std::endl;
int main()
{
  // DO-WHILE LOOP: This code will run until a = 0 (a is decremented by 1 on each iteration). If a is initially set to 0, the code will be executed once and the program will terminate.
   int a = 0;
   do
   {
      cout << "That is do-while loop. " << endl;
      a--;

   } while (a > 0);

  //WHILE LOOP: This code will run until b = 0 (b is decremented by 1 on each iteration). If b is initially set to 0, the code will not be executed even once and the program will terminate.
  int b = 1;
  while(b > 0)
  {
   cout << "That is while loop. " << endl;
   b--;
  }

   return 0;
} */