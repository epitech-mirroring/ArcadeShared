/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <unistd.h>

class IColor {
public:
    virtual ~IColor() = default;
    [[nodiscard]] virtual size_t getR() const = 0;
    [[nodiscard]] virtual size_t getG() const = 0;
    [[nodiscard]] virtual size_t getB() const = 0;
    [[nodiscard]] virtual size_t getA() const = 0;
    virtual void setR(size_t r) = 0;
    virtual void setG(size_t g) = 0;
    virtual void setB(size_t b) = 0;
    virtual void setA(size_t a) = 0;
    virtual void setRGB(size_t r, size_t g, size_t b) = 0;
    virtual void setRGBA(size_t r, size_t g, size_t b, size_t a) = 0;
};
