/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRCompositor_IVRCompositor_015_SetTrackingSpace_params
{
    void *linux_side;
    uint32_t eOrigin;
};
extern void cppIVRCompositor_IVRCompositor_015_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_015_SetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetTrackingSpace_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_015_GetTrackingSpace_params *params );

struct cppIVRCompositor_IVRCompositor_015_WaitGetPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_015_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_015_WaitGetPoses_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetLastPoses_params
{
    void *linux_side;
    uint32_t _ret;
    TrackedDevicePose_t *pRenderPoseArray;
    uint32_t unRenderPoseArrayCount;
    TrackedDevicePose_t *pGamePoseArray;
    uint32_t unGamePoseArrayCount;
};
extern void cppIVRCompositor_IVRCompositor_015_GetLastPoses( struct cppIVRCompositor_IVRCompositor_015_GetLastPoses_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unDeviceIndex;
    TrackedDevicePose_t *pOutputPose;
    TrackedDevicePose_t *pOutputGamePose;
};
extern void cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex( struct cppIVRCompositor_IVRCompositor_015_GetLastPoseForTrackedDeviceIndex_params *params );

struct cppIVRCompositor_IVRCompositor_015_Submit_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    const w_Texture_t *pTexture;
    const VRTextureBounds_t *pBounds;
    uint32_t nSubmitFlags;
};
extern void cppIVRCompositor_IVRCompositor_015_Submit( struct cppIVRCompositor_IVRCompositor_015_Submit_params *params );

struct cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_015_ClearLastSubmittedFrame_params *params );

struct cppIVRCompositor_IVRCompositor_015_PostPresentHandoff_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_015_PostPresentHandoff_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetFrameTiming_params
{
    void *linux_side;
    bool _ret;
    w_Compositor_FrameTiming_0920 *pTiming;
    uint32_t unFramesAgo;
};
extern void cppIVRCompositor_IVRCompositor_015_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_015_GetFrameTiming_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params
{
    void *linux_side;
    float _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_015_GetFrameTimeRemaining_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetCumulativeStats_params
{
    void *linux_side;
    Compositor_CumulativeStats_100 *pStats;
    uint32_t nStatsSizeInBytes;
};
extern void cppIVRCompositor_IVRCompositor_015_GetCumulativeStats( struct cppIVRCompositor_IVRCompositor_015_GetCumulativeStats_params *params );

struct cppIVRCompositor_IVRCompositor_015_FadeToColor_params
{
    void *linux_side;
    float fSeconds;
    float fRed;
    float fGreen;
    float fBlue;
    float fAlpha;
    bool bBackground;
};
extern void cppIVRCompositor_IVRCompositor_015_FadeToColor( struct cppIVRCompositor_IVRCompositor_015_FadeToColor_params *params );

struct cppIVRCompositor_IVRCompositor_015_FadeGrid_params
{
    void *linux_side;
    float fSeconds;
    bool bFadeIn;
};
extern void cppIVRCompositor_IVRCompositor_015_FadeGrid( struct cppIVRCompositor_IVRCompositor_015_FadeGrid_params *params );

struct cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride_params
{
    void *linux_side;
    uint32_t _ret;
    const w_Texture_t *pTextures;
    uint32_t unTextureCount;
};
extern void cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_015_SetSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_015_ClearSkyboxOverride_params *params );

struct cppIVRCompositor_IVRCompositor_015_CompositorBringToFront_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_015_CompositorBringToFront_params *params );

struct cppIVRCompositor_IVRCompositor_015_CompositorGoToBack_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_015_CompositorGoToBack_params *params );

struct cppIVRCompositor_IVRCompositor_015_CompositorQuit_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_CompositorQuit( struct cppIVRCompositor_IVRCompositor_015_CompositorQuit_params *params );

struct cppIVRCompositor_IVRCompositor_015_IsFullscreen_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_IsFullscreen( struct cppIVRCompositor_IVRCompositor_015_IsFullscreen_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_015_GetCurrentSceneFocusProcess_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_015_GetLastFrameRenderer_params *params );

struct cppIVRCompositor_IVRCompositor_015_CanRenderScene_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_CanRenderScene( struct cppIVRCompositor_IVRCompositor_015_CanRenderScene_params *params );

struct cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_015_ShowMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_015_HideMirrorWindow_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_015_HideMirrorWindow_params *params );

struct cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_015_IsMirrorWindowVisible_params *params );

struct cppIVRCompositor_IVRCompositor_015_CompositorDumpImages_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_015_CompositorDumpImages_params *params );

struct cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params
{
    void *linux_side;
    bool _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources( struct cppIVRCompositor_IVRCompositor_015_ShouldAppRenderWithLowResources_params *params );

struct cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params
{
    void *linux_side;
    bool bOverride;
};
extern void cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn( struct cppIVRCompositor_IVRCompositor_015_ForceInterleavedReprojectionOn_params *params );

struct cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess_params
{
    void *linux_side;
};
extern void cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess( struct cppIVRCompositor_IVRCompositor_015_ForceReconnectProcess_params *params );

struct cppIVRCompositor_IVRCompositor_015_SuspendRendering_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppIVRCompositor_IVRCompositor_015_SuspendRendering( struct cppIVRCompositor_IVRCompositor_015_SuspendRendering_params *params );

struct cppIVRCompositor_IVRCompositor_015_RequestScreenshot_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t type;
    const char *pchDestinationFileName;
    const char *pchVRDestinationFileName;
};
extern void cppIVRCompositor_IVRCompositor_015_RequestScreenshot( struct cppIVRCompositor_IVRCompositor_015_RequestScreenshot_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType( struct cppIVRCompositor_IVRCompositor_015_GetCurrentScreenshotType_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    void *pD3D11DeviceOrResource;
    void **ppD3D11ShaderResourceView;
};
extern void cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11( struct cppIVRCompositor_IVRCompositor_015_GetMirrorTextureD3D11_params *params );

struct cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eEye;
    uint32_t *pglTextureId;
    void **pglSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL( struct cppIVRCompositor_IVRCompositor_015_GetMirrorTextureGL_params *params );

struct cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params
{
    void *linux_side;
    bool _ret;
    uint32_t glTextureId;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture( struct cppIVRCompositor_IVRCompositor_015_ReleaseSharedGLTexture_params *params );

struct cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_015_LockGLSharedTextureForAccess_params *params );

struct cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params
{
    void *linux_side;
    void *glSharedTextureHandle;
};
extern void cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess( struct cppIVRCompositor_IVRCompositor_015_UnlockGLSharedTextureForAccess_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
