################################################################################################################
# CMake Required Build order
# http://wiki.ros.org/catkin/CMakeLists.txt
#Required CMake Version (cmake_minimum_required)
#Package Name (project())
#Find other CMake/Catkin packages needed for build (find_package())
#Message/Service/Action Generators (add_message_files(), add_service_files(), add_action_files())
#Invoke message/service/action generation (generate_messages())
#Specify package build info export (catkin_package())
#Libraries/Executables to build (add_library()/add_executable()/target_link_libraries())
#Tests to build (catkin_add_gtest())
#Install rules (install())
################################################################################################################

# 1) Basics
cmake_minimum_required( VERSION 3.0 )

# 2) Declare the Lorei_2.0 project 
project( Lorei_2.0 )

# Allow Cmake to build folders 
set_property( GLOBAL PROPERTY USE_FOLDERS ON )

# Compiler Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Setup the subprojects
add_subdirectory( LoreiLib )
add_subdirectory( LoreiTest )
add_subdirectory( LoreiGUI )