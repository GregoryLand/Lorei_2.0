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
file( GLOB LOREI_GUI_HEADERS
        "Src/*.h")
        
file( GLOB LOREI_GUI_SOURCES 
        "Src/*.cpp") 
        
# Setup QT5
set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_AUTOMOC ON )
find_package( Qt5Widgets )

# Create the Exe
add_executable( LoreiGUI test.cpp )

# Link in QT 5
qt5_use_modules( LoreiGUI Widgets )