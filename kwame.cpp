
#include <iostream>
using namespace std;


int hfc(int a, int b){
    if (b != 0)
        return hfc(b, a % b);
    else
        return a;
}

int main(){
    cout << "Calculate the HFC of Two Numbers";
    cout << "Enter an alphabet to Exit" <<endl;

    while (1==1){
        int a, b;
        cout << "Enter the two numbers :" << endl;;
        cin >> a >> b;
        if (!cin.fail()){
            hfc = hfc(a, b)
            cout << "The answer is : " << hfc << "\n\n";
            continue;
        }
        else{
            break;
        }

    }
    return 0;
}
