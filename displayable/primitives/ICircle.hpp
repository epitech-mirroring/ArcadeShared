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

class ICircle: public virtual IPrimitive {
public:
    ~ICircle() override = default;
    [[nodiscard]] virtual size_t getRadius() const = 0;
    virtual void setRadius(size_t radius) = 0;
};
