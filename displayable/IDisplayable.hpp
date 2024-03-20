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
    virtual ~IDisplayable() = default;
    virtual ICoordinate getPosition() = 0;
    virtual int getSize() = 0;
    virtual void setPosition(ICoordinate position) = 0;
    virtual void setSize(int size) = 0;
};
