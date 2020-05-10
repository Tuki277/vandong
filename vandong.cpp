#include <iostream>
#include <windows.h>
using namespace std;

void giotay()
{
    cout << "           ..........."<<endl;
    cout << "          #           #"<<endl;
    cout << "          #  ==   ==  #"<<endl;
    cout << "          #     ^     #"<<endl;
    cout << "           #   ---   #"<<endl;
    cout << "            #.......#"<<endl;
    cout << "   ___________ || ___________"<<endl;
    cout << "               ||"<<endl;
    cout << "               ||"<<endl;
    cout << "               ||"<<endl;
    cout << "               ||"<<endl;
    cout << "               ||"<<endl;
    cout << "               ||"<<endl;
    cout << "               /\\"<<endl;
    cout << "              /  \\"<<endl;
    cout << "             /    \\"<<endl;
    cout << "            /      \\"<<endl;
    cout << "           /        \\"<<endl;
}

void hatay()
{
    cout << "           ..........."<<endl;
    cout << "          #           #"<<endl;
    cout << "          #  ==   ==  #"<<endl;
    cout << "          #     ^     #"<<endl;
    cout << "           #   ---   #"<<endl;
    cout << "            #.......#"<<endl;
    cout << "               || "<<endl;
    cout << "              /||\\"<<endl;
    cout << "             / || \\"<<endl;
    cout << "            /  ||  \\"<<endl;
    cout << "           /   ||   \\"<<endl;
    cout << "          /    ||    \\"<<endl;
    cout << "               ||"<<endl;
    cout << "               /\\"<<endl;
    cout << "              /  \\"<<endl;
    cout << "             /    \\"<<endl;
    cout << "            /      \\"<<endl;
    cout << "           /        \\"<<endl;
}

void vevitricu()
{
    cout << "           ..........."<<endl;
    cout << "          #           #"<<endl;
    cout << "          #  ==   ==  #"<<endl;
    cout << "          #     ^     #"<<endl;
    cout << "           #   ---   #"<<endl;
    cout << "            #.......#"<<endl;
    cout << "               || "<<endl;
    cout << "              ||||"<<endl;
    cout << "              |||| "<<endl;
    cout << "              ||||  "<<endl;
    cout << "              ||||   "<<endl;
    cout << "              ||||   "<<endl;
    cout << "               ||"<<endl;
    cout << "               /\\"<<endl;
    cout << "              /  \\"<<endl;
    cout << "             /    \\"<<endl;
    cout << "            /      \\"<<endl;
    cout << "           /        \\"<<endl;
}

int main()
{
    system("CLS");
    while(true)
    {
        giotay();
        fflush(stdout);
        Sleep(800);
        system("CLS");
        vevitricu();
        fflush(stdout);
        Sleep(800);
        system("CLS");
        hatay();
        fflush(stdout);
        Sleep(800);
        system("CLS");
    }
}