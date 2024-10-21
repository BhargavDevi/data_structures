#include<stdio.h>
int main(int argc,char *argv[] ){
    FILE *sfp ,*dfp;
    char ch;
    if (argc!=3)
    {
        printf("pass only 3 arguments");
        return 1;
    }
   
    sfp=fopen(argv[1],"r");
    dfp=fopen(argv[2],"w");
    if(sfp==NULL){
        printf("The file not found");
        return 1;
    }
    if(dfp==NULL){
        printf("The file not found");
        return 1;
    }
    while ((ch=(fgetc(sfp)))!=EOF)
    {
        fputc(ch,dfp);
        printf("%c",ch);
    }
    fclose(sfp);
    fclose(dfp);
    return 0;

    
}
