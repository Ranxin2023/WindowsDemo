#ifndef WINDOWSBUTTON_H
#define WINDOWSBUTTON_H

//attributes x y w h content
//behavior: show()

class CButton
{
public:
	//construct function
	CButton();
	//copy function
//	CButton(CButton &button);
	//override construct function
	CButton(int x, int y, int w, int h, const char pcontent[]);
	~CButton();
	void show();
private:
	int startX;
	int startY;
	int width;
	int height;
	char content[20];  //content
};

#endif