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
cmake_minimum_required(VERSION 3.0)

# Setup the Header and Source Variables
file( GLOB LOREI_TEST_HEADERS
        "Src/*.h" )
        
file( GLOB LOREI_TEST_SOURCES 
        "Src/*.cpp" ) 
        
# Grab Boost
set( Boost_USE_STATIC_LIBS ON )
set( Boost_USE_MULTITHREADED ON )
set( Boost_USE_STATIC_RUNTIME OFF )
set( Boost_DEBUG ON )
find_package( Boost 1.55 REQUIRED unit_test_framework)
include_directories( ${Boost_INCLUDE_DIRS} )

# Create the Lib
add_executable( LoreiTest main.cpp ${LOREI_TEST_SOURCES} )
target_link_libraries( LoreiTest ${Boost_LIBRARIES} )