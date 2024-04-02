/*
** EPITECH PROJECT, 2024
** Arcade
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <memory>
#include "IPrimitive.hpp"

class ILine: public virtual IPrimitive {
public:
    ~ILine() override = default;
    // The start is the position of the object
    [[nodiscard]] virtual const ICoordinate &getEnd() const = 0;
};
