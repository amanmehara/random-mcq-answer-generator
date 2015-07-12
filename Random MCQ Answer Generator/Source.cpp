#include <fstream>
#include <iostream>
#include <math.h>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main() {

	int T;
	cin >> T;
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 3);

	//ifstream input;
	
	ofstream output;
	
	//input.open("input.in");
	
	output.open("output.txt");

	for (int l = 1; l <= T; l++) {
		output << "Question # ";
		output << setw(3);
		output << l;
		output << setw(0);
		if (dist(gen) == 0) {			
			 output << ": A \n";
		}
		else if (dist(gen) == 1) {
			output << ": D \n";
		}
		else if (dist(gen) == 2) {
			output << ": C \n";
		}
		else {
			output << ": B \n";
		}
		
	}
	
	//input.close();
	
	output.close();

	return 0;
}
