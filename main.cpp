#include <iostream>
#include "devicmanager.h"
#include "focus.h"

int main()
{
DeviceManager *objDeviceManager = DeviceManager::DeviceManagerInstance();

std::cout<<"In the main"<<std::endl;
std::cout<<objDeviceManager->getX()<<std::endl;
Focus *a = new Focus();
a->test();
objDeviceManager->setX(10);
std::cout<<"...."<<std::endl;
std::cout<<objDeviceManager->getX()<<std::endl;

return 0;
}
