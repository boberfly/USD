//
// Copyright 2023 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* ** This file is generated by a script.  Do not edit directly.  Edit     ** */
/* ** defs.py or the (*)Schema.template.h files to make changes.           ** */
/* ************************************************************************** */

#ifndef PXR_IMAGING_HD_NURBS_PATCH_SCHEMA_H
#define PXR_IMAGING_HD_NURBS_PATCH_SCHEMA_H

#include "pxr/imaging/hd/api.h"

#include "pxr/imaging/hd/nurbsPatchTrimCurveSchema.h"


PXR_NAMESPACE_OPEN_SCOPE

//-----------------------------------------------------------------------------

#define HDNURBSPATCH_SCHEMA_TOKENS \
    (nurbsPatch) \
    (uVertexCount) \
    (vVertexCount) \
    (uOrder) \
    (vOrder) \
    (uKnots) \
    (vKnots) \
    (uForm) \
    (vForm) \
    (uRange) \
    (vRange) \
    (trimCurve) \
    (orientation) \
    (doubleSided) \
    (open) \
    (closed) \
    (periodic) \
    (leftHanded) \
    (rightHanded) \

TF_DECLARE_PUBLIC_TOKENS(HdNurbsPatchSchemaTokens, HD_API,
    HDNURBSPATCH_SCHEMA_TOKENS);

//-----------------------------------------------------------------------------

class HdNurbsPatchSchema : public HdSchema
{
public:
    HdNurbsPatchSchema(HdContainerDataSourceHandle container)
    : HdSchema(container) {}

    //ACCESSORS

    HD_API
    HdIntDataSourceHandle GetUVertexCount();
    HD_API
    HdIntDataSourceHandle GetVVertexCount();
    HD_API
    HdIntDataSourceHandle GetUOrder();
    HD_API
    HdIntDataSourceHandle GetVOrder();
    HD_API
    HdDoubleArrayDataSourceHandle GetUKnots();
    HD_API
    HdDoubleArrayDataSourceHandle GetVKnots();
    HD_API
    HdTokenDataSourceHandle GetUForm();
    HD_API
    HdTokenDataSourceHandle GetVForm();
    HD_API
    HdVec2dDataSourceHandle GetURange();
    HD_API
    HdVec2dDataSourceHandle GetVRange();
    HD_API
    HdNurbsPatchTrimCurveSchema GetTrimCurve();
    HD_API
    HdTokenDataSourceHandle GetOrientation();
    HD_API
    HdBoolDataSourceHandle GetDoubleSided();

    // RETRIEVING AND CONSTRUCTING

    /// Builds a container data source which includes the provided child data
    /// sources. Parameters with nullptr values are excluded. This is a
    /// low-level interface. For cases in which it's desired to define
    /// the container with a sparse set of child fields, the Builder class
    /// is often more convenient and readable.
    HD_API
    static HdContainerDataSourceHandle
    BuildRetained(
        const HdIntDataSourceHandle &uVertexCount,
        const HdIntDataSourceHandle &vVertexCount,
        const HdIntDataSourceHandle &uOrder,
        const HdIntDataSourceHandle &vOrder,
        const HdDoubleArrayDataSourceHandle &uKnots,
        const HdDoubleArrayDataSourceHandle &vKnots,
        const HdTokenDataSourceHandle &uForm,
        const HdTokenDataSourceHandle &vForm,
        const HdVec2dDataSourceHandle &uRange,
        const HdVec2dDataSourceHandle &vRange,
        const HdContainerDataSourceHandle &trimCurve,
        const HdTokenDataSourceHandle &orientation,
        const HdBoolDataSourceHandle &doubleSided
    );

    /// \class HdNurbsPatchSchema::Builder
    /// 
    /// Utility class for setting sparse sets of child data source fields to be
    /// filled as arguments into BuildRetained. Because all setter methods
    /// return a reference to the instance, this can be used in the "builder
    /// pattern" form.
    class Builder
    {
    public:
        HD_API
        Builder &SetUVertexCount(
            const HdIntDataSourceHandle &uVertexCount);
        HD_API
        Builder &SetVVertexCount(
            const HdIntDataSourceHandle &vVertexCount);
        HD_API
        Builder &SetUOrder(
            const HdIntDataSourceHandle &uOrder);
        HD_API
        Builder &SetVOrder(
            const HdIntDataSourceHandle &vOrder);
        HD_API
        Builder &SetUKnots(
            const HdDoubleArrayDataSourceHandle &uKnots);
        HD_API
        Builder &SetVKnots(
            const HdDoubleArrayDataSourceHandle &vKnots);
        HD_API
        Builder &SetUForm(
            const HdTokenDataSourceHandle &uForm);
        HD_API
        Builder &SetVForm(
            const HdTokenDataSourceHandle &vForm);
        HD_API
        Builder &SetURange(
            const HdVec2dDataSourceHandle &uRange);
        HD_API
        Builder &SetVRange(
            const HdVec2dDataSourceHandle &vRange);
        HD_API
        Builder &SetTrimCurve(
            const HdContainerDataSourceHandle &trimCurve);
        HD_API
        Builder &SetOrientation(
            const HdTokenDataSourceHandle &orientation);
        HD_API
        Builder &SetDoubleSided(
            const HdBoolDataSourceHandle &doubleSided);

        /// Returns a container data source containing the members set thus far.
        HD_API
        HdContainerDataSourceHandle Build();

    private:
        HdIntDataSourceHandle _uVertexCount;
        HdIntDataSourceHandle _vVertexCount;
        HdIntDataSourceHandle _uOrder;
        HdIntDataSourceHandle _vOrder;
        HdDoubleArrayDataSourceHandle _uKnots;
        HdDoubleArrayDataSourceHandle _vKnots;
        HdTokenDataSourceHandle _uForm;
        HdTokenDataSourceHandle _vForm;
        HdVec2dDataSourceHandle _uRange;
        HdVec2dDataSourceHandle _vRange;
        HdContainerDataSourceHandle _trimCurve;
        HdTokenDataSourceHandle _orientation;
        HdBoolDataSourceHandle _doubleSided;
    };

    /// Retrieves a container data source with the schema's default name token
    /// "nurbsPatch" from the parent container and constructs a
    /// HdNurbsPatchSchema instance.
    /// Because the requested container data source may not exist, the result
    /// should be checked with IsDefined() or a bool comparison before use.
    HD_API
    static HdNurbsPatchSchema GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer);

    /// Returns a token where the container representing this schema is found in
    /// a container by default.
    HD_API
    static const TfToken &GetSchemaToken();

    /// Returns an HdDataSourceLocator (relative to the prim-level data source)
    /// where the container representing this schema is found by default.
    HD_API
    static const HdDataSourceLocator &GetDefaultLocator();

    /// Returns token data source for use as form value.
    /// Values of...
    /// - HdNurbsPatchSchemaTokens->open
    /// - HdNurbsPatchSchemaTokens->closed
    /// - HdNurbsPatchSchemaTokens->periodic
    ///     ...will be stored statically and reused for future calls.
    HD_API
    static HdTokenDataSourceHandle BuildFormDataSource(
        const TfToken &form);

};

PXR_NAMESPACE_CLOSE_SCOPE

#endif