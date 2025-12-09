#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	srand(time(0));
	int secret = rand()% 100 + 1;
	int attemp = 5;
	int user;
	while (attemp > 0) {
		std::cout << "attemp! pls input rand numb" << std::endl;
		std::cin >> user;
		if (user == secret) {
			cout << "Yes! thanks you";
			break;
		}
		else
		{
			cout << "never ";
			attemp -= 1;
		}
	}
	return 0;
}