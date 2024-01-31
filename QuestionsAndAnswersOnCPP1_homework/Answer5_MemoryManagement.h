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
������������ �� ������� ������ �� ������������ �� ������������������ � ����������� �� ����������� �� ����������.
� �++ ��� 2 ������� ���� ����� � stack � heap. 
Stack � ����� �� �������� ���������� �� ����������, ��������� �� �������. ������ ������������ �� ��������� ��������, ������������ �� ������� ����������� �������. 
Heap � ����� �� ���������� �� �������� ����������. ����� � �� �� ��� �������, �� ������������, ����������� � heap �� �� �������� �����������, ������� ������ �� ���� ��������� ����������. 
����� � �� �� ����, �� access time ���  stack � ����� ��-�����, ��������� ��� heap.
��������� � �� �� �������� heap, ������ ������ �� �� ������� ��-������ ���������� (�����, ����� � �.�.) �� ��-����� �����. 
��������� � �� �� �������� stack, ������ �� ������ � ����� ����������, ����� �� ��������� �� ���������. ���� ���� �� �������� �����������. 

Recourse: https://www.guru99.com/stack-vs-heap.html
*/