#include <stdio.h>

template <typename T>
T Min(T a, T b) {

	if (a >= b) {

		return b;
	}
	return a;
}

template<>
char Min(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return 0;
}

int main() {

	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.0f, 2.0f));
	printf("lf%\n", Min<double>(1.11, 2.22));
	printf("%c\n", Min<char>('A', 'B'));

	return 0;
}