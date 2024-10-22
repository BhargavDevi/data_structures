#include<stdio.h>
int main(){
    char ch[500],a[20],b[5];
    int count=0;
    FILE *fp;
    // if (argc!=2)
    // {
    //     printf("pass only 2 arguments");
    //     return 1;
    // }
    printf("Enter the character u want the file to begin with ");
    scanf("%s",b);

    fp=fopen(a,"r");
    if(fp==NULL){
        printf("File not found");
        return 1;
    }
    for (int i = 0; i < sizeof(ch); i++)
    {
      ch[i]=fgetc(fp);
    
       if(ch[1]==b){
        printf("%s",ch);
       }
        if (ch=='\n')
        { 
            if(ch[1]==b){
        printf("%s",ch);
       }
        }
       
        
    }
    return 0;

}