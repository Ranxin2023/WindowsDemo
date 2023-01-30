#ifndef WINDOWSEDIT_H
#define WINDOWSEDIT_H

class CEdit
{
public:
	CEdit();
	CEdit(int x, int y, int w, int h, char *pcontent, int maxLen, int inputType, int ips);
	void show();
private:
	int startX;
	int startY;
	int width;
	int height;
	char content[20];  

	int inputType;  //input type
	int maxLen;     //max length
	int ips;        
};

#endif