#include<iostream>
#include<cstdlib> //To generate a random number
#include<ctime>
using namespace std;

int main() {
	unsigned seed = time(0);
	srand(seed);

	int a, b, count=0;
	a = rand()%100 ; //Generating a random number inside 100.
	cout << "The computer has a randomized number stored in the memory \nGuess the number " << endl;
	cin >> b;

	while (a > b||a<b){
		if (b>a) {
			cout << "Too high, try again " << endl;
			count++;
	}
		else if (a>b) {
			cout << "Too low, try again " << endl;
			count++;
		}
		cin >> b;

	};
	if (a=b) {
		cout << "Your guess is right! Congratz. " << endl;
		count++;
	}
	cout << "Number of guess[es] = " << count << endl;

	cin.get();
	cin.get();
	return 0;
	
}
