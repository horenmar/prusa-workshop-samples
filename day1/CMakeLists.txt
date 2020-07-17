add_executable(factorial
  factorial/factorial.hpp
  factorial/factorial.cpp
  factorial/factorial-tests.cpp
)
target_link_libraries(factorial Catch2::Catch2WithMain)
add_test(NAME factorial COMMAND factorial)

add_executable(join
  join/join.hpp
  join/join.cpp
  join/join-tests.cpp
)
target_link_libraries(join Catch2::Catch2WithMain)
add_test(NAME join COMMAND join)


