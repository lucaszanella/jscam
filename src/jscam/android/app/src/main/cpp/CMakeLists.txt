cmake_minimum_required(VERSION 3.4.1)

add_subdirectory("../../../../../myRtspClient/myRtspClient" myRtspClient_bin)

add_library(rtspInterface SHARED rtspInterface.cpp)

target_link_libraries(rtspInterface android log)