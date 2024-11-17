# 搜索目录下所有子文件夹
file(GLOB ALL_SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR}/*)

# 遍历找到的子文件夹
foreach(SUBDIR ${ALL_SUBDIRS})
    # 检查是否是一个目录
    if(IS_DIRECTORY "${SUBDIR}")
        message(STATUS "Adding subdirectory: ${SUBDIR}")
        add_subdirectory("${SUBDIR}")
    endif()
endforeach()