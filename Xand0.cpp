#include<stdio.h>
#include<conio.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};//global declared array box which can be accesed anywhere
int wincondition();//fucnction declaration to check win condition
void board();//fucnction declaration for the layout of the board
main()
{
    int choice=0,mark,win,t=0,p1=0,p2=0,ans;
    char player,f='0';
    	board();//calling function board to print it's layout
    printf("       Choose player 1 or 2 \n");//Choosing player 1 or 2
    scanf("          %d",&choice);
