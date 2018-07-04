#pragma once

// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_Awesomium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Awesomium.AweWebViewComponent.OnUpdateIMEImpl
struct UAweWebViewComponent_OnUpdateIMEImpl_Params
{
	int                                                Type;                                                     // (Parm)
	int                                                CaretX;                                                   // (Parm)
	int                                                CaretY;                                                   // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnChangeIMERange
struct UAweWebViewComponent_OnChangeIMERange_Params
{
	struct FQWord                                      Start;                                                    // (Parm)
	struct FQWord                                      End;                                                      // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnCancelIME
struct UAweWebViewComponent_OnCancelIME_Params
{
};

// Function Awesomium.AweWebViewComponent.OnUpdateIME
struct UAweWebViewComponent_OnUpdateIME_Params
{
	int                                                Type;                                                     // (Parm)
	int                                                CaretX;                                                   // (Parm)
	int                                                CaretY;                                                   // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnShowPageInfoDialog
struct UAweWebViewComponent_OnShowPageInfoDialog_Params
{
	struct FWebPageInfo                                PageInfo;                                                 // (Const, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnShowCertificateErrorDialog
struct UAweWebViewComponent_OnShowCertificateErrorDialog_Params
{
	bool                                               IsOverridable;                                            // (Parm)
	struct FString                                     URL;                                                      // (Const, Parm, NeedCtorLink)
	int                                                Error;                                                    // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnShowLoginDialog
struct UAweWebViewComponent_OnShowLoginDialog_Params
{
	struct FWebLoginDialogInfo                         DialogInfo;                                               // (Const, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnShowFileChooser
struct UAweWebViewComponent_OnShowFileChooser_Params
{
	struct FWebFileChooserInfo                         ChooserInfo;                                              // (Const, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnShowContextMenu
struct UAweWebViewComponent_OnShowContextMenu_Params
{
	struct FWebContextMenuInfo                         MenuInfo;                                                 // (Const, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnShowPopupMenu
struct UAweWebViewComponent_OnShowPopupMenu_Params
{
	struct FWebPopupMenuInfo                           MenuInfo;                                                 // (Const, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnCrashed
struct UAweWebViewComponent_OnCrashed_Params
{
	int                                                Status;                                                   // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnResponsive
struct UAweWebViewComponent_OnResponsive_Params
{
};

// Function Awesomium.AweWebViewComponent.OnUnresponsive
struct UAweWebViewComponent_OnUnresponsive_Params
{
};

// Function Awesomium.AweWebViewComponent.OnLaunch
struct UAweWebViewComponent_OnLaunch_Params
{
};

// Function Awesomium.AweWebViewComponent.OnShowCreatedWebView
struct UAweWebViewComponent_OnShowCreatedWebView_Params
{
	struct FString                                     OpenerURL;                                                // (Parm, NeedCtorLink)
	struct FString                                     TargetURL;                                                // (Parm, NeedCtorLink)
	struct FVector2D                                   InitialPos;                                               // (Parm)
	struct FVector2D                                   InitialSize;                                              // (Parm)
	bool                                               IsPopup;                                                  // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnShowJavascriptDialog
struct UAweWebViewComponent_OnShowJavascriptDialog_Params
{
	int                                                RequestID;                                                // (Parm)
	int                                                DialogFlags;                                              // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     DefaultPrompt;                                            // (Parm, NeedCtorLink)
	struct FString                                     FrameURL;                                                 // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnJavascriptConsoleMessage
struct UAweWebViewComponent_OnJavascriptConsoleMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                LineNumber;                                               // (Parm)
	struct FString                                     Source;                                                   // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnChangeHistory
struct UAweWebViewComponent_OnChangeHistory_Params
{
	int                                                BackCount;                                                // (Parm)
	int                                                ForwardCount;                                             // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnDocumentReady
struct UAweWebViewComponent_OnDocumentReady_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnGetPageContents
struct UAweWebViewComponent_OnGetPageContents_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Contents;                                                 // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnWebViewPluginCrashed
struct UAweWebViewComponent_OnWebViewPluginCrashed_Params
{
	struct FString                                     PlugInName;                                               // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnWebViewCrashed
struct UAweWebViewComponent_OnWebViewCrashed_Params
{
};

// Function Awesomium.AweWebViewComponent.OnReceiveTitle
struct UAweWebViewComponent_OnReceiveTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnJavascriptCallback
struct UAweWebViewComponent_OnJavascriptCallback_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	struct FString                                     CallbackName;                                             // (Parm, NeedCtorLink)
	TArray<struct FJSValue>                            Arguments;                                                // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnFinishLoading
struct UAweWebViewComponent_OnFinishLoading_Params
{
};

// Function Awesomium.AweWebViewComponent.OnFailLoadingFrame
struct UAweWebViewComponent_OnFailLoadingFrame_Params
{
	struct FQWord                                      FrameID;                                                  // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               IsMainFrame;                                              // (Parm)
	int                                                ErrorCode;                                                // (Parm)
	struct FString                                     ErrorDescription;                                         // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnBeginLoadingFrame
struct UAweWebViewComponent_OnBeginLoadingFrame_Params
{
	struct FQWord                                      FrameID;                                                  // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               IsMainFrame;                                              // (Parm)
	bool                                               IsErrorPage;                                              // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnChangeFocus
struct UAweWebViewComponent_OnChangeFocus_Params
{
	int                                                Focus;                                                    // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnChangeCursor
struct UAweWebViewComponent_OnChangeCursor_Params
{
	int                                                Cursor;                                                   // (Parm)
};

// Function Awesomium.AweWebViewComponent.OnChangeTargetURL
struct UAweWebViewComponent_OnChangeTargetURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnChangeTooltip
struct UAweWebViewComponent_OnChangeTooltip_Params
{
	struct FString                                     ToolTip;                                                  // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnChangeAddressBar
struct UAweWebViewComponent_OnChangeAddressBar_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.OnChangeTitle
struct UAweWebViewComponent_OnChangeTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.SelectAll
struct UAweWebViewComponent_SelectAll_Params
{
};

// Function Awesomium.AweWebViewComponent.PasteAndMatchStyle
struct UAweWebViewComponent_PasteAndMatchStyle_Params
{
};

// Function Awesomium.AweWebViewComponent.Paste
struct UAweWebViewComponent_Paste_Params
{
};

// Function Awesomium.AweWebViewComponent.CopyImageAt
struct UAweWebViewComponent_CopyImageAt_Params
{
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
};

// Function Awesomium.AweWebViewComponent.Copy
struct UAweWebViewComponent_Copy_Params
{
};

// Function Awesomium.AweWebViewComponent.Cut
struct UAweWebViewComponent_Cut_Params
{
};

// Function Awesomium.AweWebViewComponent.Redo
struct UAweWebViewComponent_Redo_Params
{
};

// Function Awesomium.AweWebViewComponent.Undo
struct UAweWebViewComponent_Undo_Params
{
};

// Function Awesomium.AweWebViewComponent.SetCustomMethod
struct UAweWebViewComponent_SetCustomMethod_Params
{
	struct FString                                     MethodName;                                               // (Parm, NeedCtorLink)
	bool                                               bRetValue;                                                // (Parm)
};

// Function Awesomium.AweWebViewComponent.SetMousePosition
struct UAweWebViewComponent_SetMousePosition_Params
{
	struct FVector2D                                   NewMousePosition;                                         // (Parm)
};

// Function Awesomium.AweWebViewComponent.InputChar
struct UAweWebViewComponent_InputChar_Params
{
	struct FString                                     Unicode;                                                  // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.InputAxis
struct UAweWebViewComponent_InputAxis_Params
{
	struct FName                                       Key;                                                      // (Parm)
	float                                              Delta;                                                    // (Parm)
};

// Function Awesomium.AweWebViewComponent.InputMouse
struct UAweWebViewComponent_InputMouse_Params
{
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (Parm)
};

// Function Awesomium.AweWebViewComponent.InputKey
struct UAweWebViewComponent_InputKey_Params
{
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (Parm)
};

// Function Awesomium.AweWebViewComponent.GetZoom
struct UAweWebViewComponent_GetZoom_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.ResetZoom
struct UAweWebViewComponent_ResetZoom_Params
{
};

// Function Awesomium.AweWebViewComponent.SetZoom
struct UAweWebViewComponent_SetZoom_Params
{
	float                                              ZoomPercent;                                              // (Parm)
};

// Function Awesomium.AweWebViewComponent.ResumeRendering
struct UAweWebViewComponent_ResumeRendering_Params
{
};

// Function Awesomium.AweWebViewComponent.PauseRendering
struct UAweWebViewComponent_PauseRendering_Params
{
};

// Function Awesomium.AweWebViewComponent.IsLoadingPage
struct UAweWebViewComponent_IsLoadingPage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.SetObjectProperty
struct UAweWebViewComponent_SetObjectProperty_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	struct FString                                     PropertyName;                                             // (Parm, NeedCtorLink)
	struct FJSValue                                    Value;                                                    // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.DestroyObject
struct UAweWebViewComponent_DestroyObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.CreateObject
struct UAweWebViewComponent_CreateObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.CallJavascriptFunction
struct UAweWebViewComponent_CallJavascriptFunction_Params
{
	struct FString                                     Function;                                                 // (Parm, NeedCtorLink)
	TArray<struct FJSValue>                            Arguments;                                                // (Parm, NeedCtorLink)
	struct FString                                     Object;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.JavascriptArray
struct UAweWebViewComponent_JavascriptArray_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	TArray<struct FJSValue>                            JSResults;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.JavascriptString
struct UAweWebViewComponent_JavascriptString_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	struct FString                                     JSResult;                                                 // (Parm, OutParm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.JavascriptFloat
struct UAweWebViewComponent_JavascriptFloat_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	float                                              JSResult;                                                 // (Parm, OutParm)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.JavascriptInt
struct UAweWebViewComponent_JavascriptInt_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	int                                                JSResult;                                                 // (Parm, OutParm)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.JavascriptBool
struct UAweWebViewComponent_JavascriptBool_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	unsigned char                                      JSResult;                                                 // (Parm, OutParm)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
	int                                                TimeOut;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.JavascriptVoid
struct UAweWebViewComponent_JavascriptVoid_Params
{
	struct FString                                     Javascript;                                               // (Parm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.CanGoForward
struct UAweWebViewComponent_CanGoForward_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.CanGoBack
struct UAweWebViewComponent_CanGoBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.Reload
struct UAweWebViewComponent_Reload_Params
{
};

// Function Awesomium.AweWebViewComponent.Stop
struct UAweWebViewComponent_Stop_Params
{
};

// Function Awesomium.AweWebViewComponent.GoToHistoryOffset
struct UAweWebViewComponent_GoToHistoryOffset_Params
{
	int                                                Offset;                                                   // (Parm)
};

// Function Awesomium.AweWebViewComponent.GoForward
struct UAweWebViewComponent_GoForward_Params
{
};

// Function Awesomium.AweWebViewComponent.GoBack
struct UAweWebViewComponent_GoBack_Params
{
};

// Function Awesomium.AweWebViewComponent.GetURL
struct UAweWebViewComponent_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.SetCookie
struct UAweWebViewComponent_SetCookie_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Cookie;                                                   // (Parm, NeedCtorLink)
	bool                                               IsHttpOnly;                                               // (Parm)
	bool                                               ForceSessionCookie;                                       // (Parm)
};

// Function Awesomium.AweWebViewComponent.ClearCookies
struct UAweWebViewComponent_ClearCookies_Params
{
};

// Function Awesomium.AweWebViewComponent.ClearCache
struct UAweWebViewComponent_ClearCache_Params
{
};

// Function Awesomium.AweWebViewComponent.ArePlugInsEnabled
struct UAweWebViewComponent_ArePlugInsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Awesomium.AweWebViewComponent.LoseFocus
struct UAweWebViewComponent_LoseFocus_Params
{
};

// Function Awesomium.AweWebViewComponent.GainFocus
struct UAweWebViewComponent_GainFocus_Params
{
};

// Function Awesomium.AweWebViewComponent.LoadHTML
struct UAweWebViewComponent_LoadHTML_Params
{
	struct FString                                     HTML;                                                     // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.LoadFile
struct UAweWebViewComponent_LoadFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.LoadURL
struct UAweWebViewComponent_LoadURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     UserName;                                                 // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.SetTextureTarget
struct UAweWebViewComponent_SetTextureTarget_Params
{
	class UTextureRenderTarget2D*                      NewTextureTarget;                                         // (OptionalParm, Parm)
};

// Function Awesomium.AweWebViewComponent.Initialize
struct UAweWebViewComponent_Initialize_Params
{
	int                                                SizeX;                                                    // (Parm)
	int                                                SizeY;                                                    // (Parm)
};

// Function Awesomium.AweWebViewComponent.MakeJSString
struct UAweWebViewComponent_MakeJSString_Params
{
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
	struct FJSValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.MakeJSFloat
struct UAweWebViewComponent_MakeJSFloat_Params
{
	float                                              Value;                                                    // (Parm)
	struct FJSValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.MakeJSInt
struct UAweWebViewComponent_MakeJSInt_Params
{
	int                                                Value;                                                    // (Parm)
	struct FJSValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.MakeJSBool
struct UAweWebViewComponent_MakeJSBool_Params
{
	bool                                               Value;                                                    // (Parm)
	struct FJSValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Awesomium.AweWebViewComponent.DelayUpdate
struct UAweWebViewComponent_DelayUpdate_Params
{
};

// Function Awesomium.AweWebViewComponent.UpdateTexture
struct UAweWebViewComponent_UpdateTexture_Params
{
	bool                                               Reattach;                                                 // (Parm)
};

// Function Awesomium.AweGameInfo.RestartPlayer
struct AAweGameInfo_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function Awesomium.AweSeqAct_ClearCache.Activated
struct UAweSeqAct_ClearCache_Activated_Params
{
};

// Function Awesomium.AweSeqAct_ClearCookies.Activated
struct UAweSeqAct_ClearCookies_Activated_Params
{
};

// Function Awesomium.AweSeqAct_GetHistoryResult.Activated
struct UAweSeqAct_GetHistoryResult_Activated_Params
{
};

// Function Awesomium.AweSeqAct_GetHistoryResultsCount.Activated
struct UAweSeqAct_GetHistoryResultsCount_Activated_Params
{
};

// Function Awesomium.AweSeqAct_GetJSValue.Activated
struct UAweSeqAct_GetJSValue_Activated_Params
{
};

// Function Awesomium.AweSeqAct_GetJSValuesCount.Activated
struct UAweSeqAct_GetJSValuesCount_Activated_Params
{
};

// Function Awesomium.AweSeqAct_SetCookie.Activated
struct UAweSeqAct_SetCookie_Activated_Params
{
};

// Function Awesomium.AweSeqCond_ArePluginsEnabled.Activated
struct UAweSeqCond_ArePluginsEnabled_Activated_Params
{
};

// Function Awesomium.AweSeqCond_IsLoadingPage.Activated
struct UAweSeqCond_IsLoadingPage_Activated_Params
{
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnShowJavascriptDialog
struct AAweWebViewCaptureActor_InternalOnShowJavascriptDialog_Params
{
	int                                                RequestID;                                                // (Parm)
	int                                                DialogFlags;                                              // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     DefaultPrompt;                                            // (Parm, NeedCtorLink)
	struct FString                                     FrameURL;                                                 // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptConsoleMessage
struct AAweWebViewCaptureActor_InternalOnJavascriptConsoleMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                LineNumber;                                               // (Parm)
	struct FString                                     Source;                                                   // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnChangeHistory
struct AAweWebViewCaptureActor_InternalOnChangeHistory_Params
{
	int                                                BackCount;                                                // (Parm)
	int                                                ForwardCount;                                             // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnDocumentReady
struct AAweWebViewCaptureActor_InternalOnDocumentReady_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnGetPageContents
struct AAweWebViewCaptureActor_InternalOnGetPageContents_Params
{
	struct FString                                     InURL;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Contents;                                                 // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewPluginCrashed
struct AAweWebViewCaptureActor_InternalOnWebViewPluginCrashed_Params
{
	struct FString                                     PlugInName;                                               // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewCrashed
struct AAweWebViewCaptureActor_InternalOnWebViewCrashed_Params
{
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnReceiveTitle
struct AAweWebViewCaptureActor_InternalOnReceiveTitle_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     FrameName;                                                // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptCallback
struct AAweWebViewCaptureActor_InternalOnJavascriptCallback_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	struct FString                                     CallbackName;                                             // (Parm, NeedCtorLink)
	TArray<struct FJSValue>                            Arguments;                                                // (Parm, NeedCtorLink)
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnFinishLoading
struct AAweWebViewCaptureActor_InternalOnFinishLoading_Params
{
};

// Function Awesomium.AweWebViewCaptureActor.InternalOnBeginLoadingFrame
struct AAweWebViewCaptureActor_InternalOnBeginLoadingFrame_Params
{
	struct FQWord                                      FrameID;                                                  // (Parm)
	struct FString                                     InURL;                                                    // (Parm, NeedCtorLink)
	bool                                               IsMainFrame;                                              // (Parm)
	bool                                               IsErrorPage;                                              // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnStop
struct AAweWebViewCaptureActor_OnStop_Params
{
	class UAweSeqAct_Stop*                             Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnSetZoom
struct AAweWebViewCaptureActor_OnSetZoom_Params
{
	class UAweSeqAct_SetZoom*                          Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnSetTextureRenderTarget
struct AAweWebViewCaptureActor_OnSetTextureRenderTarget_Params
{
	class UAweSeqAct_SetTextureRenderTarget*           Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnSetObjectProperty
struct AAweWebViewCaptureActor_OnSetObjectProperty_Params
{
	class UAweSeqAct_SetObjectProperty*                Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnSetMousePosition
struct AAweWebViewCaptureActor_OnSetMousePosition_Params
{
	class UAweSeqAct_SetMousePosition*                 Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnResumeRendering
struct AAweWebViewCaptureActor_OnResumeRendering_Params
{
	class UAweSeqAct_ResumeRendering*                  Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnResetZoom
struct AAweWebViewCaptureActor_OnResetZoom_Params
{
	class UAweSeqAct_ResetZoom*                        Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnReload
struct AAweWebViewCaptureActor_OnReload_Params
{
	class UAweSeqAct_Reload*                           Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnPauseRendering
struct AAweWebViewCaptureActor_OnPauseRendering_Params
{
	class UAweSeqAct_PauseRendering*                   Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnLoseFocus
struct AAweWebViewCaptureActor_OnLoseFocus_Params
{
	class UAweSeqAct_LoseFocus*                        Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptVoid
struct AAweWebViewCaptureActor_OnJavascriptVoid_Params
{
	class UAweSeqAct_JavascriptVoid*                   Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptString
struct AAweWebViewCaptureActor_OnJavascriptString_Params
{
	class UAweSeqAct_JavascriptString*                 Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptInt
struct AAweWebViewCaptureActor_OnJavascriptInt_Params
{
	class UAweSeqAct_JavascriptInt*                    Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptFloat
struct AAweWebViewCaptureActor_OnJavascriptFloat_Params
{
	class UAweSeqAct_JavascriptFloat*                  Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptBool
struct AAweWebViewCaptureActor_OnJavascriptBool_Params
{
	class UAweSeqAct_JavascriptBool*                   Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnJavascriptArray
struct AAweWebViewCaptureActor_OnJavascriptArray_Params
{
	class UAweSeqAct_JavascriptArray*                  Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnInputKey
struct AAweWebViewCaptureActor_OnInputKey_Params
{
	class UAweSeqAct_InputKey*                         Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnInputChar
struct AAweWebViewCaptureActor_OnInputChar_Params
{
	class UAweSeqAct_InputChar*                        Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnInputAxis
struct AAweWebViewCaptureActor_OnInputAxis_Params
{
	class UAweSeqAct_InputAxis*                        Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnGoToHistoryOffset
struct AAweWebViewCaptureActor_OnGoToHistoryOffset_Params
{
	class UAweSeqAct_GoToHistoryOffset*                Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnGetZoom
struct AAweWebViewCaptureActor_OnGetZoom_Params
{
	class UAweSeqAct_GetZoom*                          Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnGetURL
struct AAweWebViewCaptureActor_OnGetURL_Params
{
	class UAweSeqAct_GetURL*                           Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnGainFocus
struct AAweWebViewCaptureActor_OnGainFocus_Params
{
	class UAweSeqAct_GainFocus*                        Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnDestroyObject
struct AAweWebViewCaptureActor_OnDestroyObject_Params
{
	class UAweSeqAct_DestroyObject*                    Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnCreateObject
struct AAweWebViewCaptureActor_OnCreateObject_Params
{
	class UAweSeqAct_CreateObject*                     Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnCallJavascriptFunction
struct AAweWebViewCaptureActor_OnCallJavascriptFunction_Params
{
	class UAweSeqAct_CallJavascriptFunction*           Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnLoadHTML
struct AAweWebViewCaptureActor_OnLoadHTML_Params
{
	class UAweSeqAct_LoadHTML*                         Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnLoadFile
struct AAweWebViewCaptureActor_OnLoadFile_Params
{
	class UAweSeqAct_LoadFile*                         Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.OnLoadURL
struct AAweWebViewCaptureActor_OnLoadURL_Params
{
	class UAweSeqAct_LoadURL*                          Action;                                                   // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.SetZoom
struct AAweWebViewCaptureActor_SetZoom_Params
{
	float                                              NewZoom;                                                  // (Parm)
};

// Function Awesomium.AweWebViewCaptureActor.SetResource
struct AAweWebViewCaptureActor_SetResource_Params
{
	struct FString                                     NewResource;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<EResourceType>                         NewResourceType;                                          // (OptionalParm, Parm)
};

// Function Awesomium.AweWebViewCaptureActor.PostBeginPlay
struct AAweWebViewCaptureActor_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
