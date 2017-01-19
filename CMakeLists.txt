cmake_minimum_required (VERSION 2.8)
project(RTSPDemo)



add_definitions(-std=c++11 -fPIC -O0) 
##Specify where to find modules
#list(APPEND CMAKE_MODULE_PATH
#   ${CMAKE_SOURCE_DIR}/cmake          #Look in local cmake file
#   ${CMAKE_INSTALL_PREFIX}/cmake      #look in install cmake file
#)


#Specify options
option(USE_SUPERBUILD "Use the superbuild to pull in dependencies" ON )

#If using Superbuild, exit after this
if( USE_SUPERBUILD)
   set(GIT_HTTPS ON CACHE BOOL "Clone git repositories with HTTPS")
   include(ExternalProject)
   include(Superbuild.cmake)
   return()
endif()

if(CMAKE_INSTALL_PREFIX) 
   message("Setting prefix!: ${CMAKE_INSTALL_PREFIX}")
   set( CMAKE_INST_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE PATH "Where to install")
   message("Setting prefix!: ${CMAKE_INST_PREFIX}")
else()
   set(CMAKE_INSTALL_PREFIX ${CMAKE_INST_PREFIX})
   message("Set prefix!: ${CMAKE_INST_PREFIX}")
endif()

message("Install dir: ${CMAKE_INSTALL_PREFIX}")

link_directories( ${CMAKE_INSTALL_PREFIX}/lib )


########################################
# Add source lists
########################################
add_executable( VideoConverter
   src/bin/videoConverter.cpp
)

install( TARGETS
   VideoConverter
   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib${LIB_SUFFIX}
   ARCHIVE DESTINATION lib${LIB_SUFFIX}
)  
