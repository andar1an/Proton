/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    w_RenderModel_t_0912 **ppRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadRenderModel_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel_params
{
    void *linux_side;
    w_RenderModel_t_0912 *pRenderModel;
};
extern void cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel( struct cppIVRRenderModels_IVRRenderModels_006_FreeRenderModel_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    w_RenderModel_TextureMap_t_1237 **ppTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTexture_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_FreeTexture_params
{
    void *linux_side;
    w_RenderModel_TextureMap_t_1237 *pTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_006_FreeTexture( struct cppIVRRenderModels_IVRRenderModels_006_FreeTexture_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pD3D11Device;
    void **ppD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadTextureD3D11_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t textureId;
    void *pDstTexture;
};
extern void cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async( struct cppIVRRenderModels_IVRRenderModels_006_LoadIntoTextureD3D11_Async_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11_params
{
    void *linux_side;
    void *pD3D11Texture2D;
};
extern void cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11( struct cppIVRRenderModels_IVRRenderModels_006_FreeTextureD3D11_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t unRenderModelIndex;
    char *pchRenderModelName;
    uint32_t unRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentCount_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentCount( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentCount_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    uint32_t unComponentIndex;
    char *pchComponentName;
    uint32_t unComponentNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentName_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentButtonMask_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    char *pchComponentRenderModelName;
    uint32_t unComponentRenderModelNameLen;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentRenderModelName_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    uint64_t devicePath;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentStateForDevicePath_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetComponentState_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
    const w_VRControllerState001_t *pControllerState;
    const RenderModel_ControllerMode_State_t *pState;
    RenderModel_ComponentState_t *pComponentState;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetComponentState( struct cppIVRRenderModels_IVRRenderModels_006_GetComponentState_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params
{
    void *linux_side;
    bool _ret;
    const char *pchRenderModelName;
    const char *pchComponentName;
};
extern void cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent( struct cppIVRRenderModels_IVRRenderModels_006_RenderModelHasComponent_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchThumbnailURL;
    uint32_t unThumbnailURLLen;
    uint32_t *peError;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelThumbnailURL_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchRenderModelName;
    char *pchOriginalPath;
    uint32_t unOriginalPathLen;
    uint32_t *peError;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelOriginalPath_params *params );

struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params
{
    void *linux_side;
    const char *_ret;
    uint32_t error;
};
extern void cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum( struct cppIVRRenderModels_IVRRenderModels_006_GetRenderModelErrorNameFromEnum_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
