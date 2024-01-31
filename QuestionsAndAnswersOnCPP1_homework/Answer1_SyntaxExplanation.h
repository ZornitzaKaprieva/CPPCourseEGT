#pragma once

/*1.	Syntax Explanation: 
Describe what the following line of C++ code does: int* ptr = &var;.

Answer (EN): 
A variable (var) is a container that stores certain value. It has its address inside of memory (we can check that location - &var)
Pointer is container that stores the address of the variable (memory location).

Answer (BG): 
Променливата (var) е контейнер, който съдържа определена стойност. Именно защото е контейнер, тя има адрес, за койтo е заделена памет, като този адрес може да се достъпи (&var).
Пойнтерът е контейнер, който съхранява адреса на променливата.

Example: 
int var  = 5;
int* ptr = &var;
We can access the value that is stored on this address: 
Cout << *ptr << endl;

Recourse: https://www.youtube.com/watch?v=eNofmKYzje4&list=PL43pGnjiVwgSSRlwfahAuIqoJ8TfDIlHq*/