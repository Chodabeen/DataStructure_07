#include <iostream>
using namespace std;

// Weight 클래스 정의
class Weight{
    int kg;
    int gram;
public:
    void set_weight(int n1, int n2);  // kg과 g값을 설정
    int get_weight();  // 현재 값을 gram 단위 정수로 return
};

Weight add_weight(Weight w1, Weight w2);
bool less_than(Weight w1, Weight w2);

int main(){
    Weight w1, w2, w3;
    w1.set_weight(3, 400);
    w2.set_weight(2, 700);
    w3 = add_weight(w1, w2);

    cout << w3.get_weight() << " grams\n";

    if(less_than(w1, w2))
        cout << "yes.\n";
    else
        cout << "no.\n";
}

// kg과 g값을 설정
void Weight:: set_weight(int n1, int n2)
{
    kg = n1;
    gram = n2;
}

// 현재 값을 gram 단위 정수로 return
int Weight:: get_weight()
{
    return (kg*1000 + gram);
}

// w1+w2한 값을 Weight 클래스로 리턴
Weight add_weight(Weight w1, Weight w2)
{
    int n;
    Weight tmp;
    n = w1.get_weight() + w2.get_weight();
    tmp.set_weight(n/1000, n%1000);
    return tmp; 
}

// w1이 w2 보다 작으면 true, 아니면 false
bool less_than(Weight w1, Weight w2)
{
    if(w1.get_weight() < w2.get_weight())
        return true;
    else    
        return false;
}


