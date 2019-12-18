#include "counter.h"

Counter Counter::operator ++(int i) {
    auto tmp = count_;
    ++count_;
    return Counter(tmp);
}