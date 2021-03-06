/*
 * Copyright (c) 2009, 2010, 2014 Nicira, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <config.h>
#include "util.h"
#include <stdlib.h>
#include "ovstest.h"

static void
test_filename_main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++) {
        char *dir, *base;

        dir = dir_name(argv[i]);
        puts(dir);
        free(dir);

        base = base_name(argv[i]);
        puts(base);
        free(base);
    }
}

OVSTEST_REGISTER("test-file_name", test_filename_main);
