#ifndef WINDOWSLABEL_H
#define WINDOWSLABEL_H

//attributes x y w h content
//behavior: show()

class CLabel
{
public:
	//default construct function
	CLabel();
	~CLabel();
	//parameter construct
	CLabel(int x, int y, int w, int h, const char pcontent[]);
	//copy construct function
	//CLabel(CLabel &lab);
	void show();
private:
	int startX;
	int startY;
	int width;
	int height;
	char content[20];  //content  array 
};

#endif