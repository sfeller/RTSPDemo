set( cmake_common_args
   -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
   -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_BINARY_DIR}/INSTALL
   -DUSE_SUPERBUILD:BOOL=OFF
)

#Add ffmpeg
set(FFMPEG_configure_CMD "./configure")
set(FFMPEG_REPO "https://git.ffmpeg.org/ffmpeg.git")
set(FFMPEG_prefix_ARG "--prefix=${CMAKE_BINARY_DIR}/INSTALL")
set(FFMPEG_make_CMD "make")
set(FFMPEG_install_ARG "install")
ExternalProject_Add(
   FFMPEG
   GIT_REPOSITORY ${FFMPEG_REPO}
   BUILD_IN_SOURCE 1
   CONFIGURE_COMMAND ${FFMPEG_configure_CMD} ${FFMPEG_prefix_ARG}
#  BUILD_COMMAND ${FFMPEG_configure_CMD} ${FFMPEG_prefix_ARG}
    BUILD_COMMAND ${FFMPEG_make_CMD} 
    INSTALL_COMMAND ${FFMPEG_make_CMD} ${FFMPEG_install_ARG}
)

#RTSP Demo
ExternalProject_Add(
   RTSPDemo
   SOURCE_DIR ${CMAKE_SOURCE_DIR}
   CMAKE_ARGS ${cmake_common_args}
   DEPENDS FFMPEG
)
