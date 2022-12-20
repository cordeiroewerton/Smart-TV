#ifndef SMART_TV_TIME_H
#define SMART_TV_TIME_H

#include"..\Header Files\App.h"

class Time:public App{
public:
    Time();
    Time(string Nome, float version);
    void run() override;
};

#endif //SMART_TV_TIME_H