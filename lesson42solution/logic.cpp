#include "logic.h"

string get_prediction() {
	int n = rand() % AMOUNT_OF_PREDICTION;
	string result;
	switch (n) {
	case 0: result = SEVENTH; break;
	case 1: result = FIRST; break;
	case 2: result = SECOND; break;
	case 3: result = THIRD; break;
	case 4: result = FOURTH; break;
	case 5: result = FIFTH; break;
	case 6: result = SIXTH; break;
	
	 }
	return result;
}