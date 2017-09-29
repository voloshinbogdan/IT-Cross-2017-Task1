project(DerivatorLib)

add_library(DerivatorLib DerivatorLib.cpp DerivatorLib.h)

get_property(LIB_TYPE TARGET DerivatorLib PROPERTY TYPE)

if(LIB_TYPE STREQUAL SHARED_LIBRARY)
	install(
		TARGETS DerivatorLib
		COMPONENT user
		RUNTIME
			DESTINATION bin
		LIBRARY
			DESTIBATION Lib)
endif()

install(
	TARGETS DerivatorLib
	COMPONENT developer
	RUNTIME
		DESTINATION bin
	LIBRARY
		DESTINATION lib
	ARCHIVE
		DESTINATION lib)

install(
	DIRECTORY .
	DESTINATION include
	COMPONENT developer
	FILES_MATCHING
		PATTERN "*.h")

target_include_directories(DerivatorLib INTERFACE)