#include <windows.h>

int main() {
	int c = 0;
	while (c < 1000000) {
		int X;
		int Y;
		X = rand()% 801;
		Y = rand() % 601;
		SetCursorPos(X, Y);
		c++;
	}
	
}
