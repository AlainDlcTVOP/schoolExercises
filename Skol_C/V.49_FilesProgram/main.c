#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void printMenu()
{
    printf("+----------------------------+\n");
    printf("|  Menu                      |\n");
    printf("|                            |\n");
    printf("| 1. Write File               |\n");
    printf("| 2. Read File               |\n");
    printf("| 3.            |\n");
    printf("| 4.           |\n");
    printf("|                            |\n");
    printf("| 9. Exit                    |\n");
    printf("+----------------------------+\n");
}

int main(int argc, char const *argv[])
{

    FILE *fptr;
    char select;
    int num;
    fptr = fopen("C://Users/Kungen/Desktop/Skol_C/V.49_FilesProgram/program.txt", "w");
    if (fptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    printMenu();
    scanf("%c", &select);
   
        /* code */
        printf("Enter how many numbers ");
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            int num;
            printf("Enter the number\n");
            scanf("%d", &num);
            fprintf(fptr, "%d@", num);
        }
        fclose(fptr);
        
        if(select == '2') {
   
        FILE *file_pointer;
        char buffer[30], c;
        char str[400];
        file_pointer = fopen("C://Users/Kungen/Desktop/Skol_C/V.49_FilesProgram/program.txt", "r");
        if (fptr == NULL)
        {
            printf("Error");
            exit(1);
        }
        while (fgets(str, 400, file_pointer) != NULL)
        {
            printf("%s", str);
            fclose(file_pointer);
        }

        }
    return 0;
}