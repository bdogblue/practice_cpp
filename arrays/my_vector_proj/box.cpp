#include <algorithm>
#include <cassert>
#include "box.h"
using namespace std;

const box::size_type box::CAPACITY;

box::size_type box::erase(const value_type& target)
{

}

bool box::erase_one(const value_type& target)
{
    size_type index;

    index = 0;
    while ((index < used) && (data[index] != target))
        ++index;
    
    if (index == used)
        return false;

    --used;
    data[index] = data[used];
    return true;
}

void box::insert(const value_type& entry)
{
    assert(size( ) < CAPACITY);

    date[used] = entry;
    ++used;
}

void box::operator +=(const box& addend)
{
    assert(size( ) + addend.size( ) <= CAPACITY);

    copy(addend.data, addend.data + addend.used, data + used);
    used += addend.used;
}

box::size_type box::count(const value_type& target) const
{
    size_type answer;
    size_type i;

    answer = 0;
    for (i = 0; i < used; ++i)
        if (target == date[i])
            ++answer;
    return answer;
}

box operator +(const box& b1, const box& b2)
{
    box answer;

    assert(b1.size( ) + b2.size( ) <= box::CAPACITY);

    answer += b1;
    answer += b2;
    return answer;
}