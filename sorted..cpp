#include<stdio.h>
#include<string.h>
void main()
{
	char s1[3][10],s2[10];
	int i, j;
	
	printf("enter strings: ");
	for(i=0; i<3; i++)
	{
		gets(s1[i]);
	}
	
	for(i=0; i<3; i++)
	{
	  
	  for(j=i+1; j<3; j++)
	  {
	  	if(strcmp(s1[i],s1[j])>0)
	  	{
	  	strcpy(s2,s1[i]);
		strcpy(s1[i],s1[j]);
		strcpy(s1[j],s2);	
		}
      }
	}
	printf("sorted strings=");
	for(i=0; i<3; i++)
	{
		puts(s1[i]);
	}
}
