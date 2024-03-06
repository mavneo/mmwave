# Install script for directory: /home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/libmmwave.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so"
         OLD_RPATH "/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmmwave.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg" TYPE EXECUTABLE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ConfigParameterServer")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer"
         OLD_RPATH "/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ConfigParameterServer")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE DIRECTORY FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE DIRECTORY FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE DIRECTORY FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg" TYPE EXECUTABLE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/mmWaveCommSrv")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv"
         OLD_RPATH "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg:/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveCommSrv")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg" TYPE EXECUTABLE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/mmWaveQuickConfig")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig"
         OLD_RPATH "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg:/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/mmWaveQuickConfig")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg" TYPE EXECUTABLE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ParameterParser")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser"
         OLD_RPATH "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg:/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/ParameterParser")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg" TYPE EXECUTABLE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/DataHandlerClass")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass"
         OLD_RPATH "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg:/opt/ros/humble/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/ti_mmwave_rospkg_msgs/lib:/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/install/serial/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ti_mmwave_rospkg/DataHandlerClass")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/" TYPE DIRECTORY FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ti_mmwave_rospkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ti_mmwave_rospkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/environment" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_index/share/ament_index/resource_index/packages/ti_mmwave_rospkg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/cmake" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/cmake" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/cmake" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg/cmake" TYPE FILE FILES
    "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_core/ti_mmwave_rospkgConfig.cmake"
    "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/ament_cmake_core/ti_mmwave_rospkgConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ti_mmwave_rospkg" TYPE FILE FILES "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/src/ti_mmwave_rospkg/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ashu/workspace/Obstacle-Avoidance/ros2_driver/build/ti_mmwave_rospkg/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
