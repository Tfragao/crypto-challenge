if(EXISTS "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge1/main[1]_tests.cmake")
  include("/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge1/main[1]_tests.cmake")
else()
  add_test(main_NOT_BUILT main_NOT_BUILT)
endif()
