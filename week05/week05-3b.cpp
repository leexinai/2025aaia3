///week05-3b.cpp Part 1: Input,Part 2: Output
///Part 3: stringstream Part4: reverse �ϹL��
///CPE ��2�D UVA 483�˹L��
#include <iostream>
#include <sstream>///Part3: stringstream ���ɮ׬Osstream
#include <algorithm>///Part4:reverse ���t��k
using namespace std;
int main()
{
    string line;///�@��r�ꪺ�r�� Part1:Input
    while( getline(cin, line) ){///Ū�i��

        stringstream ss(line);///Part3:��stringstream�_�r
        string word;///�r��o��
        while( ss >> word ){///Part 3:��ss�_�r
            reverse( word.begin(), word.end() ); ///Part4
            cout << "Ū��F" << word << endl; ///Part3
        }
        cout  << line <<endl;///Part2: Output
    }
}
