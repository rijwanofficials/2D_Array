#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int rsum = 0; 
    int lsum = 0; 
    int i, j;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    m = n; 
    int mat[n][m];
    cout << "Enter the elements of the matrix: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        rsum += mat[i][i];
    }

    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        lsum += mat[i][j];
    }
    if (n % 2 != 0)
    {
        int k = n / 2;
        cout << rsum + lsum - mat[k][k] << endl;
    }
    else
    {
        cout << rsum + lsum << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];
//     int brr[3][3];
//     cout << "Entetr the element of first matrix" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "Entetr the element of second matrix" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> brr[i][j];
//         }
//     }
//     // int i = 0, j = 0;
//     // int ans[3][3];
//     // while (j < 3)
//     // {
//     //     ans[i][j] = arr[i][j] + brr[i][j];
//     //     i++;
//     //     j++;
//     // }
//     // i = 0, j = 0;
//     // while (i < 3)
//     // {
//     //     cout << ans[i][j] << " ";
//     //     i++;
//     // }
//     int i = 0, j = 2;
//     int ans[3][3];
//     while (j > 0)
//     {
//         ans[i][j] = arr[i][j] + brr[i][j];
//         i++;
//         j--;
//     }
//     i = 0, j = 2;
//     while (i < 3 && j >= 0)
//     {
//         cout << ans[i][j] << " ";
//         i++; j--;
//     }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == j || (i==2&&j==2))
//     //         {
//     //             ans[i][j] = arr[i][j] + brr[i][j];
//     //         }
//     //     }
//     // }
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == j)
//     //             cout << ans[i][j] << " ";
//     //         else
//     //         {
//     //             cout << 0 << " ";
//     //         }
//     //     }
//     //     cout << endl;
// }
