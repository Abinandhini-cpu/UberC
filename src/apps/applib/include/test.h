/*
 * Copyright 2017 Uber Technologies, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/** @file test.h
 * @brief Test harness functions and macros.
 */

#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include "geoCoord.h"
#include "h3api.h"

void t_assert(int value, const char* msg);
void t_assertBoundary(H3Index h3, const GeoBoundary* b1);

int testCount();

#define BEGIN_TESTS(NAME)              \
    int main(int argc, char* argv[]) { \
        printf("TEST ");               \
        printf(#NAME);                 \
        printf("\n");
#define TEST(NAME)
#define SKIP(NAME) if (1 == 0)
#define END_TESTS()                                 \
    ;                                               \
    printf("\nDONE: %d assertions\n", testCount()); \
    }

#endif