//
// Created by Fidelia Nawar on 1/30/20.
//

#ifndef MEMORYMANAGER_ALLOCATOR_H
#define MEMORYMANAGER_ALLOCATOR_H


class Allocator {
private:
    void * mem;
public:
    virtual void* giveMemory(int size_t = 0);
    static Allocator getAllocator();
};


#endif //MEMORYMANAGER_ALLOCATOR_H
