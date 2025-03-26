# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LCG_model_color_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LCG_model_color_autogen.dir\\ParseCache.txt"
  "LCG_model_color_autogen"
  )
endif()
