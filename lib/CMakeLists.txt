file(GLOB_RECURSE SRC "src/**.cpp")

include_directories(inc)
include_directories(src)

add_library(header SHARED ${SRC})