#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"
#include <cmath>
#include <sstream>
TEST_CASE("Subtraction") {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);
    float distance = p1 - p2;
    REQUIRE(std::abs(distance - 11.238f) < 0.001f);
}

TEST_CASE("Equal") {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);
    REQUIRE((p1 == p2) == false);
}
TEST_CASE("!Equal") {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);
    REQUIRE((p1 != p2) == true);
}

TEST_CASE("Zero") {
    Point p1(0, 0), p2(0, 0);
    REQUIRE(p1 == p2);
    REQUIRE((p1 - p2) == 0);
}

TEST_CASE("One") {
    Point p1(1, 2), p2(1, 2);
    REQUIRE(p1 == p2);
}

TEST_CASE("Many") {
    Point p1(0, 0), p2(3, 4), p3(6, 8);
    REQUIRE(std::abs((p1 - p2) - 5.0f) < 1e-6);
    REQUIRE(std::abs((p2 - p3) - 5.0f) < 1e-6);
}

TEST_CASE("Boundary") {
    Point big1(1e6, 1e6), big2(1e6, 1e6 + 1);
    REQUIRE(std::abs((big1 - big2) - 1.0f) < 1e-6);
}



