#include <iostream>
#include <unistd.h>
using namespace std;
void count_x()
{
    string c = "█";
    string d = "█";
    int i = 0;
    while (i <= 100)
    {
        sleep(1);
        cout << c << i << "%" << endl;
        c += d;
        i += 20;
    }
    cout << "Hoan Thanh !" << endl;
}
void xuat()
{
        cout << "\t\t░░▄███▄███▄\n\t\t░░█████████\n\t\t░░▒▀█████▀░\n\t\t░░▒░░▀█▀\n\t\t░░▒░░█░\n\t\t░░▒░█\n\t\t░░░█\n\t\t░░█░░░░███████\n\t\t░██░░░██▓▓███▓██▒";
        cout << "\n\t\t██░░░█▓▓▓▓▓▓▓█▓████\n\t\t██░░██▓▓▓(◐)▓█▓█▓█\n\t\t███▓▓▓█▓▓▓▓▓█▓█▓▓▓▓█\n\t\t▀██▓▓█░██▓▓▓▓██▓▓▓▓▓█\n\t\t░▀██▀░░█▓▓▓▓▓▓▓▓▓▓▓▓▓█";
        cout << "\n\t\t░░░░▒░░░█▓▓▓▓▓█▓▓▓▓▓▓█\n\t\t░░░░▒░░░█▓▓▓▓█▓█▓▓▓▓▓█\n\t\t░▒░░▒░░░█▓▓▓█▓▓▓█▓▓▓▓█\n\t\t░▒░░▒░░░█▓▓▓█░░░█▓▓▓█\n\t\t░▒░░▒░░██▓██░░░██▓▓██";
        cout << "\n\t\t████████████████████████\n\t\t█▄─▄███─▄▄─█▄─█─▄█▄─▄▄─█\n\t\t██─██▀█─██─██─█─███─▄█▀█\n\t\t▀▄▄▄▄▄▀▄▄▄▄▀▀▄▄▄▀▀▄▄▄▄▄▀ ";

}
int main(int argc, char const *argv[])
{
    count_x();
    xuat();
    return 0;
}
