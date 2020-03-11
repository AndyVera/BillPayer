#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Bill {

    string payee_;
    double amount_due_;
    unsigned int due_month_;
    unsigned int due_day_;

    Bill(const string& name = "", const double& dues = 0.0, const unsigned int& month = 0, const unsigned int& day = 0);
    bool isOverdue(const unsigned int &currMonth, const unsigned int& currDay );
    unsigned int daysOverdue(const unsigned int &currMonth, const unsigned int& currDay );
};
