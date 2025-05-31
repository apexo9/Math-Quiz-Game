#include <windows.h>
#include <iostream>
#include <time.h>
#include <string>
#include <random>

using namespace std;
static int wrongAns = 0, correctAns = 0;
double answer, marks;
int numberOfQuestions, choice, schoice, set_choice, logo, theme;

string name;

void Wrong() {

	cout <<" WRONG" << endl;

	wrongAns++;

}

void Correct() {

	cout <<" CORRECT" << endl;

	correctAns++;
}

void loading() {

	cout<<endl;

	cout << "Generating questions";
	for (int i = 1; sleep(1)||i <= 3; i++) {
		cout << ".";
	}
	system("cls");

	cout << endl;

	cout << "Get ready...";
	for (int j = 3; sleep(1) || j >= 1; j--) {
		cout <<j<<" ";

	}


	cout << "GO...." << endl;

	system("cls");
}

void questions(char oper) {

	for (int k = 1; k <= numberOfQuestions; k++) {
		int firstValue = 51 + rand() % 50;
		int secondValue = 1 + rand() % 50;
		cout << endl;
		cout << "QN" << ":" << firstValue<<" "<< oper<<" "<<secondValue<<" =";

		cin >> answer;

		switch (oper) {

			case '+': {
				if (answer == (firstValue + secondValue)) {
					Correct();

				} else {

					Wrong();
				}
				break;
			}
			case '-': {

				if (answer == (firstValue-secondValue)) {

					Correct();

				} else {

					Wrong();

				}

				break;
			}
			case '*': {

				if (answer == (firstValue*secondValue)) {

					Correct();

				} else {

					Wrong();

				}
				break;
			}
			case '/': {



				if (answer == (firstValue / secondValue)) {

					Correct();

				} else {

					Wrong();

				}

				break;
			}
			default: {





				cout << "invalid option" << endl;

				break;
			}
		}
	}
	cout << endl;
	
	cout<<"---------------RESULTS-----------------"<<endl;

	cout << "You got " << correctAns << " correct" << endl;

	cout << endl;

	cout<<"You got " << wrongAns <<" wrong" << endl;

	cout << endl;

	marks = correctAns/numberOfQuestions;

	cout << "Marks are: " << marks << "%" << endl;
	
	cout<<"---------------------------------------"<<endl;

}


void startGame() {

	srand(time(0));

	cout << endl;

	logo=1+rand()%3;

	if(logo==1) {
		cout << "aaaaaaaaaaaaaaa aaaaaaaaaaaaaaa " << endl;
		cout << "aaaaaaaaaaaaaaa aaaaaaaaaaaaaaa " << endl;
		cout << "aaaaa     aaaaa      aaaaa      " << endl;
		cout << "aaaaaaaaaaaaaaa      aaaaa      " << endl;
		cout << "aaaaaaaaaaaaaaa      aaaaa      " << endl;
		cout << "aaaaa     aaaaa      aaaaa      " << endl;
		cout << "aaaaa     aaaaa      aaaaa      " << endl;
		cout << "aaaaa     aaaaa aaaaaaaaaaaaaaa " << endl;
		cout << "aaaaa     aaaaa aaaaaaaaaaaaaaa " << endl;
	} else if(logo==2) {
		cout<<"############### #####     ##### ############### "<<endl;
		cout<<"############### ######   ###### ############### "<<endl;
		cout<<"#####     ##### ####### ####### #####           "<<endl;
		cout<<"############### ############### #####           "<<endl;
		cout<<"############### ##### ### ##### #####           "<<endl;
		cout<<"#####           #####  #  ##### #####           "<<endl;
		cout<<"#####           #####     ##### ############### "<<endl;
		cout<<"#####           #####     ##### ############### "<<endl;
	} else {
		cout<<"#####     ##### ############### #####           #####           ############### "<<endl;
		cout<<"#####     ##### ############### #####           #####           ############### "<<endl;
		cout<<"#####     ##### #####           #####           #####           #####     ##### "<<endl;
		cout<<"############### ##########      #####           #####           #####     ##### "<<endl;
		cout<<"############### ##########      #####           #####           #####     ##### "<<endl;
		cout<<"#####     ##### #####           #####           #####           #####     ##### "<<endl;
		cout<<"#####     ##### ############### ############### ############### ###############"<<endl;
		cout<<"#####     ##### ############### ############### ############### ###############"<<endl;
	}
	cout<<"________________________"<<endl;
	cout<<"*****MATH QUIZ GAME*****"<< endl;
	cout<<"________________________"<<endl;

	cout << "made by: Adon" << endl;

	cout << endl;

	cout << "1.start "<<endl;

	cout << "2.settings "<<endl;

	cout<<endl;

	cout<<"CHOICE: ";

	cin>>schoice;

	switch(schoice) {

		case 1: {

			cout << "Enter your name: ";

			cin >> name;

			cout << endl;

			cout << "Enter the number of questions: ";

			cin >> numberOfQuestions;

			cout << endl;

			cout << "CHOOSE THE TYPE OF QUESTION:" << endl;

			cout << endl;

			cout << "1.Addition" << endl;

			cout << "2.Subtraction" << endl;

			cout << "3.Multiplication" << endl;

			cout << "4.Division" << endl;

			cout << "5.Mixed" << endl;

			cout << endl;

			cout << "CHOICE: ";

			cin >> choice;

			switch (choice) {

				case 1: {

					loading();

					char sign = '+';

					questions(sign);

					break;
				}
				case 2: {

					loading();

					char sign = '-';

					questions(sign);

					break;

				}

				case 3: {

					loading();

					char sign = '*';

					questions(sign);

					break;
				}
				case 4: {



					loading();

					char sign = '/';

					questions(sign);

					break;
				}
				default: {

					cout << "invalid option" << endl;

				}
			}

			char playAgain;

			cout << "Do you want to play again? (y/n): ";

			cin >> playAgain;

			if (playAgain == 'y' || playAgain == 'Y') {

				wrongAns = 0;

				correctAns = 0;
				
				system("cls");

				startGame();

			} else {



				cout << "Thanks for playing!" << endl;
			}
			break;
		}
		case 2: {

			system("cls");

			cout<<"settings"<<endl;


			cout<<"1. Theme"<<endl;

			cout<<"2.Credits"<<endl;

			cout<<endl;

			cout<<"CHOICE: "<<endl;

			cin>>set_choice;

			switch(set_choice) {

				case 1: {


					system("cls");

					cout<<"choose theme:\n";
					cout<<"1.Dark theme:\n";

					cout<<"2.Light theme:\n";

					cout<<endl;

					cout<<"CHOICE: ";

					cin>>theme;



					switch(theme) {

						case 1: {

							system("color 0F");

							system("cls");

							startGame();

							break;
						}
						case 2: {

							system("color F0");

							system("cls");

							startGame();

							break;
						}
					}
					break;
				}
				case 2:{
					
					cout<<"HELLO WORLD!";
					break;
				}

				break;

			}

		}

	}
}


int main() {

	startGame();

	return 0;
}