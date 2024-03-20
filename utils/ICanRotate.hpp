/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once

class ICanRotate {
public:
    virtual ~ICanRotate() = default;
    virtual float getRotation() = 0;
    virtual void setRotation(float angle) = 0;
};
