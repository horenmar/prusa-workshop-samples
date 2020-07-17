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


add_executable(split
  split/split.hpp
  split/split.cpp
  split/split-tests.cpp
)
target_link_libraries(split Catch2::Catch2WithMain)
add_test(NAME split COMMAND split)

add_executable(divisors
  divisors/divisors.hpp
  divisors/divisors.cpp
  divisors/divisors-tests.cpp
)
target_link_libraries(divisors Catch2::Catch2WithMain)
add_test(NAME divisors COMMAND divisors)


add_executable(graph
  graph/graph.hpp
  graph/graph.cpp
  graph/graph-tests.cpp
)


#--------------------------------------
# This executable links together more tests to help showcasing tags
add_executable(tags
  join/join.hpp
  join/join.cpp
  join/join-tests.cpp
  split/split.hpp
  split/split.cpp
  split/split-tests.cpp
)
target_link_libraries(tags Catch2::Catch2WithMain)
