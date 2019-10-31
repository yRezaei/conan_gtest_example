#ifndef CHECKOUT_H_
#define CHECKOUT_H_

#include <string>

class Checkout
{
public:
    Checkout();
    Checkout(Checkout &&) = default;
    Checkout(const Checkout &) = default;
    Checkout &operator=(Checkout &&) = default;
    Checkout &operator=(const Checkout &) = default;
    ~Checkout();

    void add_item_price(std::string item , int price);
    void add_item(std::string item);
    
private:

};

#endif // !CHECKOUT_H_
