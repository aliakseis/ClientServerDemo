// PrintScreen.h : Declaration of the CPrintScreen

#pragma once
#include "resource.h"       // main symbols

#include "printScreenServer_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CPrintScreen

class ATL_NO_VTABLE CPrintScreen :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPrintScreen, &CLSID_PrintScreen>,
	public IDispatchImpl<IPrintScreen, &IID_IPrintScreen, &LIBID_printScreenServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CPrintScreen()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PRINTSCREEN)


BEGIN_COM_MAP(CPrintScreen)
	COM_INTERFACE_ENTRY(IPrintScreen)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

    STDMETHOD(Execute)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(PrintScreen), CPrintScreen)
