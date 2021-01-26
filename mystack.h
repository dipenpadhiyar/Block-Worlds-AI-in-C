#include<stdio.h>
#define Size 10	

int s1Top=-1,s2Top=-1,s3Top=-1;
	struct stack {
		char stack_block[Size];
	};//stack variables
	struct stack box1,box2,box3;


//________________________________________________________________
//stack Opertion for box1................................
//________________________________________________________________
void Push_i(char temp_move)
{
   // printf("%d\n",strlen(box1.stack_block));
   // printf("s1Top value is %d.\n",s1Top);
    if(s1Top==Size-1){
        printf("\nBox1 is Full Now.!!");
        return;
    }
    else
    {
        s1Top=s1Top+1;
        //printf("sTop1 value is == %d. \n",s1Top);
        box1.stack_block[s1Top] = temp_move;
       // printf("Initial last value is :: %s.\n",box1.stack_block);
      // return box1.stack_block[s1Top];
    }
}

char Pop_i()
{
	char temp;
	//printf("Initial last value is :: %s",box1.stack_block);
    if(s1Top==-1)
    {
        printf("\nBox1 is Empty Now.!!\n");
        return 0;
    } 
    else
    {
    	 //printf("sTop1 value is == %d. \n",s1Top);
    	 temp=box1.stack_block[s1Top];
        printf("\nPopped element in Box1:  %c",box1.stack_block[s1Top]);
        s1Top=s1Top-1;
        return temp;
    }
}

void show_i()
{
     int i;
     
    if(s1Top==-1)
    {
        printf("\nBox1 is Empty Now.!!\n");
    }
    else
    {
        printf("\nElements present in the Box1: \n");
        for(i=s1Top;i>=0;i--)
            printf("%c\n",box1.stack_block[i]);
    }
}
//________________________________________________________________
//stack Opertion for box2....................................
//________________________________________________________________
void Push_m(char temp_move)
{
    //printf("%d\n",strlen(box2.stack_block));
    //printf("s1Top value is %d.\n",s1Top);
    if(s2Top==Size-1)
    {
        printf("\nBox2 is Full Now.!!");
        return;
    }
    else
    {
        //x=getchar();
        //printf("x value is == %c. \n",x);
        s2Top=s2Top+1;
       // printf("sTop1 value is == %d. \n",s1Top);
        box2.stack_block[s2Top] = temp_move;
        //printf("Mid last value is :: %s.\n",box1.stack_block);
    }
   // return box1.stack_block[s2Top];
}

char Pop_m()
{
	char temp;
	//printf("Initial last value is :: %s",box1.stack_block);
    if(s2Top==-1)
    {
        printf("\nBox2 is Empty Now.!!\n");
        return 0;
    }
    else
    {
    	//printf("sTop2 value is == %d. \n",s1Top);
    	temp=box2.stack_block[s2Top];
        printf("\nPopped element in Box2:  %c",box2.stack_block[s2Top]);
        s2Top=s2Top-1;
        return temp;
    }
    
}

void show_m()
{
     int i;
     
    if(s2Top==-1)
    {
        printf("\nBox2 is Empty Now.\n");
    }
    else
    {
        printf("\nElements present in the Box2: \n");
        for(i=s2Top;i>=0;i--)
            printf("%c\n",box2.stack_block[i]);
    }
}

//________________________________________________________________
//stack Opertion for box3................................
//________________________________________________________________
void Push_f(char temp_move)
{
//    printf("%d\n",strlen(box1.stack_block));
//    printf("%d\n",strlen(box2.stack_block));
//    printf("s1Top value is %d.\n",s1Top);
    if(s3Top==Size-1)
    {
        printf("\nBox3 is Full Now.!!");
        return;
    }
    else
    {
//        printf("x value is == %c. \n",x);
        s3Top=s3Top+1;
//        printf("sTop1 value is == %d. \n",s1Top);
        box3.stack_block[s3Top] = temp_move;
        //printf("Initial last value is :: %s.\n",box2.stack_block);
    }
    //return box1.stack_block[s3Top];
}

char Pop_f()
{
	char temp;
//	printf("Initial last value is :: %s",box1.stack_block);
    if(s3Top==-1)
    {
        printf("\nBox3 is Empty Now.!!\n");
        return 0;
    }
    else
    {
//    	printf("sTop1 value is == %d. \n",s1Top);
		temp=box3.stack_block[s3Top];
        printf("\nPopped element in Box3:  %c",box3.stack_block[s3Top]);
        s3Top=s3Top-1;
        return temp;
    }
   
}

void show_f()
{
     int i;
     
    if(s3Top==-1)
    {
        printf("\nBox3 is Empty Now.!!\n");
    }
    else
    {
        printf("\nElements present in the Box3: \n");
        for(i=s3Top;i>=0;i--)
            printf("%c\n",box3.stack_block[i]);
    }
}
