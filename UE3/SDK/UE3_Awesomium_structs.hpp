#pragma once

// Unreal Engine 3 (3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE3_Basic.hpp"
#include "UE3_Engine_classes.hpp"
#include "UE3_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Awesomium.AweWebViewComponent.JSValueType
enum class EJSValueType : uint8_t
{
	JSVT_Null                      = 0,
	JSVT_Bool                      = 1,
	JSVT_Int                       = 2,
	JSVT_Float                     = 3,
	JSVT_String                    = 4,
	JSVT_MAX                       = 5
};


// Enum Awesomium.AweWebViewComponent.URLFilterMode
enum class EURLFilterMode : uint8_t
{
	UFM_None                       = 0,
	UFM_BlackList                  = 1,
	UFM_WhiteList                  = 2,
	UFM_MAX                        = 3
};


// Enum Awesomium.AweWebViewCaptureActor.EResourceType
enum class EResourceType : uint8_t
{
	RT_URL                         = 0,
	RT_File                        = 1,
	_RT_HTML                        = 2,
	RT_MAX                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Awesomium.AweWebViewComponent.HistoryResult
// 0x0028
struct FHistoryResult
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Title;                                                    // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              VisitTime;                                                // 0x0020(0x0004) (AlwaysInit)
	int                                                VisitCount;                                               // 0x0024(0x0004) (AlwaysInit)
};

// ScriptStruct Awesomium.AweWebViewComponent.JSValue
// 0x001C
struct FJSValue
{
	TEnumAsByte<EJSValueType>                          Type;                                                     // 0x0000(0x0001) (Edit, AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x0004(0x0004) (Edit, AlwaysInit)
	float                                              FloatValue;                                               // 0x0008(0x0004) (Edit, AlwaysInit)
	struct FString                                     StringValue;                                              // 0x000C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebPageInfo
// 0x003C
struct FWebPageInfo
{
	struct FString                                     PageURL;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                SecurityStatus;                                           // 0x0010(0x0004)
	int                                                ContentStatus;                                            // 0x0014(0x0004)
	int                                                CertError;                                                // 0x0018(0x0004)
	struct FString                                     CertSubject;                                              // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     CertIssuer;                                               // 0x002C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebLoginDialogInfo
// 0x004C
struct FWebLoginDialogInfo
{
	int                                                RequestID;                                                // 0x0000(0x0004)
	struct FString                                     RequestURL;                                               // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      IsProxy : 1;                                              // 0x0014(0x0004)
	struct FString                                     Host;                                                     // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                Port;                                                     // 0x0028(0x0004)
	struct FString                                     Scheme;                                                   // 0x002C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Realm;                                                    // 0x003C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebFileChooserInfo
// 0x0034
struct FWebFileChooserInfo
{
	int                                                Mode;                                                     // 0x0000(0x0004)
	struct FString                                     Title;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     DefaultFileName;                                          // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             AcceptTypes;                                              // 0x0024(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebContextMenuInfo
// 0x0070
struct FWebContextMenuInfo
{
	int                                                PosX;                                                     // 0x0000(0x0004)
	int                                                PosY;                                                     // 0x0004(0x0004)
	int                                                MediaType;                                                // 0x0008(0x0004)
	int                                                MediaState;                                               // 0x000C(0x0004)
	struct FString                                     LinkURL;                                                  // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     SrcURL;                                                   // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     PageURL;                                                  // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     FrameURL;                                                 // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FQWord                                      FrameID;                                                  // 0x0050(0x0008)
	struct FString                                     SelectionText;                                            // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      IsEditable : 1;                                           // 0x0068(0x0004)
	int                                                EditFlags;                                                // 0x006C(0x0004)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebMenuItem
// 0x002C
struct FWebMenuItem
{
	int                                                Type;                                                     // 0x0000(0x0004)
	struct FString                                     Label;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     ToolTip;                                                  // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                Action;                                                   // 0x0024(0x0004)
	unsigned long                                      RightToLeft : 1;                                          // 0x0028(0x0004)
	unsigned long                                      HasDirectionalOverride : 1;                               // 0x0028(0x0004)
	unsigned long                                      Enabled : 1;                                              // 0x0028(0x0004)
	unsigned long                                      Checked : 1;                                              // 0x0028(0x0004)
};

// ScriptStruct Awesomium.AweWebViewComponent.WebPopupMenuInfo
// 0x0034
struct FWebPopupMenuInfo
{
	struct FVector2D                                   pos;                                                      // 0x0000(0x0008)
	struct FVector2D                                   Size;                                                     // 0x0008(0x0008)
	int                                                ItemHeight;                                               // 0x0010(0x0004)
	struct FQWord                                      ItemFontSize;                                             // 0x0014(0x0008)
	int                                                SelectedItem;                                             // 0x001C(0x0004)
	TArray<struct FWebMenuItem>                        Items;                                                    // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      RightAligned : 1;                                         // 0x0030(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
