project(template-organization CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories("src/include")
file(GLOB sources "src/sources/*.c*")
file(GLOB drivers "src/drivers/*.c*")

add_library(library SHARED ${sources})

foreach(driver ${drivers})
    get_filename_component(driver_name "${driver}" NAME_WE)
    add_executable(${driver_name} ${driver})
    target_link_libraries(${driver_name} library)
endforeach()
