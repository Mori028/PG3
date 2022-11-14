#include <stdio.h>

int RecursiveSalary(int n) {
	const int general = 100;
	if (n == 1) {

		return general;
		
	}
	return (RecursiveSalary(n - 1) * 2 - 50);
}

int main() {

	int generalSalary = 0;
	int recursiveSalary = 0;
	for (int i = 1; i < 9; i++) {
		generalSalary += 1072;
		recursiveSalary += RecursiveSalary(i);

		printf("ˆê”Ê“I‚È’À‹à : %d\n ", generalSalary);
		printf("Ä‹A“I‚È’À‹à : %d\n ", recursiveSalary);
	}

	return 0;
}