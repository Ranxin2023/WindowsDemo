
#include<iostream>
using namespace std;
#include "./src/windowsTool.h"
#include "./src/windowsLabel.h"
#include "./src/windowsButton.h"
#include "./src/windowsEdit.h"


int main()
{
	paintWindow(17, 4, 24, 22);

	CLabel title(35, 7, 10, 2, "login windows");
	title.show();

	CLabel labName(28, 11, 10, 2, "Username: ");
	labName.show();

	CLabel labPwd(28, 15, 10, 2, "Password:");
	labPwd.show();

	//int x,int y,int w ,int h,char *pcontent,int maxLen,int inputType,int ips
	char * name_arr = new char[1];
	CEdit editName(38, 11, 10, 3, name_arr, 10, 1, 1);
	editName.show();
	char *pwd_ptr = new char[1];
	CEdit editPwd(38, 15, 10, 3, pwd_ptr, 10, 1, 1);
	editPwd.show();

	CButton btnlogin(25, 18, 6, 3, "login");
	btnlogin.show();

	CButton btnexit(45, 18, 6, 3, "logout");
	btnexit.show();

	gotoxy(0, 29);
	return 0;
}
