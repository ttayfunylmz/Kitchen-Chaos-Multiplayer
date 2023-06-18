#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct List_1_tD3D80A48908E0B8646110C913780E72E2157A541;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct UnsafeList_1_t7576474D288A30F1540A43F66481308FA0558594;
struct Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D;
struct ReadActionJsonU5BU5D_t77929C62C9D95D0C5DF96AEB33748B4CD11EF89D;
struct WriteActionJsonU5BU5D_t028B15E467D7812D1C4C9B6F905E414007BEF46A;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct StateChangeMonitorListenerU5BU5D_tEF042EA5E57858FE7C48A9F1AF7A55B249ADB5A9;
struct RemoteInputDeviceU5BU5D_tB3C8B8C0AAE6347DB4E4D58D94254291C1FDD7F5;
struct BitRegionU5BU5D_t6D477477F7EB84242BA07FA65BC1BD6DA74A3D39;
struct DeviceJsonU5BU5D_tD8A3D5639BB87977D72F14C0AEDA8EBC7C625278;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
struct DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE;
struct DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3;
struct DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A;
struct DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct ExtendedPointerEventData_t164B462A9B123B2EE69B7DEC4F33F6AA3DE7937F;
struct FieldInfo_t;
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IInputActionCollection_tCACBB682A8D400B755D43654E7FF9B4F3CECD3FD;
struct IInputStateChangeMonitor_t043FD8736A6F45C06A2FAFFC5BE70A565F999598;
struct INotification_tEF630287442F0A66470493068A5D158E3C2D3C6B;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct KitchenObjectSO_t2A4206F6F4928B06691CB24EFFF19DAA019A02DC;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
struct PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47;
struct ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct Baselib_RegisteredNetwork_Buffer_t2D0BDFB0FC8B41F70E5AD38C481363BEDC54EB42;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct MessageHandler_t274427DA3D8CD7F490DA359D05918564E2D8CF2F;
struct VersionGetter_tEBCCEFCC0C247D6C445A8F0D060D1A5F3B4FE92F;
struct NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49;

IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke;
struct BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke;
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com;
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD 
{
	int32_t ___length_0;
	Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___firstValue_1;
	Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16* ___additionalValues_2;
};
struct InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 
{
	int32_t ___length_0;
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___firstValue_1;
	TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3* ___additionalValues_2;
};
struct InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 
{
	int32_t ___length_0;
	uint64_t ___firstValue_1;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___additionalValues_2;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue_0;
	int32_t ___value_1;
};
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array_0;
	int32_t ___m_StartIndex_1;
	int32_t ___m_Length_2;
};
struct ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array_0;
	int32_t ___m_StartIndex_1;
	int32_t ___m_Length_2;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array_0;
	int32_t ___m_StartIndex_1;
	int32_t ___m_Length_2;
};
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	int32_t ___index_1;
	float ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	int32_t ___index_1;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	int32_t ___index_1;
	float ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F 
{
	TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E 
{
	TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A* ___itemStack_0;
	int32_t ___index_1;
	TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70* ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 
{
	TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE 
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	RuntimeObject* ___handle_2;
	bool ___shortLived_3;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value_0;
	int32_t ___m_Unit_1;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page_1;
	uint16_t ___pageLine_2;
	uint8_t ___bitIndex_3;
	uint8_t ___ownedState_4;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x_0;
	int32_t ___y_1;
};
struct BatchHeader_t91532F4048A735C272961ED089CD374AAB3A019B 
{
	uint16_t ___BatchSize_0;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B 
{
	int32_t ___m_Style_0;
	float ___m_Time_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CustomCurve_2;
};
struct ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A 
{
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A__padding[1];
	};
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r_0;
	float ___g_1;
	float ___b_2;
	float ___a_3;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};
struct ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 
{
	uint64_t ___U3CIdU3Ek__BackingField_0;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData_46;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled_0;
	int8_t ___m_CompareFunction_1;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle_0;
};
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
struct FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 
{
	uint8_t ___bold_0;
	uint8_t ___italic_1;
	uint8_t ___underline_2;
	uint8_t ___strikethrough_3;
	uint8_t ___highlight_4;
	uint8_t ___superscript_5;
	uint8_t ___subscript_6;
	uint8_t ___uppercase_7;
	uint8_t ___lowercase_8;
	uint8_t ___smallcaps_9;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code_0;
};
struct GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A 
{
	float ___m_Width_0;
	float ___m_Height_1;
	float ___m_HorizontalBearingX_2;
	float ___m_HorizontalBearingY_3;
	float ___m_HorizontalAdvance_4;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0_0;
	uint64_t ___u64_1_1;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name_2;
	String_t* ___m_Id_3;
	String_t* ___m_Path_4;
	String_t* ___m_Interactions_5;
	String_t* ___m_Processors_6;
	String_t* ___m_Groups_7;
	String_t* ___m_Action_8;
	int32_t ___m_Flags_9;
	String_t* ___m_OverridePath_10;
	String_t* ___m_OverrideInteractions_11;
	String_t* ___m_OverrideProcessors_12;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name_0;
	String_t* ___m_BindingGroup_1;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName_0;
	String_t* ___m_DeviceClass_1;
	String_t* ___m_Manufacturer_2;
	String_t* ___m_Product_3;
	String_t* ___m_Serial_4;
	String_t* ___m_Version_5;
	String_t* ___m_Capabilities_6;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302 
{
	String_t* ___m_ApiName_0;
	uint64_t ___m_Handle_1;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302_marshaled_pinvoke
{
	char* ___m_ApiName_0;
	uint64_t ___m_Handle_1;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302_marshaled_com
{
	Il2CppChar* ___m_ApiName_0;
	uint64_t ___m_Handle_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase_0;
	String_t* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask_0;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value_1;
	int32_t ___m_Unit_2;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	bool ___isDefaultMaterial_4;
	bool ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	bool ___isDefaultMaterial_4;
	bool ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_pinvoke
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_com
{
	int32_t ___index_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00_0;
	float ___m10_1;
	float ___m20_2;
	float ___m30_3;
	float ___m01_4;
	float ___m11_5;
	float ___m21_6;
	float ___m31_7;
	float ___m02_8;
	float ___m12_9;
	float ___m22_10;
	float ___m32_11;
	float ___m03_12;
	float ___m13_13;
	float ___m23_14;
	float ___m33_15;
};
struct MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 
{
	uint32_t ___MessageType_0;
	uint32_t ___MessageSize_1;
};
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	int32_t ___m_NetworkId_0;
	int32_t ___m_NetworkVersion_1;
};
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	int32_t ___Id_0;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 
{
	bool ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	bool ___squaredDistWeighting_4;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke
{
	int32_t ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	int32_t ___squaredDistWeighting_4;
};
struct ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com
{
	int32_t ___enableDilation_0;
	float ___dilationDistance_1;
	float ___dilationValidityThreshold_2;
	int32_t ___dilationIterations_3;
	int32_t ___squaredDistWeighting_4;
};
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 
{
	String_t* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke
{
	char* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com
{
	Il2CppChar* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F 
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos_0;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___rangeCounters_1;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_pinvoke
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos_0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters_1;
};
struct RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshaled_com
{
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___curpos_0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___rangeCounters_1;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode_1;
	int32_t ___m_OffsetUnits_2;
	float ___m_OffsetFactor_3;
	uint8_t ___m_DepthClip_4;
	uint8_t ___m_Conservative_5;
	uint8_t ___m_Padding1_6;
	uint8_t ___m_Padding2_7;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin_0;
	float ___m_YMin_1;
	float ___m_Width_2;
	float ___m_Height_3;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin_0;
	int32_t ___m_YMin_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator_0;
	uint32_t ___denominator_1;
};
struct ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 
{
	uint64_t ___NetworkId_0;
	float ___ReleaseTime_1;
};
struct RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 
{
	int32_t ___m_LowerBound_0;
	int32_t ___m_UpperBound_1;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask_0;
	uint8_t ___m_SourceColorBlendMode_1;
	uint8_t ___m_DestinationColorBlendMode_2;
	uint8_t ___m_SourceAlphaBlendMode_3;
	uint8_t ___m_DestinationAlphaBlendMode_4;
	uint8_t ___m_ColorBlendOperation_5;
	uint8_t ___m_AlphaBlendOperation_6;
	uint8_t ___m_Padding_7;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D 
{
	bool ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_pinvoke
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};
struct RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_marshaled_com
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A 
{
	uint32_t ___m_Value_2;
	int32_t ___U3CtypeU3Ek__BackingField_5;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value_0;
	int32_t ____dataPos_1;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
struct RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 
{
	int32_t ___nameHashCode_0;
	int32_t ___valueHashCode_1;
	int32_t ___valueType_2;
	int32_t ___valueStartIndex_3;
	int32_t ___valueLength_4;
	int32_t ___unitType_5;
};
struct RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA 
{
	int32_t ___nameHashCode_0;
	int32_t ___valueHashCode_1;
	int32_t ___valueType_2;
	int32_t ___valueStartIndex_3;
	int32_t ___valueLength_4;
	int32_t ___unitType_5;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
struct RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 
{
	int32_t ___Index_0;
	int32_t ___StackDepth_1;
	int32_t ___ContinuationStackDepth_2;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle_0;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B 
{
	String_t* ___name_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_1;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_pinvoke
{
	char* ___name_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_1;
};
struct SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshaled_com
{
	Il2CppChar* ___name_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_1;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	int32_t ___styleSheetIndexInStack_1;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_2;
};
struct SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335 
{
	String_t* ___key_0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values_1;
};
struct SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshaled_pinvoke
{
	char* ___key_0;
	char** ___values_1;
};
struct SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar** ___values_1;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 
{
	String_t* ___m_Name_0;
	uint32_t ___m_Index_1;
	bool ___m_IsLocal_2;
	bool ___m_IsCompute_3;
	bool ___m_IsValid_4;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_Index_1;
	int32_t ___m_IsLocal_2;
	int32_t ___m_IsCompute_3;
	int32_t ___m_IsValid_4;
};
struct ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_Index_1;
	int32_t ___m_IsLocal_2;
	int32_t ___m_IsCompute_3;
	int32_t ___m_IsValid_4;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id_1;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 
{
	int32_t ___m_Id_0;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____value_0;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_pinvoke
{
	Il2CppSafeArray* ____value_0;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshaled_com
{
	Il2CppSafeArray* ____value_0;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 
{
	uint8_t ___m_value_0;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 
{
	bool ___m_fNotNull_0;
	uint8_t ___m_value_1;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	uint8_t ___m_value_1;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshaled_com
{
	int32_t ___m_fNotNull_0;
	uint8_t ___m_value_1;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 
{
	uint8_t ____bStatus_0;
	uint8_t ____bLen_1;
	uint8_t ____bPrec_2;
	uint8_t ____bScale_3;
	uint32_t ____data1_4;
	uint32_t ____data2_5;
	uint32_t ____data3_6;
	uint32_t ____data4_7;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 
{
	bool ___m_fNotNull_0;
	double ___m_value_1;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_com
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_value_2;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_value_2;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_com
{
	Il2CppSafeArray* ___m_value_2;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B 
{
	bool ___m_fNotNull_0;
	int16_t ___m_value_1;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 
{
	bool ___m_fNotNull_0;
	int32_t ___m_value_1;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 
{
	bool ___m_fNotNull_0;
	int64_t ___m_value_1;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB 
{
	bool ____fNotNull_0;
	int64_t ____value_1;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_com
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 
{
	bool ____fNotNull_0;
	float ____value_1;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	float ____value_1;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_com
{
	int32_t ____fNotNull_0;
	float ____value_1;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D 
{
	String_t* ___m_value_0;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	bool ___m_fNotNull_4;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_pinvoke
{
	char* ___m_value_0;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_com
{
	Il2CppChar* ___m_value_0;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled_0;
	uint8_t ___m_ReadMask_1;
	uint8_t ___m_WriteMask_2;
	uint8_t ___m_Padding_3;
	uint8_t ___m_CompareFunctionFront_4;
	uint8_t ___m_PassOperationFront_5;
	uint8_t ___m_FailOperationFront_6;
	uint8_t ___m_ZFailOperationFront_7;
	uint8_t ___m_CompareFunctionBack_8;
	uint8_t ___m_PassOperationBack_9;
	uint8_t ___m_FailOperationBack_10;
	uint8_t ___m_ZFailOperationBack_11;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	String_t* ___U3CnameU3Ek__BackingField_1;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	char* ___U3CnameU3Ek__BackingField_1;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value_0;
	int32_t ___m_Type_1;
	RuntimeObject* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type_0;
	String_t* ___text_1;
	int32_t ___number_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___text_1;
	int32_t ___number_2;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___text_1;
	int32_t ___number_2;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType_0;
	int32_t ___valueIndex_1;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	RuntimeObject* ___value_2;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	String_t* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	char* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	Il2CppChar* ___name_0;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_1;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold_0;
	uint8_t ___italic_1;
	uint8_t ___underline_2;
	uint8_t ___strikethrough_3;
	uint8_t ___highlight_4;
	uint8_t ___superscript_5;
	uint8_t ___subscript_6;
	uint8_t ___uppercase_7;
	uint8_t ___lowercase_8;
	uint8_t ___smallcaps_9;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E 
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_pinvoke
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshaled_com
{
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___regularTypeface_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___italicTypeface_1;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___linkID_6;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
struct TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 
{
	int32_t ___firstCharacterIndex_0;
	int32_t ___lastCharacterIndex_1;
	float ___ascender_2;
	float ___baseLine_3;
	float ___descender_4;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_pinvoke
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshaled_com
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	int32_t ___tileX_0;
	int32_t ___tileZ_1;
};
struct TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 
{
	int32_t ___elementType_0;
	uint32_t ___unicode_1;
	int32_t ___stringIndex_2;
	int32_t ___length_3;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index_0;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks_22;
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value_0;
	int32_t ___m_Unit_1;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField_0;
	int32_t ___U3CparentIdU3Ek__BackingField_1;
	RuntimeObject* ___U3CchildrenIdsU3Ek__BackingField_2;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx_0;
	int32_t ___height_1;
	float ___topY_2;
	float ___leading_3;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};
struct UIntPtr_t 
{
	void* ____pointer_1;
};
struct UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04 
{
	int32_t* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_Allocator_2;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 
{
	String_t* ___content_0;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_pinvoke
{
	char* ___content_0;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_com
{
	Il2CppChar* ___content_0;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField_0;
	int32_t ___U3CformatU3Ek__BackingField_1;
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	int32_t ___U3CstreamU3Ek__BackingField_3;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex_0;
	int32_t ___lastCharacterIndex_1;
	int32_t ___characterCount_2;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status_0;
	String_t* ___info_1;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA 
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	uint16_t ____idxSibling_1;
	uint16_t ____idxParent_2;
	uint16_t ____idxSimilar_3;
	uint16_t ____posOffset_4;
	uint32_t ____props_5;
	String_t* ____value_6;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	uint16_t ____idxSibling_1;
	uint16_t ____idxParent_2;
	uint16_t ____idxSimilar_3;
	uint16_t ____posOffset_4;
	uint32_t ____props_5;
	char* ____value_6;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	uint16_t ____idxSibling_1;
	uint16_t ____idxParent_2;
	uint16_t ____idxSimilar_3;
	uint16_t ____posOffset_4;
	uint32_t ____props_5;
	Il2CppChar* ____value_6;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page_0;
	int32_t ____idx_1;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page_0;
	int32_t ____idx_1;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page_0;
	int32_t ____idx_1;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name_0;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x_0;
	float ___y_1;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x_0;
	int32_t ___y_1;
	int32_t ___z_2;
	int32_t ___w_3;
};
struct ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA 
{
	int32_t ___visibleLightIndex_0;
	int32_t ___perLightShadowSliceIndex_1;
	int32_t ___requestedResolution_2;
	bool ___softShadow_3;
	bool ___pointLightShadow_4;
	int32_t ___offsetX_5;
	int32_t ___offsetY_6;
	int32_t ___allocatedResolution_7;
};
struct ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshaled_pinvoke
{
	int32_t ___visibleLightIndex_0;
	int32_t ___perLightShadowSliceIndex_1;
	int32_t ___requestedResolution_2;
	int32_t ___softShadow_3;
	int32_t ___pointLightShadow_4;
	int32_t ___offsetX_5;
	int32_t ___offsetY_6;
	int32_t ___allocatedResolution_7;
};
struct ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_marshaled_com
{
	int32_t ___visibleLightIndex_0;
	int32_t ___perLightShadowSliceIndex_1;
	int32_t ___requestedResolution_2;
	int32_t ___softShadow_3;
	int32_t ___pointLightShadow_4;
	int32_t ___offsetX_5;
	int32_t ___offsetY_6;
	int32_t ___allocatedResolution_7;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index_0;
	uint16_t ___Version_1;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D 
{
	Type_t* ___type_0;
	int32_t ___index_1;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_pinvoke
{
	Type_t* ___type_0;
	int32_t ___index_1;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_com
{
	Type_t* ___type_0;
	int32_t ___index_1;
};
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex_0;
	int32_t ___matchedVariableCount_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order_0;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x_0;
	uint16_t ___y_1;
	int32_t ___freeSlots_2;
};
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	float ___m_Weight_1;
};
struct Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 
{
	int32_t ___a_0;
	float ___b_1;
};
struct Orbit_tFB7313130D10593990AD5CA9C685500758DB866D 
{
	float ___m_Height_0;
	float ___m_Radius_1;
};
struct HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC 
{
	int32_t ___parentHash_0;
	int32_t ___hash_1;
};
struct Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C 
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
struct Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C_marshaled_pinvoke
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
struct Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C_marshaled_com
{
	int32_t ___m_FullHash_0;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_1;
	float ___m_ActivateAfter_2;
	float ___m_MinDuration_3;
};
struct ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 
{
	int32_t ___m_Hash_0;
	int32_t ___m_ParentHash_1;
};
struct Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_0;
	float ___weight_1;
	float ___radius_2;
};
struct Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_0;
	float ___weight_1;
	float ___radius_2;
};
struct Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_0;
	float ___weight_1;
	float ___radius_2;
};
struct DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 
{
	double ___X_0;
	double ___Y_1;
};
struct IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 
{
	int64_t ___X_0;
	int64_t ___Y_1;
};
struct TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 
{
	int32_t ___Start_0;
	int32_t ___End_1;
	int32_t ___Count_2;
	int32_t ___IndexStart_3;
	int32_t ___IndexEnd_4;
};
struct PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C 
{
	List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___polygons_0;
	float ___frustumHeight_1;
};
struct PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C_marshaled_pinvoke
{
	List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___polygons_0;
	float ___frustumHeight_1;
};
struct PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C_marshaled_com
{
	List_1_tD3D80A48908E0B8646110C913780E72E2157A541* ___polygons_0;
	float ___frustumHeight_1;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 
{
	String_t* ___m_name_0;
	int32_t ___m_token_1;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_pinvoke
{
	char* ___m_name_0;
	int32_t ___m_token_1;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_com
{
	Il2CppChar* ___m_name_0;
	int32_t ___m_token_1;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column_0;
	String_t* ____error_1;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_pinvoke
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column_0;
	char* ____error_1;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_com
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column_0;
	Il2CppChar* ____error_1;
};
struct DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D 
{
	int32_t ___chunkIndex_0;
	int32_t ___arrayIndex_1;
	int32_t ___version_2;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk_0;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk_1;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk_2;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk_3;
	int32_t ___previousChunkIndex_4;
	bool ___valid_5;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_pinvoke
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk_0;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk_1;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk_2;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk_3;
	int32_t ___previousChunkIndex_4;
	int32_t ___valid_5;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_com
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk_0;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk_1;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk_2;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk_3;
	int32_t ___previousChunkIndex_4;
	int32_t ___valid_5;
};
struct SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 
{
	String_t* ___U3CTypeNameU3Ek__BackingField_0;
	String_t* ___U3CValueNameU3Ek__BackingField_1;
};
struct SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423_marshaled_pinvoke
{
	char* ___U3CTypeNameU3Ek__BackingField_0;
	char* ___U3CValueNameU3Ek__BackingField_1;
};
struct SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423_marshaled_com
{
	Il2CppChar* ___U3CTypeNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CValueNameU3Ek__BackingField_1;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 
{
	int32_t ___type_0;
	PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47* ___method_1;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_pinvoke
{
	int32_t ___type_0;
	Il2CppMethodPointer ___method_1;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_com
{
	int32_t ___type_0;
	Il2CppMethodPointer ___method_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_pinvoke
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_com
{
	uint32_t ___m_GateCount_0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event_0;
	RuntimeObject* ___m_Panel_1;
};
struct DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 
{
	int32_t ___DefaultActionCategories_0;
	int32_t ___DefaultActionAtTargetCategories_1;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 
{
	String_t* ____word_0;
	int32_t ____token_1;
	int32_t ____op_2;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_pinvoke
{
	char* ____word_0;
	int32_t ____token_1;
	int32_t ____op_2;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_com
{
	Il2CppChar* ____word_0;
	int32_t ____token_1;
	int32_t ____op_2;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot_0;
	Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0* ___m_FocusedElement_1;
};
struct HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 
{
	int32_t ___type_0;
	int32_t ___usage_1;
	int32_t ___usagePage_2;
	int32_t ___parent_3;
	int32_t ___childCount_4;
	int32_t ___firstChild_5;
};
struct HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F 
{
	int32_t ___reportId_0;
	int32_t ___reportType_1;
	int32_t ___currentBitOffset_2;
};
struct HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F 
{
	int32_t ___page_0;
	int32_t ___usage_1;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___val_1;
	int32_t ___hash_coll_2;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
struct HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C 
{
	int16_t ___token_0;
	int16_t ___value_1;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A 
{
	String_t* ___name_0;
	String_t* ___id_1;
	String_t* ___path_2;
	String_t* ___interactions_3;
	String_t* ___processors_4;
	String_t* ___groups_5;
	String_t* ___action_6;
	bool ___isComposite_7;
	bool ___isPartOfComposite_8;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___path_2;
	char* ___interactions_3;
	char* ___processors_4;
	char* ___groups_5;
	char* ___action_6;
	int32_t ___isComposite_7;
	int32_t ___isPartOfComposite_8;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___path_2;
	Il2CppChar* ___interactions_3;
	Il2CppChar* ___processors_4;
	Il2CppChar* ___groups_5;
	Il2CppChar* ___action_6;
	int32_t ___isComposite_7;
	int32_t ___isPartOfComposite_8;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 
{
	String_t* ___action_0;
	String_t* ___id_1;
	String_t* ___path_2;
	String_t* ___interactions_3;
	String_t* ___processors_4;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_pinvoke
{
	char* ___action_0;
	char* ___id_1;
	char* ___path_2;
	char* ___interactions_3;
	char* ___processors_4;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_com
{
	Il2CppChar* ___action_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___path_2;
	Il2CppChar* ___interactions_3;
	Il2CppChar* ___processors_4;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 
{
	String_t* ___name_0;
	String_t* ___type_1;
	String_t* ___id_2;
	String_t* ___expectedControlType_3;
	String_t* ___expectedControlLayout_4;
	String_t* ___processors_5;
	String_t* ___interactions_6;
	bool ___passThrough_7;
	bool ___initialStateCheck_8;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings_9;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke
{
	char* ___name_0;
	char* ___type_1;
	char* ___id_2;
	char* ___expectedControlType_3;
	char* ___expectedControlLayout_4;
	char* ___processors_5;
	char* ___interactions_6;
	int32_t ___passThrough_7;
	int32_t ___initialStateCheck_8;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings_9;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___type_1;
	Il2CppChar* ___id_2;
	Il2CppChar* ___expectedControlType_3;
	Il2CppChar* ___expectedControlLayout_4;
	Il2CppChar* ___processors_5;
	Il2CppChar* ___interactions_6;
	int32_t ___passThrough_7;
	int32_t ___initialStateCheck_8;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings_9;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 
{
	String_t* ___name_0;
	String_t* ___id_1;
	ReadActionJsonU5BU5D_t77929C62C9D95D0C5DF96AEB33748B4CD11EF89D* ___actions_2;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings_3;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke* ___actions_2;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings_3;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com* ___actions_2;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings_3;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A 
{
	String_t* ___name_0;
	String_t* ___type_1;
	String_t* ___id_2;
	String_t* ___expectedControlType_3;
	String_t* ___processors_4;
	String_t* ___interactions_5;
	bool ___initialStateCheck_6;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke
{
	char* ___name_0;
	char* ___type_1;
	char* ___id_2;
	char* ___expectedControlType_3;
	char* ___processors_4;
	char* ___interactions_5;
	int32_t ___initialStateCheck_6;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___type_1;
	Il2CppChar* ___id_2;
	Il2CppChar* ___expectedControlType_3;
	Il2CppChar* ___processors_4;
	Il2CppChar* ___interactions_5;
	int32_t ___initialStateCheck_6;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 
{
	String_t* ___name_0;
	String_t* ___id_1;
	WriteActionJsonU5BU5D_t028B15E467D7812D1C4C9B6F905E414007BEF46A* ___actions_2;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings_3;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke* ___actions_2;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings_3;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com* ___actions_2;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings_3;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 
{
	RuntimeObject* ___instance_0;
	FieldInfo_t* ___field_1;
	int32_t ___bindingIndex_2;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_marshaled_pinvoke
{
	Il2CppIUnknown* ___instance_0;
	FieldInfo_t* ___field_1;
	int32_t ___bindingIndex_2;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_marshaled_com
{
	Il2CppIUnknown* ___instance_0;
	FieldInfo_t* ___field_1;
	int32_t ___bindingIndex_2;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr_1;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 
{
	String_t* ___m_ControlPath_0;
	int32_t ___m_Flags_1;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke
{
	char* ___m_ControlPath_0;
	int32_t ___m_Flags_1;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com
{
	Il2CppChar* ___m_ControlPath_0;
	int32_t ___m_Flags_1;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 
{
	String_t* ___name_0;
	String_t* ___bindingGroup_1;
	DeviceJsonU5BU5D_tD8A3D5639BB87977D72F14C0AEDA8EBC7C625278* ___devices_2;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_marshaled_pinvoke
{
	char* ___name_0;
	char* ___bindingGroup_1;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke* ___devices_2;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___bindingGroup_1;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com* ___devices_2;
};
#pragma pack(push, tp, 1)
struct ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 
{
	uint16_t ___endBitOffset_0;
	int16_t ___leftChildIndex_1;
	uint16_t ___controlStartIndex_2;
	uint8_t ___controlCount_3;
};
#pragma pack(pop, tp)
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	RuntimeObject* ___monitor_1;
	int64_t ___monitorIndex_2;
	uint32_t ___groupIndex_3;
};
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	RuntimeObject* ___monitor_1;
	int64_t ___monitorIndex_2;
	uint32_t ___groupIndex_3;
};
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	RuntimeObject* ___monitor_1;
	int64_t ___monitorIndex_2;
	uint32_t ___groupIndex_3;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	double ___time_1;
	RuntimeObject* ___monitor_2;
	int64_t ___monitorIndex_3;
	int32_t ___timerIndex_4;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	double ___time_1;
	RuntimeObject* ___monitor_2;
	int64_t ___monitorIndex_3;
	int32_t ___timerIndex_4;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control_0;
	double ___time_1;
	RuntimeObject* ___monitor_2;
	int64_t ___monitorIndex_3;
	int32_t ___timerIndex_4;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 
{
	int32_t ___senderId_0;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___layouts_1;
	RemoteInputDeviceU5BU5D_tB3C8B8C0AAE6347DB4E4D58D94254291C1FDD7F5* ___devices_2;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_marshaled_pinvoke
{
	int32_t ___senderId_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke* ___layouts_1;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke* ___devices_2;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_marshaled_com
{
	int32_t ___senderId_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com* ___layouts_1;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com* ___devices_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner_0;
	int32_t ___m_IndexPlusOne_1;
	uint32_t ___m_Version_2;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 
{
	int32_t ___refCount_0;
	bool ___enabledByInputModule_1;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_marshaled_pinvoke
{
	int32_t ___refCount_0;
	int32_t ___enabledByInputModule_1;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_marshaled_com
{
	int32_t ___refCount_0;
	int32_t ___enabledByInputModule_1;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
struct Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE 
{
	int32_t ___Key_0;
	String_t* ___Command_1;
};
struct Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE_marshaled_pinvoke
{
	int32_t ___Key_0;
	char* ___Command_1;
};
struct Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE_marshaled_com
{
	int32_t ___Key_0;
	Il2CppChar* ___Command_1;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
struct BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C 
{
	uint32_t ___bitOffset_0;
	uint32_t ___sizeInBits_1;
};
struct MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 
{
	Type_t* ___MessageType_0;
	MessageHandler_t274427DA3D8CD7F490DA359D05918564E2D8CF2F* ___Handler_1;
	VersionGetter_tEBCCEFCC0C247D6C445A8F0D060D1A5F3B4FE92F* ___GetVersion_2;
};
struct MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928_marshaled_pinvoke
{
	Type_t* ___MessageType_0;
	Il2CppMethodPointer ___Handler_1;
	Il2CppMethodPointer ___GetVersion_2;
};
struct MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928_marshaled_com
{
	Type_t* ___MessageType_0;
	Il2CppMethodPointer ___Handler_1;
	Il2CppMethodPointer ___GetVersion_2;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA 
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_pinvoke
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_com
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc_0;
	int32_t ___direction_1;
};
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 
{
	bool ___HasBeenProcessed_0;
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	int32_t ___IsDirtyCount_2;
};
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed_0;
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	int32_t ___IsDirtyCount_2;
};
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com
{
	int32_t ___HasBeenProcessed_0;
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	int32_t ___IsDirtyCount_2;
};
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA 
{
	bool ___HasBeenProcessed_0;
	int32_t ___StateHash_1;
	float ___NormalizedTime_2;
	int32_t ___Layer_3;
	float ___Weight_4;
	bool ___Transition_5;
	int32_t ___DestinationStateHash_6;
};
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed_0;
	int32_t ___StateHash_1;
	float ___NormalizedTime_2;
	int32_t ___Layer_3;
	float ___Weight_4;
	int32_t ___Transition_5;
	int32_t ___DestinationStateHash_6;
};
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_marshaled_com
{
	int32_t ___HasBeenProcessed_0;
	int32_t ___StateHash_1;
	float ___NormalizedTime_2;
	int32_t ___Layer_3;
	float ___Weight_4;
	int32_t ___Transition_5;
	int32_t ___DestinationStateHash_6;
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 
{
	int32_t ___Hash_0;
	bool ___IsTriggerSet_1;
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke
{
	int32_t ___Hash_0;
	int32_t ___IsTriggerSet_1;
};
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com
{
	int32_t ___Hash_0;
	int32_t ___IsTriggerSet_1;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_0;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_pinvoke
{
	Il2CppSafeArray* ___Parameters_0;
};
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_com
{
	Il2CppSafeArray* ___Parameters_0;
};
struct U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0__padding[56];
	};
};
struct PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E 
{
	int32_t ___FirstStageIndex_0;
	int32_t ___NumStages_1;
	int32_t ___receiveBufferOffset_2;
	int32_t ___sendBufferOffset_3;
	int32_t ___sharedBufferOffset_4;
	int32_t ___headerCapacity_5;
	int32_t ___payloadCapacity_6;
};
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 
{
	float ___Frequency_0;
	float ___Amplitude_1;
	bool ___Constant_2;
};
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E 
{
	int32_t ____int32_0;
	String_t* ____string_1;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_pinvoke
{
	int32_t ____int32_0;
	char* ____string_1;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_com
{
	int32_t ____int32_0;
	Il2CppChar* ____string_1;
};
struct KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD 
{
	KitchenObjectSO_t2A4206F6F4928B06691CB24EFFF19DAA019A02DC* ___kitchenObjectSO_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
};
struct KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD_marshaled_pinvoke
{
	KitchenObjectSO_t2A4206F6F4928B06691CB24EFFF19DAA019A02DC* ___kitchenObjectSO_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
};
struct KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD_marshaled_com
{
	KitchenObjectSO_t2A4206F6F4928B06691CB24EFFF19DAA019A02DC* ___kitchenObjectSO_0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
};
struct BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B 
{
	int32_t ___x_0;
	int32_t ___y_1;
	int32_t ___z_2;
};
struct CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 
{
	int32_t ___bricksCount_0;
	int32_t ___probesCount_1;
	int32_t ___offsetsCount_2;
	int32_t ___chunksCount_3;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC 
{
	int32_t ___sceneHash_0;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset_1;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset_2;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_pinvoke
{
	int32_t ___sceneHash_0;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset_1;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset_2;
};
struct PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_com
{
	int32_t ___sceneHash_0;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset_1;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset_2;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C 
{
	String_t* ___sceneGUID_0;
	bool ___hasProbeVolumes_1;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	int32_t ___hasProbeVolumes_1;
};
struct SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	int32_t ___hasProbeVolumes_1;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C 
{
	String_t* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t375DE65898ECAC87F866E00E990A090B62FEFB06* ___profile_1;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options_0;
	String_t* ____cultureKey_1;
	String_t* ____pattern_2;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options_0;
	char* ____cultureKey_1;
	char* ____pattern_2;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options_0;
	Il2CppChar* ____cultureKey_1;
	Il2CppChar* ____pattern_2;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 
{
	Il2CppChar ___ChMin_0;
	Il2CppChar ___ChMax_1;
	int32_t ___LcOp_2;
	int32_t ___Data_3;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke
{
	uint8_t ___ChMin_0;
	uint8_t ___ChMax_1;
	int32_t ___LcOp_2;
	int32_t ___Data_3;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com
{
	uint8_t ___ChMin_0;
	uint8_t ___ChMax_1;
	int32_t ___LcOp_2;
	int32_t ___Data_3;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First_0;
	Il2CppChar ___Last_1;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers_1;
	int32_t ___refCount_2;
	bool ___imported_3;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers_1;
	int32_t ___refCount_2;
	int32_t ___imported_3;
};
struct CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers_1;
	int32_t ___refCount_2;
	int32_t ___imported_3;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 
{
	String_t* ___name_0;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReadLists_1;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceWriteLists_2;
	bool ___culled_3;
	bool ___generateDebugData_4;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists_1;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};
struct PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists_1;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B 
{
	String_t* ___name_0;
	bool ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList_5;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList_5;
};
struct ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList_5;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_1;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this__0;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos_1;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos_2;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft_3;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight_4;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_pinvoke
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this__0;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos_1;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos_2;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft_3;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight_4;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_com
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this__0;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos_1;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos_2;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft_3;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight_4;
};
struct U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D__padding[8];
	};
};
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	int32_t ___state_0;
	bool ___negate_1;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state_0;
	int32_t ___negate_1;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state_0;
	int32_t ___negate_1;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element_1;
	int32_t ___property_2;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element_1;
	int32_t ___property_2;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element_1;
	int32_t ___property_2;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet_0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mediaQueries_1;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet_0;
	char** ___mediaQueries_1;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet_0;
	Il2CppChar** ___mediaQueries_1;
};
struct SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 
{
	int32_t ___sheetInstanceID_0;
	int32_t ___index_1;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles_1;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_1;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles_1;
};
struct UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 
{
	int32_t ___unicode_0;
	int32_t ___stringIndex_1;
	int32_t ___length_2;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	String_t* ___m_ElementName_0;
	String_t* ___m_AttributeName_1;
	String_t* ___m_Value_2;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName_0;
	char* ___m_AttributeName_1;
	char* ___m_Value_2;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName_0;
	Il2CppChar* ___m_AttributeName_1;
	Il2CppChar* ___m_Value_2;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 
{
	int32_t ___nameHashCode_0;
	int32_t ___familyNameHashCode_1;
	int32_t ___styleNameHashCode_2;
	int64_t ___familyNameAndStyleHashCode_3;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_pinvoke
{
	int32_t ___nameHashCode_0;
	int32_t ___familyNameHashCode_1;
	int32_t ___styleNameHashCode_2;
	int64_t ___familyNameAndStyleHashCode_3;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_com
{
	int32_t ___nameHashCode_0;
	int32_t ___familyNameHashCode_1;
	int32_t ___styleNameHashCode_2;
	int64_t ___familyNameAndStyleHashCode_3;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_1;
};
struct SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 
{
	float ___x_0;
	float ___y_1;
	float ___w_2;
	float ___h_3;
};
struct SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 
{
	float ___w_0;
	float ___h_1;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	bool ___dynamic_1;
	int32_t ___refCount_2;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_0;
	int32_t ___dynamic_1;
	int32_t ___refCount_2;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	bool ___notificationFired_2;
	int16_t ___flags_3;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_pinvoke
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};
struct NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_marshaled_com
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D 
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	bool ___haveBuiltActiveTouches_8;
	bool ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com
{
	int32_t ___updateMask_0;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers_1;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers_2;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com* ___activeTouches_3;
	int32_t ___activeFingerCount_4;
	int32_t ___activeTouchCount_5;
	int32_t ___totalFingerCount_6;
	uint32_t ___lastId_7;
	int32_t ___haveBuiltActiveTouches_8;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate_9;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState_10;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B 
{
	uint32_t ___handle_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshaled_pinvoke
{
	uint32_t ___handle_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshaled_com
{
	uint32_t ___handle_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback_0;
	RuntimeObject* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name_0;
	int32_t ___insertionPointId_1;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___insertionPointId_1;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___insertionPointId_1;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName_0;
	int32_t ___assetId_1;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName_0;
	int32_t ___assetId_1;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName_0;
	int32_t ___assetId_1;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias_1;
	String_t* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias_1;
	char* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias_1;
	Il2CppChar* ___path_2;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset_3;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId_0;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets_1;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId_0;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets_1;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId_0;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets_1;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 
{
	int32_t ___eventType_0;
	String_t* ___s1_1;
	String_t* ___s2_2;
	String_t* ___s3_3;
	RuntimeObject* ___o_4;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshaled_pinvoke
{
	int32_t ___eventType_0;
	char* ___s1_1;
	char* ___s2_2;
	char* ___s3_3;
	Il2CppIUnknown* ___o_4;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshaled_com
{
	int32_t ___eventType_0;
	Il2CppChar* ___s1_1;
	Il2CppChar* ___s2_2;
	Il2CppChar* ___s3_3;
	Il2CppIUnknown* ___o_4;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 
{
	String_t* ___prefix_0;
	String_t* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___uri_1;
	int32_t ___scopeId_2;
	int32_t ___previousNsIndex_3;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 
{
	String_t* ___name_0;
	String_t* ___value_1;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke
{
	char* ___name_0;
	char* ___value_1;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___value_1;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD 
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_0;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso_1;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_pinvoke
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_0;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso_1;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_com
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_0;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso_1;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 
{
	String_t* ___prefix_0;
	String_t* ___localname_1;
	String_t* ___namespaceUri_2;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___localname_1;
	char* ___namespaceUri_2;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___localname_1;
	Il2CppChar* ___namespaceUri_2;
};
struct U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 
{
	union
	{
		struct
		{
			float ___FixedElementField_0;
		};
		uint8_t U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9__padding[256];
	};
};
struct U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 
{
	union
	{
		struct
		{
			float ___FixedElementField_0;
		};
		uint8_t U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8__padding[4096];
	};
};
struct U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 
{
	union
	{
		struct
		{
			float ___FixedElementField_0;
		};
		uint8_t U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156__padding[512];
	};
};
struct U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E 
{
	union
	{
		struct
		{
			float ___FixedElementField_0;
		};
		uint8_t U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E__padding[1024];
	};
};
struct U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2__padding[4];
	};
};
struct U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015__padding[28];
	};
};
struct U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7__padding[28];
	};
};
struct CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B 
{
	bool ___m_CannotMutateCallbacksArray_0;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_Callbacks_1;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToAdd_2;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToRemove_3;
};
struct InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 
{
	int32_t ___length_0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___firstValue_1;
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___additionalValues_2;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count_0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	int32_t ___m_Allocator_2;
};
struct InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 
{
	int32_t ___m_Count_0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	int32_t ___m_Allocator_2;
};
struct NativeList_1_t04917686A677DCA96B3A082C15D174D765D4DF5F 
{
	UnsafeList_1_t7576474D288A30F1540A43F66481308FA0558594* ___m_ListData_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};
struct Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 
{
	bool ___hasValue_0;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___value_1;
};
struct Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE 
{
	bool ___hasValue_0;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___value_1;
};
struct Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C 
{
	bool ___hasValue_0;
	InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302 ___value_1;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	int32_t ___index_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	int32_t ___index_1;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	int32_t ___index_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA 
{
	MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E* ___itemStack_0;
	int32_t ___index_1;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct UnsafePtrList_1_tAD86775FD13A7BFCCD3E9ACA2796FFE62044B970 
{
	Baselib_RegisteredNetwork_Buffer_t2D0BDFB0FC8B41F70E5AD38C481363BEDC54EB42** ___Ptr_0;
	int32_t ___m_length_1;
	int32_t ___m_capacity_2;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	int32_t ___length_4;
	int32_t ___capacity_5;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset_1;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0_0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1_1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2_2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3_3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4_4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5_5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6_6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7_7;
	uint8_t ___m_SeparateMRTBlendStates_8;
	uint8_t ___m_AlphaToMask_9;
	int16_t ___m_Padding_10;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	intptr_t ___ptr_0;
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo_1;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10 
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array_0;
	int32_t ___length_1;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_pinvoke
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array_0;
	int32_t ___length_1;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_com
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array_0;
	int32_t ___length_1;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};
struct Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_1;
};
struct FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0048_3_OffsetPadding[48];
					uint8_t ___byte0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_3_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_4_OffsetPadding[49];
					uint8_t ___byte0049_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_4_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_5_OffsetPadding[50];
					uint8_t ___byte0050_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_5_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_6_OffsetPadding[51];
					uint8_t ___byte0051_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_6_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_7_OffsetPadding[52];
					uint8_t ___byte0052_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_7_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_8_OffsetPadding[53];
					uint8_t ___byte0053_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_8_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_9_OffsetPadding[54];
					uint8_t ___byte0054_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_9_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_10_OffsetPadding[55];
					uint8_t ___byte0055_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_10_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_11_OffsetPadding[56];
					uint8_t ___byte0056_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_11_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_12_OffsetPadding[57];
					uint8_t ___byte0057_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_12_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_13_OffsetPadding[58];
					uint8_t ___byte0058_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_13_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_14_OffsetPadding[59];
					uint8_t ___byte0059_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_14_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_15_OffsetPadding[60];
					uint8_t ___byte0060_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_15_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_16_OffsetPadding[61];
					uint8_t ___byte0061_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_16_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_16_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A__padding[62];
	};
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle_0;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F  : public RuntimeObject
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t6C1C65A891A6279A0EE807C436436B1E44F7AF1A ___m_Metrics_1;
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
	int32_t ___m_ClassDefinitionType_5;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Version_1;
	int32_t ___m_FenceType_2;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding_1;
};
struct NetworkEndPoint_tD248F1CF54F01EF67B92B12963FC7060054C4CBC 
{
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_0;
};
struct NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 
{
	int32_t ___dataLength_1;
	U3CdataU3Ee__FixedBuffer_tA444E672C5AB32F413A3235C5075E48F04008AA0 ___data_2;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle_0;
	uint32_t ___m_Version_1;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr_0;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction_1;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	uint32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	int32_t ___m_Collider_5;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	int32_t ___m_Collider_5;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type_1;
	int32_t ___m_NameID_2;
	int32_t ___m_InstanceID_3;
	intptr_t ___m_BufferPointer_4;
	int32_t ___m_MipLevel_5;
	int32_t ___m_CubeFace_6;
	int32_t ___m_DepthSlice_7;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 
{
	uintptr_t ___context_0;
	uint32_t ___index_1;
	uint32_t ___frame_2;
	uint32_t ___type_3;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width_0;
	int32_t ___m_Height_1;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate_2;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	bool ___m_IsNone_2;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	int32_t ___m_IsNone_2;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis_1;
	int32_t ___m_IsNone_2;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	bool ___m_IsNone_1;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	int32_t ___m_IsNone_1;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_0;
	int32_t ___m_IsNone_1;
};
struct ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF 
{
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	int32_t ___U3CLogLevelU3Ek__BackingField_1;
	int64_t ___U3CBytesCountU3Ek__BackingField_2;
};
struct SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D ___Value_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t4CE95A1DC9ED09372188CEDA707F9A09B897742D ___Value_1_forAlignmentOnly;
		};
	};
};
struct ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____PoolDim_CellInMeters_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MinCellPos_Noise_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____IndicesDim_IndexChunkSize_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Biases_CellInMinBrick_MinBrickSize_3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____LeakReductionParams_4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____Weight_MinLoadedCell_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____MaxLoadedCell_FrameIndex_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____NormalizationClamp_Padding12_7;
};
struct ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF 
{
	int32_t ___m_CullingPlaneCount_2;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 ___m_CullingPlanes_3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_CullingSphere_4;
	float ___m_ShadowCascadeBlendCullingFactor_5;
	float ___m_CullingNearPlane_6;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_7;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	String_t* ___name_0;
	String_t* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 
{
	bool ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_day_1;
	int32_t ___m_time_2;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_0;
	float ___blurRadius_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
struct TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 
{
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___handle_1;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	int32_t ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
};
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	int32_t ___m_FingerId_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	float ___m_TimeDelta_4;
	int32_t ___m_TapCount_5;
	int32_t ___m_Phase_6;
	int32_t ___m_Type_7;
	float ___m_Pressure_8;
	float ___m_maximumPossiblePressure_9;
	float ___m_Radius_10;
	float ___m_RadiusVariance_11;
	float ___m_AltitudeAngle_12;
	float ___m_AzimuthAngle_13;
};
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2_2;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	bool ___m_isNone_3;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	int32_t ___m_isNone_3;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X_0;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y_1;
	float ___m_Z_2;
	int32_t ___m_isNone_3;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___item_0;
	int32_t ___depth_1;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_pinvoke
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_pinvoke ___item_0;
	int32_t ___depth_1;
};
struct TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshaled_com
{
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshaled_com ___item_0;
	int32_t ___depth_1;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos_0;
	float ___charWidth_1;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 
{
	String_t* ___regionid_0;
	String_t* ___ipv4_1;
	String_t* ___ipv6_2;
	uint16_t ___port_3;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_marshaled_pinvoke
{
	char* ___regionid_0;
	char* ___ipv4_1;
	char* ___ipv6_2;
	uint16_t ___port_3;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};
struct UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_marshaled_com
{
	Il2CppChar* ___regionid_0;
	Il2CppChar* ___ipv4_1;
	Il2CppChar* ___ipv6_2;
	uint16_t ___port_3;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_4;
};
struct UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 
{
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	int64_t ___U3CBytesCountU3Ek__BackingField_1;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
	uint32_t ___settingIndex_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_5;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_3;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_6;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages_7;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_9;
	float ___textureId_10;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 
{
	bool ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke
{
	int32_t ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};
struct VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com
{
	int32_t ___useVirtualOffset_0;
	float ___outOfGeoOffset_1;
	float ___searchMultiplier_2;
	float ___rayOriginBias_3;
	int32_t ___maxHitsPerRay_4;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___collisionMask_5;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix_3;
	float ___m_Range_4;
	float ___m_SpotAngle_5;
	int32_t ___m_InstanceId_6;
	int32_t ___m_Flags_7;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV_5;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV_5;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV_5;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0_0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1_1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2_2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3_3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value_0;
};
struct AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int16_t ___m_Self_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int16_t ___m_Self_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Parent_1_OffsetPadding[2];
					int16_t ___m_Parent_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Parent_1_OffsetPadding_forAlignmentOnly[2];
					int16_t ___m_Parent_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_LeftChild_2_OffsetPadding[4];
					int16_t ___m_LeftChild_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_LeftChild_2_OffsetPadding_forAlignmentOnly[4];
					int16_t ___m_LeftChild_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_RightChild_3_OffsetPadding[6];
					int16_t ___m_RightChild_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_RightChild_3_OffsetPadding_forAlignmentOnly[6];
					int16_t ___m_RightChild_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_FreelistNext_4_OffsetPadding[8];
					int16_t ___m_FreelistNext_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_FreelistNext_4_OffsetPadding_forAlignmentOnly[8];
					int16_t ___m_FreelistNext_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Flags_5_OffsetPadding[10];
					uint16_t ___m_Flags_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Flags_5_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___m_Flags_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Rect_6_OffsetPadding[16];
					Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Rect_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Rect_6_OffsetPadding_forAlignmentOnly[16];
					Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Rect_6_forAlignmentOnly;
				};
			};
		};
		uint8_t AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A__padding[32];
	};
};
struct Baselib_RegisteredNetwork_Socket_UDP_t56202AB2B03941A065A7D8382591DD253115192A 
{
	intptr_t ___handle_0;
};
struct Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 
{
	intptr_t ___handle_0;
};
struct Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B 
{
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_0;
	float ___m_Hold_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B_marshaled_pinvoke
{
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_0;
	float ___m_Hold_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B_marshaled_com
{
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_VirtualCamera_0;
	float ___m_Hold_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 
{
	String_t* ___m_From_0;
	String_t* ___m_To_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3_marshaled_pinvoke
{
	char* ___m_From_0;
	char* ___m_To_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3_marshaled_com
{
	Il2CppChar* ___m_From_0;
	Il2CppChar* ___m_To_1;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_Blend_2;
};
struct Waypoint_tF0147D859449A4A396E398063D02E76A7214066D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_1;
	float ___roll_2;
};
struct Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	float ___roll_1;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B 
{
	String_t* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshaled_pinvoke
{
	char* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshaled_com
{
	Il2CppChar* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	float ___minLuminance_2;
	float ___maxLuminance_3;
};
struct TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___Reader_0;
	MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 ___Header_1;
	uint64_t ___SenderId_2;
	float ___Timestamp_3;
	int32_t ___SerializedHeaderSize_4;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED 
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin_14;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax_15;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_pinvoke
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin_14;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax_15;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_com
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin_14;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax_15;
};
struct Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 
{
	U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 ___hammersley2dSeq16_0;
};
struct Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 
{
	U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 ___hammersley2dSeq256_0;
};
struct Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 
{
	U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 ___hammersley2dSeq32_0;
};
struct Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 
{
	U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E ___hammersley2dSeq64_0;
};
struct Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_0;
	float ___weight_1;
	float ___time_2;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA 
{
	String_t* ___objectRegistrationName_0;
	String_t* ___parameter_1;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask_2;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___value_3;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_marshaled_pinvoke
{
	char* ___objectRegistrationName_0;
	char* ___parameter_1;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke ___bindingMask_2;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___value_3;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_marshaled_com
{
	Il2CppChar* ___objectRegistrationName_0;
	Il2CppChar* ___parameter_1;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com ___bindingMask_2;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___value_3;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CnameU3Ek__BackingField_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3ClayoutU3Ek__BackingField_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CvariantsU3Ek__BackingField_2;
	String_t* ___U3CuseStateFromU3Ek__BackingField_3;
	String_t* ___U3CdisplayNameU3Ek__BackingField_4;
	String_t* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CmaxValueU3Ek__BackingField_18;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CnameU3Ek__BackingField_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField_2;
	char* ___U3CuseStateFromU3Ek__BackingField_3;
	char* ___U3CdisplayNameU3Ek__BackingField_4;
	char* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField_18;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CnameU3Ek__BackingField_0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3ClayoutU3Ek__BackingField_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CvariantsU3Ek__BackingField_2;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField_3;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField_4;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CmaxValueU3Ek__BackingField_18;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 
{
	int32_t ___m_DeviceId_0;
	String_t* ___m_Layout_1;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_2;
	int32_t ___m_StateSizeInBytes_3;
	String_t* ___m_FullLayoutJson_4;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_pinvoke
{
	int32_t ___m_DeviceId_0;
	char* ___m_Layout_1;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_2;
	int32_t ___m_StateSizeInBytes_3;
	char* ___m_FullLayoutJson_4;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_com
{
	int32_t ___m_DeviceId_0;
	Il2CppChar* ___m_Layout_1;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_2;
	int32_t ___m_StateSizeInBytes_3;
	Il2CppChar* ___m_FullLayoutJson_4;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description_0;
	int32_t ___deviceId_1;
	bool ___isNative_2;
	bool ___isRemoved_3;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_pinvoke
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description_0;
	int32_t ___deviceId_1;
	int32_t ___isNative_2;
	int32_t ___isRemoved_3;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_com
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description_0;
	int32_t ___deviceId_1;
	int32_t ___isNative_2;
	int32_t ___isRemoved_3;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE 
{
	int32_t ___remoteId_0;
	int32_t ___localId_1;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description_2;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke
{
	int32_t ___remoteId_0;
	int32_t ___localId_1;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description_2;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com
{
	int32_t ___remoteId_0;
	int32_t ___localId_1;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description_2;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	bool ___hasEscapes_1;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
};
struct ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 
{
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___Reader_0;
	MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 ___Header_1;
	uint64_t ___SenderId_2;
	float ___Timestamp_3;
	int32_t ___MessageHeaderSerializedSize_4;
};
struct SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 
{
	BatchHeader_t91532F4048A735C272961ED089CD374AAB3A019B ___BatchHeader_0;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___Writer_1;
	int32_t ___NetworkDelivery_2;
};
struct AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F 
{
	int32_t ___Hash_0;
	int32_t ___Type_1;
	U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2 ___Value_2;
};
struct UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___pipeline_0;
	int32_t ___stage_1;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___connection_2;
};
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 
{
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___X_0;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___Y_1;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___Z_2;
};
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_marshaled_pinvoke
{
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___X_0;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___Y_1;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___Z_2;
};
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_marshaled_com
{
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___X_0;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___Y_1;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___Z_2;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC 
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr_0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer_1;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_2;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl_3;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_pinvoke
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr_0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer_1;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_2;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl_3;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_com
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr_0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer_1;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_2;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl_3;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField_0;
	RuntimeObject* ___U3CPanelU3Ek__BackingField_1;
	int32_t ___U3CFlagsU3Ek__BackingField_2;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField_0;
	RuntimeObject* ___U3CPanelU3Ek__BackingField_1;
	int32_t ___U3CFlagsU3Ek__BackingField_2;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField_0;
	RuntimeObject* ___U3CPanelU3Ek__BackingField_1;
	int32_t ___U3CFlagsU3Ek__BackingField_2;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position_0;
	int32_t ___subdivisionLevel_1;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 
{
	String_t* ___scenario_0;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___data_1;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_marshaled_pinvoke
{
	char* ___scenario_0;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_pinvoke ___data_1;
};
struct SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_marshaled_com
{
	Il2CppChar* ___scenario_0;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_marshaled_com ___data_1;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 
{
	uint32_t ___updateCount_0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash_1;
	int32_t ___size_2;
	int32_t ___mipCount_3;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices_4;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_6;
	int32_t ___lastUsed_7;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_marshaled_pinvoke
{
	uint32_t ___updateCount_0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash_1;
	int32_t ___size_2;
	int32_t ___mipCount_3;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices_4;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_6;
	int32_t ___lastUsed_7;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_marshaled_com
{
	uint32_t ___updateCount_0;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash_1;
	int32_t ___size_2;
	int32_t ___mipCount_3;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices_4;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_6;
	int32_t ___lastUsed_7;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position_0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection_3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels_4;
	uint32_t ___layerMask_5;
};
struct Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB 
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	bool ___compareReversed_3;
};
struct Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshaled_pinvoke
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	int32_t ___compareReversed_3;
};
struct Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_marshaled_com
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	int32_t ___compareReversed_3;
};
struct WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B 
{
	int32_t ___len_0;
	intptr_t ___buf_1;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	int32_t ___border_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	int32_t ___border_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src_0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect_1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos_2;
	int32_t ___border_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint_4;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD 
{
	String_t* ___filename_0;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	bool ___rotated_2;
	bool ___trimmed_3;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize_4;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_6;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_pinvoke
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_com
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	float ___fontTexSDFScale_3;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_4;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_5;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_6;
	int32_t ___addFlags_7;
	bool ___uvIsDisplacement_8;
	bool ___isTextEntry_9;
	bool ___isClipRegisterEntry_10;
	int32_t ___stencilRef_11;
	int32_t ___maskDepth_12;
};
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshaled_pinvoke
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	float ___fontTexSDFScale_3;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_4;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_5;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_6;
	int32_t ___addFlags_7;
	int32_t ___uvIsDisplacement_8;
	int32_t ___isTextEntry_9;
	int32_t ___isClipRegisterEntry_10;
	int32_t ___stencilRef_11;
	int32_t ___maskDepth_12;
};
struct Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshaled_com
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices_0;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	float ___fontTexSDFScale_3;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_4;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___customCommand_5;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_6;
	int32_t ___addFlags_7;
	int32_t ___uvIsDisplacement_8;
	int32_t ___isTextEntry_9;
	int32_t ___isClipRegisterEntry_10;
	int32_t ___stencilRef_11;
	int32_t ___maskDepth_12;
};
struct RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___alloc_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	bool ___vertices_2;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_pinvoke
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___alloc_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	int32_t ___vertices_2;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_com
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___alloc_0;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page_1;
	int32_t ___vertices_2;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 
{
	uint32_t ___id_0;
	uint32_t ___allocTime_1;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocVerts_3;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocIndices_4;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	bool ___copyBackIndices_6;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_pinvoke
{
	uint32_t ___id_0;
	uint32_t ___allocTime_1;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocVerts_3;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocIndices_4;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	int32_t ___copyBackIndices_6;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_com
{
	uint32_t ___id_0;
	uint32_t ___allocTime_1;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle_2;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocVerts_3;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocIndices_4;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage_5;
	int32_t ___copyBackIndices_6;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD 
{
	int32_t ___HijriMonthsLengthFlags_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate_1;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_pinvoke
{
	int32_t ___HijriMonthsLengthFlags_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate_1;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_com
{
	int32_t ___HijriMonthsLengthFlags_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate_1;
};
struct SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 
{
	uint64_t ___ClientId_0;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___NetworkPipeline_1;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE 
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___name_0;
	String_t* ___val_1;
	int32_t ___contentPos_2;
	int32_t ___hashCode_3;
	int32_t ___prevHash_4;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshaled_pinvoke
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke ___name_0;
	char* ___val_1;
	int32_t ___contentPos_2;
	int32_t ___hashCode_3;
	int32_t ___prevHash_4;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshaled_com
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com ___name_0;
	Il2CppChar* ___val_1;
	int32_t ___contentPos_2;
	int32_t ___hashCode_3;
	int32_t ___prevHash_4;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___name_0;
	String_t* ___xmlLang_1;
	int32_t ___xmlSpace_2;
	bool ___xmlspacePreserve_3;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls_4;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshaled_pinvoke
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke ___name_0;
	char* ___xmlLang_1;
	int32_t ___xmlSpace_2;
	int32_t ___xmlspacePreserve_3;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls_4;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshaled_com
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com ___name_0;
	Il2CppChar* ___xmlLang_1;
	int32_t ___xmlSpace_2;
	int32_t ___xmlspacePreserve_3;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls_4;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	int32_t ___index_1;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 
{
	HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435* ___itemStack_0;
	int32_t ___index_1;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB 
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
struct FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes_1;
			FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A ___bytes_2;
		};
		uint8_t FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5__padding[64];
	};
};
struct LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 
{
	int32_t ___controlCharacterCount_0;
	int32_t ___characterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___spaceCount_3;
	int32_t ___visibleSpaceCount_4;
	int32_t ___wordCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharacterIndex_9;
	float ___length_10;
	float ___lineHeight_11;
	float ___ascender_12;
	float ___baseline_13;
	float ___descender_14;
	float ___maxAdvance_15;
	float ___width_16;
	float ___marginLeft_17;
	float ___marginRight_18;
	int32_t ___alignment_19;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___lineExtents_20;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167 ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44 ___virtualOffsetSettings_2;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_pinvoke ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_pinvoke ___virtualOffsetSettings_2;
};
struct ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com
{
	int32_t ___m_Version_0;
	ProbeDilationSettings_t28A862582E313EFC300E6437FDCB9D9DC9A9A167_marshaled_com ___dilationSettings_1;
	VirtualOffsetSettings_tC91F136546790A8318F26B183DCB14460F426A44_marshaled_com ___virtualOffsetSettings_2;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState_0;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState_1;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState_2;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState_3;
	int32_t ___m_StencilReference_4;
	int32_t ___m_Mask_5;
};
struct ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix_1;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___shadowTransform_2;
	int32_t ___offsetX_3;
	int32_t ___offsetY_4;
	int32_t ___resolution_5;
	ShadowSplitData_tC276A96F461DD73CFF6D94DB557D42A1643640DF ___splitData_6;
};
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_1_OffsetPadding[4];
			int32_t ___keyword_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_2_OffsetPadding[8];
			float ___number_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_2_OffsetPadding_forAlignmentOnly[8];
			float ___number_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_3_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_3_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_4_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_4_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_5_OffsetPadding[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_5_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_6_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_6_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_7_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_7_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_7_forAlignmentOnly;
		};
	};
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	Il2CppChar ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	bool ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	bool ___isVisible_40;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount_0;
	int32_t ___characterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___spaceCount_3;
	int32_t ___wordCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharacterIndex_8;
	float ___length_9;
	float ___lineHeight_10;
	float ___ascender_11;
	float ___baseline_12;
	float ___descender_13;
	float ___maxAdvance_14;
	float ___width_15;
	float ___marginLeft_16;
	float ___marginRight_17;
	int32_t ___alignment_18;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B 
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_6;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_7;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_8;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_9;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_10;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_11;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_pinvoke
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshaled_com
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normals_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___tangents_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_10;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_11;
	Il2CppSafeArray* ___triangles_12;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_13;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 
{
	Il2CppChar ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F* ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	bool ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	bool ___isVisible_42;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_pinvoke ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	int32_t ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	int32_t ___isVisible_42;
};
struct TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	uint8_t ___elementType_2;
	int32_t ___stringLength_3;
	TextElement_tCEF567A8810788262275B39DC39CBA6EBE7472DA* ___textElement_4;
	Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshaled_com* ___alternativeGlyph_5;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_6;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset_7;
	int32_t ___spriteIndex_8;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_9;
	int32_t ___materialReferenceIndex_10;
	int32_t ___isUsingAlternateTypeface_11;
	float ___pointSize_12;
	int32_t ___lineNumber_13;
	int32_t ___pageNumber_14;
	int32_t ___vertexIndex_15;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopLeft_16;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomLeft_17;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexTopRight_18;
	TextVertex_tF030A16DC67EAF3F6C9C9C0564D4B88758B173A9 ___vertexBottomRight_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_22;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_23;
	float ___origin_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___adjustedHorizontalAdvance_30;
	float ___xAdvance_31;
	float ___aspectRatio_32;
	float ___scale_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_35;
	int32_t ___underlineVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_37;
	int32_t ___strikethroughVertexIndex_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_39;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_40;
	int32_t ___style_41;
	int32_t ___isVisible_42;
};
struct UnsafeBaselibNetworkArray_t584439A8DE5F6B3E95118C7E62CCA8C3B6220709 
{
	UnsafePtrList_1_tAD86775FD13A7BFCCD3E9ACA2796FFE62044B970 ___m_BufferPool_0;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_3;
	float ___m_BlendDistance_4;
	int32_t ___m_Importance_5;
	int32_t ___m_BoxProjection_6;
	int32_t ___m_InstanceId_7;
	int32_t ___m_TextureId_8;
};
struct TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 
{
	float ___Expiry_0;
	NativeList_1_t04917686A677DCA96B3A082C15D174D765D4DF5F ___TriggerData_1;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Layout_0;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Name_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_DisplayName_3;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Layout_0;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Name_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_DisplayName_3;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Layout_0;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages_1;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Name_2;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_DisplayName_3;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27 
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements_4;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements_4;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_com
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices_2;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_3;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements_4;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 
{
	BitRegionU5BU5D_t6D477477F7EB84242BA07FA65BC1BD6DA74A3D39* ___memoryRegions_0;
	StateChangeMonitorListenerU5BU5D_tEF042EA5E57858FE7C48A9F1AF7A55B249ADB5A9* ___listeners_1;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10 ___signalled_2;
	bool ___needToUpdateOrderingOfMonitors_3;
	bool ___needToCompactArrays_4;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_marshaled_pinvoke
{
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C* ___memoryRegions_0;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke* ___listeners_1;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_pinvoke ___signalled_2;
	int32_t ___needToUpdateOrderingOfMonitors_3;
	int32_t ___needToCompactArrays_4;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_marshaled_com
{
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C* ___memoryRegions_0;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com* ___listeners_1;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_com ___signalled_2;
	int32_t ___needToUpdateOrderingOfMonitors_3;
	int32_t ___needToCompactArrays_4;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type_0;
	bool ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	RuntimeObject* ___anyValue_7;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
struct Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 
{
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___Address_0;
	int64_t ___LastNonDataSend_1;
	int64_t ___LastReceive_2;
	int32_t ___Id_3;
	int32_t ___Version_4;
	int32_t ___ConnectAttempts_5;
	int32_t ___State_6;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___ReceiveToken_7;
	SessionIdToken_tC99CC2FCFBDC94BA4D4A024CF8863DA9971F1672 ___SendToken_8;
	uint8_t ___DidReceiveData_9;
	uint8_t ___IsAccepted_10;
};
struct ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69 
{
	bool ___m_IsPressed_0;
	int32_t ___m_FramePressState_1;
	float ___m_PressTime_2;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___m_PressRaycast_3;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PressObject_4;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RawPressObject_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastPressObject_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DragObject_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PressPosition_8;
	float ___m_ClickTime_9;
	int32_t ___m_ClickCount_10;
	bool ___m_Dragging_11;
	bool ___m_ClickedOnSameGameObject_12;
	bool ___m_IgnoreNextClick_13;
};
struct ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_pinvoke
{
	int32_t ___m_IsPressed_0;
	int32_t ___m_FramePressState_1;
	float ___m_PressTime_2;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___m_PressRaycast_3;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PressObject_4;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RawPressObject_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastPressObject_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DragObject_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PressPosition_8;
	float ___m_ClickTime_9;
	int32_t ___m_ClickCount_10;
	int32_t ___m_Dragging_11;
	int32_t ___m_ClickedOnSameGameObject_12;
	int32_t ___m_IgnoreNextClick_13;
};
struct ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_com
{
	int32_t ___m_IsPressed_0;
	int32_t ___m_FramePressState_1;
	float ___m_PressTime_2;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___m_PressRaycast_3;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PressObject_4;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RawPressObject_5;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastPressObject_6;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DragObject_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PressPosition_8;
	float ___m_ClickTime_9;
	int32_t ___m_ClickCount_10;
	int32_t ___m_Dragging_11;
	int32_t ___m_ClickedOnSameGameObject_12;
	int32_t ___m_IgnoreNextClick_13;
};
struct ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 
{
	Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___brick_0;
	int32_t ___flattenedIdx_1;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 
{
	String_t* ___sceneGUID_0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_1;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_1;
};
struct SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_1;
};
struct InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A 
{
	NetworkEndPoint_tD248F1CF54F01EF67B92B12963FC7060054C4CBC ___RemoteEndpoint_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_1;
	int32_t ___Idx_2;
	int32_t ___m_FirstIdx_3;
	uint16_t ___m_RequestIdentifier_4;
};
struct InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A_marshaled_pinvoke
{
	NetworkEndPoint_tD248F1CF54F01EF67B92B12963FC7060054C4CBC ___RemoteEndpoint_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_1;
	int32_t ___Idx_2;
	int32_t ___m_FirstIdx_3;
	uint16_t ___m_RequestIdentifier_4;
};
struct InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A_marshaled_com
{
	NetworkEndPoint_tD248F1CF54F01EF67B92B12963FC7060054C4CBC ___RemoteEndpoint_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackoffUntilUtc_1;
	int32_t ___Idx_2;
	int32_t ___m_FirstIdx_3;
	uint16_t ___m_RequestIdentifier_4;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass_0;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList_1;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList_2;
	int32_t ___refCount_3;
	bool ___culled_4;
	bool ___culledByRendererList_5;
	bool ___hasSideEffect_6;
	int32_t ___syncToPassIndex_7;
	int32_t ___syncFromPassIndex_8;
	bool ___needGraphicsFence_9;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence_10;
	bool ___enableAsyncCompute_11;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_pinvoke
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList_1;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList_2;
	int32_t ___refCount_3;
	int32_t ___culled_4;
	int32_t ___culledByRendererList_5;
	int32_t ___hasSideEffect_6;
	int32_t ___syncToPassIndex_7;
	int32_t ___syncFromPassIndex_8;
	int32_t ___needGraphicsFence_9;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence_10;
	int32_t ___enableAsyncCompute_11;
};
struct CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_marshaled_com
{
	RenderGraphPass_t7689449D6979D97B31E962897EB038EA3F01D361* ___pass_0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList_1;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList_2;
	int32_t ___refCount_3;
	int32_t ___culled_4;
	int32_t ___culledByRendererList_5;
	int32_t ___hasSideEffect_6;
	int32_t ___syncToPassIndex_7;
	int32_t ___syncFromPassIndex_8;
	int32_t ___needGraphicsFence_9;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence_10;
	int32_t ___enableAsyncCompute_11;
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile_1;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData_2;
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_pinvoke
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile_1;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData_2;
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_com
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile_1;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData_2;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A 
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D ___playerState_5;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_pinvoke
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke ___playerState_5;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_com
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens_0;
	int32_t ___historyLengthPerFinger_1;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown_2;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove_3;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp_4;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com ___playerState_5;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___path_0;
	String_t* ___typeFullName_1;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___asset_2;
	Type_t* ___m_CachedType_3;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___path_0;
	char* ___typeFullName_1;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___asset_2;
	Type_t* ___m_CachedType_3;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___path_0;
	Il2CppChar* ___typeFullName_1;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___asset_2;
	Type_t* ___m_CachedType_3;
};
struct Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 
{
	bool ___hasValue_0;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___value_1;
};
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
struct NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D 
{
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_0;
	uint64_t ___U3CNetworkIdU3Ek__BackingField_1;
};
struct PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42 
{
	bool ___changedThisFrame_0;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69 ___leftButton_1;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69 ___rightButton_2;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69 ___middleButton_3;
	ExtendedPointerEventData_t164B462A9B123B2EE69B7DEC4F33F6AA3DE7937F* ___eventData_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScreenPosition_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_WorldPosition_7;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_WorldOrientation_8;
	float ___m_Pressure_9;
	float ___m_AzimuthAngle_10;
	float ___m_AltitudeAngle_11;
	float ___m_Twist_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Radius_13;
};
struct PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42_marshaled_pinvoke
{
	int32_t ___changedThisFrame_0;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_pinvoke ___leftButton_1;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_pinvoke ___rightButton_2;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_pinvoke ___middleButton_3;
	ExtendedPointerEventData_t164B462A9B123B2EE69B7DEC4F33F6AA3DE7937F* ___eventData_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScreenPosition_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_WorldPosition_7;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_WorldOrientation_8;
	float ___m_Pressure_9;
	float ___m_AzimuthAngle_10;
	float ___m_AltitudeAngle_11;
	float ___m_Twist_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Radius_13;
};
struct PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42_marshaled_com
{
	int32_t ___changedThisFrame_0;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_com ___leftButton_1;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_com ___rightButton_2;
	ButtonState_tC90005D9F1E87688352A8F97B40400D0319CFC69_marshaled_com ___middleButton_3;
	ExtendedPointerEventData_t164B462A9B123B2EE69B7DEC4F33F6AA3DE7937F* ___eventData_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScreenPosition_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ScrollDelta_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_WorldPosition_7;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_WorldOrientation_8;
	float ___m_Pressure_9;
	float ___m_AzimuthAngle_10;
	float ___m_AltitudeAngle_11;
	float ___m_Twist_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Radius_13;
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 
{
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CSceneEventTypeU3Ek__BackingField_1;
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CSceneNameU3Ek__BackingField_2;
	int64_t ___U3CBytesCountU3Ek__BackingField_3;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger_0;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord_1;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	bool ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	bool ___tagNoParsing_63;
	bool ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	bool ___tagNoParsing_60;
	bool ___isNonBreakingSpace_61;
	bool ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_pinvoke
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	int32_t ___tagNoParsing_60;
	int32_t ___isNonBreakingSpace_61;
	int32_t ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_com
{
	int32_t ___previousWordBreak_0;
	int32_t ___totalCharacterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___visibleSpaceCount_3;
	int32_t ___visibleSpriteCount_4;
	int32_t ___visibleLinkCount_5;
	int32_t ___firstCharacterIndex_6;
	int32_t ___firstVisibleCharacterIndex_7;
	int32_t ___lastCharacterIndex_8;
	int32_t ___lastVisibleCharIndex_9;
	int32_t ___lineNumber_10;
	float ___maxCapHeight_11;
	float ___maxAscender_12;
	float ___maxDescender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___startOfLineAscender_16;
	float ___xAdvance_17;
	float ___preferredWidth_18;
	float ___preferredHeight_19;
	float ___previousLineScale_20;
	float ___pageAscender_21;
	int32_t ___wordCount_22;
	int32_t ___fontStyle_23;
	float ___fontScale_24;
	float ___fontScaleMultiplier_25;
	int32_t ___italicAngle_26;
	float ___currentFontSize_27;
	float ___baselineOffset_28;
	float ___lineOffset_29;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo_30;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_35;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState_36;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack_37;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack_38;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack_39;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack_40;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack_41;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack_42;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack_43;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack_44;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack_45;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack_46;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack_47;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack_48;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack_49;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack_50;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack_51;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack_52;
	int32_t ___lastBaseGlyphIndex_53;
	int32_t ___spriteAnimationId_54;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset_55;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset_56;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_57;
	int32_t ___currentMaterialIndex_58;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents_59;
	int32_t ___tagNoParsing_60;
	int32_t ___isNonBreakingSpace_61;
	int32_t ___isDrivenLineSpacing_62;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale_63;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation_64;
};
struct WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___mixer_0;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___parentMixer_1;
	int32_t ___port_2;
};
struct Payloads_t73B5E28F36472A64947A3A62029D9F6643CAC463 
{
	UnsafeAtomicFreeList_tDAA2E28DFA321FDC0BB202ECAC92DFF2922A9B04 ___m_Handles_0;
	UnsafeBaselibNetworkArray_t584439A8DE5F6B3E95118C7E62CCA8C3B6220709 ___m_PayloadArray_1;
	UnsafeBaselibNetworkArray_t584439A8DE5F6B3E95118C7E62CCA8C3B6220709 ___m_EndpointArray_2;
	uint32_t ___m_PayloadSize_3;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C 
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle_0;
	String_t* ___platformUserAccountName_1;
	String_t* ___platformUserAccountId_2;
	int32_t ___deviceCount_3;
	int32_t ___deviceStartIndex_4;
	RuntimeObject* ___actions_5;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme_6;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27 ___controlSchemeMatch_7;
	int32_t ___lostDeviceCount_8;
	int32_t ___lostDeviceStartIndex_9;
	int32_t ___flags_10;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle_0;
	char* ___platformUserAccountName_1;
	char* ___platformUserAccountId_2;
	int32_t ___deviceCount_3;
	int32_t ___deviceStartIndex_4;
	RuntimeObject* ___actions_5;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme_6;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_pinvoke ___controlSchemeMatch_7;
	int32_t ___lostDeviceCount_8;
	int32_t ___lostDeviceStartIndex_9;
	int32_t ___flags_10;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle_0;
	Il2CppChar* ___platformUserAccountName_1;
	Il2CppChar* ___platformUserAccountId_2;
	int32_t ___deviceCount_3;
	int32_t ___deviceStartIndex_4;
	RuntimeObject* ___actions_5;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme_6;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_com ___controlSchemeMatch_7;
	int32_t ___lostDeviceCount_8;
	int32_t ___lostDeviceStartIndex_9;
	int32_t ___flags_10;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 
{
	String_t* ___sceneGUID_0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___settings_1;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_pinvoke ___settings_1;
};
struct SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_marshaled_com ___settings_1;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E 
{
	int32_t ___sortingCriteria_0;
	int32_t ___rendererConfiguration_1;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader_4;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_5;
	bool ___excludeObjectMotionVectors_6;
	int32_t ___layerMask_7;
	uint32_t ___renderingLayerMask_8;
	int32_t ___overrideMaterialPassIndex_9;
	int32_t ___overrideShaderPassIndex_10;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_11;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_12;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_13;
	ShaderTagIdU5BU5D_tE1BA124E13B8096153E25C5AF9C1D15D71466143* ___U3CpassNamesU3Ek__BackingField_14;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke
{
	int32_t ___sortingCriteria_0;
	int32_t ___rendererConfiguration_1;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader_4;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_5;
	int32_t ___excludeObjectMotionVectors_6;
	int32_t ___layerMask_7;
	uint32_t ___renderingLayerMask_8;
	int32_t ___overrideMaterialPassIndex_9;
	int32_t ___overrideShaderPassIndex_10;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_11;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_12;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_13;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField_14;
};
struct RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com
{
	int32_t ___sortingCriteria_0;
	int32_t ___rendererConfiguration_1;
	RenderQueueRange_t7518252AA6426B1EA45D3D9B394F304EEF784D71 ___renderQueueRange_2;
	Nullable_1_tA4A30D1008B44E6BEFB1666997B110F382EE3AA5 ___stateBlock_3;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___overrideShader_4;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___overrideMaterial_5;
	int32_t ___excludeObjectMotionVectors_6;
	int32_t ___layerMask_7;
	uint32_t ___renderingLayerMask_8;
	int32_t ___overrideMaterialPassIndex_9;
	int32_t ___overrideShaderPassIndex_10;
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___U3CcullingResultU3Ek__BackingField_11;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3Ek__BackingField_12;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___U3CpassNameU3Ek__BackingField_13;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___U3CpassNamesU3Ek__BackingField_14;
};
struct RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA 
{
	ConnectionInfo_tD9AB508BCCD592888F5A190D257AFE29BC27D285 ___U3CConnectionU3Ek__BackingField_0;
	NetworkObjectIdentifier_t79018FBEC2AB8A343913F3612DF24604F92E8A6D ___U3CNetworkIdU3Ek__BackingField_1;
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNameU3Ek__BackingField_2;
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___U3CNetworkBehaviourNameU3Ek__BackingField_3;
	int64_t ___U3CBytesCountU3Ek__BackingField_4;
};
struct BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 
{
	Baselib_RegisteredNetwork_Socket_UDP_t56202AB2B03941A065A7D8382591DD253115192A ___m_Socket_0;
	int32_t ___m_SocketStatus_1;
	Payloads_t73B5E28F36472A64947A3A62029D9F6643CAC463 ___m_PayloadsTx_2;
	NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686 ___m_LocalEndpoint_3;
	int64_t ___m_LastUpdateTime_4;
	int64_t ___m_LastSocketRecreateTime_5;
	uint32_t ___m_NumSocketRecreate_6;
};
struct AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___ClientRpcParams_0;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 ___AnimationMessage_1;
};
struct AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04_marshaled_pinvoke
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___ClientRpcParams_0;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke ___AnimationMessage_1;
};
struct AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04_marshaled_com
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___ClientRpcParams_0;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com ___AnimationMessage_1;
};
struct ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___ClientRpcParams_0;
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 ___ParametersUpdateMessage_1;
};
struct ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709_marshaled_pinvoke
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___ClientRpcParams_0;
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_pinvoke ___ParametersUpdateMessage_1;
};
struct ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709_marshaled_com
{
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___ClientRpcParams_0;
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_com ___ParametersUpdateMessage_1;
};
struct TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 
{
	bool ___SendToServer_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___ClientRpcParams_1;
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 ___AnimationTriggerMessage_2;
};
struct TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58_marshaled_pinvoke
{
	int32_t ___SendToServer_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___ClientRpcParams_1;
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke ___AnimationTriggerMessage_2;
};
struct TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58_marshaled_com
{
	int32_t ___SendToServer_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___ClientRpcParams_1;
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com ___AnimationTriggerMessage_2;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E ___desc_0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList_1;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_pinvoke
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_pinvoke ___desc_0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList_1;
};
struct RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_marshaled_com
{
	RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshaled_com ___desc_0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___rendererList_1;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};
struct ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_StaticFields
{
	uint32_t ___s_CurrentValidBit_3;
	uint32_t ___s_SharedResourceValidBit_4;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};
struct SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_StaticFields
{
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___Null_1;
};
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields
{
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___True_1;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___False_2;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Null_3;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Zero_4;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___One_5;
};
struct SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_StaticFields
{
	int32_t ___s_iBitNotByteMax_2;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Null_3;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___Zero_4;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MinValue_5;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___MaxValue_6;
};
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields
{
	uint8_t ___s_NUMERIC_MAX_PRECISION_8;
	uint8_t ___MaxPrecision_9;
	uint8_t ___MaxScale_10;
	uint8_t ___s_bNullMask_11;
	uint8_t ___s_bIsNull_12;
	uint8_t ___s_bNotNull_13;
	uint8_t ___s_bReverseNullMask_14;
	uint8_t ___s_bSignMask_15;
	uint8_t ___s_bPositive_16;
	uint8_t ___s_bNegative_17;
	uint8_t ___s_bReverseSignMask_18;
	uint32_t ___s_uiZero_19;
	int32_t ___s_cNumeMax_20;
	int64_t ___s_lInt32Base_21;
	uint64_t ___s_ulInt32Base_22;
	uint64_t ___s_ulInt32BaseForMod_23;
	uint64_t ___s_llMax_24;
	uint32_t ___s_ulBase10_25;
	double ___s_DUINT_BASE_26;
	double ___s_DUINT_BASE2_27;
	double ___s_DUINT_BASE3_28;
	double ___s_DMAX_NUME_29;
	uint32_t ___s_DBL_DIG_30;
	uint8_t ___s_cNumeDivScaleMin_31;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_rgulShiftBase_32;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersLo_33;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersMid_34;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHi_35;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHiHi_36;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_rgCLenFromPrec_37;
	uint32_t ___s_ulT1_38;
	uint32_t ___s_ulT2_39;
	uint32_t ___s_ulT3_40;
	uint32_t ___s_ulT4_41;
	uint32_t ___s_ulT5_42;
	uint32_t ___s_ulT6_43;
	uint32_t ___s_ulT7_44;
	uint32_t ___s_ulT8_45;
	uint32_t ___s_ulT9_46;
	uint64_t ___s_dwlT10_47;
	uint64_t ___s_dwlT11_48;
	uint64_t ___s_dwlT12_49;
	uint64_t ___s_dwlT13_50;
	uint64_t ___s_dwlT14_51;
	uint64_t ___s_dwlT15_52;
	uint64_t ___s_dwlT16_53;
	uint64_t ___s_dwlT17_54;
	uint64_t ___s_dwlT18_55;
	uint64_t ___s_dwlT19_56;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___Null_57;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MinValue_58;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MaxValue_59;
};
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields
{
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Null_2;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Zero_3;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MinValue_4;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MaxValue_5;
};
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields
{
	int32_t ___s_sizeOfGuid_0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_rgiGuidOrder_1;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___Null_3;
};
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields
{
	int32_t ___s_MASKI2_2;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Null_3;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Zero_4;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MinValue_5;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MaxValue_6;
};
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields
{
	int64_t ___s_iIntMin_2;
	int64_t ___s_lBitNotIntMax_3;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Null_4;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Zero_5;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MinValue_6;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MaxValue_7;
};
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields
{
	int64_t ___s_lLowIntMask_2;
	int64_t ___s_lHighIntMask_3;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Null_4;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Zero_5;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MinValue_6;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MaxValue_7;
};
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields
{
	int32_t ___s_iMoneyScale_2;
	int64_t ___s_lTickBase_3;
	double ___s_dTickBase_4;
	int64_t ___s_minLong_5;
	int64_t ___s_maxLong_6;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Null_7;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Zero_8;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MinValue_9;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MaxValue_10;
};
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields
{
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Null_2;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Zero_3;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MinValue_4;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MaxValue_5;
};
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields
{
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___Null_5;
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___s_unicodeEncoding_6;
	int32_t ___IgnoreCase_7;
	int32_t ___IgnoreWidth_8;
	int32_t ___IgnoreNonSpace_9;
	int32_t ___IgnoreKanaType_10;
	int32_t ___BinarySort_11;
	int32_t ___BinarySort2_12;
	int32_t ___s_iDefaultFlag_13;
	int32_t ___s_iValidCompareOptionMask_14;
	int32_t ___s_iValidSqlCompareOptionMask_15;
	int32_t ___s_lcidUSEnglish_16;
	int32_t ___s_lcidBinary_17;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid_1;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer_0;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer_0;
};
struct RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_StaticFields
{
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___nullRendererList_4;
};
struct SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_StaticFields
{
	double ___s_SQLTicksPerMillisecond_3;
	int32_t ___SQLTicksPerSecond_4;
	int32_t ___SQLTicksPerMinute_5;
	int32_t ___SQLTicksPerHour_6;
	int32_t ___s_SQLTicksPerDay_7;
	int64_t ___s_ticksPerSecond_8;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_SQLBaseDate_9;
	int64_t ___s_SQLBaseDateTicks_10;
	int32_t ___s_minYear_11;
	int32_t ___s_maxYear_12;
	int32_t ___s_minDay_13;
	int32_t ___s_maxDay_14;
	int32_t ___s_minTime_15;
	int32_t ___s_maxTime_16;
	int32_t ___s_dayBase_17;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_18;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_19;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateTime_20;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateTime_21;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_minTimeSpan_22;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maxTimeSpan_23;
	String_t* ___s_ISO8601_DateTimeFormat_24;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_dateTimeFormats_25;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MinValue_26;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___MaxValue_27;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___Null_28;
};
struct TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_StaticFields
{
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___s_NullHandle_0;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default_6;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ_0;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity_4;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero_5;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity_1;
};
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_StaticFields
{
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___VertexLayout_3;
};
struct TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_2;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___s_DefaultBounds_3;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticFields
{
	GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A ___s_GlobalState_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9 (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF (int8_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33 (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724 (SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006 (SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634 (SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8 (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Touch_Equals_mA91A1937A740538D62AF4998D332AAB464B47E1E (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542 (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1 (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E (uint32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9 (uint64_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845 (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4 (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8 (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97 (int4_tBA77D4945786DE82C3A487B33955EA1004996052* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPoint_Equals_m6E23677EC9306F8D66DD717865D49A3E9A9BAB5E (IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceRequirement_Equals_m8B21D6C5F042071FE736CC9D3F360265AEE9F6D8 (DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_mEAE03AEEBA5DD28BBFD29288ABD97ECA570E1745 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_Equals_m4A516862648D99564D5FA05FC99DF63A275D2996 (JsonValue_t01DB320267C848E729A400EF2345979978F851D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Connection_Equals_m18298C6FEC449DB9A270A7B275A50EA8403E9958 (Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* __this, RuntimeObject* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2 (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42_m813681585663515A32BD0F00362D943390F0F816_gshared (RuntimeArray* __this, PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42 L_5 = V_2;
		PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PointerModel_t6E979AA49D01ACA529A68AF8F48624E73484CD42> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7_mFD7161FD6DCEC86BB844C0F965709755EA13DA9D_gshared (RuntimeArray* __this, ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_5 = V_2;
		ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD_m7BA5671DA6754E51B5B9496EF7CD8AC1316C253D_gshared (RuntimeArray* __this, ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_5 = V_2;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisQosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_mD8B676EDF10D85BF4D95E4CB4EDA1CF403A5968B_gshared (RuntimeArray* __this, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_5 = V_2;
		QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3CB4A506B40BCCF27D7462B9878C9275ECA8657E_gshared (RuntimeArray* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_m9731C3DE8540C6BB886B5AD3BB766D26E7B5E8A6_gshared (RuntimeArray* __this, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_5 = V_2;
		RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRay_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00_mDCC1583C5D92B3A6605CFF2FDFB42ECF0E8B6D19_gshared (RuntimeArray* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = V_2;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRay2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A_m7BA763316898C9AFFF80EE93E2D335A3C426ECEA_gshared (RuntimeArray* __this, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_5 = V_2;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m8F0732060388F29DADC9AB53DB7ADE537EDC2623_gshared (RuntimeArray* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5 = V_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_mCA021E579A5B7D10742C7AF56C6DDFDB63F33C04_gshared (RuntimeArray* __this, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_5 = V_2;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_mFA91C9D3BC8CCBBB5F44094040F91E8182C5D4EA_gshared (RuntimeArray* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_5 = V_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mC1A918BF371A87F492DE40D6F89763ECF94FECB7_gshared (RuntimeArray* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mC50FE226CC08982C597571FF97D64B4037F9EB06_gshared (RuntimeArray* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_5 = V_2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414_m5FF13077100D77C0D4547F8061143F4E29870779_gshared (RuntimeArray* __this, ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_5 = V_2;
		ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m8ACE83869D94A11693CC7D38D1460915A1DFE86C_gshared (RuntimeArray* __this, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_5 = V_2;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderStateBlock_Equals_mF2FD2D7C1C6EA07116947C3BC730E741A4054EE9((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_m6EFFD87701C0FE7B54D967C824FFBFB3DF01441A_gshared (RuntimeArray* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = V_2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = RenderTargetIdentifier_Equals_m07E36F91E8966A0E3882EF168F1AE3656BE48E9A((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85_mAF9ED3BCFB66A10A497D7169AD0E2E55628582BC_gshared (RuntimeArray* __this, RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_5 = V_2;
		RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererList_t608CE60421616EF4211F5B8AC62E3C36D4BDDF85> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D_m60A115E22989D3FC72D2C0C5F225C803E20CC5E3_gshared (RuntimeArray* __this, RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_5 = V_2;
		RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListHandle_t21AFDDE69B0048546497B890088B880F8080C62D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49_mA043239F23EB887F17CB7015B8C764C7584F6677_gshared (RuntimeArray* __this, RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_5 = V_2;
		RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RendererListResource_t9B978DD85ADC467D7E4DB42EF603B7C49918BF49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525_m3746BE7F7513339FC1F0F52CCC07A26898C16609_gshared (RuntimeArray* __this, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_5 = V_2;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A_m4EA1071F6CD1F4A91F568E9BDDAAFC638D9F5C66_gshared (RuntimeArray* __this, ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_5 = V_2;
		ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceHandle_t0B9B0555328A08152F1EDA2BE4024446D670531A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m776D1B79E6A5389B97BDCB7B81E59A24F6E21A20_gshared (RuntimeArray* __this, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_5 = V_2;
		ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0_m582AD28CA00172A4ADE2D6DCA911E1CFB500144C_gshared (RuntimeArray* __this, RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_5 = V_2;
		RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t1BB51A8FD6C14746D177D8E84E281A4FD4A720E0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA_mE7E1C39A705CECE8E32EC17EB6EDD61EAB6ED197_gshared (RuntimeArray* __this, RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_5 = V_2;
		RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RichTextTagAttribute_t0600951F833208392F1D8EE3E6A58AD5C797F9DA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mC0DD18A608B80CA886B259AC90CB7800DBB70D7B_gshared (RuntimeArray* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_5 = V_2;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Rotate_Equals_m49F7E80F31B6317836CA1628FAA1D2194B5B6165((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA_mDFC9520E03A5B3AF6F353E94711B96F4BA3C1FA3_gshared (RuntimeArray* __this, RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA L_5 = V_2;
		RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RpcEvent_t02957B0FACFEFA736A8043B009FC5D24EF890EDA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_m3B275CB579B9677C77EA61A57E694B097BF94EA5_gshared (RuntimeArray* __this, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_5 = V_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548_m1792CBBB7CB4E0349BB8934A9DE43579480A32C1_gshared (RuntimeArray* __this, RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 L_5 = V_2;
		RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RuntimeLabel_tD233E2C3F1E1A1877FFE3E9DFB3A69C57D40A548> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m6888F664F26CF829368E79565702880BCDA6747E_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int8_t L_5 = V_2;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SByte_Equals_m2436A58AA51169044BB6FAB4F3924C06037C34EF((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSByteEnum_t0782AA0EFC5D1042A39675F37D7DD7C098781DD9_mB11897F84C48269D04127C4C897019B55294CB28_gshared (RuntimeArray* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int8_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int8_t L_5 = V_2;
		int8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<int8_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_m06A548E3BEE775ED9A328D93715329829B89573A_gshared (RuntimeArray* __this, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_5 = V_2;
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mD1FDC4506669DAF01BF71E6CECF4A6E5BDEEF31A_gshared (RuntimeArray* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_5 = V_2;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scale_Equals_mBC77FF15A4E956C17CECA719B2BF64C0F38B24FA((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mD977C59F62D51E2530FD56AA6647E25040B620B7_gshared (RuntimeArray* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5 = V_2;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11_mAAE9A55EFD8EDCB85AC806086A338CCC04B47498_gshared (RuntimeArray* __this, SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 L_5 = V_2;
		SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SceneEventMetric_tA698F44A9A76CFD517DAFC17B82BC424973E3D11> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_m9CA071BE298E2F86C3EB48AC82DBF4F8B7227F45_gshared (RuntimeArray* __this, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_5 = V_2;
		SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_m6121539D22A6148DEB36407BDC3A9EC5C3D706F5_gshared (RuntimeArray* __this, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_5 = V_2;
		SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_m9B47102F411355533C7190D8B4DA0111554DE970_gshared (RuntimeArray* __this, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335 L_5 = V_2;
		SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF_m2BB8AA35C749A5C4BA8FBB10F127A2648AE9C3AC_gshared (RuntimeArray* __this, ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF L_5 = V_2;
		ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ServerLogEvent_tC74D1D7C544E4874605F582EE3D3F9913AEBFDCF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_m69B4D908F8A3DD96DAA76CCEC7ED223DC2D85CA4_gshared (RuntimeArray* __this, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_5 = V_2;
		ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mD83FDC9A09181346958F7358855E31DC1FA124B5_gshared (RuntimeArray* __this, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_5 = V_2;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = ShaderTagId_Equals_m02826F7AFC63AA3AE5DB14F7A891F8F173FD9A33((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4_m709E507AC006538F1EC4017C349788205C8E17E1_gshared (RuntimeArray* __this, ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_5 = V_2;
		ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShaderVariablesProbeVolumes_t93D502CF0A3275CEBA1EDF0E6DB84816618662D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20_m425CE0600A425E2E8AC80D8A78156E829FA94B0F_gshared (RuntimeArray* __this, ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 L_5 = V_2;
		ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShadowSliceData_t1BCFEDC63BECA994949FE1F4245CEE930EE69E20> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m384621DFFAC2C672E33EB1CEB91541B6BB9B1544_gshared (RuntimeArray* __this, float ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float L_5 = V_2;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_m027FFA501ABC101495A75CD87B87707E26F129BF_gshared (RuntimeArray* __this, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 L_5 = V_2;
		SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3_m3A0EADA21938C9946536F4F736698200DEA44A30_gshared (RuntimeArray* __this, SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 L_5 = V_2;
		SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortingLayer_tB4F4D4E2CE652DB0881CDAB9E329DE9833C2B9C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_m8F6278AA19596DE397575149851162F2D4AD3297_gshared (RuntimeArray* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_5 = V_2;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_m8FE4754F64AE523C972D90EC929C5838C0F0B504_gshared (RuntimeArray* __this, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_5 = V_2;
		SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlBinary_Equals_m238970418BF4DD9F9086E451AE877664DC60C724((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_m89890DE7917F9675E3E337C632393FB15B257B9F_gshared (RuntimeArray* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = V_2;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlBoolean_Equals_m561B9537FA9804DB2EAF73AC786AFA658C83E2D3((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_m2AB5E86C176342F5E22FC2EA53A3E80C07360B12_gshared (RuntimeArray* __this, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_5 = V_2;
		SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlByte_Equals_mB4A0F47A740D93049A4B9FAE79CE2BB82B576006((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_m70E3D97BF58F5E8A35E7ECB27D73F7391452103A_gshared (RuntimeArray* __this, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_5 = V_2;
		SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlDateTime_Equals_m9401BFF901122AAD43042D8F4D54DFA26C0D6634((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_m0C44FE0790E6EF7CABC499E6EA6223E1BA4B4796_gshared (RuntimeArray* __this, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = V_2;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlDecimal_Equals_mEE75EC213CFD059F31273138FAF5F16B03AD63D1((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_m716CBECBF95E3A8C98B5E5D10A759C91E64AF4D8_gshared (RuntimeArray* __this, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = V_2;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlDouble_Equals_m8FEF106DFF53DC046CA65ECEDED37077ECF188D6((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_m9594CDF8EDBDA1DAFEC93C14A4887A9FAFAA4C6C_gshared (RuntimeArray* __this, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = V_2;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlGuid_Equals_mD5EE347E7EF1EEB88DFCF35284F116506DBE8DD8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_m5AD9442C85725759FC3AFAA7DAAB8E97622E902E_gshared (RuntimeArray* __this, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = V_2;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlInt16_Equals_m335E7011F568068C141BA839D38B2534F6A8B3CF((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_m77AA797FD5BB58F24146E48F96B921A9163BF124_gshared (RuntimeArray* __this, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = V_2;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlInt32_Equals_m7D89FC6A3D733052B28E202EB4C5FC7D0E6B808E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_m99BAA0B58990901E97BBACE5DCF65ABE41C00658_gshared (RuntimeArray* __this, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = V_2;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlInt64_Equals_m2AC85D8BB3CF583B13C8B3915A30CB3F09553FC4((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_m1C932C41C41FBEE4DF192C74B652F8A4932168A1_gshared (RuntimeArray* __this, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = V_2;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlMoney_Equals_mA70EFA899CB137218CC72CA4A2B5DEF24DCD2FD5((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_mAE37174B1F34DC627B9D61F7085EC805124AE6CD_gshared (RuntimeArray* __this, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = V_2;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlSingle_Equals_m8EE5074BA8FE7BA43B07014FB2EE08B29BD12E8B((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_mF63C65E690E81D01FDD91E6CABD95DE2954CDD6D_gshared (RuntimeArray* __this, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_5 = V_2;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SqlString_Equals_mED3A10DBF394BE1410C0E780D44E96249FDD9D5D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mE626D67E03E8036001AFAC8CF580AEB53460CB61_gshared (RuntimeArray* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_5 = V_2;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = StylePropertyName_Equals_m189314376AD8AD19270E89E0402E6A378DAD0F56((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_m06272F4F5CCE419AB62C3088787FDA80FA7790D8_gshared (RuntimeArray* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_5 = V_2;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_m91312439735C23B922A9511D9E15F636C2BE7179_gshared (RuntimeArray* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_5 = V_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_m29F598A250DA2ABF12E1D54FF8C69E7FF571D525_gshared (RuntimeArray* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_2;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5_mFD950C3401BA2100CE9310CA2C4A432D2CDC6002_gshared (RuntimeArray* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_5 = V_2;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D_m60B3C2604B1EAD3EF5BC579AC36BD600818FFD8F_gshared (RuntimeArray* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = V_2;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_mF8C1CD04B51F95363622B1410675FEC3BD9098E3_gshared (RuntimeArray* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_5 = V_2;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_m9D3F6351B0375268C8C8B28C3D98697F8C264F4B_gshared (RuntimeArray* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_5 = V_2;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSubstring_t2E16755269E6716C22074D6BC0A9099915E67849_m0BEEA2DA092AF9EF2F39AA155748FCCA6B86C61F_gshared (RuntimeArray* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_5 = V_2;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_m8CC751DA8B03A0346602A18DA73B910D16B97ED8_gshared (RuntimeArray* __this, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_5 = V_2;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_m9A08A1CF00F6246E42697995A011601D3EB5E15B_gshared (RuntimeArray* __this, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_5 = V_2;
		TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3_m9473A8EA639C83B326CDACDC45CA6DC7DF38ED13_gshared (RuntimeArray* __this, TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_5 = V_2;
		TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_m0138AD98077155074B2F322F8D2993ACA8ACF0F7_gshared (RuntimeArray* __this, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_5 = V_2;
		TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_m7FD69BF649F5E3E25036B7729A9BF046D741918A_gshared (RuntimeArray* __this, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_5 = V_2;
		TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4_mE5A10DEA5C1535AFCF7E110F4055EA340665BCBE_gshared (RuntimeArray* __this, TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_5 = V_2;
		TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_PageInfo_t062E56948480FAB066C168E14DC79CC83CC369B4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_mC6BFF830E9C2AABF1FC7664290F2C6309344C7C5_gshared (RuntimeArray* __this, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_5 = V_2;
		TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09_mBD4C419193E8A9849E13785D2871753D7D82916F_gshared (RuntimeArray* __this, TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_5 = V_2;
		TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_m6800D63A169F10A3650E14FBBC44E7604F8CBB0A_gshared (RuntimeArray* __this, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_5 = V_2;
		TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698_mD69844274195F871BCE9BD046019A2ACC3C661A6_gshared (RuntimeArray* __this, TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_5 = V_2;
		TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextProcessingElement_tDCD1EAF9D54829E796F4F9726D63B205344C7698> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mF810E10523C36F7E1496B6CE7B3F879790BBCCC7_gshared (RuntimeArray* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_5 = V_2;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextShadow_Equals_m0BC39E39C12D4D49BC554184C02CC78B417289BE((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09_m8FDEBCE69B398F24EF59A89D4D0C9DD2DA045FAB_gshared (RuntimeArray* __this, TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_5 = V_2;
		TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureHandle_t87D7D063E5E22E38632961AB2B6F89978942BE09> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_m9188C5B5F203CAD7DBDAAF220D02CEAD737B07B8_gshared (RuntimeArray* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_5 = V_2;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TextureId_Equals_m455DF7673CD85DCDDAA9AAC0F888DA8F8488081D((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m5CD07CFAE0850990DDECB6FB063AD68A11EB8CCA_gshared (RuntimeArray* __this, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_5 = V_2;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m3BDCB7D50FEAF5FA3C4C8AC5D875BCAEE35D288A_gshared (RuntimeArray* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = V_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeSpan_Equals_mFE37205C5F1295DD799B0EE207142BFA4222D47A((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m5EA3EC0A9385BEFADDF7DD3CB465ECC1E4862502_gshared (RuntimeArray* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_5 = V_2;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TimeValue_Equals_mA581A2F3D44993E0C780E6BC36C355875CDAB513((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTouch_t03E51455ED508492B3F278903A0114FA0E87B417_m11E208F75A476AAFB06F3C369EE1EC79EB6E01A5_gshared (RuntimeArray* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = V_2;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Touch_t03E51455ED508492B3F278903A0114FA0E87B417> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTouch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_m15EBFB2C68F2D3D7E748D939B52E13397DB2C136_gshared (RuntimeArray* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_5 = V_2;
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Touch_Equals_mA91A1937A740538D62AF4998D332AAB464B47E1E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m1E4E1EF9833EF13EEE3BF2C53B18A93DCD0DA90B_gshared (RuntimeArray* __this, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_5 = V_2;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m1749C6A8E9617BFA4AE432499D450833E6EBDD79_gshared (RuntimeArray* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_5 = V_2;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = TransformOrigin_Equals_m1BB998DC4BF023074E997BDF9FFBB477B8D8C542((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m73198A0F88851B6BD6D6914B658DFB429DF24242_gshared (RuntimeArray* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_5 = V_2;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Translate_Equals_mEE5D86BA4C5C8C65EC0F226E081F49BA891792E1((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_m6BEEF942CA36890E33BE3A630F67872D8E98A42E_gshared (RuntimeArray* __this, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_5 = V_2;
		TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_mDEA819EBAA80191039CCE5CAA96A6EBF78C1A03C_gshared (RuntimeArray* __this, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_5 = V_2;
		TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD_m528F98A01CE3509FCC74F63F3F3E0286289F70A2_gshared (RuntimeArray* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_5 = V_2;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC_m5733E49B329379ABA39C55E0734CE71BFF84366E_gshared (RuntimeArray* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_5 = V_2;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_m8B9BCCADC4F117F73732600D3596E9D3824B1A18_gshared (RuntimeArray* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5 = V_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7B91F0DA35979BA791D7541B042D190E7C4C7E26_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint16_t L_5 = V_2;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m63F25D0841F81317567605F376A5359DE3A1D17B_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint16_t L_5 = V_2;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBAA9FACABB5696A8592793BEF567BF723A951DF6_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_5 = V_2;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m650510CBAF6E623587E4123FBF0486A182BE6B9C_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint32_t L_5 = V_2;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m535A0795211CEE4B52530E18675AB25798181FA8_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		uint64_t L_5 = V_2;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_m793084168D46E9E97D008CF823081233FCA1822E_gshared (RuntimeArray* __this, UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 L_5 = V_2;
		UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m0BEA41E6B2E1143B19CC61F985592EF3F82624BB_gshared (RuntimeArray* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_5 = V_2;
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_m910D5D955FE33692742A1D662E12D908F4C2FF9D_gshared (RuntimeArray* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_5 = V_2;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m20F9EB8336058847F4D5D628E9B12ADE98DCB4DC_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m5C41EA5A7D3D49A268429828AB1BBFADD8117BD1_gshared (RuntimeArray* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA465430D4F835712943FC6D4E4FA5A9D4B14E054_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mDF27B24DCDDDFB285EA6DCA9F48EAE69D29751B1_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m92BB9340A6AA35C875E443F0EDBB712376A5AA51_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_m3D4C82E85B739368FF10762B57C2B8448125A5C2_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = V_2;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m1617A0392F509BECBB069EBDE0AAC855C1EDE8B1_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = V_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_m274CB3E86E12E7D35746F35321928E06E854D66C_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = V_2;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_mEF4A69B33CF7E531EDD094C0E615EDC90F73BEC2_gshared (RuntimeArray* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_5 = V_2;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_mBBE077415F440DB7C2E1D1B409B37A7AB25DBD40_gshared (RuntimeArray* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_5 = V_2;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m2E1E8627602B20E181F8C514B35FB0E5683BA97B_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordInfo_tA466206097891A5A2590896EE164AFC406EB060D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = V_2;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_mED89F4F36C87E74070E414A25512515312DAADB2_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = V_2;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_m3D835D3DD72FE198DFA6D1CE83663FE127A893BE_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = V_2;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m23B381AEAF04BBFBF01032208C77E6401559E2FC_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = V_2;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_m2961396C128F029A2B4E2E312D1FECB870D430D7_gshared (RuntimeArray* __this, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_5 = V_2;
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m960287BCD8D79DA03B0D7E36B8433898E999D2E6_gshared (RuntimeArray* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = V_2;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_mA31B0B389E3EF3C37961F25ABA6C7FAD0E95590D_gshared (RuntimeArray* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_5 = V_2;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m8717EA3B0793F330F88B207AB6347F9671A358E7_gshared (RuntimeArray* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_5 = V_2;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIl2CppFullySharedGenericAny_m148347D7A91B363E18C6B2BCDCDB9CE43122A494_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_8 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	memset(V_2, 0, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_t1E57CAFF53DFD82B91CA25DBB4095EF4F5FC124B);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_8);
		bool L_11;
		L_11 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_10, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), L_9);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0055:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_m2C34F881A9A7823C73C2B67A7A6F301D33C000A2_gshared (RuntimeArray* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = V_2;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mDE4557A666299270978EE28C778A3577835DA41F_gshared (RuntimeArray* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = V_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mF1D05EC5A30C32FC7DB8CD1BD9347DE823367796_gshared (RuntimeArray* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m922EA7804FDAE46AFEC07F1592735EDEF2B8AC1B_gshared (RuntimeArray* __this, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_5 = V_2;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisint4_tBA77D4945786DE82C3A487B33955EA1004996052_m38298C6D26183AB392DF83D8D199C46E4E4CB560_gshared (RuntimeArray* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = V_2;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_m26BF72AC098CA35EDFF5860B08AD1BDA253D2770_gshared (RuntimeArray* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_5 = V_2;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m950DD71BD842473E2E166407A46B54469BB8AE4A_gshared (RuntimeArray* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_5 = V_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_m74DE6D3EC529BA8667C3C0799426EEC49455D1C6_gshared (RuntimeArray* __this, ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA L_5 = V_2;
		ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_mCC0F86ACA53FCE5D70998F7BAB58444B630614AD_gshared (RuntimeArray* __this, WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 L_5 = V_2;
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A_mEA161671F148F8C8D46D3592B3C3794875B5FF26_gshared (RuntimeArray* __this, AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_5 = V_2;
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_m3511B6709A1B1D8489DAD954FC5E606D6978735C_gshared (RuntimeArray* __this, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_5 = V_2;
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m566259B46414300D76A240B9D627CA89321CF8D1_gshared (RuntimeArray* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = V_2;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128_m1E0E798CF521C723863F7EB1383AAF7C88D48B41_gshared (RuntimeArray* __this, BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 L_5 = V_2;
		BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m87A4262FAF9CBCDB5A450169BE94507E9E89132A_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = V_2;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBaselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1_mB437F3B014BA01096E9F90E27ED8ED6066189BE8_gshared (RuntimeArray* __this, Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 L_5 = V_2;
		Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_mD04CF9827DD49B0505911950DF4902F733E1E09B_gshared (RuntimeArray* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_5 = V_2;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Page_t04FE552A388BF55B12C8868E19589136957E00A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB_m96E67827A57504D9A80C98C481789366E79AF8E9_gshared (RuntimeArray* __this, CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_5 = V_2;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInstruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B_mFB2B5576F9DA29722E97540D931C9F162962776A_gshared (RuntimeArray* __this, Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B L_5 = V_2;
		Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3_m3383ABA2E0240CCCC967C3AB2C36D6ABBABA66B6_gshared (RuntimeArray* __this, CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 L_5 = V_2;
		CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2_mB98E19479C3EED9D749F288D1165CF328B5ADBC0_gshared (RuntimeArray* __this, Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 L_5 = V_2;
		Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOrbit_tFB7313130D10593990AD5CA9C685500758DB866D_m2E0BFBADA597A8227E4AF533ED881252BC40FC17_gshared (RuntimeArray* __this, Orbit_tFB7313130D10593990AD5CA9C685500758DB866D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Orbit_tFB7313130D10593990AD5CA9C685500758DB866D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Orbit_tFB7313130D10593990AD5CA9C685500758DB866D L_5 = V_2;
		Orbit_tFB7313130D10593990AD5CA9C685500758DB866D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Orbit_tFB7313130D10593990AD5CA9C685500758DB866D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWaypoint_tF0147D859449A4A396E398063D02E76A7214066D_m6B2B9A2705D3082951B988E750C364E89D9A7073_gshared (RuntimeArray* __this, Waypoint_tF0147D859449A4A396E398063D02E76A7214066D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Waypoint_tF0147D859449A4A396E398063D02E76A7214066D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Waypoint_tF0147D859449A4A396E398063D02E76A7214066D L_5 = V_2;
		Waypoint_tF0147D859449A4A396E398063D02E76A7214066D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Waypoint_tF0147D859449A4A396E398063D02E76A7214066D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWaypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27_m94BF19E3D3FD0CC4712CF6003C6634E228BBE0DD_gshared (RuntimeArray* __this, Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 L_5 = V_2;
		Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHashPair_t176F7624706A73500F3AB84D61111316D45ECCEC_mF0E161B4402A9FB856B933C1E98703BE89FBB421_gshared (RuntimeArray* __this, HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC L_5 = V_2;
		HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInstruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C_m32F1342EE3BAFF25CEA1E30532B137A365690417_gshared (RuntimeArray* __this, Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C L_5 = V_2;
		Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4_m199B62505D61D0AE17362936077FEF1FE314443B_gshared (RuntimeArray* __this, ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 L_5 = V_2;
		ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTarget_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641_m8B190B9C13FC2AF2F748557D55BE3A7D15CFBF41_gshared (RuntimeArray* __this, Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 L_5 = V_2;
		Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1_m62D13B1F43A844F64BDA6240682846E2EC2891B4_gshared (RuntimeArray* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_5 = V_2;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisIntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674_mF16AA5B3ED5754A3C0D66A9C231417971114057B_gshared (RuntimeArray* __this, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_5 = V_2;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPoint_Equals_m6E23677EC9306F8D66DD717865D49A3E9A9BAB5E((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m9BA4263923DF5A7B734B810ADE4A28006B36A29A_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = V_2;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C_m5CDDC3284E4102F6E7123CFC921E5A718992629A_gshared (RuntimeArray* __this, PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C L_5 = V_2;
		PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_mED16007C4FB1320ED269D1AE0537C51199C777D8_gshared (RuntimeArray* __this, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_5 = V_2;
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_m8F603738C338ED2497EF13C28DD5AA5062884B6F_gshared (RuntimeArray* __this, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_5 = V_2;
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_mB79AEFB154AF02DC67EF229F531610E91F0C6248_gshared (RuntimeArray* __this, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_5 = V_2;
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D_m93FE3CB2E3801AFBEF413AB4DC34185183C3CAEE_gshared (RuntimeArray* __this, DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_5 = V_2;
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_m04833323279958572707DC7CDA818257CE5551C7_gshared (RuntimeArray* __this, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_5 = V_2;
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7_mAED8F0F7E800D070A36A1A0C9CC0C856C283A3E9_gshared (RuntimeArray* __this, TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 L_5 = V_2;
		TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692_m3B5EDB954B7939726D4C219C67D4C187F2FF1E58_gshared (RuntimeArray* __this, TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 L_5 = V_2;
		TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializedStat_t69FB608589D2800069C126A46296A8D8BF420423_mE0CA20013076A1028ABD49F9805C00A85C12C515_gshared (RuntimeArray* __this, SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 L_5 = V_2;
		SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_mD59D898DF3B28227489AF60DABB7F5CE9216077E_gshared (RuntimeArray* __this, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_5 = V_2;
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m7C6426374B3C008C1E067001DDC98B0FBB122647_gshared (RuntimeArray* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = V_2;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_m33BE29B43AFB03A38A8C0D646769D821A18DE2B5_gshared (RuntimeArray* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_5 = V_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_m3E23FC1F8DFF47F3A588B2D08575693C6A1A62BD_gshared (RuntimeArray* __this, DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_5 = V_2;
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_m6A94C8D4EF8BCF976383B4E76643F36235C18964_gshared (RuntimeArray* __this, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_5 = V_2;
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_mF4D881822E8792B2A8B3FA17F34AB22E8FD1FEBA_gshared (RuntimeArray* __this, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_5 = V_2;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7_m226A047EF1FFDD06E28E0CF93CA67FA0EE3E7C9F_gshared (RuntimeArray* __this, HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_5 = V_2;
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_mF528DEB0E09D14D34865CB812890A9174D405E4F_gshared (RuntimeArray* __this, HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_5 = V_2;
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F_m4C67C92A11C37ACD4A0C8D00A0BB0084213FC447_gshared (RuntimeArray* __this, HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_5 = V_2;
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F_mA811443F277327A7AEE04C3C92FFDBC27672E984_gshared (RuntimeArray* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_5 = V_2;
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0_m7F94A297B144C4E7E226C8B9015D8E8F5F4AD3A3_gshared (RuntimeArray* __this, Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_5 = V_2;
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3_m3EF6E70C3791F22264CD8FC894262163F936DE4B_gshared (RuntimeArray* __this, Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_5 = V_2;
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042_m6612CB9C97E73DB83F332415270395E4FCF42C6A_gshared (RuntimeArray* __this, Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_5 = V_2;
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7_m9DE299C4DA2227780CFECE32810C9603A0B30147_gshared (RuntimeArray* __this, Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_5 = V_2;
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_m0733DACD9EABC8499DDC8B5CDE821D82F563F9E7_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = V_2;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisItem_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2_m3F2FE646D14E9A633271687ADCA288B64721A35C_gshared (RuntimeArray* __this, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_5 = V_2;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m309868010C42DBE6AC0C961853DADA5B45EFFA29_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = V_2;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_m18CFE4FF6C70D0B018982C8EBD757591D36AB5AC_gshared (RuntimeArray* __this, BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_5 = V_2;
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_m3440185E45E3EC0311C7AD05B83D21A4438DA56B_gshared (RuntimeArray* __this, BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_5 = V_2;
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_m96111367AFDF684DBEBA2A6E97EFFBB9E3AED99D_gshared (RuntimeArray* __this, ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_5 = V_2;
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_m33EA45D496BF140E2FB4DCFC62092854FC0D9258_gshared (RuntimeArray* __this, ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_5 = V_2;
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_m4F794AF957F69E463974072E17880B7E58A29835_gshared (RuntimeArray* __this, WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_5 = V_2;
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_m0D812079DE94B6DB052C1515C5865F4139244931_gshared (RuntimeArray* __this, WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_5 = V_2;
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_m6B557986E0AE994B160B538F0B3D7E987FC72731_gshared (RuntimeArray* __this, Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_5 = V_2;
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_m7233858EC1C94951462823A12F55BFD317CB0D29_gshared (RuntimeArray* __this, ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_5 = V_2;
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_m1DC3EBF7ECD608B9A3656009BE97C4EF1DAF56C0_gshared (RuntimeArray* __this, ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_5 = V_2;
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_m8258540708DE74A59C5DB694FA450579A1013EA3_gshared (RuntimeArray* __this, PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_5 = V_2;
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_m574950E065BC47FF31A61612B4960F74A15EC659_gshared (RuntimeArray* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_5 = V_2;
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_mC00FBBDE4577DEC2AC74067FEE28DC1AB22C8B85_gshared (RuntimeArray* __this, ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_5 = V_2;
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_mC5C7397312BC37D9474688BF4CA209C9735153A5_gshared (RuntimeArray* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_5 = V_2;
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = DeviceRequirement_Equals_m8B21D6C5F042071FE736CC9D3F360265AEE9F6D8((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_mA5E6764B04967F724387A971FF1E6D6D48F98323_gshared (RuntimeArray* __this, SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_5 = V_2;
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0_mC7C661B3E624138D67907432871633D06D739510_gshared (RuntimeArray* __this, ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_5 = V_2;
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_m24436C934F781DD05D343132DA4B6D9C5DC2E48E_gshared (RuntimeArray* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_5 = V_2;
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_m556349D6338BEDB0D739F75E1377943050AA426D_gshared (RuntimeArray* __this, AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_5 = V_2;
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_mFEE183079713B45E41FB0A8AAA3EE60B93D32795_gshared (RuntimeArray* __this, StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_5 = V_2;
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_m3D22F7C04771271145D489BA66BBF1167A5E1D5B_gshared (RuntimeArray* __this, StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_5 = V_2;
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisStateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_m7F1509B76E7D0736386B0EC807EF1B7DA9413DA8_gshared (RuntimeArray* __this, StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_5 = V_2;
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_mFE392B8BEFF7B152C552FF69FFF47E3C7029B240_gshared (RuntimeArray* __this, RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_5 = V_2;
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_m09595941E8E7CAB612334B884AE21F002219913C_gshared (RuntimeArray* __this, RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_5 = V_2;
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRecord_tF7FF07DC502355356B48CE78337FB16B196E2EE0_m99EEAD78C294EFDE138460258661E6460A0ABED8_gshared (RuntimeArray* __this, Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_5 = V_2;
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Record_Equals_mEAE03AEEBA5DD28BBFD29288ABD97ECA570E1745((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_mFFD40F109C718D72B73EDDCBC5B2AEB167E1B6DB_gshared (RuntimeArray* __this, InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_5 = V_2;
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_m1A5822CA3FB341E8105B460FF2C218A90E9F2A63_gshared (RuntimeArray* __this, OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_5 = V_2;
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_m7239FF286B7DF5C437A174A0D5A35985D506F244_gshared (RuntimeArray* __this, UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_5 = V_2;
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m4F34CD80DF2F6229819DD5915DAF4272D112744E_gshared (RuntimeArray* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_5 = V_2;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = JsonValue_Equals_m4A516862648D99564D5FA05FC99DF63A275D2996((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBinding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE_m3DB909ABB3584EA9F10B05149D61DB621C7C022C_gshared (RuntimeArray* __this, Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE L_5 = V_2;
		Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m8A3CD1D4AF9BC199217D79D0A352758432137C28_gshared (RuntimeArray* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_5 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_m160285773320778917493FFFA1CA9533E55538C0_gshared (RuntimeArray* __this, LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_5 = V_2;
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C_m22C8C55CC1EE1E7FABBD06A860E57B0A4AFF9806_gshared (RuntimeArray* __this, BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_5 = V_2;
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisMessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928_m14A26A1C89F02659DEC1DAD34E8FDEBEFE876DCC_gshared (RuntimeArray* __this, MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 L_5 = V_2;
		MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6_m8015963663D4005E552CE959150C241A96F362E5_gshared (RuntimeArray* __this, ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 L_5 = V_2;
		ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47_mA3057FF48E9B0B4CA6462BEAE929A73963DBF31E_gshared (RuntimeArray* __this, SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 L_5 = V_2;
		SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_mA88900AA85AABF0AF3852A7308E162D7455C3909_gshared (RuntimeArray* __this, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_5 = V_2;
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9EBA8A77EE497BEEE17DF3F092CCD9EFFC9F01D3_gshared (RuntimeArray* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_5 = V_2;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_mFC633113D7C2ABA09CA028E23EE5544FE00266C1_gshared (RuntimeArray* __this, AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_5 = V_2;
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m0A8DEB8E74582375863DCD6AA373A7CD4C160046_gshared (RuntimeArray* __this, AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_5 = V_2;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_mAC57156B2C462066B0D3594B4CB6A0896AD2965F_gshared (RuntimeArray* __this, ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 L_5 = V_2;
		ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04_m157958C2FCEE7A5F94F3B2F3D276A40EBA113A37_gshared (RuntimeArray* __this, AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 L_5 = V_2;
		AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709_mDF224B0B955E8EE777B2C5D2E5A0D99E88086C8E_gshared (RuntimeArray* __this, ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 L_5 = V_2;
		ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58_mEDD2818E652D1B6E9B50A8C26E64B822E127F92C_gshared (RuntimeArray* __this, TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 L_5 = V_2;
		TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisConnection_t57B7A8186502E304AD87933A0FFD76FDF0972D70_mEF799D2339EE2DD48A96F59DDFD79A9A7202F4A1_gshared (RuntimeArray* __this, Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 L_5 = V_2;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Connection_Equals_m18298C6FEC449DB9A270A7B275A50EA8403E9958((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_m861E827D1A6B9FA09536FDE44B8696D43A48E2F5_gshared (RuntimeArray* __this, PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E L_5 = V_2;
		PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_m975D5D2AC151138A41F51731923F4EB599C45C74_gshared (RuntimeArray* __this, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_5 = V_2;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_mF63C95A4A0CA9B9A9197B1A2E7B1AD77A62FE8BA_gshared (RuntimeArray* __this, TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 L_5 = V_2;
		TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisOnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_mFE278AD036C845D7A2CC38716B8969BCC5C20A1C_gshared (RuntimeArray* __this, OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_5 = V_2;
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_m20BA41FD86D7C91836A365F0B5AE1904B47C9377_gshared (RuntimeArray* __this, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_5 = V_2;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisKitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD_m37986C6A2C75345D1E4F633A610B16AAA423E099_gshared (RuntimeArray* __this, KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD L_5 = V_2;
		KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_m461E1BB6B1CE950BBD41A817447D455802C1468C_gshared (RuntimeArray* __this, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_5 = V_2;
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_m1DA8E11F107A9878CA987E64391FAFBA35EF6DA8_gshared (RuntimeArray* __this, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_5 = V_2;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9_mD2387B0F193A58611A7F243EAFD8B01EA33DFB08_gshared (RuntimeArray* __this, ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_5 = V_2;
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B_m03928A365AE5789B268E419B10ED18396EC1EAD8_gshared (RuntimeArray* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_5 = V_2;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970_m8CDBD29848E3295CA0BCF87B8CA41C4311A64921_gshared (RuntimeArray* __this, CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_5 = V_2;
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_m020E6FE5DACA1715ED04CE6A18F398B29D51DDC6_gshared (RuntimeArray* __this, PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_5 = V_2;
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_m777C471FB6740477702DFF9335D7D8B7EDA6A5BD_gshared (RuntimeArray* __this, SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_5 = V_2;
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_m35400A53846975BA6D3CD8316F8BD549CAEB7DB5_gshared (RuntimeArray* __this, SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_5 = V_2;
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_m90FF145AD1DE35500649F7B36692A41469433BF6_gshared (RuntimeArray* __this, SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_5 = V_2;
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_m2257DA746FFB5DB087D62C38EED683166ED102EA_gshared (RuntimeArray* __this, SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_5 = V_2;
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_mBA6821F6823F47473B7E4DF5F7F9596771B1F83B_gshared (RuntimeArray* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_5 = V_2;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisInternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A_m3F6498CC6A68C4EF320900280D587D1563FFB405_gshared (RuntimeArray* __this, InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A L_5 = V_2;
		InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_m66122ACD7047E986A7A0C661C8A5AC010088DC69_gshared (RuntimeArray* __this, CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_5 = V_2;
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_mA8DE9FFBEE135C2B53FC647EDDF729D945CCBDC5_gshared (RuntimeArray* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_mC9B359338E5874BF54554F4B3B4B12EF3BDF6490_gshared (RuntimeArray* __this, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_5 = V_2;
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mC2B5E32DECA0460E52802764A8D18C45D698B4B0_gshared (RuntimeArray* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = V_2;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_m0C7C357A371724EC3FC0A252E240922B9243BE15_gshared (RuntimeArray* __this, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_5 = V_2;
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_m518370326F939D6409F87525346A554EE1B0CED0_gshared (RuntimeArray* __this, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_5 = V_2;
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisCompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_m3136813B61727F6D7A59B9D92E67A2B1C684777D_gshared (RuntimeArray* __this, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_5 = V_2;
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_m0DE44108FCF01CE69B9C4879BB080EB82030FA75_gshared (RuntimeArray* __this, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_5 = V_2;
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_mAEB3A562E7FA2F683B85D94542BC8CFB1D5978A8_gshared (RuntimeArray* __this, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_5 = V_2;
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisHitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_mC23D88F8F42AE31B6B2F0AB15832A90C44BCA653_gshared (RuntimeArray* __this, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_5 = V_2;
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_m7FD9560068FE644ADC170F505600800AFF3CB44B_gshared (RuntimeArray* __this, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_5 = V_2;
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m99985507EE97E5FC33EAB71DA69C7628C67A3318_gshared (RuntimeArray* __this, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_5 = V_2;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEdge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_m3E4602960428952806FB8C0E1C06F3D5FD100F7C_gshared (RuntimeArray* __this, Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB L_5 = V_2;
		Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B_m975ED0D21521CADBD0C61B1283AF9E5381A5B7F6_gshared (RuntimeArray* __this, WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_5 = V_2;
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_m3E22B6F54D50CB0FE0E5DBA263223BF528EC0710_gshared (RuntimeArray* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = V_2;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_m6FF24D342972623D7E0B1D20AF4E93BDCD538204_gshared (RuntimeArray* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = V_2;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_mD52BCEBF3F1AC5F946EB8B7EE5B52181C95A9AB5_gshared (RuntimeArray* __this, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_5 = V_2;
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574_m784C6B28849A319440678F5E7015C1EB981CE13C_gshared (RuntimeArray* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_5 = V_2;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_m040C5C19D46CBF71C8BDB1C203A9C9486D2B1F30_gshared (RuntimeArray* __this, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_5 = V_2;
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722_m6341C4E3CC7574738AD89B554EFB23D541F2AAF6_gshared (RuntimeArray* __this, UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_5 = V_2;
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mC90CD1F8706FD427B03EFBC41CE8F5BD48D56A1A_gshared (RuntimeArray* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_5 = V_2;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_mB0BBD2C7B7E6CD6D69576799D416CDA9C4E5BAF2_gshared (RuntimeArray* __this, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_5 = V_2;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_mFAD28BFE2AD56C1E6FCFCF0187610297D8E3F920_gshared (RuntimeArray* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_5 = V_2;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_m8E55CDA5A8BE4BCFC90FA6F5EA358850B0BA2771_gshared (RuntimeArray* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_5 = V_2;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_m768B7A409488264884FEA3EA8E31606DADE9B746_gshared (RuntimeArray* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_5 = V_2;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m7BE9F190E5D602FAFD403054C58AAE0ED90455A5_gshared (RuntimeArray* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_5 = V_2;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_m0892B690E6BBFD53246814212DBCEA87F0FAFC33_gshared (RuntimeArray* __this, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C L_5 = V_2;
		SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_mAFD5E0211C066F0AC321A05653B6D17C1BDB5886_gshared (RuntimeArray* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_5 = V_2;
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRaycastHitData_t5EAB266730389AB27715962670C2512800451841_m949B5CFDEF4626677C78F4FFF34B50D5B9C8E96E_gshared (RuntimeArray* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitData_t5EAB266730389AB27715962670C2512800451841 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_5 = V_2;
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHitData_t5EAB266730389AB27715962670C2512800451841> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisEntry_tB8765CA56422E2C92887314844384843688DCB9F_m4E1E9145B62AB8E4A05D546D9F2192D0A1906787_gshared (RuntimeArray* __this, Entry_tB8765CA56422E2C92887314844384843688DCB9F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Entry_tB8765CA56422E2C92887314844384843688DCB9F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		Entry_tB8765CA56422E2C92887314844384843688DCB9F L_5 = V_2;
		Entry_tB8765CA56422E2C92887314844384843688DCB9F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_tB8765CA56422E2C92887314844384843688DCB9F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisRepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935_m93AB88C974CA03755A24B0156380DBBCD4A6ACC7_gshared (RuntimeArray* __this, RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 L_5 = V_2;
		RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_mBB2A5A5CD2B38EF5167E5DCCE62990D1E18412D7_gshared (RuntimeArray* __this, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_5 = V_2;
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_m1D4340A72BAA7491BFA23784E94EAAA7B4B7DD21_gshared (RuntimeArray* __this, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_5 = V_2;
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_m0BC3F7767D27252DF37B78508511E814A11A9B4A_gshared (RuntimeArray* __this, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_5 = V_2;
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m3A7228F1D51251AF5BFAD555B43E09B82AEDC54F_gshared (RuntimeArray* __this, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_5 = V_2;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF8C25A229B68FB25A05014778EA4447C30891659_gshared (RuntimeArray* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = V_2;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_mC27F49063E435F916089CF9BD4DC7269654BC5CB_gshared (RuntimeArray* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5 = V_2;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7((&___0_item), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0055:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_mAB7C24A73399BBDE0A4481B59100760DB612AE27_gshared (RuntimeArray* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = V_2;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_m6F123F9108A919C5F9BE7CC5F346250E380F3274_gshared (RuntimeArray* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = V_2;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_mFB9AF0B1B6AB59F821EFD187F242183282AF35FD_gshared (RuntimeArray* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = V_2;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_m07833F98E78D0CD0CBFC4408F8CE79906297F3E6_gshared (RuntimeArray* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = V_2;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m002A34C4B5F89F6C5BCB4443B104F97A695A3296_gshared (RuntimeArray* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = V_2;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_m2AFA68C597EA637DB9E5029C498B383D16DAF84C_gshared (RuntimeArray* __this, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_5 = V_2;
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisNamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_mE302CE2C60DAB298102CA52896208FC85BC7E437_gshared (RuntimeArray* __this, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_5 = V_2;
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisVirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_mCE3CA2FD9D3606F2D6CB4AA2FC7AFB0D7CF824C3_gshared (RuntimeArray* __this, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_5 = V_2;
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisXmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_m1C706013C7AA15AE54E357E2527A95420E444306_gshared (RuntimeArray* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_5 = V_2;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisAttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_m47F617BC00C10EC37171CE346DEEF58F20C0FB75_gshared (RuntimeArray* __this, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_5 = V_2;
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_InternalArray__ICollection_Contains_TisElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_mF6024E6D7B05B60C98CECCF2E48903E76A5250F0_gshared (RuntimeArray* __this, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0055;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_003a;
	}

IL_003a:
	{
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_5 = V_2;
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&___0_item));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_mCF93B00BA4FCDDE6100918451343DB9A0583A0A0_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(__this, ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mD7EB2046512E4A46524A7ED929F1C38A32C408F8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(__this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(__this, ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_2, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(__this, ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_2, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_other;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_x;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_x;
		V_0 = ((*(quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4*)((quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4*)(quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4*)UnBox(L_1, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var))));
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = V_0;
		bool L_3;
		L_3 = quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		float* L_4 = (&__this->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		float* L_8 = (&__this->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		float* L_12 = (&__this->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline(__this, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline(__this, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline(__this, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y_1;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x_1;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y_2;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z_3;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w_4;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_x, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = (&__this->___value_0);
		float L_1 = L_0->___x_0;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = L_2.___value_0;
		float L_4 = L_3.___x_0;
		if ((!(((float)L_1) == ((float)L_4))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_5 = (&__this->___value_0);
		float L_6 = L_5->___y_1;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_7 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = L_7.___value_0;
		float L_9 = L_8.___y_1;
		if ((!(((float)L_6) == ((float)L_9))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = (&__this->___value_0);
		float L_11 = L_10->___z_2;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_12 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = L_12.___value_0;
		float L_14 = L_13.___z_2;
		if ((!(((float)L_11) == ((float)L_14))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_15 = (&__this->___value_0);
		float L_16 = L_15->___w_3;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_17 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18 = L_17.___value_0;
		float L_19 = L_18.___w_3;
		return (bool)((((float)L_16) == ((float)L_19))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
