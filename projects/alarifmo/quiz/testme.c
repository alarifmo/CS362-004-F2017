#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<time.h>

char inputChar()
{
/* To make it real random add more char to char c and char x, i made it this way so the program can find the solution in reasnoable time */
    
	char* c="[{( ax}])l";

srand(time(NULL));
	int randNum;
	//randNum = rand() % (126 + 1 - 32) + 32;

	//if(randNum >0 && randNum<32 ){

	//randNum=randNum+32;	
//}
		randNum=rand()%10;

return c[randNum];
}



char *inputString()
{
 char* c="reset ";
srand(time(NULL));
int randNum;
 randNum=rand()%6;
char s[5] ;
s[0]=c[0];
s[1]=c[1];
s[2]=c[2];
printf("error \n");
printf("c[0]= %c\n",c[0]);
printf("s[0]= %c, s[1]=%c, s[2]=%c \n", s[0],s[1],s[2]);
return s;
}

void testme()
{
  int tcCount = 0;
  char *s;
  char c;
  char* x="reset lkdskljflscmlkjdsljfls";
  int state = 0;
  while (1)
  {

	 srand(time(NULL));
    tcCount++;
    c = inputChar();
    char s[5]; 
	//= inputString();
	int num=rand()%20;
	s[0]=x[num];
	s[1]=x[num+1];
	 s[2]=x[num+2];
	 s[3]=x[num+3];
 	s[4]=x[num+4];
	s[5]='\0';
	




	printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);

    if (c == '[' && state == 0) state = 1;
    if (c == '(' && state == 1) state = 2;
    if (c == '{' && state == 2) state = 3;
    if (c == ' '&& state == 3) state = 4;
    if (c == 'a' && state == 4) state = 5;
    if (c == 'x' && state == 5) state = 6;
    if (c == '}' && state == 6) state = 7;
    if (c == ')' && state == 7) state = 8;
    if (c == ']' && state == 8) state = 9;
    if (s[0] == 'r' && s[1] == 'e'
       && s[2] == 's' && s[3] == 'e'
       && s[4] == 't' && s[5] == '\0'
       && state == 9)
    {
      printf("error \n");
      exit(200);
    }
  }
}


int main(int argc, char *argv[])
{
    srand(time(NULL));
    testme();
    return 0;
}
