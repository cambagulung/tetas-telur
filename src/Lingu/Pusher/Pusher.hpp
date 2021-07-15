
#ifndef LINGU_PUSHER_HPP
#define LINGU_PUSHER_HPP

#include <Lingu/Data/Store.hpp>

namespace Lingu
{
    class Pusher
    {
    private:
        /* data */

    public:
        Pusher(Data::Store store);

        void
        setup(Data::Store store),
            loop(void);
    };
}

#endif
