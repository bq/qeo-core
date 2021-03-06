/*
 * Copyright (c) 2016 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#include "StateWithUnbArrayOfStructKeyIsUnbArray.h"

const DDS_TypeSupport_meta org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "org.qeo.test.StateWithUnbArrayOfStructKeyIsUnbArray", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_KEY|TSMFLAG_MUTABLE, .nelem = 8, .size = sizeof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t) },
    { .tc = CDR_TYPECODE_BOOLEAN, .name = "MyBoolean", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyBoolean) },
    { .tc = CDR_TYPECODE_OCTET, .name = "MyByte", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyByte) },
    { .tc = CDR_TYPECODE_SHORT, .name = "MyInt16", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyInt16) },
    { .tc = CDR_TYPECODE_LONG, .name = "MyInt32", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyInt32) },
    { .tc = CDR_TYPECODE_LONGLONG, .name = "MyInt64", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyInt64) },
    { .tc = CDR_TYPECODE_FLOAT, .name = "MyFloat32", .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyFloat32) },
    { .tc = CDR_TYPECODE_CSTRING, .name = "MyString", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyString), .size = 0 },
    { .tc = CDR_TYPECODE_SEQUENCE, .name = "MyUnbArrayOfStructWithPrimitives", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_KEY|TSMFLAG_MUTABLE, .offset = offsetof(org_qeo_test_StateWithUnbArrayOfStructKeyIsUnbArray_t, MyUnbArrayOfStructWithPrimitives) },
    { .tc = CDR_TYPECODE_TYPEREF, .tsm = org_qeo_test_MyStructWithPrimitives_type },
};

