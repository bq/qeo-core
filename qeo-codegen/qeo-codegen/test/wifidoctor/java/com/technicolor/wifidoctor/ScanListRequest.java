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

package com.technicolor.wifidoctor;

import org.qeo.QeoType;
import org.qeo.QeoType.Behavior;

/**
 * Trigger a new scan and publication of the new scan list. ScanList entries from a previous scan for this radio will be disposed as the new list is published.
 */
@QeoType(behavior = Behavior.EVENT)
public class ScanListRequest
{
    public int radio;

    /**
     * Default constructor.  This is used by Qeo to construct new objects.
     */
    public ScanListRequest()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final ScanListRequest myObj = (ScanListRequest) obj;
        if (radio != myObj.radio) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + radio;
        return result;
    }
}
