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

    
    int n;
    int counter = 0;
    cout << "Введите значение n: ";
    cin >> n;
    if (n >= 1 && n <= 200000)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            if (counter == arr[i])
                counter++;
        for (int i = 0; i < n; i++)
            if (arr[i] > counter)
                arr[i] = counter;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else
        cout << "Error\n";
    return 0;
}
