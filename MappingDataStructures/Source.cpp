#include <iostream>
#include <string>

using namespace std;

void printPassed(string passedCity) { //Print the cities passed one by one
	cout << "Must pass: " << passedCity << endl;
}


void distance(char origin, char destination) { //determine distance between each city listed
	bool littleRock, bryant, benton, cabot, conway, jacksonville, morrilton, harrison, hotSprings, texarkana = false;
	string passedCity1;
	string passedCity2;
	string passedCity3;
	string passedCity4;
	int totalDistance;
	//begin if else statements from each city

	//From Little Rock
	if (origin == 'L') {
		if (destination == 'B') { // To Bryant
			totalDistance = 20; //passed nothing
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 25;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			//passed Bryant
		}
		else if (destination == 'C') { // To Cabot
			totalDistance = 26;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			//passed Jacksonville

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 32; //passed nothing

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 16; //passed nothing

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 52;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway
		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 139;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 143;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Benton";
			printPassed(passedCity2);

		}
		else if (destination == 'S') { //To Hot Springs
			totalDistance = 54;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Benton";
			printPassed(passedCity2);

		}
	}

	//From Bryant
	if (origin == 'B') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 20; //passed nothing
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 5; //passed nothing
		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 46;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Jacksonville";
			printPassed(passedCity2);
			//passed Little Rock and Jacksonville

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 52;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			//passed LR

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 36;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			//passed LR

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 72;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Conway";
			printPassed(passedCity2);
			//passed LR, Co

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 159;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Conway";
			printPassed(passedCity2);
			//passed LR, Co

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 123;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			//passed Benton

		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 34;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			//passed Benton
		}
	}

	//From Benton
	if (origin == 'E') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 25;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			//passed Bryant
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 5; //passed nothing
		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 51;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Jacksonville";
			printPassed(passedCity3);
			//passed Bryant, Little Rock, and Jacksonville

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 57;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			//passed Bryant and Little Rock

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 41;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			//passed Bryant and Little Rock

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 77;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Conway";
			printPassed(passedCity3);
			//passed Bryant, Little Rock, and Conway

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 164;
			passedCity1 = "Bryant";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Conway";
			printPassed(passedCity3);
			//passed Bryant, Little Rock, and Conway

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 118; //passed nothing
		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 29; //passed nothing
		}
	}

	//From Cabot
	if (origin == 'C') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 26;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			//passed Jacksonville
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 46;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			//passed Jacksonville and Little Rock
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 51;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			//passed Jacksonville, Little Rock, and Bryant

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 31;
			//passed nothing

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 10;
			//passed nothing

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 51;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 109;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 169;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Jacksonville, Little Rock, Bryant, and Benton

		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 80;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			passedCity2 = "Little Rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Jacksonville, Little Rock, Bryant, and Benton

		}
	}

	//From Conway
	if (origin == 'O') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 32; //passed nothing
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 52;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			//passed Little Rock
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 57;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);

		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 26;
			//passed nothing
		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 57;
			passedCity1 = "Cabot";
			printPassed(passedCity1);
			//passed Cabot

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 20;
			//passed nothing

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 107;
			//passed nothing

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 175;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Benton";
			printPassed(passedCity3);
			//passed Little Rock, Bryant, and Benton

		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 86;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Benton";
			printPassed(passedCity3);
			//passed Little Rock, Bryant, and Benton

		}
	}

	//From Jacksonville
	if (origin == 'J') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 16; //passed nothing
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 36;
			totalDistance = 86;
			passedCity1 = "Little Rock";
			//passed Little Rock
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 91;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			//passed Little Rock and Bryant

		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 10;
			//passed nothing

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 41;
			passedCity1 = "Jacksonville";
			printPassed(passedCity1);
			//passed Jacksonville

		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 61;
			passedCity1 = "Cabot";
			printPassed(passedCity1);
			passedCity2 = "Conway";
			printPassed(passedCity2);
			//passed Cabot and Conway

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 149;
			passedCity1 = "Cabot";
			printPassed(passedCity1);
			passedCity2 = "Conway";
			printPassed(passedCity2);
			//passed Cabot and Conway

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 159;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Benton";
			printPassed(passedCity3);
			//passed Little Rock, Bryant, and Benton

		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 70;
			passedCity1 = "Little Rock";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Benton";
			printPassed(passedCity3);
			//passed Little Rock, Bryant, and Benton

		}
	}

	//From Morrilton
	if (origin == 'M') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 52;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 72;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			//passed Conway, Little Rock
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 77;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			//passed Conway, Little Rock, and Bryant

		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 51;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway

		}
		else if (destination == 'O') { //To Conway
			totalDistance = 20;
			//passed nothing

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 61;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Cabot";
			printPassed(passedCity2);
			//passed Conway and Cabot

		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 159;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway

		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 195;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Conway, Little Rock, Bryant, Benton

		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 106;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Conway, Little Rock, Bryant, Benton

		}
	}

	//From Harrison
	if (origin == 'H') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 139;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 159;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			//passed Conway and Little Rock
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 164;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			//passed Conway, Little Rock, and Bryant
		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 132;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway
		}
		else if (destination == 'O') { //To Conway
			totalDistance = 108; //passed nothing
		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 148;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Cabot";
			printPassed(passedCity2);
			//passed Conway and Cabot
		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 159;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			//passed Conway
		}
		else if (destination == 'T') { //To Texarkana
			totalDistance = 282;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Conway, Little Rock, Bryant, and Benton
		}
		else if (destination == 'S') { //to Hot Springs
			totalDistance = 193;
			passedCity1 = "Conway";
			printPassed(passedCity1);
			passedCity2 = "Little rock";
			printPassed(passedCity2);
			passedCity3 = "Bryant";
			printPassed(passedCity3);
			passedCity4 = "Benton";
			printPassed(passedCity4);
			//passed Conway, Little Rock, Bryant, and Benton
		}
	}

	//From Texarkana
	if (origin == 'T') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 143;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			//passed Benton and Bryant
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 123;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			//passed Benton
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 118;
			//passed nothing
		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 169;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Jacksonville";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Jacksonville
		}
		else if (destination == 'O') { //To Conway
			totalDistance = 179;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			//passed Benton, Bryant, and Little Rock

		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 159;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			//passed Benton, Bryant, and Little Rock
		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 195;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Conway";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Conway
		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 282;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Conway";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Conway
		}
		else if (destination == 'S') { //To Hot Springs
			totalDistance = 118;
			//passed nothing
		}
	}

	//From Hot Springs
	if (origin == 'S') {
		if (destination == 'L') { //To Little Rock
			totalDistance = 54;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			//passed Benton and Bryant
		}
		else if (destination == 'B') { //To Bryant
			totalDistance = 34;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			//passed Benton
		}
		else if (destination == 'E') { //To Benton
			totalDistance = 29; //passed nothing
		}
		else if (destination == 'C') { //To Cabot
			totalDistance = 80;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Jacksonville";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Jacksonville
		}
		else if (destination == 'O') { //To Conway
			totalDistance = 86;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			//passed Benton, Bryant, and Little Rock
		}
		else if (destination == 'J') { //To Jacksonville
			totalDistance = 70;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			//passed Benton, Bryant, and Little Rock
		}
		else if (destination == 'M') { //To Morrilton
			totalDistance = 68;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Conway";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Conway
		}
		else if (destination == 'H') { //To Harrison
			totalDistance = 193;
			passedCity1 = "Benton";
			printPassed(passedCity1);
			passedCity2 = "Bryant";
			printPassed(passedCity2);
			passedCity3 = "Little Rock";
			printPassed(passedCity3);
			passedCity4 = "Conway";
			printPassed(passedCity4);
			//passed Benton, Bryant, Little Rock, and Conway
		}
		else if (destination == 'T') { //to Texarkana
			totalDistance = 118;
			//passed nothing
		}
	}
	cout << totalDistance << " miles" << endl;
	//return totalDistance;
}

int main() {
	char origin;
	char destination;
	//int totalDistance = 0;
	cout << "Please chose an origin: (L)ittleRock, (B)ryant, B(E)nton, (C)abot, C(O)nway, " <<endl;
	cout << "(J)acksonville, (M)orrilton, (H)arrison, (T)exarkana, Hot(S)prings:" << endl;
	cin >> origin;
	cout << "Please chose a destination: (L)ittleRock, (B)ryant, B(E)nton, (C)abot, C(O)nway, " <<endl;
	cout << "(J)acksonville, (M)orrilton, (H)arrison, (T)exarkana, Hot(S)prings:" << endl;
	cin >> destination;
	cout << endl;
	if (origin == destination) {
		cout << "Origin and Destination are the same." << endl;
		cout << "No travel distance" << endl;
	}
	distance(origin, destination);

	system("PAUSE");
}