//
// Copyright 2023 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "hdPrman/rileyGeometryPrototypeSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdPrmanRileyGeometryPrototypeSchemaTokens,
    HD_PRMAN_RILEY_GEOMETRY_PROTOTYPE_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdTokenDataSourceHandle
HdPrmanRileyGeometryPrototypeSchema::GetType()
#if HD_API_VERSION >= 66
                                            const
#else
                                                 
#endif
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdPrmanRileyGeometryPrototypeSchemaTokens->type);
}

HdPathDataSourceHandle
HdPrmanRileyGeometryPrototypeSchema::GetDisplacement()
#if HD_API_VERSION >= 66
                                            const
#else
                                                 
#endif
{
    return _GetTypedDataSource<HdPathDataSource>(
        HdPrmanRileyGeometryPrototypeSchemaTokens->displacement);
}

HdPrmanRileyPrimvarListSchema
HdPrmanRileyGeometryPrototypeSchema::GetPrimvars()
#if HD_API_VERSION >= 66
                                            const
#else
                                                 
#endif
{
    return HdPrmanRileyPrimvarListSchema(_GetTypedDataSource<HdContainerDataSource>(
        HdPrmanRileyGeometryPrototypeSchemaTokens->primvars));
}

/*static*/
HdContainerDataSourceHandle
HdPrmanRileyGeometryPrototypeSchema::BuildRetained(
        const HdTokenDataSourceHandle &type,
        const HdPathDataSourceHandle &displacement,
        const HdContainerDataSourceHandle &primvars
)
{
    TfToken _names[3];
    HdDataSourceBaseHandle _values[3];

    size_t _count = 0;

    if (type) {
        _names[_count] = HdPrmanRileyGeometryPrototypeSchemaTokens->type;
        _values[_count++] = type;
    }

    if (displacement) {
        _names[_count] = HdPrmanRileyGeometryPrototypeSchemaTokens->displacement;
        _values[_count++] = displacement;
    }

    if (primvars) {
        _names[_count] = HdPrmanRileyGeometryPrototypeSchemaTokens->primvars;
        _values[_count++] = primvars;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdPrmanRileyGeometryPrototypeSchema::Builder &
HdPrmanRileyGeometryPrototypeSchema::Builder::SetType(
    const HdTokenDataSourceHandle &type)
{
    _type = type;
    return *this;
}

HdPrmanRileyGeometryPrototypeSchema::Builder &
HdPrmanRileyGeometryPrototypeSchema::Builder::SetDisplacement(
    const HdPathDataSourceHandle &displacement)
{
    _displacement = displacement;
    return *this;
}

HdPrmanRileyGeometryPrototypeSchema::Builder &
HdPrmanRileyGeometryPrototypeSchema::Builder::SetPrimvars(
    const HdContainerDataSourceHandle &primvars)
{
    _primvars = primvars;
    return *this;
}

HdContainerDataSourceHandle
HdPrmanRileyGeometryPrototypeSchema::Builder::Build()
{
    return HdPrmanRileyGeometryPrototypeSchema::BuildRetained(
        _type,
        _displacement,
        _primvars
    );
}

/*static*/
HdPrmanRileyGeometryPrototypeSchema
HdPrmanRileyGeometryPrototypeSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdPrmanRileyGeometryPrototypeSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdPrmanRileyGeometryPrototypeSchemaTokens->RileyGeometryPrototype))
        : nullptr);
}

/*static*/
const TfToken &
HdPrmanRileyGeometryPrototypeSchema::GetSchemaToken()
{
    return HdPrmanRileyGeometryPrototypeSchemaTokens->RileyGeometryPrototype;
}

/*static*/
const HdDataSourceLocator &
HdPrmanRileyGeometryPrototypeSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(GetSchemaToken());
    return locator;
}

/* static */
const HdDataSourceLocator &
HdPrmanRileyGeometryPrototypeSchema::GetTypeLocator()
{
    static const HdDataSourceLocator locator =
        GetDefaultLocator().Append(
            HdPrmanRileyGeometryPrototypeSchemaTokens->type);
    return locator;
}

/* static */
const HdDataSourceLocator &
HdPrmanRileyGeometryPrototypeSchema::GetDisplacementLocator()
{
    static const HdDataSourceLocator locator =
        GetDefaultLocator().Append(
            HdPrmanRileyGeometryPrototypeSchemaTokens->displacement);
    return locator;
}

/* static */
const HdDataSourceLocator &
HdPrmanRileyGeometryPrototypeSchema::GetPrimvarsLocator()
{
    static const HdDataSourceLocator locator =
        GetDefaultLocator().Append(
            HdPrmanRileyGeometryPrototypeSchemaTokens->primvars);
    return locator;
} 

PXR_NAMESPACE_CLOSE_SCOPE