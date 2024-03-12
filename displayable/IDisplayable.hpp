/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "../utils/ICoordinate.hpp"

class IDisplayable {
public:
    enum RotationDirection {
        RIGHT = 90,
        LEFT = -90,
        UP = 0,
        DOWN = 180,
    };

    virtual ~IDisplayable() = default;
    virtual ICoordinate getPosition() = 0;
    virtual RotationDirection getRotation() = 0;
    virtual int getSize() = 0;
    virtual void setPosition(ICoordinate position) = 0;
    virtual void setSize(int size) = 0;
    virtual void setRotation(RotationDirection rotation) = 0;
};
