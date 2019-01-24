/** @file
 * Copyright (c) 2019, Arm Limited or its affiliates. All rights reserved.
 * SPDX-License-Identifier : Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/
#ifndef _TEST_S004_ITS_DATA_TESTS_H_
#define _TEST_S004_ITS_DATA_TESTS_H_

#include "val_internal_trusted_storage.h"

#define SST_FUNCTION val->its_function
#define psa_sst_uid_t psa_its_uid_t

typedef struct {
    char                    test_desc[100];
    enum its_function_code  api;
    psa_its_status_t        status;
} test_data;

static test_data s004_data[] = {
{
 "This is dummy for index0", 0, 0
},
{
 "Create a valid storage entity ", VAL_ITS_SET, PSA_ITS_SUCCESS
},
{
 "validate the data using get api after set api failure", VAL_ITS_GET, PSA_ITS_SUCCESS
},
{
 "Index not used",0,0
},
{
 "For same uid set the length as half of previous", VAL_ITS_SET, PSA_ITS_SUCCESS
},
{
 "Call get with incorrect length", VAL_ITS_GET, PSA_ITS_ERROR_INCORRECT_SIZE
},
{
 "No data should be returned",0,0
},
{
 "Call get api with correct length", VAL_ITS_GET, PSA_ITS_SUCCESS
},
{
 "No data should be returned",0,0
},
{
 "Check that we should not be able to access the old data",0,0
},
{
 "Remove the valid storage entity ", VAL_ITS_REMOVE, PSA_ITS_SUCCESS
},
};
#endif /* _TEST_S004_ITS_DATA_TESTS_H_ */
