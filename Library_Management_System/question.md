# question 1:
A college wants to maintain information about its students and teachers.

Every person in the college has a name and age.

Apart from this:

Every Student has a roll number.
Every Teacher has a subject that they teach.

The college should be able to display the details of every person. The details displayed for a student and a teacher are different according to their role.

A student can register for courses. Sometimes the student provides only the course name, while sometimes the student provides both the course name and the semester number.

The college also wants to keep track of attendance. If attendance from two different months needs to be combined, the program should allow adding two attendance records using the + operator.

Finally, the college administration should be able to store a reference or pointer to a person and display the correct details without knowing whether that person is a student or a teacher.

Write a C++ program to implement this system.






# question 2: OOP Coding Challenge: Library Management System

A library wants to develop a software system to manage its members. Every member has some common information such as name and age. The library has two types of members: Students and Teachers. Both should be able to display their details, but the information displayed for a student is different from that of a teacher. The library administration should be able to treat every member uniformly while still getting the correct details depending on the actual type of member.

Every library member must belong to a specific membership category. However, the type of membership is different for students and teachers, so the base concept of a library member should not decide it directly. Instead, every derived class must provide its own implementation.

The library also maintains fines for overdue books. Sometimes a member may have multiple pending fines that need to be combined into a single fine amount. The system should support adding two fine objects using the + operator instead of calling a separate function.

Students can borrow books in different ways. A student may borrow a book without specifying any details, may borrow by providing only the book name, or may borrow by providing both the book name and the number of days for which the book is issued.

Finally, demonstrate that the library can store references or pointers to members and invoke the correct function for displaying details without knowing whether the member is a student or a teacher beforehand.

Your program should clearly demonstrate all the object-oriented concepts used in its design and print meaningful output showing that each feature works correctly.
