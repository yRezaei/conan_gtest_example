CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(supermarket_checkout CXX)

# Initialize Conan #############################################################
INCLUDE(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
CONAN_BASIC_SETUP()

# Create Encrypter library #####################################################
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
ADD_LIBRARY(${CMAKE_PROJECT_NAME} src/checkout.cpp)
TARGET_LINK_LIBRARIES(${CMAKE_PROJECT_NAME} ${CONAN_LIBS})

# Install Encrypter library ####################################################
INSTALL(TARGETS ${CMAKE_PROJECT_NAME}
        DESTINATION lib)