#include <DLLmain.h>

int main()
{
    Nodeclass::Node DLL;
    DLL.frontInsert(1);
    DLL.frontInsert(2);
    DLL.frontInsert(3);
    DLL.frontInsert(4);
    DLL.printList();

    return 0;
}