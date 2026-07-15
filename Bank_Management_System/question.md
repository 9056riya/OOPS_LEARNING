# OOP Coding Challenge: Banking Management System

A bank wants to develop a system to manage different types of bank accounts.

Every account holder has the following common details:

Account Number
Account Holder Name
Current Balance

The bank offers two types of accounts:

Savings Account
Current Account

Apart from the common details:

A Savings Account stores an interest rate.
A Current Account stores an overdraft limit.

Each account should be able to display its complete information. The information displayed for a Savings Account should be different from that of a Current Account.

Customers can deposit money into their accounts. Sometimes they deposit only the amount, and sometimes they deposit the amount along with a transaction description.

The bank should also support combining the balances of two accounts using the + operator and produce the total balance.

Finally, the bank manager should be able to keep a reference or pointer to an account and display the correct account details without checking whether the account is a Savings Account or a Current Account.

Write a C++ program to implement this banking system and demonstrate all the required features in the main() function.