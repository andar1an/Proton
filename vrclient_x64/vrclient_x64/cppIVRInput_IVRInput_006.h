/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRInput_IVRInput_006_SetActionManifestPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionManifestPath;
};
extern void cppIVRInput_IVRInput_006_SetActionManifestPath( struct cppIVRInput_IVRInput_006_SetActionManifestPath_params *params );

struct cppIVRInput_IVRInput_006_GetActionSetHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionSetName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetActionSetHandle( struct cppIVRInput_IVRInput_006_GetActionSetHandle_params *params );

struct cppIVRInput_IVRInput_006_GetActionHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchActionName;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetActionHandle( struct cppIVRInput_IVRInput_006_GetActionHandle_params *params );

struct cppIVRInput_IVRInput_006_GetInputSourceHandle_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchInputSourcePath;
    uint64_t *pHandle;
};
extern void cppIVRInput_IVRInput_006_GetInputSourceHandle( struct cppIVRInput_IVRInput_006_GetInputSourceHandle_params *params );

struct cppIVRInput_IVRInput_006_UpdateActionState_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
};
extern void cppIVRInput_IVRInput_006_UpdateActionState( struct cppIVRInput_IVRInput_006_UpdateActionState_params *params );

struct cppIVRInput_IVRInput_006_GetDigitalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputDigitalActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetDigitalActionData( struct cppIVRInput_IVRInput_006_GetDigitalActionData_params *params );

struct cppIVRInput_IVRInput_006_GetAnalogActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputAnalogActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetAnalogActionData( struct cppIVRInput_IVRInput_006_GetAnalogActionData_params *params );

struct cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    float fPredictedSecondsFromNow;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params *params );

struct cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eOrigin;
    w_InputPoseActionData_t *pActionData;
    uint32_t unActionDataSize;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalActionData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    w_InputSkeletalActionData_t_113b *pActionData;
    uint32_t unActionDataSize;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalActionData( struct cppIVRInput_IVRInput_006_GetSkeletalActionData_params *params );

struct cppIVRInput_IVRInput_006_GetBoneCount_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pBoneCount;
};
extern void cppIVRInput_IVRInput_006_GetBoneCount( struct cppIVRInput_IVRInput_006_GetBoneCount_params *params );

struct cppIVRInput_IVRInput_006_GetBoneHierarchy_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t *pParentIndices;
    uint32_t unIndexArayCount;
};
extern void cppIVRInput_IVRInput_006_GetBoneHierarchy( struct cppIVRInput_IVRInput_006_GetBoneHierarchy_params *params );

struct cppIVRInput_IVRInput_006_GetBoneName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    int32_t nBoneIndex;
    char *pchBoneName;
    uint32_t unNameBufferSize;
};
extern void cppIVRInput_IVRInput_006_GetBoneName( struct cppIVRInput_IVRInput_006_GetBoneName_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eReferencePose;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t *pSkeletalTrackingLevel;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eTransformSpace;
    uint32_t eMotionRange;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalBoneData( struct cppIVRInput_IVRInput_006_GetSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalSummaryData_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eSummaryType;
    VRSkeletalSummaryData_t *pSkeletalSummaryData;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_006_GetSkeletalSummaryData_params *params );

struct cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    uint32_t eMotionRange;
    void *pvCompressedData;
    uint32_t unCompressedSize;
    uint32_t *punRequiredCompressedSize;
};
extern void cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params *params );

struct cppIVRInput_IVRInput_006_DecompressSkeletalBoneData_params
{
    void *linux_side;
    uint32_t _ret;
    const void *pvCompressedBuffer;
    uint32_t unCompressedBufferSize;
    uint32_t eTransformSpace;
    VRBoneTransform_t *pTransformArray;
    uint32_t unTransformArrayCount;
};
extern void cppIVRInput_IVRInput_006_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_006_DecompressSkeletalBoneData_params *params );

struct cppIVRInput_IVRInput_006_TriggerHapticVibrationAction_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t action;
    float fStartSecondsFromNow;
    float fDurationSeconds;
    float fFrequency;
    float fAmplitude;
    uint64_t ulRestrictToDevice;
};
extern void cppIVRInput_IVRInput_006_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_006_TriggerHapticVibrationAction_params *params );

struct cppIVRInput_IVRInput_006_GetActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t digitalActionHandle;
    uint64_t *originsOut;
    uint32_t originOutCount;
};
extern void cppIVRInput_IVRInput_006_GetActionOrigins( struct cppIVRInput_IVRInput_006_GetActionOrigins_params *params );

struct cppIVRInput_IVRInput_006_GetOriginLocalizedName_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    char *pchNameArray;
    uint32_t unNameArraySize;
    int32_t unStringSectionsToInclude;
};
extern void cppIVRInput_IVRInput_006_GetOriginLocalizedName( struct cppIVRInput_IVRInput_006_GetOriginLocalizedName_params *params );

struct cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t origin;
    w_InputOriginInfo_t *pOriginInfo;
    uint32_t unOriginInfoSize;
};
extern void cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params *params );

struct cppIVRInput_IVRInput_006_ShowActionOrigins_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t actionSetHandle;
    uint64_t ulActionHandle;
};
extern void cppIVRInput_IVRInput_006_ShowActionOrigins( struct cppIVRInput_IVRInput_006_ShowActionOrigins_params *params );

struct cppIVRInput_IVRInput_006_ShowBindingsForActionSet_params
{
    void *linux_side;
    uint32_t _ret;
    VRActiveActionSet_t_1016 *pSets;
    uint32_t unSizeOfVRSelectedActionSet_t;
    uint32_t unSetCount;
    uint64_t originToHighlight;
};
extern void cppIVRInput_IVRInput_006_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_006_ShowBindingsForActionSet_params *params );

struct cppIVRInput_IVRInput_006_IsUsingLegacyInput_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRInput_IVRInput_006_IsUsingLegacyInput( struct cppIVRInput_IVRInput_006_IsUsingLegacyInput_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
