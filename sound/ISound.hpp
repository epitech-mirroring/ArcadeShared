/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once

#include <string>

class ISound {
public:
    virtual ~ISound() = default;
    [[nodiscard]] virtual const std::string &getPath() const = 0;
    virtual void setPath(const std::string &path) = 0;
    [[nodiscard]] virtual void setRepeat(bool isRepeating) = 0;
    virtual bool getRepeat() = 0;
};
