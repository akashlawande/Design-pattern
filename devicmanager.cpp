#include "devicmanager.h"
DeviceManager* DeviceManager::m_DeviceManager=nullptr;

DeviceManager* DeviceManager::DeviceManagerInstance()
{
  if(m_DeviceManager==nullptr)
   m_DeviceManager= new DeviceManager();  
  return  m_DeviceManager;
}

DeviceManager::DeviceManager()
{
  x=5;
  std::cout<<"DeviceManagerConstructor"<<std::endl;
}

