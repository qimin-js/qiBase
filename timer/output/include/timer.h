//
// Created by qimin on 2021/12/31.
//

#ifndef MAKE_TIMER_H
#define MAKE_TIMER_H

#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include<functional>
class Timer {
    std::atomic<bool> active{true};
public:
    /**
     * setTimeout
     * @param func function
     * @param delay millisecond
     */
    void setTimeout(std::function<void()> func, int delay);
    /**
     * setInterval
     * @param func function
     * @param interval millisecond
     */
    void setInterval(std::function<void()> func, int interval);
    /**
     * stop timer
     */
    void stop();
    /**
     * measure how time func run
     * @param func
     */
    void measure(std::function<void()> func);
    /**
     * wait time
     * @param delay
     */
    void wait(int delay);
};
class SetInterval{
private:
    bool active=true;
    int milli=0;
public:
    SetInterval(std::function<void()> func,int milli);
    void stop();
};
class SetTimeout{
private:
    bool active=true;
public:
    SetTimeout(std::function<void()> func,int milli);
    void stop();
};
#endif //MAKE_TIMER_H
