#include <Lingu/Executor/Executor.hpp>

namespace Lingu
{
    Executor::Executor(Data::Store store)
    {
        setup(store);
    }

    void Executor::setup(Data::Store store)
    {
        _store = store;
    }

    void Executor::loop(void)
    {
        //
    }
}