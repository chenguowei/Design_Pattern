cmake_minimum_required(VERSION 3.9)
project(Design_Patterns)

set(CMAKE_CXX_STANDARD 11)

add_executable(Design_Patterns main.cpp prototype/Prototype.cpp prototype/Prototype.h prototype/main.cpp singleton/Singleton.cpp singleton/Singleton.h singleton/main.cpp adapter/Adapter.h adapter/Adapter.cpp adapter/main.cpp bridge/Abstraction.h bridge/AbstractionImplement.h bridge/AbstractionImplement.cpp bridge/Abstraction.cpp bridge/main.cpp composite/Composite.h composite/Composite.cpp composite/main.cpp decorator/decorator.h decorator/Decorator.cpp decorator/main.cpp facade/Facade.h facade/Facade.cpp facade/main.cpp flyweight/Flyweight.h flyweight/Flyweight.cpp flyweight/main.cpp flyweight/main.cpp flyweight/Document.h flyweight/Document.cpp flyweight/test.cpp proxy/Proxy.h proxy/Proxy.cpp proxy/main.cpp chain_of_responsility/Handler.h chain_of_responsility/main.cpp command/Command.h command/Command.cpp command/main.cpp iterator/Iterator.cpp)