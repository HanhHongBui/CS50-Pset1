#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
//khai bao bien , chieu cao
int n = 0; //n = chieu cao
// nhap du lieu, kiem tra va yeu cau retry neu khong du dieu kien
do{
printf("Height: ");
n = GetInt();
if (n == 0)
{
return 0;
}
} while (n < 1 || n > 23);
for(int i = 0; i < n; i++) // bat dau in hang i
{
// in khoang trong
for(int j = 0; j < n-i-1; j++)
{
printf(" ");
}
//in '#'
for(int k = 1; k <= i+1; k++)
{
printf("#");
}
printf(" ");
for(int l = 1; l <= i+1; l++)
{
printf("#");
}
// // in khoang trong
// for(int m = 0; m < n-i-1; m++)
printf("\n");
}
return 0;
}
