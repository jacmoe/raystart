# This file is part of the
# ██████╗  █████╗ ██╗   ██╗███████╗████████╗ █████╗ ██████╗ ████████╗
# ██╔══██╗██╔══██╗╚██╗ ██╔╝██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝
# ██████╔╝███████║ ╚████╔╝ ███████╗   ██║   ███████║██████╔╝   ██║   
# ██╔══██╗██╔══██║  ╚██╔╝  ╚════██║   ██║   ██╔══██║██╔══██╗   ██║   
# ██║  ██║██║  ██║   ██║   ███████║   ██║   ██║  ██║██║  ██║   ██║   
# ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   
#   project
#
#   https://github.com/jacmoe/raystart
#
#   (c) 2021 Jacob Moena
#
#   Zlib License
#
set(TARGET_NAME raystart)

set(main
    ./main/Application.cpp
    ./main/Application.hpp
    ./main/Game.cpp
    ./main/Game.hpp
)

set(utility
    ./utility/utils.cpp
    ./utility/utils.hpp
)

add_executable(${TARGET_NAME}
    ./main.cpp
    ${main}
    ${utility}
)

target_link_libraries(${TARGET_NAME} raylib)
