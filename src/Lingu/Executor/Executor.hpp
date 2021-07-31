
#ifndef Executor_HPP
#define Executor_HPP

#include <Lingu/Data/Store.hpp>

namespace Lingu
{
    class Executor
    {
    private:
        Data::Store _store;

    public:
        void
        setup(Data::Store store),
            loop(void);
    };
}

#endif