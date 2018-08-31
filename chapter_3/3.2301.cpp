#include <iostream>
using namespace std;

int main() {
 cout << "Enter threee edges: ";
 double edge1, edge2, edge3;
 cin >> edge1;
 cin >> edge2;
 cin >> edge3;
cout << "Can edges " << edge1 << ", " << edge2 << ", " << edge3 << "form a triangle: ";

if(edge1 + edge2 > edge3 || edge1 + edge3 > edge2 || edge2 + edge1 > edge3 || edge2 + edge3 > edge1 || edge3 + edge1 > edge2 || edge3 + edge2 > edge1){
    cout << "true" << '\n';
}
else {
    cout << "false" << '\n';
}

return 0;

}