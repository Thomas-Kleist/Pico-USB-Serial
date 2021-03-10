cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(Servo)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

# Initialize the SDK
pico_sdk_init()

include(example_auto_set_url.cmake)

add_executable(example hello.c)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(example pico_stdlib hardware_uart)

pico_enable_stdio_usb(example 1)
pico_enable_stdio_uart(example 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(example)

# add url via pico_set_program_url
example_auto_set_url(example)
