#ifndef HundredSqureCalculation_h
#define HundredSqureCalculation_h

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

void hundred_squre_calculation(double row_limit, double column_limit, char oper='*'){
    vector<int> row, column;
    for(int i = 0; i < row_limit; i++)
        row.push_back(i+1);
    for(int i = 0; i < column_limit; i++)
        column.push_back(i+1);
    cout << "  ";
    for (int val : column)
        cout << val << " ";
    cout << endl;
    for(int i = 0; i < row_limit; i++){
        cout << row[i] << " ";
        for(int j = 0; j < column_limit; j++){
            if (oper == '+')
                cout << row[i]+column[j] << " ";
            else if (oper == '-')
                cout << row[i]-column[j] << " ";
            else if (oper == '/')
                cout << row[i]/column[j] << " ";
            else
                cout << row[i]*column[j] << " ";
        }
        cout << endl;
    }
}


#endif
