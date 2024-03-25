/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include "../utils/ICoordinate.hpp"
#include <memory>

class IDisplayable {
public:
    virtual ~IDisplayable() = default;
    virtual const std::unique_ptr<ICoordinate> &getPosition() const = 0;
    virtual int getSize() const = 0;
    virtual void setPosition(ICoordinate &position) = 0;
    virtual void setSize(int size) = 0;
};
