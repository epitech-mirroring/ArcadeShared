/*
** EPITECH PROJECT, 2024
** Arcade
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <string>
#include "IDriver.hpp"

class ICanUseShaders: public virtual IDriver {
public:
    ~ICanUseShaders() override = default;
    virtual void addShader(const std::string &shaderPath) = 0;
    virtual void removeAllShaders() = 0;
};

class IArcadeWithShaders: public virtual IArcade {
public:
    ~IArcadeWithShaders() override = default;
    virtual void addShader(const std::string &shaderPath) = 0;
    virtual void removeAllShaders() = 0;
};
