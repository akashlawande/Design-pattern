#include "focus.h"
#include "devicmanager.h" 

void Focus::test()
{
DeviceManager *m_DeviceMnager = DeviceManager::DeviceManagerInstance();
m_DeviceMnager->setX(15);
}
