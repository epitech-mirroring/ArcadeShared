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
    virtual std::size_t getWidth() const = 0;
    virtual std::size_t getHeight() const = 0;
    virtual void setWidth(std::size_t width) = 0;
    virtual void setHeight(std::size_t height) = 0;
    virtual bool isFilled() const = 0;
};
