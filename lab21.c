/*#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp;
    char fname[50],ch;
    int lines=0,words=0,inword=0;
    printf("enter file name:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("file not found");
    }
    while((ch=fgets(fp))!=EOF){
        if(ch=="\n"){
            lines++i;
        if(isspace(ch))
            inword;
        elseif(!inword)
            inword=1;
            words++;
        f.close(fp)
        printf("lines:%d\n words:%d\n",lines,words)
        }
    }

}*/
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char fname[50],word[50],temp[1000];
    printf("enter file name");
    scanf("%s",fname);
    printf("enter word to serach");
    scanf("%s",word);
    fp=fopen(fname,"r");
    if(!fp){
        printf("file is not found");
    }
    int found=0;
    while(fscanf("%p,%s",temp!=EOF)){
        if(scmp(temp,word)==0)
            found=1;
            break;

    }
    fclose(fp);
    if(found){
        printf("word found");
    }
    else{
        printf("not found");
    }

}
#include<stdio.h>
int main(){
    FILE *fp;
    char text[100];
    fp=fopen("data.txt","a");
    if(fp==NULL){
        printf("error opening file\n");
        return 1;
    }
    printf("enter text to append\n");
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp);
    printf("data appended sucessful\n");
    return 0;
}
