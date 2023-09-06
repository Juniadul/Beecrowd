#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n1, n2, n3, n4, last, sum;
    cin>>n1>>n2>>n3>>n4;
    sum = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout<<fixed;
    cout<<setprecision(1)<<"Media: "<<sum<<endl;
    if (sum >= 7.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if (sum >= 5.0)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>last;
       
        cout<<setprecision(1)<<"Nota do exame: "<<last<<endl;
        if (last + sum / 2.0 > 5.0){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        
        cout<<setprecision(1)<<"Media final: "<<(last + sum ) / 2.0<<endl;
    }
    else{
        cout<<"Aluno reprovado."<<endl;
    }
    return 0;
}