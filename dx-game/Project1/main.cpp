#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd) {

	if (DxLib_Init() == -1) return -1;

	DrawPixel(320, 240, GetColor(255, 0, 0));

	WaitKey();

	DxLib_End();

	return 0;
}