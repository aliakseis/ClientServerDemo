// PrintScreen.cpp : Implementation of CPrintScreen

#include "stdafx.h"
#include "PrintScreen.h"


// CPrintScreen


STDMETHODIMP CPrintScreen::Execute(void)
{
    // TODO: Add your implementation code here
    keybd_event(VK_SNAPSHOT, 1, 0, 0);

    return S_OK;
}
