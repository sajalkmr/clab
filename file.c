#include <stdio.h>

int main()
{
    char input_file[20], target_file[20], ch;
    printf("enter input file name & target file name: ");
    scanf("%s%s", input_file, target_file);

    FILE *fp1, *fp2;
    fp1 = fopen(input_file, "r");

    if (fp1 == NULL)
    {
        printf("unable to open the file %s", input_file);
        return 1;
    }

    fp2 = fopen(target_file, "w");

    if (fp2 == NULL)
    {
        printf("unable to open the file %s", target_file);
        return 2;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("file copied successfully\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}