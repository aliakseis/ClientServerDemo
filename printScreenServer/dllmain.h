// dllmain.h : Declaration of module class.

class CprintScreenServerModule : public CAtlDllModuleT< CprintScreenServerModule >
{
public :
	DECLARE_LIBID(LIBID_printScreenServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PRINTSCREENSERVER, "{DD5E4C2A-CABC-4E16-9474-2EF890DFA525}")
};

extern class CprintScreenServerModule _AtlModule;
