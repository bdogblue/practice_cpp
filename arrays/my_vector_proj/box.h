#include <cstdlib>


class box
{
public:
    // TYPEDEFS and MEMBER CONSTANTS
    typedef int value_type;
    typedef std::size_t size_type;
    static const size_type CAPACITY = 30;
    box() { used = 0; }
    // MODIFICAATION MEMBER FUNCTIONS
    size_type erase(const value_type& target);
    bool erase_one(const value_type& entry);
    void insert(const value_type& entry);
    void operator +=(const box& addend);
    // CONSTANT MEMBER FUNCTIONS
    size_type size( ) const { return used; }
    size_type count(const value_type& target) const;
private:
    value_type date[CAPACITY];
    size_type used;
};

// NONMEMEBER FUNCTIONS for the box class
box operator +(const box& b1, const box& b2);