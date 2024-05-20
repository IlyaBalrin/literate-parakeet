#include <windows.h>

int main() {
	int c = 0;
	while (c < 1000000) {
		int X;
		int Y;
		X = rand()% 8001;
		Y = rand() % 6001;
		SetCursorPos(X, Y);
		c++;
	}
	
}
