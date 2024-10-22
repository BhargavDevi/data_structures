// to print the even lines in the file
#include<stdio.h>
int main(int argc,char *argv[]){
    char ch;
    int count=0;
    FILE *fp;
    if (argc!=2)
    {
        printf("pass only 2 arguments");
        return 1;
    }
    fp=fopen(argv[1],"r");
    if(fp==NULL){
        printf("File not found");
        return 1;
    }
    while ((ch=fgetc(fp))!=EOF)
    {
        if (ch=='\n')
        {
            count++;
        }
        if (count%2==1)
        {
            printf("%c",ch);

        }
        
    }
    return 0;

}