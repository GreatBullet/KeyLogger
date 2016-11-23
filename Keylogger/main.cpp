#include<iostream>
#include <windows.h>
#include"KeyToggle.h"
enum class AppStates {RECORD , INACTIVE, EXIT};
KeyToggle tNumpadZero(0x60), tZero(0x30),tA(0x41), LBUTTON(0x01), RBUTTON(0x02) ,CANCEL(0x03), 
MBUTTON(0x04), XBUTTON(0x05), XBUTTONN(0x06), BACK(0x08), TAB(0x09), CLEAR(0x0C), RETURN(0x0D), 
SHIFT(0x10), CONTROL(0x11), MENU(0x12), PAUSE(0x13), CAPITAL(0x14), ESCAPE(0x1B), SPACE(0x20), 
PRIOR(0x21), NEXT(0x22), END(0x23), HOME(0x24), LEFT(0x25), UP(0x26), RIGHT(0x27), DOWN(0x28),
SELECT(0x29), PRINT(0x2A), EXECUTE(0x2B), SNAPSHOT(0x2C), INSERT(0x2D), DELETEN(0x2E),
Zero(0x30), One(0x31), Two(0x32), Three(0x33), Four(0x34), Five(0x35), Six(0x36), Seven(0x37),
Eight(0x38), Nine(0x39), A(0x41), B(0x42), C(0x43), D(0x44), E(0x45), F(0x46), G(0x47),
H(0x48), I(0x49), J(0x4A), K(0x4B), L(0x4C), M(0x4D), N(0x4E), O(0x4F), P(0x50), Q(0x51), 
R(0x52), S(0x53), T(0x54), U(0x55), V(0x56), W(0x57), X(0x58), Y(0x59), Z(0x5A);

int i = 1;
void main(void)
{
	AppStates appState = AppStates::INACTIVE;
	while (appState == AppStates::INACTIVE) {
		if (A) { std::cout << "A"; }
		if (B) { std::cout << "B"; }
		if (C) { std::cout << "C"; }
		if (D) { std::cout << "D"; }
		if (E) { std::cout << "E"; }
		if (F) { std::cout << "F"; }
		if (G) { std::cout << "G"; }
		if (H) { std::cout << "H"; }
		if (I) { std::cout << "I"; }
		if (J) { std::cout << "J"; }
		if (K) { std::cout << "K"; }
		if (L) { std::cout << "L"; }
		if (M) { std::cout << "M"; }
		if (N) { std::cout << "N"; }
		if (O) { std::cout << "O"; }
		if (P) { std::cout << "P"; }
		if (Q) { std::cout << "Q"; }
		if (R) { std::cout << "R"; }
		if (S) { std::cout << "S"; }
		if (T) { std::cout << "T"; }
		if (U) { std::cout << "U"; }
		if (V) { std::cout << "V"; }
		if (W) { std::cout << "W"; }
		if (X) { std::cout << "X"; }
		if (Y) { std::cout << "Y"; }
		if (Z) { std::cout << "Z"; }
	}
}