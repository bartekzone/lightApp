# Version 3.16 is a safe choice.
cmake_minimum_required(VERSION 3.16)

# Name of the project "MinimalLayeredApp" and specify the language C.
project(MinimalLayeredApp C)

# Set the C language standard
# The first line: require at least C99.
# The second line: make this requirement mandatory.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Create executable "main" from source files
add_executable(app_lightApp
    main.c
    APP/Swc_LightsControl.c
    BSW/GPIO/Gpio.c
    BSW/GPIO/Gpio_Cfg.c
    BSW/DET/ErrorHandler.c
    MCAL/Dio.c
    RTE/Rte_LightsControl.c
)

# Add header directories to the include path.
# PRIVATE means these include directories are only for this target.
target_include_directories(app_lightApp PRIVATE
    APP BSW/GPIO BSW/DET MCAL RTE ProjectConfig
)

# target_compile_options() adds extra compilation options.
# -Wall and -Wextra enable common warnings that help catch bugs.
target_compile_options(app_lightApp PRIVATE -Wall -Wextra)
