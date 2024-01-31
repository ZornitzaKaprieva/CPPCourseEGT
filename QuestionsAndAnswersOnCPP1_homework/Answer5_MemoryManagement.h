#pragma once

/*5.  Memory Management:
Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation. 

Answer (EN): 
Memory management helps optimize performance and improve program security.
There are 2 main types of memory in C++ - stack and heap.
The stack is memory for temporary storage of variables created by a function. When the function is finished executing, the variable is automatically deleted.
Heap is memory for storing global variables. It is important to note that variables stored on the heap are not automatically deleted, the memory must be specifically freed.
It is important to know that the access time with a stack is much faster than with a heap.
It is appropriate to use heap when a larger variable (array, object, etc.) needs to be stored for a longer time.
It is appropriate to use a stack when dealing with small variables that are used by the function. They are then deleted automatically.

Answer (BG): 
Управлението на паметта помага за оптимизиране на производителността и подобряване на сигурността на програмата.
В С++ има 2 основни типа памет – stack и heap. 
Stack е памет за временно съхранение на променливи, създадени от функция. Когато изпълнението на функцията приключи, променливата се изтрива автоматично изтрита. 
Heap е памет за съхранение на глобални променливи. Важно е да се има предвид, че променливите, съхранявани в heap не се изтриват автоматично, паметта следва да бъде специално освободена. 
Важно е да се знае, че access time при  stack е много по-бързо, отколкото при heap.
Подходящо е да се използва heap, когато следва да се съхрани по-голяма променлива (масив, обект и т.н.) за по-дълго време. 
Подходящо е да се използва stack, когато се работи с малки променливи, които се използват от функцията. След това се изтриват автоматично. 

Recourse: https://www.guru99.com/stack-vs-heap.html
*/