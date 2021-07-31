#include <Arduino.h>
#include <Lingu/Data/Store.hpp>
#include <Lingu/Executor/Executor.hpp>
#include <Lingu/Pusher/Pusher.hpp>

Lingu::Executor EXECUTOR;
Lingu::Pusher PUSHER;
Lingu::Data::Store STORE;

void setup()
{
    EXECUTOR.setup(STORE);
    PUSHER.setup(STORE);
}

void loop()
{
    PUSHER.loop();
    EXECUTOR.loop();
}
