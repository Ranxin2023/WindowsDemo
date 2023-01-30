#include"./windowsLabel.h"
#include<iostream>
using namespace std;
#include"./windowsTools.h"

CLabel::CLabel()
{
	
}

CLabel::CLabel(int x, int y, int w, int h, const char pcontent[])
{
	
	startX = x;
	startY = y;
	width = w;
	height = h;
	strcpy(content, pcontent);
}

void CLabel::show()
{
	gotoxy(startX, startY);
	cout << content << endl;
}

CLabel::~CLabel()
{
}