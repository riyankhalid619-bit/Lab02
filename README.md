# Lab02 – Pointers & Dynamic Memory (C++ DSA Lab)

This repo contains all tasks from today's C++ DSA lab on pointers and dynamic memory allocation.


**Task 1 – Pointer Basics on Static Array**

**What I did:** Declared a static array of 5 sales values, used *(p+i) to read, display, and total them, then updated one value directly through the pointer.

**What I learnt:** Pointer arithmetic like p+i moves by element size, and *(p+5) is invalid since it goes past the array's last valid index.


**Task 2 – Dynamic 1D Array for Student Marks**

**What I did:** Took the number of students at runtime, allocated marks dynamically with new int[n], and calculated total, average, and pass count using pointer notation.

**What I learnt:** new int[n] works with a runtime size, but a plain array like int marks[n]; isn't standard C++ once n isn't a compile-time constant.

**Task 3 – Static 2D Array with Row Pointer**

**What I did:** Used int sales[2][3] with a row pointer to read, display, and calculate branch-wise and day-wise totals using nested pointer notation.

**What I learnt:** A row pointer's '+1' skips a whole row, not one integer, since its step size matches the type it points to (an array, not a single int).


**Task 4 – Fully Dynamic 2D Array (int**)**

**What I did:** Allocated a 2D marks array at runtime with int** (rows and columns unknown until execution), calculated each student's total, and found the topper.

**What I learnt:** Freeing only the outer pointer array leaks all the inner row allocations — each row must be deleted individually first.


**Task 5 – Growing a Dynamic Array**

**What I did:** Allocated a bigger block to add one more student's mark, copied old values over using pointer notation, then released the old block and reassigned the pointer.

**What I learnt:** Changing a size variable never actually grows existing heap memory  the only way to grow is allocating fresh memory and copying data into it.


**Task 6 – Debugging Undefined Behaviour**

**What I did:** Found and fixed three bugs in a given snippet an out-of-bounds loop, incorrect delete instead of delete[], and a dangling pointer access — then rewrote the program correctly.

**What I learnt:** Code that runs without crashing doesn't guarantee safe memory use, since undefined behaviour can silently "work" while still being technically incorrect.
