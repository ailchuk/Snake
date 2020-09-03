#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sfml-system" for configuration ""
set_property(TARGET sfml-system APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sfml-system PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsfml-system.2.5.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsfml-system.2.5.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-system )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-system "${_IMPORT_PREFIX}/lib/libsfml-system.2.5.1.dylib" )

# Import target "sfml-window" for configuration ""
set_property(TARGET sfml-window APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sfml-window PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsfml-window.2.5.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsfml-window.2.5.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-window )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-window "${_IMPORT_PREFIX}/lib/libsfml-window.2.5.1.dylib" )

# Import target "sfml-network" for configuration ""
set_property(TARGET sfml-network APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sfml-network PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsfml-network.2.5.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsfml-network.2.5.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-network )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-network "${_IMPORT_PREFIX}/lib/libsfml-network.2.5.1.dylib" )

# Import target "sfml-graphics" for configuration ""
set_property(TARGET sfml-graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sfml-graphics PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsfml-graphics.2.5.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsfml-graphics.2.5.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-graphics )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-graphics "${_IMPORT_PREFIX}/lib/libsfml-graphics.2.5.1.dylib" )

# Import target "sfml-audio" for configuration ""
set_property(TARGET sfml-audio APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(sfml-audio PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsfml-audio.2.5.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsfml-audio.2.5.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sfml-audio )
list(APPEND _IMPORT_CHECK_FILES_FOR_sfml-audio "${_IMPORT_PREFIX}/lib/libsfml-audio.2.5.1.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
