#include"./windowsButton.h"
#include<iostream>
using namespace std;
#include"./windowsTools.h"

CButton::CButton()
{
	
}

CButton::CButton(int x, int y, int w, int h, const char pcontent[])
{
	
	this->startX = x;
	this->startY = y;
	this->width = w;
	this->height = h;
	strcpy(this->content, pcontent);
}

CButton::~CButton()
{
	//	cout<<"析构函数"<<endl;
}

void CButton::show()
{
	paintWindow(startX, startY, width, height);
	gotoxy(startX + (width * 2 - strlen(content)) / 2 - 1, startY + 1);
	cout << content << endl;
}