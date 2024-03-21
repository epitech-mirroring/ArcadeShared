/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once

class ICanRotate {

const float UP = 90;
const float DOWN = 270;
const float LEFT = 180;
const float RIGHT = 0;

public:
    virtual ~ICanRotate() = default;
    virtual float getRotation() = 0;
    virtual void setRotation(float angle) = 0;
};
