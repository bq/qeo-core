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

#import <Foundation/Foundation.h>
#import <Qeo/Qeo.h>

/**
 * This struct represents a state containing only primitive types.
 */
@interface org_qeo_test_StateWithPrimitivesKeyIsInt16 : QEOType

  @property (nonatomic) BOOL MyBoolean;
  @property (nonatomic) int8_t MyByte;
  /**
   * [Key]
   * This is a keyfield
   */
  @property (nonatomic) int16_t MyInt16;
  /**
   * This is not a keyfield
   */
  @property (nonatomic) int32_t MyInt32;
  @property (nonatomic) int64_t MyInt64;
  @property (nonatomic) float MyFloat32;
  @property (strong,nonatomic) NSString * MyString;

@end


