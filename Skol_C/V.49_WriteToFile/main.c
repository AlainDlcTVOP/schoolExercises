# include <stdio.h>

int main(int argc, char const *argv[])
{
   FILE *fp;
   char ch;
   fp = fopen("hello.txt", "w");
   printf("Enter data...");

   while ((ch = getchar()) != EOF)
   {
      putc(ch, fp);
   }

   fclose(fp);
   
    return 0;
}
