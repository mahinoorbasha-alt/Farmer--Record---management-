/*#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;

};
int main()
{
    struct student s[3];
    int i;
    printf("enter the details of 3\n");
    for(i=0;i<3;i++){
        printf("\n enter the no of elements:");
        scanf("%d",&s[i].roll);
        printf("enter name\n");
        scanf("%s",s[i].name);
        printf("enter marks:");
        scanf("%f",&s[i].marks);

    }
    printf("\n--student details\n");
    for(i=0;i<3;i++)
    {
        printf("\n rollno:%d",s[i].roll);
        printf("\n name:%s",s[i].name);
        printf("\n marks:%f",s[i].marks);
    }
}
#include<stdio.h>
struct Address{
    char city[30];
    int pincode;
};
struct student{
    int roll;
    char name[50];
    struct Address addr;
};
int main()
{
    struct student s={101,"ravi",{"hyderabad",500001}};
    printf("roll no:%d\n",s.roll);
    printf("name:%s\n",s.name);
    printf("city:%s\n",s.addr.city);
    printf("pincode:%d\n",s.addr.pincode);
}
#include<stdio.h>
struct student{
    int rigid;
    char name[100];
    float cgpa;
    char village[100];
    char district[100];
    char phn[50];
};
int main(){
    int n,i;
    float sum=0,avg;
    printf("enter no of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("\n enter details of studentb%d\n",i+1);
        printf("rigid");
        scanf("%d",&s[i].rigid);
        printf("name:");
        scanf("%s",s[i].name);
        printf("cgpa");
        scanf("%f",&s[i].cgpa);
        printf("village");
        scanf("%s",s[i].village);
        printf("district");
        scanf("%s",s[i].district);
        printf("phnno");
        scanf("%s",s[i].phn);
        sum=sum+s[i].cgpa;

    }
    avg=sum/n;
    printf("\nAverage cgpa=%2f\n",avg);
    printf("\n--students with above average cgpa\n");
    int a=0;
    for(i=0;i<n;i++){
        if(s[i].cgpa>avg)
        {
            printf("\nName%s\n",s[i].name);
            printf("cgpa:%2f\n",s[i].cgpa);
            printf("phn no:%s",s[i].phn);
            a=1;
        }
    }

}*/
