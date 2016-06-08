//
//  examples.c
//  leraningC
//
//  Created by AnuOmHarini on 1/16/15.
//  Copyright (c) 2015 AnuOmHarini. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void example(void)
{
    printf("ENTERING EXAMPLES\n");

    //1
    /*char s[] = "\0\1\2\3\4";
     
     printf("%c",'A' + s[3]);
     */
    
    //2
    //  printf("%c","ACEGIK"[3] - 1);
    
    //3
    /*
    // strcat appends the dest string to source string.. so strcat(s + 2, "ABCDE");is equal to strcat(s,"ABCDE"); ..throws error cause after 'strcat', s array will be >10.. but v've allocated only 10 for s
     char s[10] = "ABCDE";
     strcat(s + 2, "ABCDE");
     printf("%d", s[0] - s[2]);
    */
    
    //4
    //the difference between the two code segments r imp to understand pointers
    /*
     char string[] = "Abf", *p;
     p = string;
     printf("%c", *p++);
     printf("  %c %s\n", *p, string);
    
     char string1[] = "Abf", *p1;
     p1 = string1;
     printf("%c", (*p1)++);
     printf("  %c %s\n", *p1, string1);
    */
    
    //5
    // Editting a char*
     /*int xx;
     char *my_ptr = malloc(sizeof(*my_ptr) * 20);
    printf("size of my_ptr %lu\n", sizeof(my_ptr));
     for (xx = 0; xx < 20; xx++) {
     *(my_ptr + xx) = 'B'+xx; // my_ptr[xx]
     }
     *(my_ptr+20) = '\0';
     printf("%s\n", my_ptr);
     
     free(my_ptr);
     
     //use 'strdup()' to modify string as pointers
     char *mystr = (char*)malloc(20);//"This is my very own string literal";
    printf("size of mystr %lu\n", sizeof(mystr));
     mystr = strdup("what");
     strcat(mystr, "Olive");
     printf("string %s \n", mystr);
     free(mystr);
    */
    
    //6
    // when a pointer is pointed to another, whatever changes in one, is replicated in the other also.
    /* int i,j;
     int **p = (int **)malloc(2 * sizeof(int *));
     p[0] = (int *)malloc(2 * sizeof(int));
     p[1] = p[0];
     for(i = 0; i < 2; i++)
     {
         for(j = 0; j < 2; j++)
         {
             p[i][j] = i + j;
             printf("p[%d][%d] is   %d\n", i, j, p[i][j]);
         }
     }
     p[1][0] = 3;
     printf("%d\n",p[0][0]);
    */
    
    //7
    /*int t[4] = { 0, -1, -2, -3 }, *p = t + 3;
    printf("%d\n", p[-3]);
    printf("%d\n", p[*p] - t[2]);
    */
    //8
    /*  int i = 5, j = 4;
     for(i--; i--; i--)
     {
              j--;
         printf("i = %d j = %d\n", i,j);
     }

     printf("%d ",i + j);
    */
    //9
    //when sizeof(function call) is called , it jst checks for the return type of the function and gives the size.. it doesnt execute the function calls itself.
    /* 
     int f(int num){
     return num*5;
     }
     
     int i=3,val;
     val=sizeof (f(i)+ +f(i=1)+ +f(i-1));
     printf("%d %d",val,i);
     */
    //10
    /*int num,a=5;
    num=-a--+ ++a;
    printf("%d  %d",num,a);*/
    //11
    /*
     static int a[][2][3]={0,1,2,3,4,5,6,7,8,9,10,11,12};
     int i=-1;
     int d;
     d=a[i++][++i][++i];
     printf("%d",d);*/
    //12
    /* pre-increment & || operator is used. if preincrement is done, value of that variable is changed in all places in that expression
     int a=5,b=10;
     clrscr();
     if(a<++a||b<++b)
     printf("%d  %d",a,b);
     else
     printf("John Terry");
     */
    //13
    /*If size of first dimension of array is not written at declaration, then it is max elements in the initialization of array of that dimension. size of first dimension in arr is 3. Default initial value of rest elements are zero. { {1,2,0}, {3,4,5}, {5,0,0} }.
     int arr[][3]={{1,2},{3,4,5},{5}};
     printf("%d %d %d",sizeof(arr),arr[0][2],arr[1][2]);*/
    //14
    /* "%d" is considered as a string
     printf("%d"+1);
     */
    //15
    /* call(x, y) has replaced by xy.
     #define call(x,y) x##y
     int x=5,y=10,xy=20;
     printf("%d",xy+call(x,y));*/
    //16
    /* static is load-time variable and it cant be initialized by compile-time variable like auto variable
     int i=10;
     static int x=i;
     if(x==i)
     printf("Equal");
     else if(x>i)
     printf("Greater than");
     else
     printf("Less than");*/
    //17)
    /*
     char *p1 = "India", *p2;
     p2=p1;
     p1 = "BIX";
     printf("%s %s\n", p1, p2);*/
     //18
     //order of operator precedence
     /*int i = 0, j = 1, k;
     k = i << j + j << i;
     printf("%d",k);
     */
    return;
}
