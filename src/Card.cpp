//Created Ahmed Hamdy Kotp

#include "headers/Card.h"
#include "headers/Budget.h"
#include "headers/Date.h"

#include <iostream>
#include <string>

using namespace std;


// Constructor implementation

Card::Card(double amt, const string& txnID, const int& cardNum, const Date& expDate, int cv)
    : PaymentMethod(amt, txnID), cardNumber(cardNum), expiryDate(expDate), cvv(cv) {}

// Override the processPayment method
bool Card::processPayment(double total_budget) {
    if (amount >= total_budget) {
        cout << "No sufficient balance!";
        return false;
    }
    string cardNumberStr = to_string(cardNumber);
    string cvvStr = to_string(cvv);
    if (cardNumberStr.length()!= 16) {
        return false;
    }

    if (cvvStr.length()!= 3) {
        cout << "Invalid CVV!";
        return false;
    }

    if (expiryDate.getYear() <= 2024) {
        cout << "Card expired!";
        return false;
    }

    return true;
}

Card::~Card() {
}
