#include <iostream>
#include <locale.h>
using namespace std;

int pplus(int a, int b) {
    return a + b;
}
int mminus(int a, int b) {
    return a - b;
}
int umnozh(int a, int b) {
    return a * b;
}
double del(double a, double b) {
    return a / b;
}
int  modul(int a, int b) {
    return (a % b);
}
double stepen(double a, double b) {
    if (b > 0) {
        for (int i = 0, j = a; i < b - 1; i++) a *= j;
        return a;
    } else if (b < 0) {
        for (int i = 0, j = a; i < (b + 1) * (-1); i++) a *= j;
        return 1 / a;
    } else
        return 1;
}
int andbit(int a, int b) {
    return a & b;
}
int rightbit(int a) {
    return a >> 1;
}
int leftbit(int a) {
    return a << 1;
}
int ilibit(int a, int b) {
    return a | b;
}
int otriz(int a) {
    return !a;
}
int main(int argc,char *argv[]){
    setlocale(LC_ALL,"RUS");
    while(true){
        char x;
        int a,b;
        do{
            cout<<"выберите операцию [+.-.*,/,%,^,!,&,|,<,>]:"<<endl;
            cin>>x;
        }
        while(x!='+' && x!='-' && x!='*' && x!='/' && x!='%' && x!='^' && x!='!' && x!='&' && x!='|' && x!='<' && x!='>');
        if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'|| x=='>' || x=='<' || x=='|' || x=='&')
        {
            cout<<" введите первое число :"<<endl;
            cin>>a;
            cout<<"введите второе число:"<<endl;
            cin>>b;
            if(cin.good())
            {
                switch(x)
                {
                    case '+':cout<<pplus(a,b)<<endl;
                        break;
                    case '-':cout<<mminus(a,b)<<endl;
                        break;
                    case '*':cout<<umnozh(a,b)<<endl;
                        break;
                    case '/':
                        if (b!=0)
                            cout<<del(a,b)<<endl;
                        else
                            cerr<<"error:на 0 делить нельзя  "<<endl;
                        break;
                    case '%':cout<<modul(a,b)<<endl;
                        break;
                    case '^':
                        cout<<stepen(a,b)<<endl;
                        break;
                    case '&':cout<<andbit(a,b)<<endl;
                        break;
                    case '<'cout<<leftbit(a)<<endl;
                        break;
                    case '>':
                            cout<<rightbit(a)<<endl;
                        break;
                    case '|':cout<<ilibit(a,b)<<endl;
                        break;
                    default:cerr<<"error "<<endl;
                }
            }
            else
            {
                cin.clear();
                cout<<"данные некорректны "<<endl;
            }
        }
        if(x=='!')
        {
            cout<<"Введите оператор:"<<endl;
            cin>>a;
            switch(x)
            {
                case '!':cout<<(!a)<<endl;
                    break;
                default:
                    cerr<<"error "<<endl;
            }
        }
    }
    return 0;
}
