#include<iostream>
#include"DLL.h"
using namespace std;

int main()
{

DLL object;
object.add_node(10);
object.add_node(15);
object.add_node(20);
object.add_node(45);

object.display();


    return 0;
}
