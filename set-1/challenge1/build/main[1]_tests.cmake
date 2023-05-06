add_test([=[HelloTest.BasicAssertions]=]  /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge1/build/main [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES WORKING_DIRECTORY /Users/taisonfragao/Documents/crypto-challenge/set-1/challenge1/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  main_TESTS HelloTest.BasicAssertions)
