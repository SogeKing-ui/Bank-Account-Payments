# Bank-Account-Payments
This program calculates the monthly payments and displays an amortization schedule for a loan based on the principal amount, annual percentage rate (APR), and loan term provided by the user.

Prerequisites

To run this program, you need:

C++ compiler installed on your system.
Basic understanding of C++ programming language.
How to Use

Compile the Code: Use a C++ compiler to compile the provided source code file (loan_amortization.cpp).
Run the Program: Execute the compiled binary file.
Input Loan Details: Enter the principal loan amount, annual percentage rate (APR), and the loan term (in years or months) when prompted.
View Results: The program will display a table showing the monthly payments, interest, principal, and remaining balance for each month of the loan term. Additionally, it will provide the total payments made and the total interest paid over the loan term.
Understanding the Code

The program first prompts the user to input the principal loan amount (P), the annual percentage rate (apr), and the loan term (n).
It calculates the monthly interest rate (r) based on the annual percentage rate provided.
Using the amortization equation, it calculates the monthly payment (M).
It then iterates over each month of the loan term, calculating the interest, principal, and remaining balance for each month.
Finally, it displays the results including the amortization schedule and total payments made.
Sample Output

bash
Copy code
Month   Payment         Interest        Principal       Balance
1       $XXX.XX         $XXX.XX         $XXX.XX         $XXX.XX
2       $XXX.XX         $XXX.XX         $XXX.XX         $XXX.XX
...     ...             ...             ...             ...
n       $XXX.XX         $XXX.XX         $XXX.XX         $XXX.XX

Payment Every Month: $XXX.XX
Total Payments: $XXX.XX
Total Interest: XXX.XX%
Disclaimer

This program provides an estimate of loan payments and is for educational purposes only. Actual loan terms may vary.
