/* 
 * test.cpp 
 * 
 *  Created on: 2011-9-1 
 *      Author: will 
 */  
#include <iostream>  
#include <string>  
  
#include "json/json.h"  
  
using namespace std;  
  
int main(void)  
{  
    Json::Value root;  
    Json::FastWriter fast;  
    root["ModuleType"] = Json::Value("你好");  
  
    root["ModuleCode"] = Json::Value("22");  
  
    root["ModuleDesc"] = Json::Value("33");  
  
    root["DateTime"] = Json::Value("44");  
  
    root["LogType"] = Json::Value("55");  
    cout<<fast.write(root)<<endl;  
     return 0;  
}