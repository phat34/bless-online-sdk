#pragma once

// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_Awesomium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Awesomium.AweSeqVar_HistoryResults
// 0x0010 (0x00E4 - 0x00D4)
class UAweSeqVar_HistoryResults : public USequenceVariable
{
public:
	TArray<struct FHistoryResult>                      HistoryResults;                                           // 0x00D4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqVar_HistoryResults");
		return ptr;
	}

};


// Class Awesomium.AweSeqVar_JSValues
// 0x0010 (0x00E4 - 0x00D4)
class UAweSeqVar_JSValues : public USequenceVariable
{
public:
	TArray<struct FJSValue>                            JSValues;                                                 // 0x00D4(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqVar_JSValues");
		return ptr;
	}

};


// Class Awesomium.AweWebViewComponent
// 0x0534 (0x0594 - 0x0060)
class UAweWebViewComponent : public UObject
{
public:
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x0060(0x0008) (Edit, Const)
	unsigned long                                      UpdateOnlyWhenDirty : 1;                                  // 0x0068(0x0004) (Edit, Const)
	unsigned long                                      IsFocused : 1;                                            // 0x0068(0x0004) (Const)
	unsigned long                                      ForceUpdate : 1;                                          // 0x0068(0x0004)
	unsigned long                                      IsShiftDown : 1;                                          // 0x0068(0x0004) (Const)
	unsigned long                                      IsCtrlDown : 1;                                           // 0x0068(0x0004) (Const)
	unsigned long                                      IsAltDown : 1;                                            // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeTitle : 1;                           // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeAddressBar : 1;                      // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeTooltip : 1;                         // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeTarget : 1;                          // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeCursor : 1;                          // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeFocus : 1;                           // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateBeginLoadingFrame : 1;                     // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateBeginLoadingFrameIsMainFrame : 1;          // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateBeginLoadingFrameIsErrorPage : 1;          // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateFailLoadingFrame : 1;                      // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateFailLoadingFrameIsMainFrame : 1;           // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateFinishLoading : 1;                         // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateDocumentReady : 1;                         // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateJavascriptConsoleMessage : 1;              // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowCreatedWebView : 1;                    // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowCreatedWebViewIsPopup : 1;             // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateLaunch : 1;                                // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateUnresponsive : 1;                          // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateResponsive : 1;                            // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateCrashed : 1;                               // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowPopupMenu : 1;                         // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowContextMenu : 1;                       // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowFileChooser : 1;                       // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowLoginDialog : 1;                       // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowCertificateErrorDialog : 1;            // 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowCertificateErrorDialogIsOverridable : 1;// 0x0068(0x0004) (Const)
	unsigned long                                      PendingDelegateShowPageInfoDialog : 1;                    // 0x006C(0x0004) (Const)
	unsigned long                                      PendingDelegateUpdateIME : 1;                             // 0x006C(0x0004) (Const)
	unsigned long                                      PendingDelegateCancelIME : 1;                             // 0x006C(0x0004) (Const)
	unsigned long                                      PendingDelegateChangeIMERange : 1;                        // 0x006C(0x0004) (Const)
	unsigned long                                      PendingDelegateJavascriptCallback : 1;                    // 0x006C(0x0004) (Const)
	class UTexture2D*                                  Texture;                                                  // 0x0070(0x0008) (Const)
	struct FVector2D                                   MousePosition;                                            // 0x0078(0x0008) (Const)
	struct FString                                     PendingURL;                                               // 0x0080(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingUserName;                                          // 0x0090(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingPassword;                                          // 0x00A0(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateChangeTitleName;                           // 0x00B0(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateChangeAddressBarURL;                       // 0x00C0(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateChangeTooltipStr;                          // 0x00D0(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateChangeTargetURL;                           // 0x00E0(0x0010) (Const, NeedCtorLink)
	int                                                PendingDelegateChangeCursorType;                          // 0x00F0(0x0004) (Const)
	int                                                PendingDelegateChangeFocusType;                           // 0x00F4(0x0004) (Const)
	int                                                PendingDelegateBeginLoadingFrameID;                       // 0x00F8(0x0004) (Const)
	struct FString                                     PendingDelegateBeginLoadingFrameURL;                      // 0x00FC(0x0010) (Const, NeedCtorLink)
	int                                                PendingDelegateFailLoadingFrameID;                        // 0x010C(0x0004) (Const)
	struct FString                                     PendingDelegateFailLoadingFrameURL;                       // 0x0110(0x0010) (Const, NeedCtorLink)
	int                                                PendingDelegateFailLoadingFrameErrorCode;                 // 0x0120(0x0004) (Const)
	struct FString                                     PendingDelegateFailLoadingFrameErrorDescription;          // 0x0124(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateDocumentReadyURL;                          // 0x0134(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateJavascriptConsoleMessageMessage;           // 0x0144(0x0010) (Const, NeedCtorLink)
	int                                                PendingDelegateJavascriptConsoleMessageLineNumber;        // 0x0154(0x0004) (Const)
	struct FString                                     PendingDelegateJavascriptConsoleMessageSource;            // 0x0158(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateShowCreatedWebViewURL;                     // 0x0168(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateShowCreatedWebViewTargetURL;               // 0x0178(0x0010) (Const, NeedCtorLink)
	struct FVector2D                                   PendingDelegateShowCreatedWebViewInitialPos;              // 0x0188(0x0008) (Const)
	struct FVector2D                                   PendingDelegateShowCreatedWebViewInitialSize;             // 0x0190(0x0008) (Const)
	int                                                PendingDelegateCrashedStatus;                             // 0x0198(0x0004) (Const)
	struct FWebPopupMenuInfo                           PendingDelegateShowPopupMenuInfo;                         // 0x019C(0x0034) (Const, NeedCtorLink)
	struct FWebContextMenuInfo                         PendingDelegateShowContextMenuInfo;                       // 0x01D0(0x0070) (Const, NeedCtorLink)
	struct FWebFileChooserInfo                         PendingDelegateShowFileChooserInfo;                       // 0x0240(0x0034) (Const, NeedCtorLink)
	struct FWebLoginDialogInfo                         PendingDelegateShowLoginDialogInfo;                       // 0x0274(0x004C) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateShowCertificateErrorDialogURL;             // 0x02C0(0x0010) (Const, NeedCtorLink)
	int                                                PendingDelegateShowCertificateErrorDialogError;           // 0x02D0(0x0004) (Const)
	struct FWebPageInfo                                PendingDelegateShowPageInfoDialogPageInfo;                // 0x02D4(0x003C) (Const, NeedCtorLink)
	int                                                PendingDelegateUpdateIMEType;                             // 0x0310(0x0004) (Const)
	int                                                PendingDelegateUpdateIMECaretX;                           // 0x0314(0x0004) (Const)
	int                                                PendingDelegateUpdateIMECaretY;                           // 0x0318(0x0004) (Const)
	struct FQWord                                      PendingDelegateChangeIMERangeStart;                       // 0x031C(0x0008) (Const)
	struct FQWord                                      PendingDelegateChangeIMERangeEnd;                         // 0x0324(0x0008) (Const)
	struct FString                                     PendingDelegateJavascriptCallbackObjectName;              // 0x032C(0x0010) (Const, NeedCtorLink)
	struct FString                                     PendingDelegateJavascriptCallbackCallbackName;            // 0x033C(0x0010) (Const, NeedCtorLink)
	TArray<struct FJSValue>                            PendingDelegateJavascriptCallbackArguments;               // 0x034C(0x0010) (Const, NeedCtorLink)
	struct FPointer                                    pWebView;                                                 // 0x035C(0x0008) (Native, Transient)
	struct FPointer                                    pWebViewListener;                                         // 0x0364(0x0008) (Native, Transient)
	struct FPointer                                    pSafeBuffer;                                              // 0x036C(0x0008) (Native, Transient)
	int                                                TextureOffeSetX;                                          // 0x0374(0x0004)
	int                                                TextureOffeSetY;                                          // 0x0378(0x0004)
	int                                                InputCaretX;                                              // 0x037C(0x0004)
	int                                                InputCaretY;                                              // 0x0380(0x0004)
	float                                              DelayUpdateInterval;                                      // 0x0384(0x0004) (Const)
	float                                              DelayExpireTime;                                          // 0x0388(0x0004) (Const)
	float                                              DelayUpdateTimeRemainToExpire;                            // 0x038C(0x0004)
	float                                              DelayUpdateTimeRemainToNextUpdate;                        // 0x0390(0x0004)
	struct FScriptDelegate                             __OnChangeTitle__Delegate;                                // 0x0394(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeAddressBar__Delegate;                           // 0x03A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeTooltip__Delegate;                              // 0x03B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeTargetURL__Delegate;                            // 0x03C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeCursor__Delegate;                               // 0x03D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeFocus__Delegate;                                // 0x03E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnBeginLoadingFrame__Delegate;                          // 0x03F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFailLoadingFrame__Delegate;                           // 0x0404(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0404(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFinishLoading__Delegate;                              // 0x0414(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0414(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJavascriptCallback__Delegate;                         // 0x0424(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0424(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceiveTitle__Delegate;                               // 0x0434(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0434(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWebViewCrashed__Delegate;                             // 0x0444(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0444(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWebViewPluginCrashed__Delegate;                       // 0x0454(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0454(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetPageContents__Delegate;                            // 0x0464(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0464(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDocumentReady__Delegate;                              // 0x0474(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0474(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeHistory__Delegate;                              // 0x0484(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0484(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJavascriptConsoleMessage__Delegate;                   // 0x0494(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0494(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowJavascriptDialog__Delegate;                       // 0x04A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData17[0x4];                                       // 0x04A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowCreatedWebView__Delegate;                         // 0x04B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData18[0x4];                                       // 0x04B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLaunch__Delegate;                                     // 0x04C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData19[0x4];                                       // 0x04C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnresponsive__Delegate;                               // 0x04D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData20[0x4];                                       // 0x04D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnResponsive__Delegate;                                 // 0x04E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData21[0x4];                                       // 0x04E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCrashed__Delegate;                                    // 0x04F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData22[0x4];                                       // 0x04F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowPopupMenu__Delegate;                              // 0x0504(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0504(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowContextMenu__Delegate;                            // 0x0514(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0514(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowFileChooser__Delegate;                            // 0x0524(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0524(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowLoginDialog__Delegate;                            // 0x0534(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0534(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowCertificateErrorDialog__Delegate;                 // 0x0544(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0544(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowPageInfoDialog__Delegate;                         // 0x0554(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0554(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUpdateIME__Delegate;                                  // 0x0564(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0564(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCancelIME__Delegate;                                  // 0x0574(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0574(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnChangeIMERange__Delegate;                             // 0x0584(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData31[0x4];                                       // 0x0584(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweWebViewComponent");
		return ptr;
	}


	void OnUpdateIMEImpl(int Type, int CaretX, int CaretY);
	void OnChangeIMERange(const struct FQWord& Start, const struct FQWord& End);
	void OnCancelIME();
	void OnUpdateIME(int Type, int CaretX, int CaretY);
	void OnShowPageInfoDialog(const struct FWebPageInfo& PageInfo);
	void OnShowCertificateErrorDialog(bool IsOverridable, const struct FString& URL, int Error);
	void OnShowLoginDialog(const struct FWebLoginDialogInfo& DialogInfo);
	void OnShowFileChooser(const struct FWebFileChooserInfo& ChooserInfo);
	void OnShowContextMenu(const struct FWebContextMenuInfo& MenuInfo);
	void OnShowPopupMenu(const struct FWebPopupMenuInfo& MenuInfo);
	void OnCrashed(int Status);
	void OnResponsive();
	void OnUnresponsive();
	void OnLaunch();
	void OnShowCreatedWebView(const struct FString& OpenerURL, const struct FString& TargetURL, const struct FVector2D& InitialPos, const struct FVector2D& InitialSize, bool IsPopup);
	void OnShowJavascriptDialog(int RequestID, int DialogFlags, const struct FString& Message, const struct FString& DefaultPrompt, const struct FString& FrameURL);
	void OnJavascriptConsoleMessage(const struct FString& Message, int LineNumber, const struct FString& Source);
	void OnChangeHistory(int BackCount, int ForwardCount);
	void OnDocumentReady(const struct FString& URL);
	void OnGetPageContents(const struct FString& URL, const struct FString& Contents);
	void OnWebViewPluginCrashed(const struct FString& PlugInName);
	void OnWebViewCrashed();
	void OnReceiveTitle(const struct FString& Title, const struct FString& FrameName);
	void OnJavascriptCallback(const struct FString& ObjectName, const struct FString& CallbackName, TArray<struct FJSValue> Arguments);
	void OnFinishLoading();
	void OnFailLoadingFrame(const struct FQWord& FrameID, const struct FString& URL, bool IsMainFrame, int ErrorCode, const struct FString& ErrorDescription);
	void OnBeginLoadingFrame(const struct FQWord& FrameID, const struct FString& URL, bool IsMainFrame, bool IsErrorPage);
	void OnChangeFocus(int Focus);
	void OnChangeCursor(int Cursor);
	void OnChangeTargetURL(const struct FString& URL);
	void OnChangeTooltip(const struct FString& ToolTip);
	void OnChangeAddressBar(const struct FString& URL);
	void OnChangeTitle(const struct FString& Title);
	void SelectAll();
	void PasteAndMatchStyle();
	void Paste();
	void CopyImageAt(int X, int Y);
	void Copy();
	void Cut();
	void Redo();
	void Undo();
	void SetCustomMethod(const struct FString& MethodName, bool bRetValue);
	void SetMousePosition(const struct FVector2D& NewMousePosition);
	void InputChar(const struct FString& Unicode);
	void InputAxis(const struct FName& Key, float Delta);
	void InputMouse(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed);
	void InputKey(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed);
	float GetZoom();
	void ResetZoom();
	void SetZoom(float ZoomPercent);
	void ResumeRendering();
	void PauseRendering();
	bool IsLoadingPage();
	void SetObjectProperty(const struct FString& ObjectName, const struct FString& PropertyName, struct FJSValue* Value);
	void DestroyObject(const struct FString& ObjectName);
	void CreateObject(const struct FString& ObjectName);
	void CallJavascriptFunction(const struct FString& Function, TArray<struct FJSValue> Arguments, const struct FString& Object, const struct FString& FrameName);
	bool JavascriptArray(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, TArray<struct FJSValue>* JSResults);
	bool JavascriptString(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, struct FString* JSResult);
	bool JavascriptFloat(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, float* JSResult);
	bool JavascriptInt(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, int* JSResult);
	bool JavascriptBool(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, unsigned char* JSResult);
	void JavascriptVoid(const struct FString& Javascript, const struct FString& FrameName);
	bool CanGoForward();
	bool CanGoBack();
	void Reload();
	void Stop();
	void GoToHistoryOffset(int Offset);
	void GoForward();
	void GoBack();
	struct FString GetURL();
	void STATIC_SetCookie(const struct FString& URL, const struct FString& Cookie, bool IsHttpOnly, bool ForceSessionCookie);
	void STATIC_ClearCookies();
	void STATIC_ClearCache();
	bool STATIC_ArePlugInsEnabled();
	void LoseFocus();
	void GainFocus();
	void LoadHTML(const struct FString& HTML);
	void LoadFile(const struct FString& Filename);
	void LoadURL(const struct FString& URL, const struct FString& UserName, const struct FString& Password);
	void SetTextureTarget(class UTextureRenderTarget2D* NewTextureTarget);
	void Initialize(int SizeX, int SizeY);
	struct FJSValue STATIC_MakeJSString(const struct FString& Value);
	struct FJSValue STATIC_MakeJSFloat(float Value);
	struct FJSValue STATIC_MakeJSInt(int Value);
	struct FJSValue STATIC_MakeJSBool(bool Value);
	void DelayUpdate();
	void UpdateTexture(bool Reattach);
};


// Class Awesomium.AweGameInfo
// 0x0000 (0x049C - 0x049C)
class AAweGameInfo : public AGameInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweGameInfo");
		return ptr;
	}


	void RestartPlayer(class AController* NewPlayer);
};


// Class Awesomium.AweHUD
// 0x0000 (0x0570 - 0x0570)
class AAweHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweHUD");
		return ptr;
	}

};


// Class Awesomium.AwePlayerController
// 0x0000 (0x0734 - 0x0734)
class AAwePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AwePlayerController");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_CallJavascriptFunction
// 0x0040 (0x0190 - 0x0150)
class UAweSeqAct_CallJavascriptFunction : public USequenceAction
{
public:
	struct FString                                     Function;                                                 // 0x0150(0x0010) (Edit, NeedCtorLink)
	TArray<struct FJSValue>                            Arguments;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Object;                                                   // 0x0170(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0180(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_CallJavascriptFunction");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_ClearCache
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_ClearCache : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_ClearCache");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_ClearCookies
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_ClearCookies : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_ClearCookies");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_CreateObject
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_CreateObject : public USequenceAction
{
public:
	struct FString                                     ObjectName;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_CreateObject");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_DestroyObject
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_DestroyObject : public USequenceAction
{
public:
	struct FString                                     ObjectName;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_DestroyObject");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_GainFocus
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_GainFocus : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GainFocus");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_GetHistoryResult
// 0x002C (0x017C - 0x0150)
class UAweSeqAct_GetHistoryResult : public USequenceAction
{
public:
	int                                                Index;                                                    // 0x0150(0x0004) (Edit)
	struct FString                                     URL;                                                      // 0x0154(0x0010) (NeedCtorLink)
	struct FString                                     Title;                                                    // 0x0164(0x0010) (NeedCtorLink)
	float                                              VisitTime;                                                // 0x0174(0x0004)
	int                                                VisitCount;                                               // 0x0178(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetHistoryResult");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_GetHistoryResultsCount
// 0x0004 (0x0154 - 0x0150)
class UAweSeqAct_GetHistoryResultsCount : public USequenceAction
{
public:
	int                                                HistoryResultsCount;                                      // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetHistoryResultsCount");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_GetJSValue
// 0x0020 (0x0170 - 0x0150)
class UAweSeqAct_GetJSValue : public USequenceAction
{
public:
	int                                                Index;                                                    // 0x0150(0x0004) (Edit)
	unsigned long                                      BoolResult : 1;                                           // 0x0154(0x0004)
	int                                                IntResult;                                                // 0x0158(0x0004)
	float                                              FloatResult;                                              // 0x015C(0x0004)
	struct FString                                     StringResult;                                             // 0x0160(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetJSValue");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_GetJSValuesCount
// 0x0004 (0x0154 - 0x0150)
class UAweSeqAct_GetJSValuesCount : public USequenceAction
{
public:
	int                                                JSValuesCount;                                            // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetJSValuesCount");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_GetURL
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_GetURL : public USequenceAction
{
public:
	struct FString                                     URL;                                                      // 0x0150(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetURL");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_GetZoom
// 0x0004 (0x0154 - 0x0150)
class UAweSeqAct_GetZoom : public USequenceAction
{
public:
	float                                              Zoom;                                                     // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GetZoom");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_GoToHistoryOffset
// 0x0004 (0x0154 - 0x0150)
class UAweSeqAct_GoToHistoryOffset : public USequenceAction
{
public:
	int                                                Offset;                                                   // 0x0150(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_GoToHistoryOffset");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_InputAxis
// 0x0014 (0x0164 - 0x0150)
class UAweSeqAct_InputAxis : public USequenceAction
{
public:
	struct FString                                     Key;                                                      // 0x0150(0x0010) (Edit, NeedCtorLink)
	float                                              Delta;                                                    // 0x0160(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_InputAxis");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_InputChar
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_InputChar : public USequenceAction
{
public:
	struct FString                                     Unicode;                                                  // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_InputChar");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_InputKey
// 0x0018 (0x0168 - 0x0150)
class UAweSeqAct_InputKey : public USequenceAction
{
public:
	struct FString                                     Key;                                                      // 0x0150(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EInputEvent>                           Event;                                                    // 0x0160(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              AmountDepressed;                                          // 0x0164(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_InputKey");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptArray
// 0x0028 (0x0178 - 0x0150)
class UAweSeqAct_JavascriptArray : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	int                                                TimeOut;                                                  // 0x0170(0x0004) (Edit)
	int                                                JSValuesCount;                                            // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptArray");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptBool
// 0x0028 (0x0178 - 0x0150)
class UAweSeqAct_JavascriptBool : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	int                                                TimeOut;                                                  // 0x0170(0x0004) (Edit)
	unsigned long                                      Result : 1;                                               // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptBool");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptFloat
// 0x0028 (0x0178 - 0x0150)
class UAweSeqAct_JavascriptFloat : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	int                                                TimeOut;                                                  // 0x0170(0x0004) (Edit)
	float                                              Result;                                                   // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptFloat");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptInt
// 0x0028 (0x0178 - 0x0150)
class UAweSeqAct_JavascriptInt : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	int                                                TimeOut;                                                  // 0x0170(0x0004) (Edit)
	int                                                Result;                                                   // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptInt");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptString
// 0x0034 (0x0184 - 0x0150)
class UAweSeqAct_JavascriptString : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)
	int                                                TimeOut;                                                  // 0x0170(0x0004) (Edit)
	struct FString                                     Result;                                                   // 0x0174(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptString");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_JavascriptVoid
// 0x0020 (0x0170 - 0x0150)
class UAweSeqAct_JavascriptVoid : public USequenceAction
{
public:
	struct FString                                     Javascript;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0160(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_JavascriptVoid");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_LoadFile
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_LoadFile : public USequenceAction
{
public:
	struct FString                                     Resource;                                                 // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_LoadFile");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_LoadHTML
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_LoadHTML : public USequenceAction
{
public:
	struct FString                                     Resource;                                                 // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_LoadHTML");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_LoadURL
// 0x0010 (0x0160 - 0x0150)
class UAweSeqAct_LoadURL : public USequenceAction
{
public:
	struct FString                                     Resource;                                                 // 0x0150(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_LoadURL");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_LoseFocus
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_LoseFocus : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_LoseFocus");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_PauseRendering
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_PauseRendering : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_PauseRendering");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_Reload
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_Reload : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_Reload");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_ResetZoom
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_ResetZoom : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_ResetZoom");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_ResumeRendering
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_ResumeRendering : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_ResumeRendering");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetCookie
// 0x0024 (0x0174 - 0x0150)
class UAweSeqAct_SetCookie : public USequenceAction
{
public:
	struct FString                                     URL;                                                      // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     Cookie;                                                   // 0x0160(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      IsHttpOnly : 1;                                           // 0x0170(0x0004) (Edit)
	unsigned long                                      ForceSessionCookie : 1;                                   // 0x0170(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetCookie");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqAct_SetCustomResponsePage
// 0x0014 (0x0164 - 0x0150)
class UAweSeqAct_SetCustomResponsePage : public USequenceAction
{
public:
	int                                                StatusCode;                                               // 0x0150(0x0004) (Edit)
	struct FString                                     FilePath;                                                 // 0x0154(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetCustomResponsePage");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetMousePosition
// 0x000C (0x015C - 0x0150)
class UAweSeqAct_SetMousePosition : public USequenceAction
{
public:
	struct FVector                                     MousePosition;                                            // 0x0150(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetMousePosition");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetObjectProperty
// 0x0020 (0x0170 - 0x0150)
class UAweSeqAct_SetObjectProperty : public USequenceAction
{
public:
	struct FString                                     ObjectName;                                               // 0x0150(0x0010) (Edit, NeedCtorLink)
	struct FString                                     PropertyName;                                             // 0x0160(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetObjectProperty");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetTextureRenderTarget
// 0x0008 (0x0158 - 0x0150)
class UAweSeqAct_SetTextureRenderTarget : public USequenceAction
{
public:
	class UObject*                                     TextureRenderTarget;                                      // 0x0150(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetTextureRenderTarget");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetURLFilteringMode
// 0x0001 (0x0151 - 0x0150)
class UAweSeqAct_SetURLFilteringMode : public USequenceAction
{
public:
	TEnumAsByte<EURLFilterMode>                        FilterMode;                                               // 0x0150(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetURLFilteringMode");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_SetZoom
// 0x0004 (0x0154 - 0x0150)
class UAweSeqAct_SetZoom : public USequenceAction
{
public:
	float                                              Zoom;                                                     // 0x0150(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_SetZoom");
		return ptr;
	}

};


// Class Awesomium.AweSeqAct_Stop
// 0x0000 (0x0150 - 0x0150)
class UAweSeqAct_Stop : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqAct_Stop");
		return ptr;
	}

};


// Class Awesomium.AweSeqCond_ArePluginsEnabled
// 0x0004 (0x0138 - 0x0134)
class UAweSeqCond_ArePluginsEnabled : public USequenceCondition
{
public:
	unsigned long                                      bResult : 1;                                              // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqCond_ArePluginsEnabled");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweSeqCond_IsLoadingPage
// 0x0008 (0x013C - 0x0134)
class UAweSeqCond_IsLoadingPage : public USequenceCondition
{
public:
	class UObject*                                     Target;                                                   // 0x0134(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqCond_IsLoadingPage");
		return ptr;
	}


	void Activated();
};


// Class Awesomium.AweWebViewCaptureActor
// 0x0024 (0x0274 - 0x0250)
class AAweWebViewCaptureActor : public AActor
{
public:
	class UAweWebViewComponent*                        WebViewComponent;                                         // 0x0250(0x0008) (Edit, Const)
	unsigned long                                      LoadResourceOnStartUp : 1;                                // 0x0258(0x0004) (Edit, Const)
	struct FString                                     Resource;                                                 // 0x025C(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EResourceType>                         ResourceType;                                             // 0x026C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	float                                              Zoom;                                                     // 0x0270(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweWebViewCaptureActor");
		return ptr;
	}


	void InternalOnShowJavascriptDialog(int RequestID, int DialogFlags, const struct FString& Message, const struct FString& DefaultPrompt, const struct FString& FrameURL);
	void InternalOnJavascriptConsoleMessage(const struct FString& Message, int LineNumber, const struct FString& Source);
	void InternalOnChangeHistory(int BackCount, int ForwardCount);
	void InternalOnDocumentReady(const struct FString& URL);
	void InternalOnGetPageContents(const struct FString& InURL, const struct FString& Contents);
	void InternalOnWebViewPluginCrashed(const struct FString& PlugInName);
	void InternalOnWebViewCrashed();
	void InternalOnReceiveTitle(const struct FString& Title, const struct FString& FrameName);
	void InternalOnJavascriptCallback(const struct FString& ObjectName, const struct FString& CallbackName, TArray<struct FJSValue> Arguments);
	void InternalOnFinishLoading();
	void InternalOnBeginLoadingFrame(const struct FQWord& FrameID, const struct FString& InURL, bool IsMainFrame, bool IsErrorPage);
	void OnStop(class UAweSeqAct_Stop* Action);
	void OnSetZoom(class UAweSeqAct_SetZoom* Action);
	void OnSetTextureRenderTarget(class UAweSeqAct_SetTextureRenderTarget* Action);
	void OnSetObjectProperty(class UAweSeqAct_SetObjectProperty* Action);
	void OnSetMousePosition(class UAweSeqAct_SetMousePosition* Action);
	void OnResumeRendering(class UAweSeqAct_ResumeRendering* Action);
	void OnResetZoom(class UAweSeqAct_ResetZoom* Action);
	void OnReload(class UAweSeqAct_Reload* Action);
	void OnPauseRendering(class UAweSeqAct_PauseRendering* Action);
	void OnLoseFocus(class UAweSeqAct_LoseFocus* Action);
	void OnJavascriptVoid(class UAweSeqAct_JavascriptVoid* Action);
	void OnJavascriptString(class UAweSeqAct_JavascriptString* Action);
	void OnJavascriptInt(class UAweSeqAct_JavascriptInt* Action);
	void OnJavascriptFloat(class UAweSeqAct_JavascriptFloat* Action);
	void OnJavascriptBool(class UAweSeqAct_JavascriptBool* Action);
	void OnJavascriptArray(class UAweSeqAct_JavascriptArray* Action);
	void OnInputKey(class UAweSeqAct_InputKey* Action);
	void OnInputChar(class UAweSeqAct_InputChar* Action);
	void OnInputAxis(class UAweSeqAct_InputAxis* Action);
	void OnGoToHistoryOffset(class UAweSeqAct_GoToHistoryOffset* Action);
	void OnGetZoom(class UAweSeqAct_GetZoom* Action);
	void OnGetURL(class UAweSeqAct_GetURL* Action);
	void OnGainFocus(class UAweSeqAct_GainFocus* Action);
	void OnDestroyObject(class UAweSeqAct_DestroyObject* Action);
	void OnCreateObject(class UAweSeqAct_CreateObject* Action);
	void OnCallJavascriptFunction(class UAweSeqAct_CallJavascriptFunction* Action);
	void OnLoadHTML(class UAweSeqAct_LoadHTML* Action);
	void OnLoadFile(class UAweSeqAct_LoadFile* Action);
	void OnLoadURL(class UAweSeqAct_LoadURL* Action);
	void SetZoom(float NewZoom);
	void SetResource(const struct FString& NewResource, TEnumAsByte<EResourceType> NewResourceType);
	void PostBeginPlay();
};


// Class Awesomium.AweSeqEvent_BeginLoading
// 0x001C (0x018C - 0x0170)
class UAweSeqEvent_BeginLoading : public USequenceEvent
{
public:
	struct FString                                     URL;                                                      // 0x0170(0x0010) (NeedCtorLink)
	struct FQWord                                      FrameID;                                                  // 0x0180(0x0008)
	unsigned long                                      IsMainFrame : 1;                                          // 0x0188(0x0004)
	unsigned long                                      IsErrorPage : 1;                                          // 0x0188(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_BeginLoading");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_ChangeHistory
// 0x0008 (0x0178 - 0x0170)
class UAweSeqEvent_ChangeHistory : public USequenceEvent
{
public:
	int                                                BackCount;                                                // 0x0170(0x0004)
	int                                                ForwardCount;                                             // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_ChangeHistory");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_DOMReady
// 0x0000 (0x0170 - 0x0170)
class UAweSeqEvent_DOMReady : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_DOMReady");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_FinishLoading
// 0x0000 (0x0170 - 0x0170)
class UAweSeqEvent_FinishLoading : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_FinishLoading");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_GetPageContents
// 0x0020 (0x0190 - 0x0170)
class UAweSeqEvent_GetPageContents : public USequenceEvent
{
public:
	struct FString                                     URL;                                                      // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     Contents;                                                 // 0x0180(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_GetPageContents");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_JavascriptCallback
// 0x0020 (0x0190 - 0x0170)
class UAweSeqEvent_JavascriptCallback : public USequenceEvent
{
public:
	struct FString                                     ObjectName;                                               // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     CallbackName;                                             // 0x0180(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_JavascriptCallback");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_JavascriptConsoleMessage
// 0x0024 (0x0194 - 0x0170)
class UAweSeqEvent_JavascriptConsoleMessage : public USequenceEvent
{
public:
	struct FString                                     Message;                                                  // 0x0170(0x0010) (NeedCtorLink)
	int                                                LineNumber;                                               // 0x0180(0x0004)
	struct FString                                     Source;                                                   // 0x0184(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_JavascriptConsoleMessage");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_ReceiveTitle
// 0x0020 (0x0190 - 0x0170)
class UAweSeqEvent_ReceiveTitle : public USequenceEvent
{
public:
	struct FString                                     Title;                                                    // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     FrameName;                                                // 0x0180(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_ReceiveTitle");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_ShowJavascriptDialog
// 0x0038 (0x01A8 - 0x0170)
class UAweSeqEvent_ShowJavascriptDialog : public USequenceEvent
{
public:
	int                                                RequestID;                                                // 0x0170(0x0004)
	int                                                DialogFlags;                                              // 0x0174(0x0004)
	struct FString                                     Message;                                                  // 0x0178(0x0010) (NeedCtorLink)
	struct FString                                     DefaultPrompt;                                            // 0x0188(0x0010) (NeedCtorLink)
	struct FString                                     FrameURL;                                                 // 0x0198(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_ShowJavascriptDialog");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_WebViewCrashed
// 0x0000 (0x0170 - 0x0170)
class UAweSeqEvent_WebViewCrashed : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_WebViewCrashed");
		return ptr;
	}

};


// Class Awesomium.AweSeqEvent_WebViewPluginCrashed
// 0x0010 (0x0180 - 0x0170)
class UAweSeqEvent_WebViewPluginCrashed : public USequenceEvent
{
public:
	struct FString                                     PlugInName;                                               // 0x0170(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass("Class Awesomium.AweSeqEvent_WebViewPluginCrashed");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
