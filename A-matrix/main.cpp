//
//  main.cpp
//  yandex
//
//  Created by Melkozavr on 18.03.2020.
//  Copyright © 2020 Melkozavr. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Введите значение n";
    cin >> n;
    if (n >= 2 && n < 100)
    {
        int arr[n][n];
        int checker = 0;
        int nn = n * n;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0)
                {
                    while (arr[i][j] == 0)
                    {
                        checker = rand() % (nn) + 1;
                        for (int iq = 0; iq < n; iq++) {
                            for (int jq = 0; jq < n; jq++) {
                                if (checker == arr[iq][jq])
                                    checker = 0;
                            }
                        }
                        arr[i][j] = checker;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
        cout << "Error\n";
    
    return 0;
}
