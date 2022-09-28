#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector<CP::queue<T>> CP::queue<T>::split_queue(int k)
{
    std::vector<CP::queue<T>> qs(k);
    int i = 0;
    while (!empty())
    {
        T top = this->front();
        this->pop();
        qs[i % k].push(top);
        i++;
    }

    return qs;
}

#endif
