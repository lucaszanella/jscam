cmake_minimum_required(VERSION 3.4.1)

#add_subdirectory("../../../../../myRtspClient/myRtspClient" myRtspClient_bin)
#include_directories("../../../../../myRtspClient/myRtspClient/include")

add_subdirectory("../../../../../myRtspClient/myRtspClient" myRtspClient_bin)

add_library(rtsp SHARED "*.cpp")

target_link_libraries(rtsp android log live555)

#add_dependencies(myRtspClient jrtplib-shared)
#target_link_libraries(rtspInterface myRtspClient)