#include <gtest/gtest.h>
#include "checkout.h"

class CheckoutTests : public ::testing::Test
{
public:
    CheckoutTests() {}

protected:
    Checkout check_out;
};

TEST_F(CheckoutTests, can_add_item_price)
{
    check_out.add_item_price("a", 1);
}

TEST_F(CheckoutTests, can_add_item)
{
    check_out.add_item("a");
}
