#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main() {
    
    int size;
    char a;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        cin >> a;
        switch(a) {
            case 'B': 
                cout << "BattleShip" << endl;
                break;
            case 'b': 
                cout << "BattleShip" << endl;
                break;
            case 'D':
                cout << "Destroyer" << endl;
                break; 
            case 'd':
                cout << "Destroyer" << endl;
                break; 
            case 'C':
                cout << "Cruiser" << endl;
                break; 
            case 'c':
                cout << "Cruiser" << endl;
                break; 
             case 'F':
                cout << "Frigate" << endl;
                break; 
            case 'f':
                cout << "Frigate" << endl;
                break; 
        }
    }

    return 0;
}