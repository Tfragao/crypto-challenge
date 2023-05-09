# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-src"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-build"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/taisonfragao/Documents/crypto-challenge/set-1/challenge3/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
