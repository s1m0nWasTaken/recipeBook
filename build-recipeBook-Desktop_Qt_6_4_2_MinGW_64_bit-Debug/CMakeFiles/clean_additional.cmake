# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\recipeBook_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\recipeBook_autogen.dir\\ParseCache.txt"
  "recipeBook_autogen"
  )
endif()
