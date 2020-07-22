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
target_link_libraries(graph Catch2::Catch2WithMain)

add_executable(month
  data-driven/month.hpp
  data-driven/month.cpp
  data-driven/month-tests.cpp
)
target_link_libraries(month Catch2::Catch2WithMain)
add_test(NAME month COMMAND month)


add_executable(types
  type-driven/id-types.hpp
  type-driven/id-types-tests.cpp
)
target_link_libraries(types Catch2::Catch2WithMain)
add_test(NAME types COMMAND types)


add_executable(mock
  mock/algos.hpp
  mock/algos-tests.cpp
)
target_link_libraries(mock Catch2::Catch2WithMain)
add_test(NAME mock COMMAND mock)


add_executable(trompeloeil
  mock-framework/stopwatch.hpp
  mock-framework/stopwatch-tests.cpp
  mock-framework/trompeloeil.hpp
  mock-framework/trompeloeil-catch-integration.hpp
)
target_link_libraries(trompeloeil Catch2::Catch2WithMain)
add_test(NAME trompeloeil COMMAND trompeloeil)


add_executable(property
  property/sort.hpp
  property/sort-tests.cpp
)
target_link_libraries(property Catch2::Catch2WithMain)
add_test(NAME property COMMAND property)

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
