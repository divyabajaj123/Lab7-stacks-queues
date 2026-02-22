// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "stack.h"
#include "queue.h"

TEST_CASE("stack")
{
    Stack s;
    REQUIRE(s.size() == 0);
    REQUIRE(s.empty());
    REQUIRE(s.top() == "");
}

TEST_CASE("stack-push")
{
    Stack s;
    s.push("hello");
    REQUIRE(s.size() == 1);
    REQUIRE(!s.empty());
    REQUIRE(s.top() == "hello");

    s.push("world");
    REQUIRE(s.size() == 2);
    REQUIRE(!s.empty());
    REQUIRE(s.top() == "world");
}

TEST_CASE("stack-pop")
{
    Stack s;
    s.push("hello");
    s.push("world");
    REQUIRE(s.top() == "world");
    s.pop();
    REQUIRE(s.size() == 1);
    REQUIRE(s.top() == "hello");
    s.pop();
    REQUIRE(s.size() == 0);
    REQUIRE(s.empty());
    REQUIRE(s.top() == "");
}

TEST_CASE("queue")
{
    Queue q;
    REQUIRE(q.size() == 0);
    REQUIRE(q.empty());
    REQUIRE(q.front() == "");
    REQUIRE(q.back() == "");
}

TEST_CASE("queue-push")
{
    Queue q;
    q.push("hello");
    REQUIRE(q.size() == 1);
    REQUIRE(!q.empty());
    REQUIRE(q.front() == "hello");
    REQUIRE(q.back() == "hello");

    q.push("world");
    REQUIRE(q.size() == 2);
    REQUIRE(!q.empty());
    REQUIRE(q.front() == "hello");
    REQUIRE(q.back() == "world");
}

TEST_CASE("queue-pop")
{
    Queue q;
    q.push("hello");
    q.push("world");
    REQUIRE(q.front() == "hello");
    REQUIRE(q.back() == "world");
    q.pop();
    REQUIRE(q.size() == 1);
    REQUIRE(q.front() == "world");
    REQUIRE(q.back() == "world");
    q.pop();
    REQUIRE(q.size() == 0);
    REQUIRE(q.empty());
    REQUIRE(q.front() == "");
    REQUIRE(q.back() == "");
}

