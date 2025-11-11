/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100],temp[100];
    int n,i,j;
    printf("enter number of string");
    scanf("%d",&n);
    getchar()
    printf("enter %d string \n",n);
    for(int i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
             if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
        

    }
}
//lowercase and uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("enter a string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("converted string %s\n",str);

}*/
//vowels consonts digits
#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0,consonats=0,digits=0,i;
    printf("enter a string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        char ch=tolower(str[i]);
        if(ch>='a'&&ch<='z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                vowels++;
            }
            else{
                consonats++;
            }
        }
        else if(ch>='o'&&ch<='a')
        {
            digits++;
        }
    } 
}


    

        