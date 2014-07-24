/*
 * Copyright (c) 2014 - Qeo LLC
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

/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSECURITY_UTIL_H
#define _MOCKSECURITY_UTIL_H

#include "unity.h"
#include "security_util.h"

void Mocksecurity_util_Init(void);
void Mocksecurity_util_Destroy(void);
void Mocksecurity_util_Verify(void);




#define security_util_configure_ssl_ctx_Ignore() security_util_configure_ssl_ctx_CMockIgnore(__LINE__)
void security_util_configure_ssl_ctx_CMockIgnore(UNITY_LINE_TYPE cmock_line);
#define security_util_configure_ssl_ctx_Expect(ssl_ctx) security_util_configure_ssl_ctx_CMockExpect(__LINE__, ssl_ctx)
void security_util_configure_ssl_ctx_CMockExpect(UNITY_LINE_TYPE cmock_line, SSL_CTX* ssl_ctx);
typedef void (* CMOCK_security_util_configure_ssl_ctx_CALLBACK)(SSL_CTX* ssl_ctx, int cmock_num_calls);
void security_util_configure_ssl_ctx_StubWithCallback(CMOCK_security_util_configure_ssl_ctx_CALLBACK Callback);
#define dump_openssl_error_stack_Ignore() dump_openssl_error_stack_CMockIgnore(__LINE__)
void dump_openssl_error_stack_CMockIgnore(UNITY_LINE_TYPE cmock_line);
#define dump_openssl_error_stack_Expect(msg) dump_openssl_error_stack_CMockExpect(__LINE__, msg)
void dump_openssl_error_stack_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* msg);
typedef void (* CMOCK_dump_openssl_error_stack_CALLBACK)(const char* msg, int cmock_num_calls);
void dump_openssl_error_stack_StubWithCallback(CMOCK_dump_openssl_error_stack_CALLBACK Callback);

#endif