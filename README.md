# Arcade Project - Shared Interface

## Introduction
This document outlines the shared part for the Arcade project, that will be used by both Group. The purpose of these interfaces is to ensure compatibility between the two groups components, and for loading shared libraries using DLLoaders.

## Extern "C" Structure
To facilitate compatibility between the two groups shared libraries, both groups must adhere to the following structure when exporting symbols:

```cpp
extern "C" {
    // Mandatory symbols for drivers
    std::unique_ptr<IDriver> create_driver(void);

    // Mandatory symbols for games
    std::unique_ptr<IGame> create_game(void);

    // Optional symbol
    const std::string &get_name(void);

    // Optionals symbols for loading and unloading the shared library
    __attribute__((constructor))
    void load_lib(void);
    __attribute__((destructor))
    void unload_lib(void);
}
```

### Symbols Description
- `create_driver()`: This function is mandatory for drivers. It should return a unique pointer to the driver instance.
- `create_game()`: This function is mandatory for games. It should return a unique pointer to the game instance.
- `get_name()`: This function is optional. It should return a constant reference to a string containing the name of the component.
- `load_lib()`: This function is optional. It is called when the shared library is loaded.
- `unload_lib()`: This function is optional. It is called when the shared library is unloaded.

## Instructions for the Groups
Both Groups should ensure that their shared libraries export symbols according to the structure provided above. This will ensure seamless integration and compatibility between the components developed by the two groups.

## Group Information
### Group Pacman
- **Contact Person:** Axel Eckenberg
- **Email:** axel.eckenberg@epitech.eu

### Group Two
- **Contact Person:** Antoine Gonthier
- **Email:** antoine.gonthier@epitech.eu

## Example Usage
```cpp
// Example of what the extern strcuture should look like in a shared library
#include <iostream>
#include <memory>

extern "C" {
    // Optional symbol
    __attribute__((constructor))
    void load_lib() {
        std::cout << "Loading ..... driver/game" << std::endl;
    }

    __attribute__((destructor))
    void unload_lib() {
        std::cout << "Unloading ..... driver/game" << std::endl;
    }

    const std::string &get_name() {
        static const std::string name = "......."; // Name of the driver/game
        return name;
    }

    // Mandatory symbols
    // For drivers
    std::unique_ptr<IDriver> create_driver() {
        std::unique_ptr<IDriver> driver = std::make_unique<YourDriverClassName>();
        return driver;
    }

    // Or for games
    std::unique_ptr<IGame> create_game() {
        std::unique_ptr<IGame> game = std::make_unique<YourGameClassName>();
        return game;
    }
}
```

## Conclusion
Adhering to the shared interface outlined in this document will ensure compatibility between the components developed by the two Groups for the Arcade project.
