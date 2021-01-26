//Problem : Block World Game (User  Only)
//Author  : DipenKumar R. Padhiyar
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include"mystack.h"

int choice;
//function definiation
void stack_operation();

////Inner_stack functions
//void Push_i(char temp_move);
//void Push_m(char temp_move);
//void Push_f(char temp_move);
//
//char Pop_i();
//char Pop_m();
//char Pop_f();
//
//void show_i();
//void show_m();
//void show_f();

//counter
int counter;
//selection function
void select_operation(int input);

//Game_Box
void game_box(int input);
char point=219,eos='\0';		
	char gb1[Size],gb2[Size],gb3[Size];
//algin box

//check_result
void check_result();

void randomchar(int input);
char ranchar[50]={'\0'},redy_string[10]={'\0'};


//final result
char final_resultset[10]={'\0'};
void remove_same(char s[],int input);
int main()
{	
	int i;
	int input,asci=65;
	char inputarray[10]={'\0'};
	
	system("color 70");
	//
		printf("%c",201);
		for(i=0;i<52;i++){printf("%c",205);}
		printf("%c\n%c\t\t",187,186);
		printf(" BLOCK %c WORLD %c GAME\t\t     %c\n",254,254,186);
		printf("%c",200);
		for(i=0;i<52;i++){printf("%c",205);}
		printf("%c\n",188);
	//	
	for(i=0;i<11;i++){printf("%c",220);}
	printf("\n%cGAME MENU%c\n",221,222);
	for(i=0;i<11;i++){printf("%c",223);}
	//
	
	do{
	printf("\n\nHow many Blocks you want (range 1 to 10):\n");
		scanf("%d",&input);
		if(input>10 ||input == 0){
			printf("Out of Range!! range should be 1 to 10 values.\n\n");
		}
	}while(input>10||input == 0);
	
	do{
	printf("Select Initial STATE And FINAL STATE for Result ::\n");	
	printf("[1].Random Generated  [2].User Define.\n");
	scanf("%d",&choice);
		if(choice>2||choice == 0){
		printf("\nOnly 2 OPTION Available ""\(>_<)/"" !!\n");
		}
	}while(choice>2||choice == 0);
	switch(choice){
		case 1:	//Initial value random
				randomchar(input);
				for(i=0;i<input;i++)
				{
					inputarray[i]=redy_string[i];
				}
				//delay
				sleep(3);
				//final state value random
				randomchar(input);
				for(i=0;i<input;i++)
				{
					final_resultset[i]=redy_string[i];
				}
			   break;
		case 2:
			do{
			printf("Now Define Initial Block Value(Upper_case only  OR selection range %c to %c ):\t",asci,asci+input-1);
			printf("%c ",16);
			scanf("%s",&inputarray);
			if(strlen(inputarray)!=input || strpbrk(inputarray, "0123456789abcdefghijklmnopqrstuvwxyz")){
			printf("Block value is Out of Range!! range should be upto _%d_ values.\n\n",input);
			}
			}while(strlen(inputarray)!=input || strpbrk(inputarray, "0123456789abcdefghijklmnopqrstuvwxyz"));
//			do{
//			printf("Now Define FINAL Block Value(Upper_case only):\t");
//			scanf("%s",&final_resultset);
//			if(strlen(final_resultset)!=input){
//			printf("Block value is Out of Range!! range should be upto _%d_ values.\n\n",input);
//			}
//			}while(strlen(final_resultset)!=input);
			//final state value random
				randomchar(input);
				for(i=0;i<input;i++)
				{
					final_resultset[i]=redy_string[i];
				}
			break;
		default:
				printf("\nOnly 2 OPTION Available ""\(>_<)/"" !!\n");
				break;
		}
		
	printf("Initial-BOX  Value is %s.\n\n",inputarray);
	printf("FINAL - BOX  value is %s.\n\n",final_resultset);
	printf("\nPress Any key to GAME START>>>\n");
	getch();
	//now initialize character array with box1
	printf("Initial Stack value is::\n\n");
	for(i=0;i<strlen(inputarray);i++){
		box1.stack_block[i]=inputarray[i];
		s1Top+=1;
		printf("BOX1[%d] = %c \n",i,box1.stack_block[i]);
	}
	//initial BOX position. 
	game_box(input);
	system("color f0");
    do    
    {
    select_operation(input);
	}while(1);
	return 0;	  
    
}

void select_operation(int input){
	
	char temp_move;
	int i;
	for(i=0;i<54;i++){printf("%c",177);}
	printf("\n\nSelect your Moves:\n");
	printf("[1].Move Box1 to Box2  [2].Move Box1 to Box3 \n");
	printf("[3].Move Box2 to Box1  [4].Move Box2 to Box3 \n");
	printf("[5].Move Box3 to Box2  [6].Move Box3 to Box1 \n");
	printf("[7].Count your Moves   [8].EXIT\n");
	printf("\nEnter your move[In number (1-6).]:\t");
    scanf("%d",&choice);
	switch(choice){
		case 1:temp_move=Pop_i();
			if(temp_move==0){break;}
			else{Push_m(temp_move);}
			counter++;
			game_box(input);
			check_result();
			   break;
		case 2:temp_move=Pop_i();
			if(temp_move==0){break;}
			else{Push_f(temp_move);}
			counter++;
			game_box(input);
			check_result();
			   break;
			  
		case 3:temp_move=Pop_m();
			if(temp_move==0){break;}
			else{Push_i(temp_move);}
			counter++;
			game_box(input);
			check_result();
			   break;
		case 4:temp_move=Pop_m();
			if(temp_move==0){break;}
			else{Push_f(temp_move);}
			counter++;
			game_box(input);
			check_result();
			   break;
		case 5:temp_move=Pop_f();
			if(temp_move==0){break;}
			   else{Push_m(temp_move);}
			   counter++;
			   game_box(input);
			   check_result();
			   break;
		case 6:temp_move=Pop_f();
			if(temp_move==0){break;}
			else{Push_i(temp_move);}
			counter++;
			game_box(input);
			check_result();
			   break;
		case 7:printf("BOX MOVES::%c %d",16,counter);
			   break;
		case 8:exit(0);
		case 9: show_i();
                    break;
        case 10: show_m();
                    break;
        case 11: show_f();
                    break;		        
		default: printf("\nInvalid choice ""\(>_<)/"" !!");
	}
	
}

void game_box(int input){
	
		// TODO: I am here
	int i,j,k,l,y=10;
	system("cls");
	//
		printf("%c",201);
		for(i=0;i<52;i++){printf("%c",205);}
		printf("%c\n%c\t\t",187,186);
		printf("     GAME START HERE\t\t     %c\n",186);
		printf("%c",200);
		for(i=0;i<52;i++){printf("%c",205);}
		printf("%c\n",188);
	//
	for(i=0;i<input;i++){
		gb1[i]=point;
		gb2[i]=point;
		gb3[i]=point;
	}
	printf("\nBox1_string: %s\n",box1.stack_block);
	printf("Box2_string: %s\n",box2.stack_block);
	printf("Box3_string: %s\n",box3.stack_block);
	
	printf("Final State values: %s\n",final_resultset);
	for(i=s1Top;i>=0;i--){gb1[i]=box1.stack_block[i];}
	for(i=s2Top;i>=0;i--){gb2[i]=box2.stack_block[i];}
	for(i=s3Top;i>=0;i--){gb3[i]=box3.stack_block[i];}
	
	//GOAL BOX
	printf("\t\t\t\t     %cGOAL%c\n",31,31);																					//her3
	printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,196,196,196,194,196,196,196,194,196,196,196,191,218,196,196,196,194,196,196,196,194,196,196,196,191);
	//j=0;
	for(i=input-1,j=input-1;i>=0||j>=0;i--,j--){																			  //her3		
		printf("\t %c %c %c %c %c %c %c\t\t %c %c %c %c %c %c %c\n",179,gb1[i],179,gb2[i],179,gb3[i],179,179,point,179,point,179,final_resultset[j],179);
		//j++;
	}	
																																//her3
	printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c\t\t %c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,193,196,196,196,193,196,196,196,217,192,196,196,196,193,196,196,196,193,196,196,196,217);
	printf("\t   %c   %c   %c\n",24,24,24);
	printf("\tBOX1 BOX2 BOX3\n",24,24,24);
}

void check_result(){

//for(i=0;i<strlen(final_resultset);i++){
	//if(box3.stack_block[i]==final_resultset[i]){
	int i,j=0;
	char box1clone[10]={'\0'},box2clone[10]={'\0'},box3clone[10]={'\0'};
	for (i =0; i <strlen(final_resultset); i++) {
	   //box1clone[j]=box1.stack_block[i];
	   //box2clone[j]=box2.stack_block[i];  
       box3clone[j]=box3.stack_block[i];  
	   j++;    
    }     
	
	//printf("\nACHIEVED STATUS  : %s and %s.\n",box1clone,final_resultset);
	//printf("\nACHIEVED STATUS  : %s and %s.\n",box2clone,final_resultset);
	printf("\nACHIEVED STATUS  : %s and %s.\n",box3clone,final_resultset);
	printf("\nTOTAL MOVES      : %d\n\n",counter);
		if(/*strcmp(box1clone,final_resultset)==0 ||strcmp(box2clone,final_resultset)==0||*/strcmp(box3clone,final_resultset)==0){
		for(i=0;i<19;i++){printf("%c",16);}	
		printf("YOUR GAME IS OVER",2);
		for(i=0;i<18;i++){printf("%c",17);}
		getch();
		exit(0);
		}printf("\n");
		
	}


void randomchar(int input){
	
	int i,upper=65,lower=65;
	
	srand(time(0)); 
  	//rand() % (max_number + 1 - minimum_number) + minimum_number
  	for(i=0;i<45;i++){
  		ranchar[i]=rand() % (upper + 1 - (lower+input+1)) + lower;
	  }
	  
	  //printf("_____%s\n",ranchar);
    	remove_same(ranchar,input);
}

void remove_same(char s[],int input){
	
	char temp=1,c='*';  
    int  i,j,k=0,n;
    
	for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
		    }
		}
    }
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
    }
    for(i=0;i<input;i++){ 
    redy_string[i]=s[i];
	}
}
