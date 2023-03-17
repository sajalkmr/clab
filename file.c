#include<stdio.h>

2 int main()

3{ char input_file[20],target_file[20], ch; 4 printf("enter input file name & target file name"); 5 scanf("%s%s",input_file, target_fije);

6 FILE *fp1, *fp2; 7fp1=fopen(input_file,"r");

8 if(fp1==NULL)

9f

10 printf("unable to open the file %s", input_file);

11 return 1;

12}

13 fp2=fopen(target_file, "w");

14 if(fp2=NULL)

15{

16 printf("unable to open the file %s", target_file);

17 return 2;

18)

19 while((ch-fgetc(fp1))!=EOF)

20{fputc(ch,fp2):} 21 printf("file copied successfully\n");

22
