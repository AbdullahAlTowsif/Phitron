#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream of;
    of.open("1p.txt");
    of<<"Hello World\n";
    ofstream of2;
    of2.open("2p.txt");
    of2<<"Abdullah Al Towsif\n";
    ifstream ifs;
    ifs.open("New Text Document.txt");
    int x;
    double y,z;
    ifs>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z;
    of.close();
    of2.close();
    ifs.close();
    return 0;
}