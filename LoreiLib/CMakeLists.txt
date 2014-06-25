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
file( GLOB LOREI_LIB_HEADERS
        "Src/*.h" ,
        "Src/ApiProvider/*.h" ,
        "Src/Processors/*.h" ) 
        
file( GLOB LOREI_LIB_SOURCES 
        "Src/*.cpp" , 
        "Src/ApiProvider/*.cpp" , 
        "Src/Processors/*.cpp" ) 
        
# Create the Lib
add_library( LoreiLib STATIC ${LOREI_LIB_HEADERS} ${LOREI_LIB_SOURCES} )