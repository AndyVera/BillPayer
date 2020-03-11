
#include <string>
#include <iostream>
#include "Bank.hpp"
using namespace std;
/************************************************
** Member function definitions
************************************************/
// PLEASE ADD IMPLEMENTATIONS OF ALL FUNCTION MEMBERS OF CLASS BANK
Bank::Bank(const string& name, const double& starting, const double & salary){
  name_ = name;
  amount_starting_ = starting;
  amount_salary_ = salary;
}
