project(DerivatorApp)

add_executable(DerivatorApp DerivatorApp.cpp)

find_path(DERIVATOR_H_DIR DerivatorLib.h)
if(NOT DERIVATOR_H_DIR)
	message(
		SEND_ERROR
		"Cuold not find DerivatorLib.h")
endif()
find_library(DERIVATOR_LIB DerivatorLib)
if(NOT DERIVATOR_LIB)
	message(
		SEND_ERROR
		"Could not find DerivatorLib")
endif()
add_library(DerivatorLib STATIC IMPORTED)
set_property(
	TARGET DerivatorLib
	PROPERTY INTERFACE_INCLUDE_DIRECTORIES
	${DERIVATOR_H_DIR})
set_property(
	TARGET DerivatorLib
	PROPERTY IMPORTED_LOCATION
	${DERIVATOR_LIB})

target_link_libraries(DerivatorApp DerivatorLib)