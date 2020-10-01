#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int Insertion(int);
void Deletion();
void display();
int rear=0,front=0;
#define size 5
int queue[size];

int Insertion(int ele)
    {
        if(rear<size)
            {
                queue[rear]=ele;
                rear++;
            }
        else
            {
                printf("\n Queue is Full");
            }

    }

void Deletion()
    {
        if(rear==front)         //queue is empty
            {
                printf("\nQueue is empty");
            }
        else
        {
            for(int i=0;i<rear;i++)
                {
                    queue[i]=queue[i+1];

                }
                rear--;
        }
        

    }

void display()
    {
        for(int i=0;i<rear;i++)
            {
                printf("| %d |",queue[i]);
            }
    }

int main()
    {   
        int ch,ele;
        while(true)
        {
        printf("\n1)Insert: ");
        printf("\n2)Delete: ");
        printf("\n3)display: ");
        printf("\nexit: ");
        
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
            {
                case 1:{
                    printf("\nEnter an element : ");
                    scanf("%d",&ele);
                    Insertion(ele);
                    printf("\nElement pushed");
                    break;
                    }
                
                case 2:{
                        Deletion();
                        printf("\nElement deleted");
                            break;                 

                    }
                case 3:display();
                            break;


                case 4: exit(1);
                            break;


                default : printf("\nWrong optiion");
                            break;
            }
        }

        
            //code
        return 0;
    }