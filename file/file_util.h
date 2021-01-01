#pragma once

#include <cstddef>
#include <string>

namespace STLUtil{

std::size_t count_files(const std::string &folder);

std::string file_contents(const std::string &filename);

std::size_t count_lines(const std::string &filename);

std::size_t get_filesize(const std::string &filename);

}