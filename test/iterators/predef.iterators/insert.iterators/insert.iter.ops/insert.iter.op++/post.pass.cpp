//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <iterator>

// insert_iterator

// insert_iterator<Cont> operator++(int);

#include <iterator>
#include <vector>
#include <cassert>

template <class C>
void
test(C c)
{
    std::insert_iterator<C> i(c, c.end());
    std::insert_iterator<C> r = i++;
    r = 0;
    assert(c.size() == 1);
    assert(c.back() == 0);
}

int main()
{
    test(std::vector<int>());
}
