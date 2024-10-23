#include <stdio.h>
// qus 1 addition or two matrix
// int main()
// {
//     int a[2][2] = {{7, 8}, {5, 9}};
//     int b[2][2] = {{7, 8}, {9, 7}};
//     int res[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             res[i][j] = a[i][j] + b[i][j];
//             // printf("%d\t", res[i][j]);  //without extra metrix ke print karna hai to yhi par print kara sakte hai
//         }
//         printf("\n");
//     }

//     res[2][2] = a[2][2] + b[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j<2;j++)
//         {
//             printf("%d\t", res[i][j]);
//         }
//         printf("\n");
//     }
// }
//--------------------------------------------------------------------------------------------------------
// qus 2 find thr mex and min element in 2d metrix in index no. also

// void getdata(int arr[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("\n Enter list item [%d][%d] : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void min(int arr[][100], int a, int b)
// {
//     int min = arr[0][0];
//     int minrow = 0;
//     int mincol = 0;

//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             if (arr[i][j] < min)
//             {
//                 min = arr[i][j];
//                 minrow = i;
//                 mincol = j;
//             }
//         }
//     }
//     printf("the minimum no is %d available at index [%d][%d]\n", min, minrow, mincol);
// }
// void max(int arr[][100], int a, int b)
// {
//     int max = arr[0][0];
//     int maxrow = 0;
//     int maxcol = 0;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             if (arr[i][j] > max)
//             {
//                 max = arr[i][j];
//                 maxrow = i;
//                 maxcol = j;
//             }
//         }
//     }
//     printf("the maximum no is %d available at index [%d][%d]\n", max, maxrow, maxcol);
// }
// int main()
// {
//     int r, c;
//     printf("\n Enter row limit =  ");
//     scanf("%d", &r);
//     printf("\n Enter column limit = ");
//     scanf("%d", &c);
//     int list[r][100];
//     getdata(list, r, c);
//     min(list, r, c);
//     max(list, r, c);
//     return 0;
// }
// //--------------------------------------------------------------------------------------------------------
// // qus 3 wap to print row no. which row have maximum sum in matrix
void getdata(int arr[][100], int a, int b)
{
    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < b; j++)
        {
           
            scanf("%d", &arr[i][j]);
        }
    }
}
void mexsumrow(int arr[][100], int a, int b)
{
    int maxsum = 0;
    int row = 0;
    for (int i = 0; i < a; i++)
    {
        int sum = 0;
        for (int j = 0; j < b; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d\n", sum);
        if (maxsum < sum)
        {
            maxsum = sum;
            row = i;
        }
    }
    printf("maxsum sum is %d available in row no. %d", maxsum, row);
}

int main()
{
    int r, c;
    printf("\n Enter row limit =  ");
    scanf("%d", &r);
    printf("\n Enter column limit = ");
    scanf("%d", &c);
    int list[r][100];
    getdata(list, r, c);
    mexsumrow(list, r, c);
    return 0;
}
//--------------------------------------------------------------------------------------------------------
// qus 4 sum of two matrix by using function
// void matrix(int *r, int *c)
// {

//     printf("\n Enter row limit =  ");
//     scanf("%d", r);
//     printf("\n Enter column limit = ");
//     scanf("%d", c);
// }

// void getdata(int arr[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("\n Enter list item [%d][%d] : ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void matrixsum(int mat1[][100], int mat2[][100], int ans[][100], int a, int b)
// {
//     // int ans[][100];
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             ans[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     printf("enter details of frist matrix\n");
//     matrix(&a, &b);
//     int l1[a][100];
//     getdata(l1, a, b);
//     int x = a;
//     int y = b;
//     printf("enter details of second matrix\n");
//     // matrix(&x, &y);
//     int l2[x][100];
//     getdata(l2, x, y);
//     if (a != x || b != y)
//     {
//         printf("Matrices are not of same dimensions. Cannot perform addition.\n");
//     }
//     int res[a][100];
//     matrixsum(l1, l2, res, a, y);
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             printf("%d ", res[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// qus 5 multipliation of two matrix by using function
// void matrix(int *r, int *c)
// {

//     printf("\n Enter row limit =  ");
//     scanf("%d", r);
//     printf("\n Enter column limit = ");
//     scanf("%d", c);
// }

// void getdata(int arr[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             // printf("\n Enter list item [%d][%d] : ", i, j);// add this line if you want index also
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void matrixsum(int mat1[][100], int mat2[][100], int ans[][100], int a, int b)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             ans[i][j] = 0;
//             for (int k = 0; k < a; k++)
//             {
//                 ans[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     printf("enter details of frist matrix\n");
//     matrix(&a, &b);
//     int l1[a][100];
//     getdata(l1, a, b);
//     int x;
//     int y;
//     printf("enter details of second matrix\n");
//     matrix(&x, &y);
//     int l2[x][100];
//     getdata(l2, x, y);
//     if (x != b)
//     {
//         printf("matrix not have same calum and row\n");
//     }
//     else
//     {
//         int res[a][100];
//         matrixsum(l1, l2, res, a, y);
//         for (int i = 0; i < a; i++)
//         {
//             for (int j = 0; j < y; j++)
//             {
//                 printf("%d ", res[i][j]);
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------------------------
// qus 6 wap to revers all aliment in a  matrix
// void getdata(int arr[][100], int a, int b)
// {
//     printf("\n Enter list item \n");
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void reverse(int matrix[][100], int rows, int columns)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             int number = matrix[i][j];
//             int reversedNumber = 0;
//             while (number > 0)
//             {
//                 int remainder = number % 10;
//                 reversedNumber = reversedNumber * 10 + remainder;
//                 number /= 10;
//             }
//             printf("%d ", reversedNumber);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int r;
//     printf("entr the numbers of row = ");
//     scanf("%d", &r);
//     int c;
//     printf("entr the numbers of colome = ");
//     scanf("%d", &c);
//     int arr[r][100];
//     getdata(arr, r, c);
//     reverse(arr, r, c);
//     return 0;
// }