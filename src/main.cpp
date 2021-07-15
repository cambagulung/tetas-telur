#include <Arduino.h>
#include <Lingu/Data/Store.hpp>
#include <Lingu/Pusher/Pusher.hpp>
#include <Lingu/Executor/Executor.hpp>

Lingu::Data::Store store;

Lingu::Pusher pusher(store);
Lingu::Executor executor(store);

void setup()
{
    //
}

void loop()
{
    pusher.loop();
    executor.loop();
}
