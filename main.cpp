/*
 * Jehu Emilcar
 * 2/06/2024
 */

#include <iostream>
#include <iomanip>;

using namespace std;



int main() {

    float P; //loan amount
    float apr; //annual percentage
    int n; // loan term(years or months)

    //writing program that takes in declarations
    cout<< "what is the principal loan amount: ";
    cin>>P;
    cout<< "what is the annual percentage rate: ";
    cin>>apr;
    cout<< "how long is the loan term: ";
    cin>>n;

    //step1: conversion of apr to r(monthly interest)
    float r = pow(1 + (apr / 100), 1.0/12.0) - 1;
    //amortization equation for monthly payments
    float M = P * (r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

    // monthly payments
     //loan term: 24

    float balance = P;
    float totalPayments = 0;
    //table headers
    cout<< "Month\tPayment\t\tInterest\tPrincipal\tBalance" << endl;
    for(int month = 1; month <= n; ++month) {

        //amortization equation for monthly payments
        float M = P * (r * pow(1 + r, n)) / (pow(1 + r, n) - 1);


        float interest = P * r;
        float principal = M - interest;
        balance -= principal;
        totalPayments += M;

        //results for current month
        cout<< month << "\t$" << fixed<< setprecision(2)<<M << "\t\t$" << interest << "\t\t$" << principal << "\t\t$" << balance << endl;

    }
    float totalInterest = totalPayments - P;

    cout<<"\n";
    cout<< "Payment Every Month: $"<< fixed<< setprecision(2)<< M<<endl;
    cout<< "Total Payments: $" << P<<endl;
    cout<< "Total Interest: " << totalInterest<<"%";


    return 0;
}


/*
    cout<< "Month 1: "<<endl;
    cout<< "Payment = $" << M <<endl;
    cout<< "interest = $" << interest << endl;
    cout<< "Principal = $" << principal << endl;
    cout<< "Balance = $" << balance << endl;
    */