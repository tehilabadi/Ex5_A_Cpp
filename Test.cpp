  
#include "doctest.h"
using namespace doctest;
#include <iostream>
#include <stdexcept>
using namespace std;
#include "BinaryTree.hpp"
using namespace ariel;
TEST_CASE("tree_of_ints") {
    BinaryTree<int> tree_of_ints;
    CHECK_NOTHROW(tree_of_ints.add_root(1));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 9));
    CHECK_NOTHROW(tree_of_ints.add_left(1, 7));
    CHECK_THROWS(tree_of_ints.add_left(2, 7));
    CHECK_NOTHROW(tree_of_ints.add_right(1, 3));
    CHECK_NOTHROW(tree_of_ints.add_right(1, 5));
    CHECK_THROWS(tree_of_ints.add_right(2, 7));
    CHECK_NOTHROW(tree_of_ints.add_root(8));
    CHECK_NOTHROW(tree_of_ints.add_root(7));
    CHECK_NOTHROW(tree_of_ints.add_root(8));
    // CHECK(tree_of_ints.begin_preorder().root->value!=tree_of_ints.end_preorder().root->value);
    // CHECK_EQ(tree_of_ints.begin_preorder().root->value,8);
    // CHECK_EQ(tree_of_ints.begin_inorder().root->value,7);
    // CHECK_EQ(tree_of_ints.begin_postorder().root->value,7);
    // CHECK_EQ(tree_of_ints.end_preorder().root->value,tree_of_ints.end_inorder().root->value);
    // CHECK_EQ(tree_of_ints.end_preorder().root->value,tree_of_ints.end_postorder().root->value);


}
TEST_CASE("tree_of_strings") {
    BinaryTree<string>tree_of_strings;
    CHECK_NOTHROW(tree_of_strings.add_root("root"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "left"));
    CHECK_NOTHROW(tree_of_strings.add_left("root", "new left"));
    CHECK_THROWS(tree_of_strings.add_left("hi", "something"));
    CHECK_NOTHROW(tree_of_strings.add_right("root", "right"));
    CHECK_NOTHROW(tree_of_strings.add_right("root", "new right"));
    CHECK_THROWS(tree_of_strings.add_right("hi", "something"));
    CHECK_NOTHROW(tree_of_strings.add_root("new root"));
    CHECK_NOTHROW(tree_of_strings.add_root("new"));
    CHECK_NOTHROW(tree_of_strings.add_root("new root"));
    // CHECK(tree_of_strings.begin_preorder().root->value!=tree_of_strings.end_preorder().root->value);
    // CHECK_EQ(tree_of_strings.begin_preorder().root->value,"new root");  
    // CHECK_EQ(tree_of_ints.begin_inorder().root->value,7);
    // CHECK_EQ(tree_of_ints.begin_postorder().root->value,7);
    // CHECK_EQ(tree_of_ints.end_preorder(),tree_of_ints.end_inorder());
    // CHECK_EQ(tree_of_ints.end_preorder(),tree_of_ints.end_postorder());
}