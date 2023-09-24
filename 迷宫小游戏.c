#include <stdio.h>
#include <conio.h>
#include <windows.h>

char a[20][20]={"##############",
                "#0#        ###",
                "#    #####  ##",
                "######   ##  #",
                "####        ##",
                "#### #########",
                "###           ",
                "##############",};
void Hide()
{
	HANDLE              hOut; 
	CONSOLE_CURSOR_INFO curInfo;
	
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	curInfo.dwSize=1;
	curInfo.bVisible=0;
	SetConsoleCursorInfo(hOut,&curInfo);
}
                
void Welcome()
{
	printf("\n\n             M A Z E");
	printf("\n\n       Please press any key");
	getch();
	system("cls");
			   }               
void Set()
{
	HANDLE hOut;
	COORD pos={0,0};
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
}                
int main()
{
	Hide();
	Welcome();
	int x,y;
	char ch;
	x=1;y=1;
	for(int i=0;i<=7;i++)
	    puts(a[i]);
	    while(1)
		{
			ch=getch();
			if(ch=='s')
			{
				if(a[x+1][y]==' ')
				{
					a[x][y]=' ';
					x++;
					a[x][y]='0';
				}
	    	}
	    	 else if(ch=='w')
	    	 {
	    	 	if(a[x-1][y]==' ')
	    	 	{
	    	 		a[x][y]=' ';
	    	 		x--;
	    	 		a[x][y]='0';
				 }
			 }
	    	 else if(ch=='a')
	    	 {
	    	 	if(a[x][y-1]==' ')
	    	 	{
	    	 		a[x][y]=' ';
	    	 		y--;
	    	 		a[x][y]='0';
				 }
			 }
	    	 else if(ch=='d')
	    	 {
	    	 	if(a[x][y+1]==' ')
	    	 	{
	    	 		a[x][y]=' ';
	    	 		y++;
	    	 		a[x][y]='0';
				 }
			 }
			 Set();
			 for(int i=0;i<=7;i++)
			     puts(a[i]);
			 if(x==6 && y==11)
			     break;    
	}
	printf("you win!");
	Sleep(1000);
	return 0;
}