// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_Awesomium_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Awesomium.AweWebViewComponent.OnUpdateIMEImpl
// (Native, Public)
// Parameters:
// int                            Type                           (Parm)
// int                            CaretX                         (Parm)
// int                            CaretY                         (Parm)

void UAweWebViewComponent::OnUpdateIMEImpl(int Type, int CaretX, int CaretY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnUpdateIMEImpl");

	UAweWebViewComponent_OnUpdateIMEImpl_Params params;
	params.Type = Type;
	params.CaretX = CaretX;
	params.CaretY = CaretY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeIMERange
// (Public, Delegate)
// Parameters:
// struct FQWord                  Start                          (Parm)
// struct FQWord                  End                            (Parm)

void UAweWebViewComponent::OnChangeIMERange(const struct FQWord& Start, const struct FQWord& End)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeIMERange");

	UAweWebViewComponent_OnChangeIMERange_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnCancelIME
// (Public, Delegate)

void UAweWebViewComponent::OnCancelIME()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnCancelIME");

	UAweWebViewComponent_OnCancelIME_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnUpdateIME
// (Public, Delegate)
// Parameters:
// int                            Type                           (Parm)
// int                            CaretX                         (Parm)
// int                            CaretY                         (Parm)

void UAweWebViewComponent::OnUpdateIME(int Type, int CaretX, int CaretY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnUpdateIME");

	UAweWebViewComponent_OnUpdateIME_Params params;
	params.Type = Type;
	params.CaretX = CaretX;
	params.CaretY = CaretY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowPageInfoDialog
// (Public, Delegate)
// Parameters:
// struct FWebPageInfo            PageInfo                       (Const, Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowPageInfoDialog(const struct FWebPageInfo& PageInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowPageInfoDialog");

	UAweWebViewComponent_OnShowPageInfoDialog_Params params;
	params.PageInfo = PageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowCertificateErrorDialog
// (Public, Delegate)
// Parameters:
// bool                           IsOverridable                  (Parm)
// struct FString                 URL                            (Const, Parm, NeedCtorLink)
// int                            Error                          (Parm)

void UAweWebViewComponent::OnShowCertificateErrorDialog(bool IsOverridable, const struct FString& URL, int Error)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowCertificateErrorDialog");

	UAweWebViewComponent_OnShowCertificateErrorDialog_Params params;
	params.IsOverridable = IsOverridable;
	params.URL = URL;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowLoginDialog
// (Public, Delegate)
// Parameters:
// struct FWebLoginDialogInfo     DialogInfo                     (Const, Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowLoginDialog(const struct FWebLoginDialogInfo& DialogInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowLoginDialog");

	UAweWebViewComponent_OnShowLoginDialog_Params params;
	params.DialogInfo = DialogInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowFileChooser
// (Public, Delegate)
// Parameters:
// struct FWebFileChooserInfo     ChooserInfo                    (Const, Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowFileChooser(const struct FWebFileChooserInfo& ChooserInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowFileChooser");

	UAweWebViewComponent_OnShowFileChooser_Params params;
	params.ChooserInfo = ChooserInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowContextMenu
// (Public, Delegate)
// Parameters:
// struct FWebContextMenuInfo     MenuInfo                       (Const, Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowContextMenu(const struct FWebContextMenuInfo& MenuInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowContextMenu");

	UAweWebViewComponent_OnShowContextMenu_Params params;
	params.MenuInfo = MenuInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowPopupMenu
// (Public, Delegate)
// Parameters:
// struct FWebPopupMenuInfo       MenuInfo                       (Const, Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowPopupMenu(const struct FWebPopupMenuInfo& MenuInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowPopupMenu");

	UAweWebViewComponent_OnShowPopupMenu_Params params;
	params.MenuInfo = MenuInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnCrashed
// (Public, Delegate)
// Parameters:
// int                            Status                         (Parm)

void UAweWebViewComponent::OnCrashed(int Status)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnCrashed");

	UAweWebViewComponent_OnCrashed_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnResponsive
// (Public, Delegate)

void UAweWebViewComponent::OnResponsive()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnResponsive");

	UAweWebViewComponent_OnResponsive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnUnresponsive
// (Public, Delegate)

void UAweWebViewComponent::OnUnresponsive()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnUnresponsive");

	UAweWebViewComponent_OnUnresponsive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnLaunch
// (Public, Delegate)

void UAweWebViewComponent::OnLaunch()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnLaunch");

	UAweWebViewComponent_OnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowCreatedWebView
// (Public, Delegate)
// Parameters:
// struct FString                 OpenerURL                      (Parm, NeedCtorLink)
// struct FString                 TargetURL                      (Parm, NeedCtorLink)
// struct FVector2D               InitialPos                     (Parm)
// struct FVector2D               InitialSize                    (Parm)
// bool                           IsPopup                        (Parm)

void UAweWebViewComponent::OnShowCreatedWebView(const struct FString& OpenerURL, const struct FString& TargetURL, const struct FVector2D& InitialPos, const struct FVector2D& InitialSize, bool IsPopup)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowCreatedWebView");

	UAweWebViewComponent_OnShowCreatedWebView_Params params;
	params.OpenerURL = OpenerURL;
	params.TargetURL = TargetURL;
	params.InitialPos = InitialPos;
	params.InitialSize = InitialSize;
	params.IsPopup = IsPopup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnShowJavascriptDialog
// (Public, Delegate)
// Parameters:
// int                            RequestID                      (Parm)
// int                            DialogFlags                    (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 DefaultPrompt                  (Parm, NeedCtorLink)
// struct FString                 FrameURL                       (Parm, NeedCtorLink)

void UAweWebViewComponent::OnShowJavascriptDialog(int RequestID, int DialogFlags, const struct FString& Message, const struct FString& DefaultPrompt, const struct FString& FrameURL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnShowJavascriptDialog");

	UAweWebViewComponent_OnShowJavascriptDialog_Params params;
	params.RequestID = RequestID;
	params.DialogFlags = DialogFlags;
	params.Message = Message;
	params.DefaultPrompt = DefaultPrompt;
	params.FrameURL = FrameURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnJavascriptConsoleMessage
// (Public, Delegate)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)
// int                            LineNumber                     (Parm)
// struct FString                 Source                         (Parm, NeedCtorLink)

void UAweWebViewComponent::OnJavascriptConsoleMessage(const struct FString& Message, int LineNumber, const struct FString& Source)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnJavascriptConsoleMessage");

	UAweWebViewComponent_OnJavascriptConsoleMessage_Params params;
	params.Message = Message;
	params.LineNumber = LineNumber;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeHistory
// (Public, Delegate)
// Parameters:
// int                            BackCount                      (Parm)
// int                            ForwardCount                   (Parm)

void UAweWebViewComponent::OnChangeHistory(int BackCount, int ForwardCount)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeHistory");

	UAweWebViewComponent_OnChangeHistory_Params params;
	params.BackCount = BackCount;
	params.ForwardCount = ForwardCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnDocumentReady
// (Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UAweWebViewComponent::OnDocumentReady(const struct FString& URL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnDocumentReady");

	UAweWebViewComponent_OnDocumentReady_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnGetPageContents
// (Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Contents                       (Parm, NeedCtorLink)

void UAweWebViewComponent::OnGetPageContents(const struct FString& URL, const struct FString& Contents)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnGetPageContents");

	UAweWebViewComponent_OnGetPageContents_Params params;
	params.URL = URL;
	params.Contents = Contents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnWebViewPluginCrashed
// (Public, Delegate)
// Parameters:
// struct FString                 PlugInName                     (Parm, NeedCtorLink)

void UAweWebViewComponent::OnWebViewPluginCrashed(const struct FString& PlugInName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnWebViewPluginCrashed");

	UAweWebViewComponent_OnWebViewPluginCrashed_Params params;
	params.PlugInName = PlugInName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnWebViewCrashed
// (Public, Delegate)

void UAweWebViewComponent::OnWebViewCrashed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnWebViewCrashed");

	UAweWebViewComponent_OnWebViewCrashed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnReceiveTitle
// (Public, Delegate)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 FrameName                      (Parm, NeedCtorLink)

void UAweWebViewComponent::OnReceiveTitle(const struct FString& Title, const struct FString& FrameName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnReceiveTitle");

	UAweWebViewComponent_OnReceiveTitle_Params params;
	params.Title = Title;
	params.FrameName = FrameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnJavascriptCallback
// (Public, Delegate)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// struct FString                 CallbackName                   (Parm, NeedCtorLink)
// TArray<struct FJSValue>        Arguments                      (Parm, NeedCtorLink)

void UAweWebViewComponent::OnJavascriptCallback(const struct FString& ObjectName, const struct FString& CallbackName, TArray<struct FJSValue> Arguments)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnJavascriptCallback");

	UAweWebViewComponent_OnJavascriptCallback_Params params;
	params.ObjectName = ObjectName;
	params.CallbackName = CallbackName;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnFinishLoading
// (Public, Delegate)

void UAweWebViewComponent::OnFinishLoading()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnFinishLoading");

	UAweWebViewComponent_OnFinishLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnFailLoadingFrame
// (Public, Delegate)
// Parameters:
// struct FQWord                  FrameID                        (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           IsMainFrame                    (Parm)
// int                            ErrorCode                      (Parm)
// struct FString                 ErrorDescription               (Parm, NeedCtorLink)

void UAweWebViewComponent::OnFailLoadingFrame(const struct FQWord& FrameID, const struct FString& URL, bool IsMainFrame, int ErrorCode, const struct FString& ErrorDescription)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnFailLoadingFrame");

	UAweWebViewComponent_OnFailLoadingFrame_Params params;
	params.FrameID = FrameID;
	params.URL = URL;
	params.IsMainFrame = IsMainFrame;
	params.ErrorCode = ErrorCode;
	params.ErrorDescription = ErrorDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnBeginLoadingFrame
// (Public, Delegate)
// Parameters:
// struct FQWord                  FrameID                        (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           IsMainFrame                    (Parm)
// bool                           IsErrorPage                    (Parm)

void UAweWebViewComponent::OnBeginLoadingFrame(const struct FQWord& FrameID, const struct FString& URL, bool IsMainFrame, bool IsErrorPage)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnBeginLoadingFrame");

	UAweWebViewComponent_OnBeginLoadingFrame_Params params;
	params.FrameID = FrameID;
	params.URL = URL;
	params.IsMainFrame = IsMainFrame;
	params.IsErrorPage = IsErrorPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeFocus
// (Public, Delegate)
// Parameters:
// int                            Focus                          (Parm)

void UAweWebViewComponent::OnChangeFocus(int Focus)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeFocus");

	UAweWebViewComponent_OnChangeFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeCursor
// (Public, Delegate)
// Parameters:
// int                            Cursor                         (Parm)

void UAweWebViewComponent::OnChangeCursor(int Cursor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeCursor");

	UAweWebViewComponent_OnChangeCursor_Params params;
	params.Cursor = Cursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeTargetURL
// (Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UAweWebViewComponent::OnChangeTargetURL(const struct FString& URL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeTargetURL");

	UAweWebViewComponent_OnChangeTargetURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeTooltip
// (Public, Delegate)
// Parameters:
// struct FString                 ToolTip                        (Parm, NeedCtorLink)

void UAweWebViewComponent::OnChangeTooltip(const struct FString& ToolTip)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeTooltip");

	UAweWebViewComponent_OnChangeTooltip_Params params;
	params.ToolTip = ToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeAddressBar
// (Public, Delegate)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UAweWebViewComponent::OnChangeAddressBar(const struct FString& URL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeAddressBar");

	UAweWebViewComponent_OnChangeAddressBar_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.OnChangeTitle
// (Public, Delegate)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)

void UAweWebViewComponent::OnChangeTitle(const struct FString& Title)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.OnChangeTitle");

	UAweWebViewComponent_OnChangeTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.SelectAll
// (Final, Native, Public)

void UAweWebViewComponent::SelectAll()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SelectAll");

	UAweWebViewComponent_SelectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.PasteAndMatchStyle
// (Final, Native, Public)

void UAweWebViewComponent::PasteAndMatchStyle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.PasteAndMatchStyle");

	UAweWebViewComponent_PasteAndMatchStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Paste
// (Final, Native, Public)

void UAweWebViewComponent::Paste()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Paste");

	UAweWebViewComponent_Paste_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.CopyImageAt
// (Final, Native, Public)
// Parameters:
// int                            X                              (Parm)
// int                            Y                              (Parm)

void UAweWebViewComponent::CopyImageAt(int X, int Y)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.CopyImageAt");

	UAweWebViewComponent_CopyImageAt_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Copy
// (Final, Native, Public)

void UAweWebViewComponent::Copy()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Copy");

	UAweWebViewComponent_Copy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Cut
// (Final, Native, Public)

void UAweWebViewComponent::Cut()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Cut");

	UAweWebViewComponent_Cut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Redo
// (Final, Native, Public)

void UAweWebViewComponent::Redo()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Redo");

	UAweWebViewComponent_Redo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Undo
// (Final, Native, Public)

void UAweWebViewComponent::Undo()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Undo");

	UAweWebViewComponent_Undo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.SetCustomMethod
// (Final, Native, Public)
// Parameters:
// struct FString                 MethodName                     (Parm, NeedCtorLink)
// bool                           bRetValue                      (Parm)

void UAweWebViewComponent::SetCustomMethod(const struct FString& MethodName, bool bRetValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetCustomMethod");

	UAweWebViewComponent_SetCustomMethod_Params params;
	params.MethodName = MethodName;
	params.bRetValue = bRetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.SetMousePosition
// (Final, Native, Public)
// Parameters:
// struct FVector2D               NewMousePosition               (Parm)

void UAweWebViewComponent::SetMousePosition(const struct FVector2D& NewMousePosition)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetMousePosition");

	UAweWebViewComponent_SetMousePosition_Params params;
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.InputChar
// (Final, Native, Public)
// Parameters:
// struct FString                 Unicode                        (Parm, NeedCtorLink)

void UAweWebViewComponent::InputChar(const struct FString& Unicode)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.InputChar");

	UAweWebViewComponent_InputChar_Params params;
	params.Unicode = Unicode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.InputAxis
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// float                          Delta                          (Parm)

void UAweWebViewComponent::InputAxis(const struct FName& Key, float Delta)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.InputAxis");

	UAweWebViewComponent_InputAxis_Params params;
	params.Key = Key;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.InputMouse
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (Parm)

void UAweWebViewComponent::InputMouse(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.InputMouse");

	UAweWebViewComponent_InputMouse_Params params;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.InputKey
// (Final, Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (Parm)

void UAweWebViewComponent::InputKey(const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.InputKey");

	UAweWebViewComponent_InputKey_Params params;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GetZoom
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAweWebViewComponent::GetZoom()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GetZoom");

	UAweWebViewComponent_GetZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.ResetZoom
// (Final, Native, Public)

void UAweWebViewComponent::ResetZoom()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.ResetZoom");

	UAweWebViewComponent_ResetZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.SetZoom
// (Final, Native, Public)
// Parameters:
// float                          ZoomPercent                    (Parm)

void UAweWebViewComponent::SetZoom(float ZoomPercent)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetZoom");

	UAweWebViewComponent_SetZoom_Params params;
	params.ZoomPercent = ZoomPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.ResumeRendering
// (Final, Native, Public)

void UAweWebViewComponent::ResumeRendering()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.ResumeRendering");

	UAweWebViewComponent_ResumeRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.PauseRendering
// (Final, Native, Public)

void UAweWebViewComponent::PauseRendering()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.PauseRendering");

	UAweWebViewComponent_PauseRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.IsLoadingPage
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::IsLoadingPage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.IsLoadingPage");

	UAweWebViewComponent_IsLoadingPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.SetObjectProperty
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// struct FString                 PropertyName                   (Parm, NeedCtorLink)
// struct FJSValue                Value                          (Const, Parm, OutParm, NeedCtorLink)

void UAweWebViewComponent::SetObjectProperty(const struct FString& ObjectName, const struct FString& PropertyName, struct FJSValue* Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetObjectProperty");

	UAweWebViewComponent_SetObjectProperty_Params params;
	params.ObjectName = ObjectName;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Awesomium.AweWebViewComponent.DestroyObject
// (Final, Native, Public)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)

void UAweWebViewComponent::DestroyObject(const struct FString& ObjectName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.DestroyObject");

	UAweWebViewComponent_DestroyObject_Params params;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.CreateObject
// (Final, Native, Public)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)

void UAweWebViewComponent::CreateObject(const struct FString& ObjectName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.CreateObject");

	UAweWebViewComponent_CreateObject_Params params;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.CallJavascriptFunction
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Function                       (Parm, NeedCtorLink)
// TArray<struct FJSValue>        Arguments                      (Parm, NeedCtorLink)
// struct FString                 Object                         (OptionalParm, Parm, NeedCtorLink)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)

void UAweWebViewComponent::CallJavascriptFunction(const struct FString& Function, TArray<struct FJSValue> Arguments, const struct FString& Object, const struct FString& FrameName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.CallJavascriptFunction");

	UAweWebViewComponent_CallJavascriptFunction_Params params;
	params.Function = Function;
	params.Arguments = Arguments;
	params.Object = Object;
	params.FrameName = FrameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.JavascriptArray
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// TArray<struct FJSValue>        JSResults                      (Parm, OutParm, NeedCtorLink)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)
// int                            TimeOut                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::JavascriptArray(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, TArray<struct FJSValue>* JSResults)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptArray");

	UAweWebViewComponent_JavascriptArray_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSResults != nullptr)
		*JSResults = params.JSResults;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.JavascriptString
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// struct FString                 JSResult                       (Parm, OutParm, NeedCtorLink)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)
// int                            TimeOut                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::JavascriptString(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, struct FString* JSResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptString");

	UAweWebViewComponent_JavascriptString_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSResult != nullptr)
		*JSResult = params.JSResult;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.JavascriptFloat
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// float                          JSResult                       (Parm, OutParm)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)
// int                            TimeOut                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::JavascriptFloat(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, float* JSResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptFloat");

	UAweWebViewComponent_JavascriptFloat_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSResult != nullptr)
		*JSResult = params.JSResult;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.JavascriptInt
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// int                            JSResult                       (Parm, OutParm)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)
// int                            TimeOut                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::JavascriptInt(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, int* JSResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptInt");

	UAweWebViewComponent_JavascriptInt_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSResult != nullptr)
		*JSResult = params.JSResult;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.JavascriptBool
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// unsigned char                  JSResult                       (Parm, OutParm)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)
// int                            TimeOut                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::JavascriptBool(const struct FString& Javascript, const struct FString& FrameName, int TimeOut, unsigned char* JSResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptBool");

	UAweWebViewComponent_JavascriptBool_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;
	params.TimeOut = TimeOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSResult != nullptr)
		*JSResult = params.JSResult;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.JavascriptVoid
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Javascript                     (Parm, NeedCtorLink)
// struct FString                 FrameName                      (OptionalParm, Parm, NeedCtorLink)

void UAweWebViewComponent::JavascriptVoid(const struct FString& Javascript, const struct FString& FrameName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.JavascriptVoid");

	UAweWebViewComponent_JavascriptVoid_Params params;
	params.Javascript = Javascript;
	params.FrameName = FrameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.CanGoForward
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::CanGoForward()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.CanGoForward");

	UAweWebViewComponent_CanGoForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.CanGoBack
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::CanGoBack()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.CanGoBack");

	UAweWebViewComponent_CanGoBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.Reload
// (Final, Native, Public)

void UAweWebViewComponent::Reload()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Reload");

	UAweWebViewComponent_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Stop
// (Final, Native, Public)

void UAweWebViewComponent::Stop()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Stop");

	UAweWebViewComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GoToHistoryOffset
// (Final, Native, Public)
// Parameters:
// int                            Offset                         (Parm)

void UAweWebViewComponent::GoToHistoryOffset(int Offset)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GoToHistoryOffset");

	UAweWebViewComponent_GoToHistoryOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GoForward
// (Final, Native, Public)

void UAweWebViewComponent::GoForward()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GoForward");

	UAweWebViewComponent_GoForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GoBack
// (Final, Native, Public)

void UAweWebViewComponent::GoBack()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GoBack");

	UAweWebViewComponent_GoBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GetURL
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UAweWebViewComponent::GetURL()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GetURL");

	UAweWebViewComponent_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.SetCookie
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Cookie                         (Parm, NeedCtorLink)
// bool                           IsHttpOnly                     (Parm)
// bool                           ForceSessionCookie             (Parm)

void UAweWebViewComponent::STATIC_SetCookie(const struct FString& URL, const struct FString& Cookie, bool IsHttpOnly, bool ForceSessionCookie)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetCookie");

	UAweWebViewComponent_SetCookie_Params params;
	params.URL = URL;
	params.Cookie = Cookie;
	params.IsHttpOnly = IsHttpOnly;
	params.ForceSessionCookie = ForceSessionCookie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.ClearCookies
// (Final, Native, Static, Public)

void UAweWebViewComponent::STATIC_ClearCookies()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.ClearCookies");

	UAweWebViewComponent_ClearCookies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.ClearCache
// (Final, Native, Static, Public)

void UAweWebViewComponent::STATIC_ClearCache()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.ClearCache");

	UAweWebViewComponent_ClearCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.ArePlugInsEnabled
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAweWebViewComponent::STATIC_ArePlugInsEnabled()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.ArePlugInsEnabled");

	UAweWebViewComponent_ArePlugInsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.LoseFocus
// (Native, Public)

void UAweWebViewComponent::LoseFocus()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.LoseFocus");

	UAweWebViewComponent_LoseFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.GainFocus
// (Native, Public)

void UAweWebViewComponent::GainFocus()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.GainFocus");

	UAweWebViewComponent_GainFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.LoadHTML
// (Final, Native, Public)
// Parameters:
// struct FString                 HTML                           (Parm, NeedCtorLink)

void UAweWebViewComponent::LoadHTML(const struct FString& HTML)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.LoadHTML");

	UAweWebViewComponent_LoadHTML_Params params;
	params.HTML = HTML;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.LoadFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UAweWebViewComponent::LoadFile(const struct FString& Filename)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.LoadFile");

	UAweWebViewComponent_LoadFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.LoadURL
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 UserName                       (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)

void UAweWebViewComponent::LoadURL(const struct FString& URL, const struct FString& UserName, const struct FString& Password)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.LoadURL");

	UAweWebViewComponent_LoadURL_Params params;
	params.URL = URL;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.SetTextureTarget
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UTextureRenderTarget2D*  NewTextureTarget               (OptionalParm, Parm)

void UAweWebViewComponent::SetTextureTarget(class UTextureRenderTarget2D* NewTextureTarget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.SetTextureTarget");

	UAweWebViewComponent_SetTextureTarget_Params params;
	params.NewTextureTarget = NewTextureTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.Initialize
// (Final, Native, Public)
// Parameters:
// int                            SizeX                          (Parm)
// int                            SizeY                          (Parm)

void UAweWebViewComponent::Initialize(int SizeX, int SizeY)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.Initialize");

	UAweWebViewComponent_Initialize_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.MakeJSString
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// struct FString                 Value                          (Parm, NeedCtorLink)
// struct FJSValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FJSValue UAweWebViewComponent::STATIC_MakeJSString(const struct FString& Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.MakeJSString");

	UAweWebViewComponent_MakeJSString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.MakeJSFloat
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// float                          Value                          (Parm)
// struct FJSValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FJSValue UAweWebViewComponent::STATIC_MakeJSFloat(float Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.MakeJSFloat");

	UAweWebViewComponent_MakeJSFloat_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.MakeJSInt
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// int                            Value                          (Parm)
// struct FJSValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FJSValue UAweWebViewComponent::STATIC_MakeJSInt(int Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.MakeJSInt");

	UAweWebViewComponent_MakeJSInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.MakeJSBool
// (Final, Defined, Static, Public, HasDefaults)
// Parameters:
// bool                           Value                          (Parm)
// struct FJSValue                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FJSValue UAweWebViewComponent::STATIC_MakeJSBool(bool Value)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.MakeJSBool");

	UAweWebViewComponent_MakeJSBool_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Awesomium.AweWebViewComponent.DelayUpdate
// (Defined, Event, Public)

void UAweWebViewComponent::DelayUpdate()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.DelayUpdate");

	UAweWebViewComponent_DelayUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewComponent.UpdateTexture
// (Native, Public)
// Parameters:
// bool                           Reattach                       (Parm)

void UAweWebViewComponent::UpdateTexture(bool Reattach)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewComponent.UpdateTexture");

	UAweWebViewComponent_UpdateTexture_Params params;
	params.Reattach = Reattach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweGameInfo.RestartPlayer
// (Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AAweGameInfo::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweGameInfo.RestartPlayer");

	AAweGameInfo_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_ClearCache.Activated
// (Defined, Public)

void UAweSeqAct_ClearCache::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_ClearCache.Activated");

	UAweSeqAct_ClearCache_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_ClearCookies.Activated
// (Defined, Public)

void UAweSeqAct_ClearCookies::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_ClearCookies.Activated");

	UAweSeqAct_ClearCookies_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_GetHistoryResult.Activated
// (Defined, Event, Public)

void UAweSeqAct_GetHistoryResult::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_GetHistoryResult.Activated");

	UAweSeqAct_GetHistoryResult_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_GetHistoryResultsCount.Activated
// (Defined, Event, Public)

void UAweSeqAct_GetHistoryResultsCount::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_GetHistoryResultsCount.Activated");

	UAweSeqAct_GetHistoryResultsCount_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_GetJSValue.Activated
// (Defined, Event, Public)

void UAweSeqAct_GetJSValue::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_GetJSValue.Activated");

	UAweSeqAct_GetJSValue_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_GetJSValuesCount.Activated
// (Defined, Event, Public)

void UAweSeqAct_GetJSValuesCount::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_GetJSValuesCount.Activated");

	UAweSeqAct_GetJSValuesCount_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqAct_SetCookie.Activated
// (Defined, Public)

void UAweSeqAct_SetCookie::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqAct_SetCookie.Activated");

	UAweSeqAct_SetCookie_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqCond_ArePluginsEnabled.Activated
// (Defined, Public)

void UAweSeqCond_ArePluginsEnabled::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqCond_ArePluginsEnabled.Activated");

	UAweSeqCond_ArePluginsEnabled_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweSeqCond_IsLoadingPage.Activated
// (Defined, Public)

void UAweSeqCond_IsLoadingPage::Activated()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweSeqCond_IsLoadingPage.Activated");

	UAweSeqCond_IsLoadingPage_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnShowJavascriptDialog
// (Defined, Public)
// Parameters:
// int                            RequestID                      (Parm)
// int                            DialogFlags                    (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 DefaultPrompt                  (Parm, NeedCtorLink)
// struct FString                 FrameURL                       (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnShowJavascriptDialog(int RequestID, int DialogFlags, const struct FString& Message, const struct FString& DefaultPrompt, const struct FString& FrameURL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnShowJavascriptDialog");

	AAweWebViewCaptureActor_InternalOnShowJavascriptDialog_Params params;
	params.RequestID = RequestID;
	params.DialogFlags = DialogFlags;
	params.Message = Message;
	params.DefaultPrompt = DefaultPrompt;
	params.FrameURL = FrameURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptConsoleMessage
// (Defined, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)
// int                            LineNumber                     (Parm)
// struct FString                 Source                         (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnJavascriptConsoleMessage(const struct FString& Message, int LineNumber, const struct FString& Source)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptConsoleMessage");

	AAweWebViewCaptureActor_InternalOnJavascriptConsoleMessage_Params params;
	params.Message = Message;
	params.LineNumber = LineNumber;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnChangeHistory
// (Defined, Public)
// Parameters:
// int                            BackCount                      (Parm)
// int                            ForwardCount                   (Parm)

void AAweWebViewCaptureActor::InternalOnChangeHistory(int BackCount, int ForwardCount)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnChangeHistory");

	AAweWebViewCaptureActor_InternalOnChangeHistory_Params params;
	params.BackCount = BackCount;
	params.ForwardCount = ForwardCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnDocumentReady
// (Defined, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnDocumentReady(const struct FString& URL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnDocumentReady");

	AAweWebViewCaptureActor_InternalOnDocumentReady_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnGetPageContents
// (Defined, Public)
// Parameters:
// struct FString                 InURL                          (Parm, NeedCtorLink)
// struct FString                 Contents                       (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnGetPageContents(const struct FString& InURL, const struct FString& Contents)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnGetPageContents");

	AAweWebViewCaptureActor_InternalOnGetPageContents_Params params;
	params.InURL = InURL;
	params.Contents = Contents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewPluginCrashed
// (Defined, Public)
// Parameters:
// struct FString                 PlugInName                     (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnWebViewPluginCrashed(const struct FString& PlugInName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewPluginCrashed");

	AAweWebViewCaptureActor_InternalOnWebViewPluginCrashed_Params params;
	params.PlugInName = PlugInName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewCrashed
// (Defined, Public)

void AAweWebViewCaptureActor::InternalOnWebViewCrashed()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnWebViewCrashed");

	AAweWebViewCaptureActor_InternalOnWebViewCrashed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnReceiveTitle
// (Defined, Public)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 FrameName                      (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnReceiveTitle(const struct FString& Title, const struct FString& FrameName)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnReceiveTitle");

	AAweWebViewCaptureActor_InternalOnReceiveTitle_Params params;
	params.Title = Title;
	params.FrameName = FrameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptCallback
// (Defined, Public)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// struct FString                 CallbackName                   (Parm, NeedCtorLink)
// TArray<struct FJSValue>        Arguments                      (Parm, NeedCtorLink)

void AAweWebViewCaptureActor::InternalOnJavascriptCallback(const struct FString& ObjectName, const struct FString& CallbackName, TArray<struct FJSValue> Arguments)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnJavascriptCallback");

	AAweWebViewCaptureActor_InternalOnJavascriptCallback_Params params;
	params.ObjectName = ObjectName;
	params.CallbackName = CallbackName;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnFinishLoading
// (Defined, Public)

void AAweWebViewCaptureActor::InternalOnFinishLoading()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnFinishLoading");

	AAweWebViewCaptureActor_InternalOnFinishLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.InternalOnBeginLoadingFrame
// (Defined, Public)
// Parameters:
// struct FQWord                  FrameID                        (Parm)
// struct FString                 InURL                          (Parm, NeedCtorLink)
// bool                           IsMainFrame                    (Parm)
// bool                           IsErrorPage                    (Parm)

void AAweWebViewCaptureActor::InternalOnBeginLoadingFrame(const struct FQWord& FrameID, const struct FString& InURL, bool IsMainFrame, bool IsErrorPage)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.InternalOnBeginLoadingFrame");

	AAweWebViewCaptureActor_InternalOnBeginLoadingFrame_Params params;
	params.FrameID = FrameID;
	params.InURL = InURL;
	params.IsMainFrame = IsMainFrame;
	params.IsErrorPage = IsErrorPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnStop
// (Defined, Public)
// Parameters:
// class UAweSeqAct_Stop*         Action                         (Parm)

void AAweWebViewCaptureActor::OnStop(class UAweSeqAct_Stop* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnStop");

	AAweWebViewCaptureActor_OnStop_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnSetZoom
// (Defined, Public)
// Parameters:
// class UAweSeqAct_SetZoom*      Action                         (Parm)

void AAweWebViewCaptureActor::OnSetZoom(class UAweSeqAct_SetZoom* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnSetZoom");

	AAweWebViewCaptureActor_OnSetZoom_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnSetTextureRenderTarget
// (Defined, Public)
// Parameters:
// class UAweSeqAct_SetTextureRenderTarget* Action                         (Parm)

void AAweWebViewCaptureActor::OnSetTextureRenderTarget(class UAweSeqAct_SetTextureRenderTarget* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnSetTextureRenderTarget");

	AAweWebViewCaptureActor_OnSetTextureRenderTarget_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnSetObjectProperty
// (Defined, Public, HasDefaults)
// Parameters:
// class UAweSeqAct_SetObjectProperty* Action                         (Parm)

void AAweWebViewCaptureActor::OnSetObjectProperty(class UAweSeqAct_SetObjectProperty* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnSetObjectProperty");

	AAweWebViewCaptureActor_OnSetObjectProperty_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnSetMousePosition
// (Defined, Public, HasDefaults)
// Parameters:
// class UAweSeqAct_SetMousePosition* Action                         (Parm)

void AAweWebViewCaptureActor::OnSetMousePosition(class UAweSeqAct_SetMousePosition* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnSetMousePosition");

	AAweWebViewCaptureActor_OnSetMousePosition_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnResumeRendering
// (Defined, Public)
// Parameters:
// class UAweSeqAct_ResumeRendering* Action                         (Parm)

void AAweWebViewCaptureActor::OnResumeRendering(class UAweSeqAct_ResumeRendering* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnResumeRendering");

	AAweWebViewCaptureActor_OnResumeRendering_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnResetZoom
// (Defined, Public)
// Parameters:
// class UAweSeqAct_ResetZoom*    Action                         (Parm)

void AAweWebViewCaptureActor::OnResetZoom(class UAweSeqAct_ResetZoom* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnResetZoom");

	AAweWebViewCaptureActor_OnResetZoom_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnReload
// (Defined, Public)
// Parameters:
// class UAweSeqAct_Reload*       Action                         (Parm)

void AAweWebViewCaptureActor::OnReload(class UAweSeqAct_Reload* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnReload");

	AAweWebViewCaptureActor_OnReload_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnPauseRendering
// (Defined, Public)
// Parameters:
// class UAweSeqAct_PauseRendering* Action                         (Parm)

void AAweWebViewCaptureActor::OnPauseRendering(class UAweSeqAct_PauseRendering* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnPauseRendering");

	AAweWebViewCaptureActor_OnPauseRendering_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnLoseFocus
// (Defined, Public)
// Parameters:
// class UAweSeqAct_LoseFocus*    Action                         (Parm)

void AAweWebViewCaptureActor::OnLoseFocus(class UAweSeqAct_LoseFocus* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnLoseFocus");

	AAweWebViewCaptureActor_OnLoseFocus_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptVoid
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptVoid* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptVoid(class UAweSeqAct_JavascriptVoid* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptVoid");

	AAweWebViewCaptureActor_OnJavascriptVoid_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptString
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptString* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptString(class UAweSeqAct_JavascriptString* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptString");

	AAweWebViewCaptureActor_OnJavascriptString_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptInt
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptInt* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptInt(class UAweSeqAct_JavascriptInt* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptInt");

	AAweWebViewCaptureActor_OnJavascriptInt_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptFloat
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptFloat* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptFloat(class UAweSeqAct_JavascriptFloat* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptFloat");

	AAweWebViewCaptureActor_OnJavascriptFloat_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptBool
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptBool* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptBool(class UAweSeqAct_JavascriptBool* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptBool");

	AAweWebViewCaptureActor_OnJavascriptBool_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnJavascriptArray
// (Defined, Public)
// Parameters:
// class UAweSeqAct_JavascriptArray* Action                         (Parm)

void AAweWebViewCaptureActor::OnJavascriptArray(class UAweSeqAct_JavascriptArray* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnJavascriptArray");

	AAweWebViewCaptureActor_OnJavascriptArray_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnInputKey
// (Defined, Public)
// Parameters:
// class UAweSeqAct_InputKey*     Action                         (Parm)

void AAweWebViewCaptureActor::OnInputKey(class UAweSeqAct_InputKey* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnInputKey");

	AAweWebViewCaptureActor_OnInputKey_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnInputChar
// (Defined, Public)
// Parameters:
// class UAweSeqAct_InputChar*    Action                         (Parm)

void AAweWebViewCaptureActor::OnInputChar(class UAweSeqAct_InputChar* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnInputChar");

	AAweWebViewCaptureActor_OnInputChar_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnInputAxis
// (Defined, Public)
// Parameters:
// class UAweSeqAct_InputAxis*    Action                         (Parm)

void AAweWebViewCaptureActor::OnInputAxis(class UAweSeqAct_InputAxis* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnInputAxis");

	AAweWebViewCaptureActor_OnInputAxis_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnGoToHistoryOffset
// (Defined, Public)
// Parameters:
// class UAweSeqAct_GoToHistoryOffset* Action                         (Parm)

void AAweWebViewCaptureActor::OnGoToHistoryOffset(class UAweSeqAct_GoToHistoryOffset* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnGoToHistoryOffset");

	AAweWebViewCaptureActor_OnGoToHistoryOffset_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnGetZoom
// (Defined, Public)
// Parameters:
// class UAweSeqAct_GetZoom*      Action                         (Parm)

void AAweWebViewCaptureActor::OnGetZoom(class UAweSeqAct_GetZoom* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnGetZoom");

	AAweWebViewCaptureActor_OnGetZoom_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnGetURL
// (Defined, Public)
// Parameters:
// class UAweSeqAct_GetURL*       Action                         (Parm)

void AAweWebViewCaptureActor::OnGetURL(class UAweSeqAct_GetURL* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnGetURL");

	AAweWebViewCaptureActor_OnGetURL_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnGainFocus
// (Defined, Public)
// Parameters:
// class UAweSeqAct_GainFocus*    Action                         (Parm)

void AAweWebViewCaptureActor::OnGainFocus(class UAweSeqAct_GainFocus* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnGainFocus");

	AAweWebViewCaptureActor_OnGainFocus_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnDestroyObject
// (Defined, Public)
// Parameters:
// class UAweSeqAct_DestroyObject* Action                         (Parm)

void AAweWebViewCaptureActor::OnDestroyObject(class UAweSeqAct_DestroyObject* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnDestroyObject");

	AAweWebViewCaptureActor_OnDestroyObject_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnCreateObject
// (Defined, Public)
// Parameters:
// class UAweSeqAct_CreateObject* Action                         (Parm)

void AAweWebViewCaptureActor::OnCreateObject(class UAweSeqAct_CreateObject* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnCreateObject");

	AAweWebViewCaptureActor_OnCreateObject_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnCallJavascriptFunction
// (Defined, Public)
// Parameters:
// class UAweSeqAct_CallJavascriptFunction* Action                         (Parm)

void AAweWebViewCaptureActor::OnCallJavascriptFunction(class UAweSeqAct_CallJavascriptFunction* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnCallJavascriptFunction");

	AAweWebViewCaptureActor_OnCallJavascriptFunction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnLoadHTML
// (Defined, Public)
// Parameters:
// class UAweSeqAct_LoadHTML*     Action                         (Parm)

void AAweWebViewCaptureActor::OnLoadHTML(class UAweSeqAct_LoadHTML* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnLoadHTML");

	AAweWebViewCaptureActor_OnLoadHTML_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnLoadFile
// (Defined, Public)
// Parameters:
// class UAweSeqAct_LoadFile*     Action                         (Parm)

void AAweWebViewCaptureActor::OnLoadFile(class UAweSeqAct_LoadFile* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnLoadFile");

	AAweWebViewCaptureActor_OnLoadFile_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.OnLoadURL
// (Defined, Public)
// Parameters:
// class UAweSeqAct_LoadURL*      Action                         (Parm)

void AAweWebViewCaptureActor::OnLoadURL(class UAweSeqAct_LoadURL* Action)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.OnLoadURL");

	AAweWebViewCaptureActor_OnLoadURL_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.SetZoom
// (Defined, Public)
// Parameters:
// float                          NewZoom                        (Parm)

void AAweWebViewCaptureActor::SetZoom(float NewZoom)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.SetZoom");

	AAweWebViewCaptureActor_SetZoom_Params params;
	params.NewZoom = NewZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.SetResource
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FString                 NewResource                    (Parm, NeedCtorLink)
// TEnumAsByte<EResourceType>     NewResourceType                (OptionalParm, Parm)

void AAweWebViewCaptureActor::SetResource(const struct FString& NewResource, TEnumAsByte<EResourceType> NewResourceType)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.SetResource");

	AAweWebViewCaptureActor_SetResource_Params params;
	params.NewResource = NewResource;
	params.NewResourceType = NewResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Awesomium.AweWebViewCaptureActor.PostBeginPlay
// (Defined, Public)

void AAweWebViewCaptureActor::PostBeginPlay()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>("Function Awesomium.AweWebViewCaptureActor.PostBeginPlay");

	AAweWebViewCaptureActor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
