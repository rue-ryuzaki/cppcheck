/*
 * cppcheck - c/c++ syntax checking
 * Copyright (C) 2007-2009 Daniel Marjamäki, Reijo Tomperi, Nicolas Le Cam
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 */

#include "cppcheckexecutor.h"

/**
 * Main function of cppcheck
 *
 * @param argc Passed to CppCheck::parseFromArgs()
 * @param argv Passed to CppCheck::parseFromArgs()
 * @return 0
 */
int main(int argc, char* argv[])
{
    CppCheckExecutor exec;
    exec.check(argc, argv);
    return 0;
}
