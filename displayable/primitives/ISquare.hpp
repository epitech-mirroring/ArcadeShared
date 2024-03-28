/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "IPrimitive.hpp"

class ISquare: public virtual IPrimitive {
public:
    ~ISquare() override = default;
    virtual size_t getWidth() const = 0;
    virtual size_t getHeight() const = 0;
    virtual void setWidth(size_t width) = 0;
    virtual void setHeight(size_t height) = 0;
};
