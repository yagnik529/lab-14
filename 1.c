// // // // #include <stdio.h>

// // // // void main()
// // // // {

// // // //     int size;

// // // //     printf("Enter the size of array : ");
// // // //     scanf("%d", &size);

// // // //     int a[size];

// // // //     printf("Enter the elements of array : \n ");
// // // //     for (int i = 0; i < size; i++)
// // // //     {
// // // //         printf("a[%d] = ", i);
// // // //         scanf("%d", &a[i]);
// // // //     }

// // // //     int nelements;
// // // //     printf("Negative elements from an Array: ");
// // // //     for (int i = 0; i < size; i++)
// // // //     {

// // // //         if (a[i] < 0)
// // // //         {
// // // //             printf("%d ", a[i]);
// // // //             if (i < size - 1)
// // // //             {
// // // //                 printf(",");
// // // //             }
// // // //         }
// // // //     }
// // // // }

// // // #include <stdio.h>

// // // void main()
// // // {

// // //     int rows, cols;

// // //     printf("Enter number of rows : ");
// // //     scanf("%d", &rows);

// // //     printf("Enter number of cols : ");
// // //     scanf("%d", &cols);

// // //     int a[rows][cols];

// // //     printf("Enter the elements of array : \n");
// // //     for (int i = 0; i < rows; i++)
// // //     {
// // //         for (int j = 0; j < cols; j++)
// // //         {
// // //             printf("a[%d][%d] = ", i, j);
// // //             scanf("%d", &a[i][j]);
// // //         }
// // //     }

// // //     int largest = a[0][0];

// // //     for (int i = 0; i < rows; i++)
// // //     {

// // //         for (int j = 0; j < cols; j++)
// // //         {

// // //             if (a[i][j] > largest)
// // //             {
// // //                 largest = a[i][j];
// // //             }
// // //         }
// // //     }

// // //     printf("largest number is : %d", largest);
// // // }

// // #include <stdio.h>

// // void main()
// // {

// //     int rows, cols;

// //     printf("Enter the rows of array : ");
// //     scanf("%d", &rows);

// //     printf("Enter the cols of array : ");
// //     scanf("%d", &cols);

// //     int a[rows][cols];

// //     printf("Enter the elements of array : \n");
// //     for (int i = 0; i < rows; i++)
// //     {

// //         for (int j = 0; j < cols; j++)
// //         {
// //             printf("a[%d][%d] = ", i, j);
// //             scanf("%d", &a[i][j]);
// //         }
// //     }

// //     int t[cols][rows];

// //     for (int i = 0; i < rows; i++)
// //     {
// //         for (int j = 0; j < cols; j++)
// //         {
// //             t[j][i] = a[i][j];
// //         }
// //     }

// //     printf("The transpose matrix of the array:\n");
// //     for (int i = 0; i < cols; i++)
// //     {

// //         for (int j = 0; j < rows; j++)
// //         {
// //             printf("%d ", t[i][j]);
// //         }

// //         printf("\n");
// //     }
// // }

// #include <stdio.h>

// void main()
// {
//     int rows, cols;

//     // Prompt user for the size of the array
//     printf("Enter the array's row size: ");
//     scanf("%d", &rows);
//     printf("Enter the array's column size: ");
//     scanf("%d", &cols);

//     // Declare the 2D array
//     int array[rows][cols];

//     // Input elements into the array
//     printf("Enter array's elements:\n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             printf("a[%d][%d] = ", i, j);
//             scanf("%d", &array[i][j]);
//         }
//     }

//     // Get row number from user
//     int rowNum;
//     printf("Enter row number: ");
//     scanf("%d", &rowNum);

//     // Print elements of the specified row and calculate sum
//     int rowSum = 0;
//     printf("Elements of row %d: ", rowNum);
//     for (int j = 0; j < cols; j++)
//     {
//         printf("%d", array[rowNum][j]);
//         rowSum += array[rowNum][j];
//         if (j < cols - 1)
//         {
//             printf(", ");
//         }
//     }
//     printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

//     // Get column number from user
//     int colNum;
//     printf("Enter column number: ");
//     scanf("%d", &colNum);

//     // Print elements of the specified column and calculate sum
//     int colSum = 0;
//     printf("Elements of column %d: ", colNum);
//     for (int i = 0; i < rows; i++)
//     {
//         printf("%d", array[i][colNum]);
//         colSum += array[i][colNum];
//         if (i < rows - 1)
//         {
//             printf(", ");
//         }
//     }
//     printf("\nThe sum of column %d: %d\n", colNum, colSum);
// }
