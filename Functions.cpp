#include "Functions.h"
#include "cmath"

// EXAMPLE 1
int add(int num1, int num2) {
  // NOTE:  num1 & num2 are local variables
  //        PASS BY VALUE:  num1 & num2  are in new memory
  //       locations with a copied value of x & y
  return num1 + num2;
}

void example1() {
  cout << "EXAMPLE 1:\n";
  // EXAMPLE 1:
  // function to add a and b and return the result
  // note: this is PASS BY VALUE

  int a = 3, b = 5, sum = 0;
  sum = add(a, b);
  cout << a << " + " << b << " = " << sum << endl << endl << endl;
}

// EXAMPLE 2
// this is also an example of pass by value
int mult(int x, int y) {
  int total;
  x = 7;
  y = 10;
  total = x * y;
  return total;
}

void example2() {
  cout << "EXAMPLE 2: PASS BY VALUE\n";
  // EXAMPLE 2:
  // function to multiply a and b and return the result
  // PASS BY VALUE:
  //       which means the values for a & b are copied into
  //       new memory locations inside the function
  int a = 3, b = 5, prod = 0;
  prod = mult(a, b);
  cout << a << " * " << b << " = " << prod << endl << endl << endl;
}

// EXAMPLE 3
// this is an example of pass by reference
// it is also an example of
//  POLYMORPHISM - we are redefining the mult function
//    sending double values instead of integers
double mult(double &x, double &y) {
  double total;
  x = 7;
  y = 10;
  total = x * y;
  return total;
}

void example3() {
  cout << "EXAMPLE 3: PASS BY REFERENCE\n";
  // PASS BY REFERENCE:
  //    pointers to c & d are passed to the function
  //    this can allow the function to update c & d
  double a = 3, b = 5, prod = 0;
  prod = mult(a, b);
  cout << a << " * " << b << " = " 
       << prod << endl << endl << endl;
}

double avg(int x, int y) {
  // EXAMPLE 4 (Function Basics)
  // warning: integer division
  return add(x, y) / static_cast<double>(2);
}

void example4() {
  cout << "EXAMPLE 4: INTEGER DIVISION\n";
  int a = 4, b = 5;
  cout << "The average of " << a << " and " << b << " is " 
       << avg(a, b) << endl << endl;

}

// EXAMPLE 5
int rollDie(int& x, int& y) {
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	  //add code to 'roll' two 6-sided dice and return the sum 
    return x + y;
}

// EXAMPLE 5
// CORRECT & ADD LOGIC TO ROLL 2 DICE AND PRINT THE SUM
void example5() {
	cout << "\nEXAMPLE 5: ROLL DIE\n";
  // ADD LOGIC TO ROLL DIE & PRINT SUM
	int die1 = 0, die2 = 0, sum;
	srand(time(0));
	sum = rollDie(die1, die2);
	cout << die1 << " + " << die2 << " = " << sum << endl;
}

// EXAMPLE 6
// CORRECT & ADD LOGIC TO ROLL 2 DICE AND PRINT THE SUM
void playCraps() {
	cout << "\nPLAY CRAPS\n";
	//ADD LOGIC TO PLAY CRAPS
	//if 7 or 11 you win
	//2,3,12 you lose
	//otherwise set point
	//roll until you get point (win) or 7 (lose)
	int die1 = 0, die2 = 0, total = 0 , point = 0, netWorth= 50,  bet=0;
	char userChoice = 'Y';
	srand(time(0));
	while (userChoice == 'Y' || userChoice == 'y' || netWorth!=0){
		cout << "Your net worth is: $" << netWorth << ".00. " << "Please enter your bet: " << endl;
		cin >> bet;
		while (bet >netWorth) {
			cout << "Your net worth is only: $" << netWorth << ".00. " << "Please adjust your bet: " << endl;
			cin >> bet;
		}
		total = rollDie(die1, die2);
		cout << die1 << " + " << die2 << " = " << total << endl;
		if (total == 7 || total == 11) {
			cout << "You win beacuse you rolled a " << total << "." << endl;
			netWorth += bet;
			cout << "You Won!! you now have: " << netWorth << ".00. " << endl;
		}
		else if (total == 2 || total == 3 || total == 12) {
			cout << "You lose beacuse you rolled a " << total << "." << endl;
			netWorth -= bet;
			cout << "Sorry, you lost!! you now have: " << netWorth << ".00. " << endl;
		}
		else{
			point = total;
			cout << "The point is " << total << "." << endl;
			total = 0;
			while (point != total && total != 7) {
				total = rollDie(die1, die2);
				cout << die1 << " + " << die2 << " = " << total << endl;

			}
			if (total == point) {
				netWorth += bet;
				cout << "You Won!! you now have: " << netWorth << ".00. " << endl;
			}
			else {
				netWorth -= bet;
				cout << "Sorry, you lost!! you now have: " << netWorth << ".00. " << endl;
			}


		}
		cout << "Would you like to play again???(Y/N)";
		cin >> userChoice;
	}
}


// EXAMPLE 6
// CORRECT & ADD LOGIC TO PLAY CRAPS
void example6() {
	cout << "\n\nEXAMPLE 6: PLAY CRAPS\n";
	playCraps();
}

// EXAMPLE 7 - YOUR TURN
// CORRECT & ADD LOGIC TO PLAY SCRAPS 
void example7() {
	cout << "\n\nEXAMPLE 7: PLAY SCRAPS\n";

}

// EXAMPLE 8 - YOUR TURN

double areaCircle(double r) {
	//add logic to calcualte the area of a circle
	return 0;
}

double volumeSphere(double r) { 
	//add logic to calcualte the volume of a circle
	return 0;
}

void example8(){
	cout << "\n\nEXAMPLE 8: AREA & VOLUME\n ";
	// EXAMPLE 8 (YOUR TURN):
	// write the code for areaCircle and volumeSphere
	double circleRadius;
	cout << "\tEnter radius to use for both a circle and a sphere:  ";
	cin >> circleRadius;
	cout << "\tarea   = " << areaCircle(circleRadius) << endl;
	cout << "\tvolume = " << volumeSphere(circleRadius) << endl << endl << endl;
}
// EXAMPLE 9
void get_input(int &dollars) {
	cout << " Enter the amount of money you have : ";
	cin >> dollars;
	// cout << dollars << endl;
}

void calculate_results(int &dollars, int &bars, int &coupons) {
	coupons = 0;
	bars    = dollars;
	coupons = dollars;
	cout << "  You can get " << bars
			 << " chocolate bars before opening the coupons\n";

	//add while loop to calculate number of bars after redeeming the
	// coupons and number of coupons leftover

}

void output_results(int bars, int coupons) {
	cout << "  Now, you can buy " << bars
			 << " bars in total by using your coupons ";
	cout << "and will have " << coupons << " left coupons\n\n";
}

void example9(){
	cout << "\n\nEXAMPLE 9: CHOCOLATE BARS\n ";
	//add code to complete this problem
	/*   Suppose you can buy a chocolate bar from the vending machine for $1 each. 
			 Inside every chocolate bar is a coupon. You can redeem 7 coupons for one 
			 chocolate bar from the machine. You would like to know how many chocolate bars 
			 you can eat, including those redeemed via coupon, if you have n dollars.
			 input:  $dollars
			 output: #chocolate bars collected & leftover coupons
	*/
	int dollars = 0, bars = 0, coupons = 0;

	get_input(dollars);
	calculate_results(dollars, bars, coupons);
	output_results(bars, coupons);
	
}

void rockPaperScissors() {
	//loop until user says top
	//user pick RPS (0,1,2)
	//computer ramdomly picks RPS
	//decide who wins 	
	char userChoice = 'Y';
	int userPick, compPick;
	while (userChoice == 'Y' || userChoice == 'y') {
		cout << "Enter Rock(0), Paper(1), Scissors(2): ";
		cin >> userPick;
		compPick = rand() % 3;
		if (userPick == compPick) {
			cout << "You both picked: " << userPick << endl;
		}
		else if (userPick == 0) {
			if (compPick == 1) {
				cout << "Computer chose Paper\nLOSE: Paper Covers Rock\n";
			}
			else {
				cout << "Computer chose Scissors \n : Rock Pounds Scissors\n";
			}
		}
		else if (userPick == 1) {
			if (compPick == 0) {
				cout << "Computer chose Rock \nWIN: Paper Covers Rock\n";
			}
			else {
				cout << "Computer chose Scissors \nLOSE:Scissors Cut Paper\n";
			}
		}
		else {
			if (compPick == 0) {
				cout << "Computer chose Rock \nLOSE: Rock Pounds Scissors\n";
			}
			else {
				cout << "Computer chose Paper\nWIN: Scissors Cut Paper\n";
			}
		}





		cout << "Go Again?(Y/N)\n";
		cin >> userChoice;
	}

}