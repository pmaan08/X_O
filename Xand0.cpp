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
  do	
  {
	  choice++;
	choice=(choice%2==1)?(player='X'):(player='O');//Ternary if-else statement to choose X and O
      board();
	 printf("         Choose a number");
     scanf("%d",&mark);
    if( mark ==1 && box[1]== '1')//Marking box[1] as per player's input
        {
		box[1]=player;
		win=wincondition();
		choice++;
	}
    else if( mark ==2 && box[2]== '2')//Marking box[2] as per player's input
            {
			 box[2]=player; 
			 win=wincondition();
			 choice++;
		    }
    else if( mark ==3 && box[3]== '3')//Marking box[3] as per player's input
            {
			 box[3]=player;
			 win=wincondition();
			 choice++;
		   }
    else if( mark ==4 && box[4]== '4')//Marking box[4] as per player's input
            {
			 box[4]=player;
			 win=wincondition();
			 choice++;
		      }
    else if( mark ==5 && box[5]== '5')//Marking box[5] as per player's input
            {
			 box[5]=player;
			 win=wincondition();
			 choice++;
		    }
    else if( mark ==6 && box[6]== '6')//Marking box[6] as per player's input
            {
			 box[6]=player;
			  win=wincondition(); 
			 choice++;
		    }
    else if( mark ==7 && box[7]== '7')//Marking box[7] as per player's input
            {
			 box[7]=player;
			 win=wincondition();
			 choice++;
		    }
    else if( mark ==8 && box[8]== '8')//Marking box[8] as per player's input
            {
			 box[8]=player;
			 win=wincondition();
			 choice++;
		    }
    else if( mark ==9 && box[9]== '9')//Marking box[9] as per player's input
            {
			 box[9]=player;
			 win=wincondition();
			 choice++;
		}
    else 
        {printf("       Invalid Move");
         
         getch();
        }
    }while(win==-1);
    

    if(win==1)//If win condition is met
       { 
	     
	     if(player=='X')
	       p1++;
		 else if(player=='O')
		  p2++;
	
		printf("                 Player %c wins\n\n\n",player);
		printf("_________________________________________________\n");//Printing the Scoreboard
		printf("                   SCOREBOARD     \n\n");
		printf("      Player 1(X)  |      Player(O)    | Tie     |\n");
		printf("                   |                   |         |\n ") ;
		printf("          %d       |        %d          |   %d     | \n\n",p1,p2,t); 
		
		printf("               Do you wanna play Round 2 (1)Yes (2)NO \n");//Asking user for the next round
		scanf("                 %d",&ans);
		if(ans==1)
		  { int i;
		   win=-1;
		   for(i=0;i<=9;i++)
		   {
		   	 box[i]=f++;
		   }
		   
		   main();
	      }
	     
     }
    else if(win==0)//Tf Tie conditon is met
      {
       
	   printf("                   TIE\n");
       	printf("             Player %c wins\n\n",player);
       	printf("_______________________________________");
		printf("               SCOREBOARD     \n\n");
		printf("    Player 1(X)  |   Player(O)    | Tie\n");
		printf("                 |                |    \n ") ;
		printf("        %d       |     %d          |   %d",p1,p2,t);
      }
    
