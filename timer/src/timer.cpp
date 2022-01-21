#include "timer.h"

void Timer::setTimeout(std::function<void()> func, int delay) {
    active = true;
    std::thread t([=]() {
        if(!active.load()) return;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        if(!active.load()) return;
        func();
    });
    t.detach();
}

void Timer::setInterval(std::function<void()> func, int interval) {
    active = true;
    std::thread t([=]() {
        while(active.load()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(interval));
            if(!active.load()) return;
            func();
        }
    });
    t.detach();
}

void Timer::stop() {
    active = false;
}
void wait(int delay){
    std::this_thread::sleep_for(std::chrono::milliseconds(delay));
}
void Timer::wait(int delay) {
    ::wait(delay);
}

void measure(std::function<void()> func){
    using namespace std::chrono;
    auto start= system_clock::now();
    func();
    duration<double> end=start-system_clock::now();
    std::cout << end.count()<< std::endl;
}
void Timer::measure(std::function<void()> func) {
    ::measure(func);
}
SetInterval::SetInterval(std::function<void()> func,int milli) {
    this->milli=milli;
    std::thread t([&]() {
        while(this->active) {
            std::this_thread::sleep_for(std::chrono::milliseconds(this->milli));
            if(!this->active)return ;
            func();
        }
    });
    t.detach();
}
void SetInterval::stop() {
    this->active= false;
}

SetTimeout::SetTimeout(std::function<void()> func,int milli) {
    this->milli=milli;
    std::thread t([&]() {
        if(!this->active)return ;
        std::this_thread::sleep_for(std::chrono::milliseconds(this->milli));
        if(!this->active)return ;
        func();
    });
    t.detach();
}
void SetTimeout::stop() {
    this->active= false;
}
