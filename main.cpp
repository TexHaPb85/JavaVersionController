#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2 )
    {
        cout << "This program sets java version" << endl <<
         "add argument -8 if you want to set java 8 as default"<< endl <<
         "or write -9 if you want to to set java 9 as default"<<endl;
    }
    else if((strcmp(argv[1], "-8")))
    {
        cout << "You`ve set java 8 as default" << endl;
        system("@echo off");
        system("echo Setting JAVA_HOME");
        system("set JAVA_HOME=C:\Program Files (x86)\Java\jdk1.8.0_162");
        system("echo setting PATH");
        system("set PATH=C:\Program Files (x86)\Java\jdk1.8.0_162\bin;%PATH%");
        system("echo Display java version");
        system("java -version");
        system("pause");
    }
    else if((strcmp(argv[1], "-9")))
    {
        cout << "You`ve set java 9 as default" << endl;
        system("@echo off");
        system("echo Setting JAVA_HOME");
        system("set JAVA_HOME=C:\Program Files (x86)\Java\jdk1.9.0_4");//here you can write your path to java directory
        system("echo setting PATH");
        system("set PATH=C:\Program Files (x86)\Java\jdk1.9.0_4\bin;%PATH%");
        system("echo Display java version");
        system("java -version");
        system("pause");
    }
    return 0;
}
