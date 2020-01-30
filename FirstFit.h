//
// Created by Fidelia Nawar on 1/30/20.
//

#ifndef MEMORYMANAGER_FIRSTFIT_H
#define MEMORYMANAGER_FIRSTFIT_H

#include "Allocator.h"

class FirstFit: public Allocator{
    void* giveMemory(int size_t = 0);
};


#endif //MEMORYMANAGER_FIRSTFIT_H
