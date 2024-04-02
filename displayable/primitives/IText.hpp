/*
** EPITECH PROJECT, 2024
** Arcade
** File description:
** IText
*/

#pragma once
#include <memory>
#include "IPrimitive.hpp"

class IText: public virtual IPrimitive {
public:
    ~IText() override = default;
    [[nodiscard]] virtual const std::string &getText() const = 0;
    virtual void setText(const std::string &text) = 0;
    [[nodiscard]] virtual const std::string &getFontPath() const = 0;
};
