# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-src"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-build"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/tmp"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/src/ftxui-populate-stamp"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/src"
  "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/src/ftxui-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/src/ftxui-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/run/media/elias/500GB/ELIAS/dumpster/projects/Cpp/ftxui/ftxui-starter/build/_deps/ftxui-subbuild/ftxui-populate-prefix/src/ftxui-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
