/** @file
 * Copyright (c) 2019, Arm Limited or ps affiliates. All rights reserved.
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
#ifndef _TEST_S008_PS_DATA_TESTS_H_
#define _TEST_S008_PS_DATA_TESTS_H_

#include "val_protected_storage.h"

#define SST_FUNCTION val->ps_function
#define psa_sst_uid_t psa_ps_uid_t

typedef struct {
    char                   test_desc[100];
    enum ps_function_code  api;
    psa_ps_status_t        status;
} test_data;

static test_data s008_data[] = {
{
 "This is dummy for index0", 0, 0
},
{
 "Create a valid storage entity with zero flag value", VAL_PS_SET, PSA_PS_SUCCESS
},
{
 "Call get api with valid offset values, and offset + data_len = total_size", VAL_PS_GET, PSA_PS_SUCCESS
},
{
 "This is dummy for index3", 0, 0
},
{
 "Call get api with valid offset values, and offset + data_len < total_size", VAL_PS_GET, PSA_PS_SUCCESS
},
{
 "This is dummy for index5", 0, 0
},
{
 "Call get api with invalid offset , offset = total data_size + 1", VAL_PS_GET, PSA_PS_ERROR_OFFSET_INVALID
},
{
 "This is dummy for index7", 0, 0
},
{
 "Call get api with valid offset , but offset + data_len > total data_size", VAL_PS_GET, PSA_PS_ERROR_INCORRECT_SIZE
},
{
 "This is dummy for index9", 0, 0
},
{
 "Call get api with invalid data len and offset zero", VAL_PS_GET, PSA_PS_ERROR_INCORRECT_SIZE
},
{
 "This is dummy for index11", 0, 0
},
{
 "Remove the storage entity ", VAL_PS_REMOVE, PSA_PS_SUCCESS
},
};
#endif /* _TEST_S008_PS_DATA_TESTS_H_ */
