/*
** EPITECH PROJECT, 2024
** Arcade
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "utils/ICoordinate.hpp"
#include "utils/IColor.hpp"

class ICanDrawGizmos {
public:
    virtual ~ICanDrawGizmos() = default;

    virtual bool isGizmosEnabled() const = 0;
    virtual void drawLine(const ICoordinate &start, const ICoordinate &end, const IColor &color) = 0;
    virtual void drawCircle(const ICoordinate &center, std::size_t radius, const IColor &color) = 0;
    virtual void drawRect(const ICoordinate &topLeft, const ICoordinate &bottomRight, bool fill, const IColor &color) = 0;
};
