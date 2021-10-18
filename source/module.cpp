#include "../include/module.h"
#include "../include/business.h"
using namespace foxintango;

#include <string.h>

IOBusinessWEBInterface::IOBusinessWEBInterface(){
}

IOBusinessWEBInterface::~IOBusinessWEBInterface(){
}

bool IOBusinessWEBInterface::containClass(const char* name) {
    return false;
}

void* IOBusinessWEBInterface::createObject(const char* name) {
    if(strcmp((char*)name,"engine") == 0) {
        return new BusinessWEB();
    }
    return 0;
}

void* IOBusinessWEBInterface::createObject(const char* name,const Model& model){
    return 0;
}

bool IOBusinessWEBInterface::containFunction(const char* name) {
    return false;
}

void* IOBusinessWEBInterface::exportFunction(const char* name) {
    return 0;
}

void* IOBusinessWEBInterface::exportVariable(const char* name) {
    return 0;
}

IOBusinessWEBInterface foxintangoAPI MODULE_INTERFACE_INSTANCE;

