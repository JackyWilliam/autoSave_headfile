//
//  autoSave.h
//
//  Created by James Raynor on 2020/10/11.
//

#include <fstream>
#include <iostream>
void autoSave(int n);
void autoRead(int n);
void chineseSystem(int n);
void englishSystem(int n);
//  functions here...
using namespace std;

void autoSave(int n)

{
    int i, b;
    char a;

    cout << "你想要选择哪一个语言系统" << endl;
    cout << "Which language system do you want to choose" << endl;
    cout << "A. 中文    B. English" << endl;
    cout << "请选择你需要的语言系统：" << endl;
    cout << "Please choose the language system which you want to use: ";
    cin >> a;
    switch (a) {
        case 'A':
            i = 1;
            b = 1;
            break;
        case 'B':
            i = 2;
            b = 1;
            break;
        case 'a':
            i = 1;
            b = 1;
            break;
        case 'b':
            i = 2;
            b = 1;
            break;
    }

    ofstream OutFile;
    ofstream OutFile2;

    OutFile.open("Test1.txt");   // File location and create a txt file
    //  It can be: OutFile.open("/file location/Test1.txt");
    OutFile2.open("Test2.txt");  // File location and create a txt file
    //  It can be: OutFile.open(" /file location/Test2.txt");
    OutFile << i;
    OutFile2 << b;

    OutFile.close();
    OutFile2.close();
    
    autoRead(1);
}

void autoRead(int n) {
    int data;
    int temp;
    
    ifstream readFile("Test1.txt");   // File location and read
    //  It can be: ifstream readFile("/file location/Test1.txt");
    ifstream readFile2("Test2.txt");  // File location and read
    //  It can be: ifstream readFile("/file location/Test2.txt");
    readFile >> temp;
    readFile2 >> data;

    int a = temp;
    int b = data;

    readFile .close();
    
    if (b == 1) {
        if (a == 1) {
            chineseSystem(1);
        }  else if (a == 2){
            englishSystem(1);
        } else {
            autoSave(1);
        }
    } else {
        autoSave(1);
    }
}

void chineseSystem(int n) {
    int a;
    
    cout << "请选择模式：" << endl;
    cout << "1. 计算" << endl;
    cout << "2. 计算" << endl;
    cout << "3. 语言设置" << endl;
    cout << "（ ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "CA" << endl;
            chineseSystem(1);
            break;
        case 2:
            cout << "CA2" << endl;
            chineseSystem(1);
            break;
        case 3:
            cout << "正在前往" << endl;
            autoSave(1);
            break;
        default:
            cout << "无效答案" << endl;
            chineseSystem(1);
            break;
    }
}

void englishSystem(int n) {
    int a;
    
    cout << "Choose mode：" << endl;
    cout << "1. CAL" << endl;
    cout << "2. CAL" << endl;
    cout << "3. Language Setting" << endl;
    cout << "（ ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "CA" << endl;
            englishSystem(1);
            break;
        case 2:
            cout << "CA2" << endl;
            englishSystem(1);
            break;
        case 3:
            cout << "Going Now" << endl;
            autoSave(1);
            break;
        default:
            cout << "Error" << endl;
            englishSystem(1);
            break;
    }
}
