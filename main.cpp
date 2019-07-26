#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
  char retry; 
  do{
    char op;
    int n1, n2, sum;
    int print_ans = 1;
    cout << "input first number: ";
    cin >> n1;
    cout << "input math sign: ";
    cin >> op;
    cout << "input second number: ";
    cin >> n2;
    switch (op){
      case '+':
          sum = n1 + n2;
          break;
      case '-':
          sum = n1 - n2;
          break;
      case '*':
          sum = n1 * n2;
          break;
      case '/':
          if(n2 == 0){
            cout << "You can't divide by 0";
            print_ans = 0;
          }else{
            sum = n1 / n2;
          }
          break;
      case '^':
          sum = pow(n1, n2);
          break;
    }
    if(print_ans == 1){
      cout << n1 << op << n2 << '=' << sum;
    }
    cout << "\n Retry?(y/n)";
    cin >> retry;
    }while(retry == 'y');
    return 0;
}