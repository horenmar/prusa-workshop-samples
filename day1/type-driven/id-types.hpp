#pragma once

#include <cstddef>

//! A strong type wrapper over size_t to represent Key ids
class Key {
    friend constexpr std::size_t to_index(Key k) {
        return k.id;
    }
    std::size_t id;
public:
    constexpr Key(std::size_t id):id(id){}

    friend constexpr
    bool operator==(Key lhs, Key rhs) {
        return lhs.id == rhs.id;
    }
    friend constexpr
    bool operator!=(Key lhs, Key rhs) {
        return lhs.id != rhs.id;
    }
    friend constexpr
    bool operator<(Key lhs, Key rhs) {
        return lhs.id < rhs.id;
    }
};


//! A strong type wrapper over size_t to represent Lock ids
class Lock {
    friend constexpr std::size_t to_index(Lock k) {
        return k.id;
    }
    std::size_t id;
public:
    constexpr Lock(std::size_t id) :id(id) {}

    friend constexpr
    bool operator==(Lock lhs, Lock rhs) {
        return lhs.id == rhs.id;
    }
    friend constexpr
    bool operator!=(Lock lhs, Lock rhs) {
        return lhs.id != rhs.id;
    }
    friend constexpr
    bool operator<(Lock lhs, Lock rhs) {
        return lhs.id < rhs.id;
    }
};


//! A strong type wrapper over size_t to represent Position ids
class Position {
    friend constexpr std::size_t to_index(Position k) {
        return k.id;
    }
    std::size_t id;
public:
    constexpr Position(std::size_t id) :id(id) {}

    friend constexpr
    bool operator==(Position lhs, Position rhs) {
        return lhs.id == rhs.id;
    }
    friend constexpr
    bool operator!=(Position lhs, Position rhs) {
        return lhs.id != rhs.id;
    }
    friend constexpr
    bool operator<(Position lhs, Position rhs) {
        return lhs.id < rhs.id;
    }
};
