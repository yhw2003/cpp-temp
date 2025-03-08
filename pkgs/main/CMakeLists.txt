file(GLOB SRC_CODES src/*.cc src/*.cpp)
set(QML_SRC_CODES qml/main.qml)

add_executable(main ${SRC_CODES})

target_link_libraries(main PRIVATE fmt::fmt)