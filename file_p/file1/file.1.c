#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *sfp = NULL;
    char ch, cha;
    sfp = fopen(argv[1], "r");
    if (argc == 2)
    {
        if (sfp == NULL)
        {
            printf("Error");
            exit(1);
        }
        printf("Enter the character");
        scanf("%s", cha);
        while (ch = fgetc(sfp) != EOF)
        {

            if (ch == cha)
            {
                printf("%c", ch);
                return;
            }
        }
    }
}