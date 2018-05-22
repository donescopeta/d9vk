#include "dxgi_factory.h"
#include "dxgi_swapchain.h"

namespace dxvk {
  
  DxgiFactory::DxgiFactory()
  : m_instance(new DxvkInstance()),
    m_adapters(m_instance->enumAdapters()) {
    for (const auto& adapter : m_adapters)
      adapter->logAdapterInfo();
  }
  
  
  DxgiFactory::~DxgiFactory() {
    
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::QueryInterface(REFIID riid, void** ppvObject) {
    *ppvObject = nullptr;
    
    if (riid == __uuidof(IUnknown)
     || riid == __uuidof(IDXGIObject)
     || riid == __uuidof(IDXGIFactory)
     || riid == __uuidof(IDXGIFactory1)
     || riid == __uuidof(IDXGIFactory2)) {
      *ppvObject = ref(this);
      return S_OK;
    }
    
    Logger::warn("DxgiFactory::QueryInterface: Unknown interface query");
    Logger::warn(str::format(riid));
    return E_NOINTERFACE;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::GetParent(REFIID riid, void** ppParent) {
    InitReturnPtr(ppParent);
    
    Logger::warn("DxgiFactory::GetParent: Unknown interface query");
    return E_NOINTERFACE;
  }
  
  
  BOOL STDMETHODCALLTYPE DxgiFactory::IsWindowedStereoEnabled() {
    // We don't support Stereo 3D at the moment
    return FALSE;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::CreateSoftwareAdapter(
          HMODULE         Module,
          IDXGIAdapter**  ppAdapter) {
    InitReturnPtr(ppAdapter);
    
    if (ppAdapter == nullptr)
      return DXGI_ERROR_INVALID_CALL;
    
    Logger::err("DXGI: CreateSoftwareAdapter: Software adapters not supported");
    return DXGI_ERROR_UNSUPPORTED;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::CreateSwapChain(
          IUnknown*             pDevice,
          DXGI_SWAP_CHAIN_DESC* pDesc,
          IDXGISwapChain**      ppSwapChain) {
    InitReturnPtr(ppSwapChain);
    
    if (ppSwapChain == nullptr || pDesc == nullptr || pDevice == NULL)
      return DXGI_ERROR_INVALID_CALL;
    
    if (pDesc->OutputWindow == nullptr)
      return DXGI_ERROR_INVALID_CALL;
    
    try {
      *ppSwapChain = ref(new DxgiSwapChain(this, pDevice, pDesc));
      return S_OK;
    } catch (const DxvkError& e) {
      Logger::err(e.message());
      return E_FAIL;
    }
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::CreateSwapChainForHwnd(
          IUnknown*             pDevice,
          HWND                  hWnd,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
    const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
          IDXGIOutput*          pRestrictToOutput,
          IDXGISwapChain1**     ppSwapChain) {
    InitReturnPtr(ppSwapChain);
    
    Logger::err("DxgiFactory::CreateSwapChainForHwnd: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::CreateSwapChainForCoreWindow(
          IUnknown*             pDevice,
          IUnknown*             pWindow,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
          IDXGIOutput*          pRestrictToOutput,
          IDXGISwapChain1**     ppSwapChain) {
    InitReturnPtr(ppSwapChain);
    
    Logger::err("DxgiFactory::CreateSwapChainForCoreWindow: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::CreateSwapChainForComposition(
          IUnknown*             pDevice,
    const DXGI_SWAP_CHAIN_DESC1* pDesc,
          IDXGIOutput*          pRestrictToOutput,
          IDXGISwapChain1**     ppSwapChain) {
    InitReturnPtr(ppSwapChain);
    
    Logger::err("DxgiFactory::CreateSwapChainForComposition: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::EnumAdapters(
          UINT            Adapter,
          IDXGIAdapter**  ppAdapter) {
    InitReturnPtr(ppAdapter);
    
    if (ppAdapter == nullptr)
      return DXGI_ERROR_INVALID_CALL;
    
    IDXGIAdapter1* handle = nullptr;
    HRESULT hr = this->EnumAdapters1(Adapter, &handle);
    *ppAdapter = handle;
    return hr;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::EnumAdapters1(
          UINT            Adapter,
          IDXGIAdapter1** ppAdapter) {
    InitReturnPtr(ppAdapter);
    
    if (ppAdapter == nullptr)
      return DXGI_ERROR_INVALID_CALL;
    
    if (Adapter >= m_adapters.size())
      return DXGI_ERROR_NOT_FOUND;
    
    *ppAdapter = ref(new DxgiAdapter(
      this, m_adapters.at(Adapter)));
    return S_OK;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::GetWindowAssociation(HWND *pWindowHandle) {
    if (pWindowHandle == nullptr)
      return DXGI_ERROR_INVALID_CALL;
    
    *pWindowHandle = m_associatedWindow;
    return S_OK;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::GetSharedResourceAdapterLuid(
          HANDLE                hResource,
          LUID*                 pLuid) {
    Logger::err("DxgiFactory::GetSharedResourceAdapterLuid: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::MakeWindowAssociation(HWND WindowHandle, UINT Flags) {
    Logger::warn("DXGI: MakeWindowAssociation: Ignoring flags");
    m_associatedWindow = WindowHandle;
    return S_OK;
  }
  
  
  BOOL STDMETHODCALLTYPE DxgiFactory::IsCurrent() {
    Logger::warn("DxgiFactory::IsCurrent: Stub");
    return TRUE;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::RegisterOcclusionStatusWindow(
          HWND                  WindowHandle,
          UINT                  wMsg,
          DWORD*                pdwCookie) {
    Logger::err("DxgiFactory::RegisterOcclusionStatusWindow: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::RegisterStereoStatusEvent(
          HANDLE                hEvent,
          DWORD*                pdwCookie) {
    Logger::err("DxgiFactory::RegisterStereoStatusEvent: Not implemented");
    return E_NOTIMPL;
  }
  
  
  HRESULT STDMETHODCALLTYPE DxgiFactory::RegisterStereoStatusWindow(
          HWND                  WindowHandle,
          UINT                  wMsg,
          DWORD*                pdwCookie) {
    Logger::err("DxgiFactory::RegisterStereoStatusWindow: Not implemented");
    return E_NOTIMPL;
  }
  

  HRESULT STDMETHODCALLTYPE DxgiFactory::RegisterOcclusionStatusEvent(
          HANDLE                hEvent,
          DWORD*                pdwCookie) {
    Logger::err("DxgiFactory::RegisterOcclusionStatusEvent: Not implemented");
    return E_NOTIMPL;
  }
  

  void STDMETHODCALLTYPE DxgiFactory::UnregisterStereoStatus(
          DWORD                 dwCookie) {
    Logger::err("DxgiFactory::UnregisterStereoStatus: Not implemented");
  }
  
  
  void STDMETHODCALLTYPE DxgiFactory::UnregisterOcclusionStatus(
          DWORD                 dwCookie) {
    Logger::err("DxgiFactory::UnregisterOcclusionStatus: Not implemented");
  }
  
}
