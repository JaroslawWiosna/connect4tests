project( findNextWinningMove )

file(GLOB src
  "*.cpp"
  ../../Grid/Grid.cpp
)

add_executable(${PROJECT_NAME} ${src} )

target_link_libraries(
  ${PROJECT_NAME} 
  ${LINK_FLAGS}
)


add_test(${PROJECT_NAME} ${PROJECT_NAME})
