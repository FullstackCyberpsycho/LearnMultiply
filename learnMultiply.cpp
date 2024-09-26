#include <iostream>
#include <ctime>
#include <utility>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

//�������� ������:
/*�������� ���������� ������� ���������� �������; �������� �������� �������; ...*/
//void menu(vector<int>& record) {
//    cout << "\t\t MAIN MENU" << endl;
//    cout << "������� �����" << endl;
//    cout << "1 - ���������� �������" << endl;
//    cout << "2 - ���� (beta)" << endl;
//    cout << "3 - ����! ������: " << record.back() << endl;
//    cout << "4 - �����" << endl;
//}

void printRecord(vector<int>& record) {
    //int recent_records = record.back();
    string nameFile = "record.txt";
    ifstream recordFile(nameFile, ios::app);
    if (record.empty()) {
        cout << "������� ���!" << endl;
    } else {      
        //for (const auto &tries/*recent_records*/ : record) {
        //    cout << tries << endl/* << recent_records*/;     
        //}
        //int prec = record.front();
        //int topRecord = sort(record.begin(), record.end());
        int prec = record.back();
        recordFile >> prec;
        cout << "����� ������� ������� �� ���-�� ���������� ������� � �����: " << prec << " (�� ��������!)" << endl;
    }
    recordFile.close();
}

void saveRecord(vector<int>& record, int *tries) {
    string nameFile = "record.txt";
    ofstream recordFile(nameFile, ios::app);
    //int recent_records = record.front();
    int recent_records = record.back();

    if (recordFile.is_open()){
        /*for (auto it = record.begin(); it != record.end();) {
            it = record.erase(it);
        }*/
       /* for (const auto &triesR : record) {            
            recordFile << triesR << endl;
        }*/
        recordFile << recent_records << endl;
    } else {
        cout << "������ �������� ����� ��� ������." << endl;
    }
    recordFile.close();
}

void tabl()
{
        /*string num2 = "2 * ";

        for (short a = 2, b = 2; a < 11;)
        {
            cout << "\t" << num2 << a << " = " << a * b << endl;
            a++;
        }

        string num3 = "3 * ";
        cout << " " << endl;
        for (short aa = 2, bb = 3; aa < 11;)
        {
            cout << "\t" << num3 << aa << " = " << aa * bb << endl;
            aa++;
        }

        string num4 = "4 * ";
        cout << " " << endl;
        for (short aa4 = 2, bb4 = 4; aa4 < 11;)
        {
            cout << "\t" << num4 << aa4 << " = " << aa4 * bb4 << endl;
            aa4++;
        }

        string num5 = "5 * ";
        cout << " " << endl;
        for (short aa5 = 2, bb5 = 5; aa5 < 11;)
        {
            cout << "\t" << num5 << aa5 << " = " << aa5 * bb5 << endl;
            aa5++;
        }

        string num6 = "6 * ";
        cout << " " << endl;
        for (short aa6 = 2, bb6 = 6; aa6 < 11;)
        {
            cout << "\t" << num6 << aa6 << " = " << aa6 * bb6 << endl;
            aa6++;
        }

        string num7 = "7 * ";
        cout << " " << endl;
        for (short aa7 = 2, bb7 = 7; aa7 < 11;)
        {
            cout << "\t" << num4 << aa7 << " = " << aa7 * bb7 << endl;
            aa7++;
        }

        string num8 = "8 * ";
        cout << " " << endl;
        for (short aa8 = 2, bb8 = 8; aa8 < 11;)
        {
            cout << "\t" << num8 << aa8 << " = " << aa8 * bb8 << endl;
            aa8++;
        }

        string num9 = "9 * ";
        cout << " " << endl;
        for (short aa9 = 2, bb9 = 9; aa9 < 11;)
        {
            cout << "\t" << num9 << aa9 << " = " << aa9 * bb9 << endl;
            aa9++;

        }
        cout << " " << endl << endl;

        return 0;*/
    const int8_t SIZE = 10;
    short res;
    system("cls");
    cout << "������� ��������� �� 2 �� 9:" << endl;
    for (short num1 = 2; num1 < SIZE; num1++) {
        for (short num2 = 0; num2 <= SIZE ; num2++) {
        res = num1 * num2;
        cout << num1 << " * " << num2 << " = " << res << endl;
        } 
        cout << "===========" << endl;
    }
}

void learn() {
    system("cls");
    cout << "������ ������� ������� ��������� ������������ ����� ������������ ���� �����, ������ �� ������� ��������� �� ��� �������, � ������ - �� ��� �������." << endl;
    cout << "������� ��������� ������� �� ���������, ������ �� ������� ������������� ������������� ������������." << endl;
    cout << "��� ��������� ������ ����� �� 1, ����������� ����� ��� �� �����." << endl;
    cout << "��������� ����� �� ���� ���� � ���������� ����." << endl;
    cout << "���� �������� ����� �� 10, �� � ����� ����� ����� �������� ���� ������." << endl;
    cout << "� ������� ��������� �� 2, ������ ��������� ����� ������ ����������� �� 2." << endl;
    cout << "��� ��������� �� 5, ����� ����� ��������� ������� � � ���������� �������� 0." << endl;
    cout << "����� �������� ����� �� 4, ����� ������� �������� ��� �� 2 � ���������� ��������� ��� ��� �������� �� 2." << endl;
    cout << "�����, ���������� �� 100, ������������ ����� ��� �����, ����������� �� ������� �� ����� ������." << endl;
    cout << "������������������ ��������� �� 3, 6, 9, 12 � �.�.���������� ����� �������� ��������������� ����� �� ��� �������." << endl;
    cout << " " << endl;

    char variant_mode;
    cout << "������� " << "'1' " << "���-�� ������� �����������: " << endl;
    cout << "������� " << "'2 " << "���-�� ������ ��������: " << endl;
    cout << "������� '3' ��� ��������� � ������� ����!" << endl;
    cout << "����: ";
    cin >> variant_mode;
    int number1, number2, result;
    char exit;
    if (variant_mode == '1') {
        while (true) {
            
            cout << "������� �����: ";
            cin >> number1;
            cout << "������� �����: ";
            cin >> number2;

            result = number1 * number2;
            cout << "�����: " << result << endl;
           
            cout << "������� " << " '1' " << " ���-�� �����. ������� ����� ����� ��� �� ����������" << endl;
            cout << "����: ";
            //getline(cin, exit);
            cin >> exit;

            if (exit == '1') {
                system("cls");
                cout << "�� ����� � ������� ����" << endl;
                break;
            }
        }
    }
    else if (variant_mode == '2') {
        system("cls");
        cout << "��������!" << endl;
        cout << "��������: �� ������ ������� ���������� ����� �� �������������" << endl;
        cout << "��������: �5 x 6 = ?� �������� ���������� �����(35, 30, 45)" << endl;
        cout << "���-�� ����� >> ������� : '1'" << endl;
        //cout << "���-�� ����� ������ � ����� ������ ������ 'exit'" << endl << endl;
        cout << " " << endl;
        short varOtvet;
        short number1, number2, result;
        short randRes;//, variant2, variant3, variant4, variant5, variant6;
        short variant[5];
        short number;
        int tries1 = 0;
        /*for*/ while(true/*short tries1 = 0; ; tries1++*/) {
            cout << "����: " << tries1 << "! ������� ��� �����:" << endl;
            srand(time(NULL));
           number1 = rand() % 10;
           number2 = rand() % 10;

           result = number1 * number2;
            
            for (int8_t ran = 0; ran <= 5; ran++) {
                variant[0] = randRes = rand() % ~result;
                variant[1] = randRes = rand() % ~result;
                variant[2] = randRes = rand() % ~result;
                variant[3] = randRes = rand() % ~result;
                variant[4] = randRes = rand() % ~result;
            }
            /*short variant2 = randRes = rand() % 90 + 0;
            short variant3 = randRes = rand() % 10 + 0;
            short variant4 = randRes = rand() % 16 + 0;
            short variant5 = randRes = rand() % 35 + 0;
            short variant6 = randRes = rand() % 55 + 0;*/

            number = result;
            string choise = "�������� � ������� ���������� �������: ";

            cout << number1 << " * " << number2 << " = ? (";

            int arr[6] = { result, variant[0], variant[1], variant[2], variant[3], variant[4]};

            shuffle(begin(arr), end(arr),
                default_random_engine(random_device()()));

            for (auto elem : arr) {
                cout << elem << ", ";
                number += (result > number) ? -result : result;
            }
            cout << ")" << endl;
            
            //int nVarOtvet = stoi(varOtvet);
            cout << "����: ";
            cin >> varOtvet;
            //string str = to_string(varOtvet);

            if (varOtvet == result/* || str == "exit"*/) {
                cout << " " << endl;
                cout << "����� ����������! " << " ����� ����: " << ++tries1 << endl;
                cout << " " << endl;

                //cout << "���-�� �����: " << "�������: " << "'exit'" << endl;
                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                //cout << "����: ";
                //getline(cin, exit);
                cin >> exit;
                system("cls");

                if (exit == '1') {
                    system("cls");
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }
            /*string svarOtvet = stoi(svarOtvet);
             else if (varOtvet == "exit") {
                 cout << "�� ����� � ������� ����";
                 break;
             }*/
            else if (varOtvet != result) {
                //--tries1;
                cout << " " << endl;
                cout << "����� ���������! �������� ��� ���.\a" << " ����� ����: " << --tries1 << endl;
                if (tries1 < 0) {
                    ++tries1;
                }
                cout << "���������� �����: " << result << endl;
                cout << " " << endl;

                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                cin >> exit;
                system("cls");

                if (exit == '1') {
                    system("cls");
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }
            //else {
            //    /////string str = to_string(varOtvet);
            //    
            //    break;
            //}
        }
        cout << " " << endl << endl;
    }
    else if (variant_mode == '3') {
        system("cls");
        cout << "�� ����� � ������� ����" << endl;
        while (true) {
            break;
        }
    }
    else {
        system("cls");
        cout << "Error404\a" << endl;
        cout << "�� ����� � ������� ����" << endl;
    }
}

void test(/*int mode*/) {
    /*string nameFile = "record.txt";
    ofstream recordFile(nameFile, ios::app);*/

    system("cls");
    srand(time(NULL));
    vector<int>record;

    printRecord(record);
    cout << endl << "�������: " << "'1 " << "���-�� �������� ����, ��������� �� (1-9)" << endl;
    cout << "�������: " << "'2 " << "���-�� �������� ����, ��������� �� (���� �����)" << endl;
    cout << "�������: '3' ��� ��������� � ������� ����!" << endl;
    
    short otvet;
    short number1 = 0, number2 = 0;
    short aiotvet;
    char exit;
    //short aiotvet;
    char choise;
    cout << "����: ";
    cin >> choise;
    if (choise == '1') {
        system("cls");
        int tries = 0;    
        //int triesfolse = 0;

        while (true) {
            number1 = rand() % 10;
            number2 = rand() % 10;

            cout << "����: " << tries << "! ������� ��� �����:" << endl;
            cout << number1 << " * " << number2 << " = ";           
            aiotvet = number1 * number2;
            cin >> otvet;
            if (otvet == aiotvet) {
                cout << " " << endl;
                cout << "����� ����������! " << " ����� ����: " << ++tries << endl;
                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                record.push_back(tries);
                cin >> exit;
                system("cls");
                //cout << "����: " /*<< tries*/;
                if (exit == '1') {
                    system("cls");
                    cout << "��������� ������ �����: " << record.back() << endl;
                    saveRecord(record, &tries);
                    //recordFile << record.back() << endl;
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }
            else if (otvet != aiotvet) {
                //tries--;
                cout << " " << endl;
                cout << "����� ���������! �������� ��� ���.\a" << " ����� ����: " << --tries << endl;
                if (tries < 0) {
                    ++tries;
                }
                cout << "���������� �����: " << aiotvet << endl;
               
                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                cin >> exit;
                system("cls");
                if (exit == '1') {
                    //system("cls");
                  /*  for (auto it = record.begin(); it != record.end();) {
                        it = record.erase(it);
                    }*/
                    record.push_back(0);
                    record.push_back(0);
                    record.pop_back();                  
                    cout << "��������� ������ �����: " << record.back() << endl;
                    //recordFile << record.back() << endl;
                    saveRecord(record, &tries);
                    printRecord(record);
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }
        }
    }
    else if(choise == '2')
    {
        int tries = 0;
        //int triesfolse = 0;
        short number1;
        system("cls");
        cout << "��������� ��: ";
        cin >> number1;
        short otvet;
        short number2;
        while (true)
        {       
            cout << "����: " << tries << "! ������� ��� �����:" << endl;
            number2 = rand() % 10;

            cout << " " << endl;
            cout << number1 << " * " << number2 << " = ";        
            aiotvet = number1 * number2;
            cin >> otvet;

            //++tries;
            //--triesfolse;

            if (otvet == aiotvet)
            {
                cout << " " << endl;
                cout << "����� ����������! " << " ����� ����: " << ++tries << endl;
                record.push_back(tries);
                //char exit;
                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                cout << "����: ";
                cin >> exit;
                system("cls");

                if (exit == '1') {
                    system("cls");
                    cout << "��������� ������ �����: " << record.back() << endl;
                    saveRecord(record, &tries);
                    printRecord(record);
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }

            else if (otvet != aiotvet)
            {
                //--tries;
                cout << " " << endl;
                cout << "����� ���������! �������� ��� ���.\a" << " ����� ����: " << --tries << endl;
                if (tries < 0) {
                    ++tries;
                }
                cout << " ���������� �����: " << aiotvet << endl;
                //record.pop_back();
                //char exit;
                cout << "��� �� ����������: ������� ����� ����� ��� �������(1): ";
                cout << "����: ";
                cin >> exit;
                system("cls");

                if (exit == '1') {
                    record.push_back(0);
                    record.push_back(0);
                    record.pop_back();
                    system("cls");
                    cout << "��������� ������ �����: " << record.back() << endl;
                    saveRecord(record, &tries);
                    printRecord(record);
                    cout << "�� ����� � ������� ����" << endl;
                    break;
                }
            }
        }
    }
    else if (choise == '3') {
        system("cls");
        cout << "�� ����� � ������� ����" << endl;
        while (true) {
            break;
        }    
    }
    else {
        system("cls");
        cout << "Error404\a" << endl;
        cout << "�� ����� � ������� ����" << endl;
    }

}

int main() {
    setlocale(LC_ALL, "Rus");
    char mode;
    while (true) {
        cout << "\t\t (beta)MAIN MENU" << endl;
        cout << "������� �����" << endl;
        cout << "1 - ���������� �������" << endl;
        cout << "2 - ����" << endl;
        cout << "3 - ����" << endl;
        cout << "4 - �����" << endl;

        cout << " " << endl;
        cout << "����: ";
        cin >> mode;
        switch (mode) {
        case '1':
            tabl();
            break;
        case '2':
            learn();
            break;
        case '3':
            test();
            break;
        case '4':
            cout << "��������� ���������!" << endl;
            return -1;
            break;
        default:
            system("cls");
            cout << "Error:404(�� ������� �� ���� ���)\a" << endl;
        }
    }

   /*     if (mode == 1) {
            
            continue;
        }
        else if (mode == 2) {
            
            continue;
        }
        else if (mode == 3) {
            
            continue;
        }
        else {
           
            continue;
        }      
    }*/
    system("pause");
 return 0;
}