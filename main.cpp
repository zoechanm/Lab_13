#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void greet() {
        cout << "Hello from greet()" << endl;
}

void bye() {
        cout << "Goodbye from bye()" << endl;
}
int main() {
        //problem 1
        //     int arr[5];
        //     cout << "Enter 5 integers: ";
        //     for (int i = 0; i < 5; i++)
        //         cin >> arr[i];
        //     int* ptr = arr;
        //     for (int i = 0; i < 5; i++)
        //         cout << *(ptr + i) << " ";

        //problem 2
        // int arr[6];
        // cout << "Enter 6 even integers: ";
        // for (int i = 0; i < 6; i++)
        //     cin >> arr[i];
        // int* ptr = arr;
        // for (int i = 0; i < 6; i++)
        //     *(ptr + i) *= 3;
        // for (int i = 0; i < 6; i++)
        //     cout << *(ptr + i) << " ";

        //problem 3
        // int arr[4];
        // cout << "Enter 4 integers: ";
        // for (int i = 0; i < 4; i++)
        //     cin >> arr[i];
        // int* ptr = arr;
        // cout << "arr[2] = " << ptr[2] << endl;
        // cout << "*(arr + 2) = " << *(arr + 2) << endl;

        //problem 4
        // int arr[5];
        // cout << "Enter 5 integers: ";
        // for (int i = 0; i < 5; i++)
        //     cin >> arr[i];
        // int* ptr = arr + 4;
        // for (int i = 0; i < 5; i++)
        //     cout << *(ptr - i) << " ";

        //problem 5
        // int arr[3] = {1, 2, 3};
        // int* ptr = arr;
        // ptr = ptr + 1;
        // cout << "*ptr = " << *ptr << endl;

        //problem 6
        // int arr[4];
        // cout << "Enter 4 integers:";
        // for (int i = 0; i < 4; i++)
        //     cin >> arr[i];
        // int* ptr = arr;
        // for (int i = 0; i < 4; i++)
        //     cout << "value: " << *(ptr + i) << " address: " << (ptr + i) << endl;

        //problem 7
        // int arr[7];
        // cout << "Enter 7 integers: ";
        // for (int i = 0; i < 7; i++)
        //     cin >> arr[i];
        // int* ptr = arr;
        // cout << "Even elements: ";
        // for (int i = 0; i < 7; i++) {
        //     if (*(ptr + i) % 2 == 0)
        //         cout << *(ptr + i) << " ";
        // }

        //problem 8
        // int matrix[2][3];
        // cout << "Enter 6 elements: ";
        // for (int i = 0; i < 2; i++)
        //     for (int a = 0; a < 3; a++)
        //         cin >> matrix[i][a];
        // int* ptr = &matrix[0][0];
        // for (int i = 0; i < 6; i++)
        //     cout << *(ptr + i) << " ";

        //problem 9
        // int a, b, c;
        // cout << "Enter 3 integers: ";
        // cin >> a >> b >> c;
        // int* ptrs[3] = {&a, &b, &c};
        // for (int i = 0; i < 3; i++)
        //     cout << *ptrs[i] << " ";

        //problem 10
        // int arr[5];
        // cout << "Enter 5 integers: ";
        // for (int i = 0; i < 5; i++)
        //     cin >> arr[i];
        // int* ptr = arr;
        // for (int i = 0; i < 4; i++) {
        //     for (int a = 0; a < 4 - i; a++) {
        //         if (*(ptr + a) > *(ptr + a + 1)) {
        //             int temp = *(ptr + a);
        //             *(ptr + a) = *(ptr + a + 1);
        //             *(ptr + a + 1) = temp;
        //         }
        //     }
        // }
        // for (int i = 0; i < 5; i++)
        //     cout << *(ptr + i) << " ";

        //problem 11
        // const char* suit[4] = {"hearts", "diamonds", "clubs", "spades"};
        // for (int i = 0; i < 4; i++)
        //     cout << suit[i] << " ";

        //problem 12
        // const char* days[3] = {"Mon", "Tue", "Wed"};
        // for (int i = 0; i < 3; i++)
        //         cout << *(*(days + i) + 1) << " ";

        //problem 13
        // int deck[4][13] = {0};
        // deck[0][0] = 1;
        // deck[3][1] = 1;
        // const char* suits[] = {"hearts","diamonds","clubs","spades"};
        // const char* faces[] = {"ace","two","three","four","five","six","seven",
        //                        "eight","nine","ten","jack","queen","king"};
        // for (int i = 0; i < 4; i++)
        //         for (int a = 0; a < 13; a++)
        //                 if (deck[i][a])
        //                         cout << faces[a] <<"of"<< suits[i] << endl;

        //problem 14
        int deck[4][13] = {0};
        const char* suits[] = {"hearts","diamonds","clubs","spades"};
        const char* faces[] = {"ace","two","three","four","five","six","seven","eight","nine","ten","jack","queen","king"};
        srand(time(0));
        for (int card = 1; card <= 52; card++) {
                int row, col;
                do {
                        row = rand() % 4;
                        col = rand() % 13;
                } while (deck[row][col] != 0);
                deck[row][col] = card;
        }
        for (int i = 1; i <= 5; i++) {
                for (int r = 0; r < 4; r++) {
                        for (int c = 0; c < 13; c++) {
                                if (deck[r][c] == i) {
                                        cout << faces[c] << " of " << suits[r] << endl;
                                }
                        }
                }
        }
        return 0;
}
//I THINK WE ONLY DISCUSSED TILL HERE IN THE LECTURE.
//I DON'T SEEM TO BE RECALLING HOW TO SOLVE OTHER PROBLEMS.