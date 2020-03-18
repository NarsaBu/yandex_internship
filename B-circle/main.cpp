//
//  main.cpp
//  yandex
//
//  Created by Melkozavr on 18.03.2020.
//  Copyright © 2020 Melkozavr. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {

    
    int n, m, b;
    int s = 1000001;
    int min = 1000001;
    cout << "Введите значение n: ";
    cin >> n;
        int mas[n];
        for (int i = 0; i < n; i++)
            cin >> mas[i];
    cout << "\nВведите значение m: ";
    cin >> m;
    if (m >= 1 && m <= 50000 && n >= 1 && n <= 50000)
    {
        for (int i = 0; i < m; i++)
        {
            cout << "\nВведите значение b: ";
            cin >> b;
            min = 1000001;
            for (int j = 0; j < n; j++)
            {
                if (abs(mas[j] - b) < min)
                {
                    min = abs(mas[j] - b);
                    s = mas[j];
                }
            }
            cout << s << "\n";
        }
    }
    else
        cout << "Error\n";
    return 0;
}
