#include <iostream>
#include <npas4/Npas4.h>

int main()
{
    std::cout << npas4::GetRAMVirtualUsedByCurrentProcess() << " " << npas4::GetRAMPhysicalUsedByCurrentProcess() << " " << npas4::GetRAMSystemUsedByCurrentProcess() << "\n";
    std::cout << "Total RAM: " << npas4::GetRAMSystemTotal() << std::endl;
    std::cout << "Available RAM: " << npas4::GetRAMSystemAvailable() << std::endl;
}