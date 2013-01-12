/*** Autogenerated by WIDL 1.4.1 from winsxs.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __winsxs_h__
#define __winsxs_h__

/* Forward declarations */

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oleidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __IAssemblyCache_FWD_DEFINED__
#define __IAssemblyCache_FWD_DEFINED__
typedef interface IAssemblyCache IAssemblyCache;
#endif

#ifndef __IAssemblyCacheItem_FWD_DEFINED__
#define __IAssemblyCacheItem_FWD_DEFINED__
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
#endif

typedef struct _FUSION_INSTALL_REFERENCE_ {
    DWORD cbSize;
    DWORD dwFlags;
    GUID guidScheme;
    LPCWSTR szIdentifier;
    LPCWSTR szNonCannonicalData;
} FUSION_INSTALL_REFERENCE;
typedef struct _FUSION_INSTALL_REFERENCE_ *LPFUSION_INSTALL_REFERENCE;
typedef struct _ASSEMBLY_INFO {
    ULONG cbAssemblyInfo;
    DWORD dwAssemblyFlags;
    ULARGE_INTEGER uliAssemblySizeInKB;
    LPWSTR pszCurrentAssemblyPathBuf;
    ULONG cchBuf;
} ASSEMBLY_INFO;
typedef const struct _FUSION_INSTALL_REFERENCE_ *LPCFUSION_INSTALL_REFERENCE;
/*****************************************************************************
 * IAssemblyCache interface
 */
#ifndef __IAssemblyCache_INTERFACE_DEFINED__
#define __IAssemblyCache_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e707dcde-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCache : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE UninstallAssembly(
        DWORD flags,
        LPCWSTR name,
        LPCFUSION_INSTALL_REFERENCE ref,
        ULONG *disp) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryAssemblyInfo(
        DWORD flags,
        LPCWSTR name,
        ASSEMBLY_INFO *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateAssemblyCacheItem(
        DWORD flags,
        PVOID reserved,
        IAssemblyCacheItem **item,
        LPCWSTR name) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reserved(
        IUnknown **reserved) = 0;

    virtual HRESULT STDMETHODCALLTYPE InstallAssembly(
        DWORD flags,
        LPCWSTR path,
        LPCFUSION_INSTALL_REFERENCE ref) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCache, 0xe707dcde, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCache* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCache* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCache* This);

    /*** IAssemblyCache methods ***/
    HRESULT (STDMETHODCALLTYPE *UninstallAssembly)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR name,
        LPCFUSION_INSTALL_REFERENCE ref,
        ULONG *disp);

    HRESULT (STDMETHODCALLTYPE *QueryAssemblyInfo)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR name,
        ASSEMBLY_INFO *info);

    HRESULT (STDMETHODCALLTYPE *CreateAssemblyCacheItem)(
        IAssemblyCache* This,
        DWORD flags,
        PVOID reserved,
        IAssemblyCacheItem **item,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *Reserved)(
        IAssemblyCache* This,
        IUnknown **reserved);

    HRESULT (STDMETHODCALLTYPE *InstallAssembly)(
        IAssemblyCache* This,
        DWORD flags,
        LPCWSTR path,
        LPCFUSION_INSTALL_REFERENCE ref);

    END_INTERFACE
} IAssemblyCacheVtbl;
interface IAssemblyCache {
    CONST_VTBL IAssemblyCacheVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAssemblyCache_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCache_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCache_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCache methods ***/
#define IAssemblyCache_UninstallAssembly(This,flags,name,ref,disp) (This)->lpVtbl->UninstallAssembly(This,flags,name,ref,disp)
#define IAssemblyCache_QueryAssemblyInfo(This,flags,name,info) (This)->lpVtbl->QueryAssemblyInfo(This,flags,name,info)
#define IAssemblyCache_CreateAssemblyCacheItem(This,flags,reserved,item,name) (This)->lpVtbl->CreateAssemblyCacheItem(This,flags,reserved,item,name)
#define IAssemblyCache_Reserved(This,reserved) (This)->lpVtbl->Reserved(This,reserved)
#define IAssemblyCache_InstallAssembly(This,flags,path,ref) (This)->lpVtbl->InstallAssembly(This,flags,path,ref)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAssemblyCache_UninstallAssembly_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR name,
    LPCFUSION_INSTALL_REFERENCE ref,
    ULONG *disp);
void __RPC_STUB IAssemblyCache_UninstallAssembly_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_QueryAssemblyInfo_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR name,
    ASSEMBLY_INFO *info);
void __RPC_STUB IAssemblyCache_QueryAssemblyInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_CreateAssemblyCacheItem_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    PVOID reserved,
    IAssemblyCacheItem **item,
    LPCWSTR name);
void __RPC_STUB IAssemblyCache_CreateAssemblyCacheItem_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_Reserved_Proxy(
    IAssemblyCache* This,
    IUnknown **reserved);
void __RPC_STUB IAssemblyCache_Reserved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCache_InstallAssembly_Proxy(
    IAssemblyCache* This,
    DWORD flags,
    LPCWSTR path,
    LPCFUSION_INSTALL_REFERENCE ref);
void __RPC_STUB IAssemblyCache_InstallAssembly_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAssemblyCache_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAssemblyCacheItem interface
 */
#ifndef __IAssemblyCacheItem_INTERFACE_DEFINED__
#define __IAssemblyCacheItem_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9e3aaeb4-d1cd-11d2-bab9-00c04f8eceae")
IAssemblyCacheItem : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateStream(
        DWORD flags,
        LPCWSTR name,
        DWORD format,
        DWORD format_flags,
        IStream **stream,
        ULARGE_INTEGER *max_size) = 0;

    virtual HRESULT STDMETHODCALLTYPE Commit(
        DWORD flags,
        ULONG *disp) = 0;

    virtual HRESULT STDMETHODCALLTYPE AbortItem(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAssemblyCacheItem, 0x9e3aaeb4, 0xd1cd, 0x11d2, 0xba,0xb9, 0x00,0xc0,0x4f,0x8e,0xce,0xae)
#endif
#else
typedef struct IAssemblyCacheItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAssemblyCacheItem* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAssemblyCacheItem* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAssemblyCacheItem* This);

    /*** IAssemblyCacheItem methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IAssemblyCacheItem* This,
        DWORD flags,
        LPCWSTR name,
        DWORD format,
        DWORD format_flags,
        IStream **stream,
        ULARGE_INTEGER *max_size);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IAssemblyCacheItem* This,
        DWORD flags,
        ULONG *disp);

    HRESULT (STDMETHODCALLTYPE *AbortItem)(
        IAssemblyCacheItem* This);

    END_INTERFACE
} IAssemblyCacheItemVtbl;
interface IAssemblyCacheItem {
    CONST_VTBL IAssemblyCacheItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAssemblyCacheItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAssemblyCacheItem_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAssemblyCacheItem_Release(This) (This)->lpVtbl->Release(This)
/*** IAssemblyCacheItem methods ***/
#define IAssemblyCacheItem_CreateStream(This,flags,name,format,format_flags,stream,max_size) (This)->lpVtbl->CreateStream(This,flags,name,format,format_flags,stream,max_size)
#define IAssemblyCacheItem_Commit(This,flags,disp) (This)->lpVtbl->Commit(This,flags,disp)
#define IAssemblyCacheItem_AbortItem(This) (This)->lpVtbl->AbortItem(This)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_CreateStream_Proxy(
    IAssemblyCacheItem* This,
    DWORD flags,
    LPCWSTR name,
    DWORD format,
    DWORD format_flags,
    IStream **stream,
    ULARGE_INTEGER *max_size);
void __RPC_STUB IAssemblyCacheItem_CreateStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_Commit_Proxy(
    IAssemblyCacheItem* This,
    DWORD flags,
    ULONG *disp);
void __RPC_STUB IAssemblyCacheItem_Commit_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAssemblyCacheItem_AbortItem_Proxy(
    IAssemblyCacheItem* This);
void __RPC_STUB IAssemblyCacheItem_AbortItem_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAssemblyCacheItem_INTERFACE_DEFINED__ */

HRESULT WINAPI CreateAssemblyCache(IAssemblyCache**,DWORD);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __winsxs_h__ */