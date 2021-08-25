 /**  PROGRAMMING FUNDAMENTALS MINI PROJECT 1, MUHAMMAD HARIS IRFAN, FA18-BCE-090, Instructor: Dr Omer Ahmed **/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> /// library for inbuilt windows functions
int main()
{

    againn:
        system("CLS"); /// used to clear screen
   printf("Ali has been visiting the mansion like house of the great grand father\n");
   printf("of his friend Asim.Ali has been given a room (R1) to stay the night\n");
   printf("by his host (Asim).As Ali lay awake due to the strange new place he was\n");
   printf("in, he felt very hungry.Remembering that there was some delicious Biryani\n");
   printf("left over, he decides to go get some Biryani from the kitchen (R9) refrigerator.\n");
   printf("The mansion is a labyrinth of rooms and corridors and suddenly Ali realizes that\n");
   printf("he cant seem to find his way to the kitchen.\n\n");

   printf("You have to help Ali get to the kitchen and back to his room so that he may sleep peacefully.\n");

   printf("The mansion has 9 rooms in all numbered 1 to 9\n\n");


int op,rk,again;
op=1;       /// op stands for operator here, it is 1 at start so the user starts at Case 1
rk=0;      /// rk stands for Reached kitchen, this value is 0 at start and it will be updated to 1 when user enters kitchen.
switch(op)
{
    case 1:
    {

        c1:   /// c1 stands for case one, its a jump point for goto statement if required.
        system("color 74");  // changes the color
        printf("You are in Room 1, you have three options to go to Room 2, Room 3 or Room 8\n");
        printf("Enter Room Number you want to try?");
        scanf("%d",&op);
        if(op==2)
        {
             system("CLS");

            printf("The Room is locked\n");
            Beep(750, 750); /// produces a beep for 750 miliseconds
            goto c1; /// this will take us back to the start of case 1 where c1 is inserted.
        }

        else if (op==8)
        {
            system("CLS");
            printf("Welcome to room 8\n");
            goto c8;
        }
        else if(op==3)
        {
            system("CLS");
            printf("Welcome to room 3\n");
            goto c3;
        }
         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c1;
         }

    }

    case 2:
    {

        c2:
        printf("You are in Room 2, you have four options to go to Room 1, Room 3, Room 6 or Room 7\n");
        printf("Enter Room Number you want to try?");
        scanf("%d",&op);
          if(op==3)
         {
             system("CLS");
             printf("Welcome to room 3\n");
             goto c3;
         }

         else if (op==1)
         {
             system("CLS");
            printf("Welcome to room 1\n");
            if(rk>=1)  /// if rk is equal to or greater then 1 then it means that user has been to the kitchen
            {
            goto ce;
            }
            else
            {
                printf("You are back in your own room, FIND KITCHEN\n");
                goto c1;
            }

         }
          else if(op==6)
        {
           system("CLS");
           printf("Welcome to room 6\n");
           goto c6;
        }

         else if (op==7)
         {
             system("CLS");
             printf("The room is locked\n");
             Beep(750, 750);
             goto c2;
         }
         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c2;
         }


    }

    case 3:
    {
        system("CLS");
        c3:
        printf("You are in Room 3, you have three options to go to Room 1, Room 2 or Room 6\n");
        printf("Enter Room Number you want to try?");
        scanf("%d",&op);
        if(op==1)
        {
            system("CLS");
            printf("Its locked\n");
            Beep(750, 750);
            goto c3;
        }

        else if(op==6)
        {
           system("CLS");
           printf("Welcome to room 6\n");
           goto c6;
        }

         else if (op==2)
         {
             system("CLS");
             printf("Welcome to room 2\n");
             goto c2;
        }
         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c3;
         }

    }

    case 4:
    {

        c4:
        printf("You are in Room 4, you have two options to go to Room 5 or Room 9\n");
        printf("Enter Room Number you want to try?");
        scanf("%d",&op);

        if(op==5)
        {
           system("CLS");
           printf("Welcome to room 5\n");
           goto c5;
        }

         else if (op==9)
         {
             system("CLS");
             printf("Welcome to room 9\n");
            goto c9;
         }
         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c4;
         }
    }

    case 5:
    {

        c5:
        printf("You are in Room 5, you have three options to go to Room 4, Room 6 or Room 8\n");
         printf("Enter Room Number you want to try?");
         scanf("%d",&op);
         if(op==4)
         {
             system("CLS");
             printf("Welcome to room 4\n");
              goto c4;
         }

          else if(op==6)
        {
           system("CLS");
           printf("Welcome to room 6\n");
          goto c6;
        }

         else if (op==8)
         {
             system("CLS");
             printf("The room is locked\n");
             Beep(750, 750);
              goto c5;

         }
         else
         {
             system("CLS");
            printf("There is no such room\n");
            Beep(750, 750);
             goto c5;
         }

    }


    case 6:
    {

        c6:
        printf("You are in Room 6, you have three options to go to Room 2, Room 3 or Room 5\n");
        printf("Enter Room Number you want to try?");
        scanf("%d",&op);
          if(op==2)
         {
             system("CLS");
             printf("Welcome to room 2\n");
             goto c2;
         }

          else if(op==3)
        {
           system("CLS");
           printf("Welcome to room 3\n");
           goto c3;
        }

         else if (op==5)
         {
             system("CLS");
             printf("Welcome to room 5\n");
              goto c5;
         }
         else
         {
             system("CLS");
             printf("There is no such room\n");
            Beep(750, 750);
             goto c6;
         }


    }
    case 7:
    {

        c7:
        printf("You are in Room 7, you have two options to go to Room 2 or Room 8\n");
        scanf("%d",&op);
          if(op==2)
         {
             system("CLS");
             printf("welcome to room 2\n");
             goto c2;
         }

          else if(op==8)
        {
           system("CLS");
           printf("The Door is locked\n");
           Beep(750, 750);
          goto c7;
        }


         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c7;
         }


    }

    case 8:
    {
        c8:
        printf("You are in Room 8, you have three options to go to Room 1 or Room 5 or Room 7\n");
        scanf("%d",&op);
          if(op==1)
         {
             system("CLS");
             if(rk>=1)
            {
            goto ce;
            }
            else
            {
                printf("You are back in your own room(Room 1) without going the kitchen, FIND KITCHEN\n");
                goto c1;
            }
         }

          else if(op==5)
        {
           system("CLS");
           printf("Welcome to room 5\n");
           goto c5;
        }

         else if (op==7)
         {
             system("CLS");
             printf("Welcome to room 7\n");
             goto c7;
         }
         else
         {
             system("CLS");
             printf("There is no such room\n");
             Beep(750, 750);
             goto c8;
         }

    }

    case 9:
    {
        c9:
        rk=rk+1;
        if(rk==1) /// when rk is equal to 1 and user enters kitchen only then a congrats messege is shown.
        {
           system("color 72");
            printf("Congratulations, You are in the kitchen finally\n");
            Beep(750, 2500);
        }
system("color 74");
        printf("You are in Room 9, you have one option to go to R4\n");
        scanf("%d",&op);

        if (op==4)
        {
            system("CLS");
            goto c4;
        }

       else
       {
           system("CLS");
           printf("There is no such room");
           goto c9;

       }
ce:        ///jump point for end game
         system("CLS");
      system("color 72");
        printf(" YOU ARE IN YOUR BEDROOM, YOU WIN, SLEEP NOW GAME OVER\n\n\a");
        Beep(750, 2500);

        printf("Want to play again? Enter 1 for yes \n");
        scanf("%d",&again);
        if (again==1||again==1)  ///to start again
        {
            goto againn;
        }
       else
       {
           printf("The program will now terminate");
       }
    }
}


    return 0;
}
