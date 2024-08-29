#pragma once
#include <iostream>
#include <cmath>
using namespace std;

//NOTE: FUNCTION DECLARATIONS goes in .h files

// FOR EXAMPLE 1
int add(int num1, int num2);
//PRE:  function will take 2 numbers
//POST: function will return the sum 

// FOR EXAMPLE 2
int mult(int x, int y);
// PRE: expects 2 integers 
// POST: multiplies 2 integers and returns the value

// FOR EXAMPLE 3
double mult(double& x, double& y);
// PRE: expects 2 doubles  
// POST: multiplies 2 doubles, updates their values and returns the product

// FOR EXAMPLE 4
double avg(int x, int y);
// PRE: expects 2 integers 
// POST: returns the averate

// EXAMPLE 5: function declaration
int rollDie(int &x, int &y);
//PRE:  function will create x & y values
//POST: function will return the sum 

// EXAMPLE 6: function declaration
void playCraps();
//PRE:  no input
//POST: function will simulate the play of craps 


//The following function declarations are for 
//demonstrating various class examples
//PRE:  none
//POST: example to demonstrate calling a function
void example1(); //pass by reference
void example2();
void example3(); //pass by value
void example4(); //integer division
void example5(); //roll dice
void example6(); //craps
void example7(); //scraps
void example8(); //area & volume of circle
void example9(); //chocolate problem

//EXAMPLE 8:
double areaCircle(double r);
// precondition: accepts a positive double value representing radius
// postcondition: returns area of circle (double) = pi*r2

//EXAMPLE 8:
double volumeSphere(double r);
// precondition: accepts a positive double value representing radius
// postcondition: returns volume of the sphere (double) = (4/3)pi*r3

 //EXAMPLE 9:
void get_input(int &dollars);
// Pre : None
// Post : update parameter dollars

//EXAMPLE 9:
void calculate_results(int &dollars, int &bars, int &coupons);
// Pre:   dollars has been set to the correct value
// Post : bars & coupons will be set to the total amount 

//EXAMPLE 9:
void output_results(int bars, int coupons);
// Pre : bars and coupons have been updated
// Post : Changes nothing, but output the results of the program

void rockPaperScissors();
//Pre: None
//Post: function will simulate a game of Rock Paper Scissors 