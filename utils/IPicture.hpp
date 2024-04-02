/*
** EPITECH PROJECT, 2024
** ArcadeShared
** File description:
** No file there , just an epitech header example .
** You can even have multiple lines if you want !
*/

#pragma once
#include <string>

class IPicture {
public:
    virtual ~IPicture() = default;
    [[nodiscard]] virtual const std::string &getPath() const = 0;
    virtual void setPath(const std::string &path) = 0;
    [[nodiscard]] virtual std::size_t getWidth() const = 0;
    [[nodiscard]] virtual std::size_t getHeight() const = 0;
};
