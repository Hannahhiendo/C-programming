#include <iostream>
using namespace std;

int main() {
cout << "Enter three edges: "<<'\n';
double edge1, edge2, edge3;
cin >> edge1;
cin >> edge2;
cin >> edge3;

double perimeter = edge1 + edge2 + edge3;

if(edge1 + edge2 > edge3 || edge1 + edge3 > edge2 || edge2 + edge1 > edge3 || edge2 + edge3 > edge1 || edge3 + edge1 > edge2 || edge3 + edge2 > edge1){
    cout << "The perimeter is " << perimeter << '\n';
}
else{
    cout << "Input is Invalid" << '\n';
}

}