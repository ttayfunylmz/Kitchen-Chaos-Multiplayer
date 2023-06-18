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

struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_1_t97C6124008260D65F78265F8B3965ACA776F0671;
struct Func_2_t8A65018A43098590B8FE77A424204D524E1CDFAE;
struct Func_2_t2894A0E655128DCA085A62AC7E91AA50E34051FE;
struct Func_2_t768E45AC224B8B0A2FF0AF51561075C9EA671111;
struct Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D;
struct Func_2_tDC72553AEF8707070A5FFB9D46F144F9BE06A9EC;
struct Func_2_tCF2EB71968412F781C874AB88FAFB49525BC76FA;
struct Func_2_t74E67EF682F267BFC373E1C713DA5D46A68F08E4;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_tD3D80A48908E0B8646110C913780E72E2157A541;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
struct UnsafeList_1_t7576474D288A30F1540A43F66481308FA0558594;
struct UnsafeList_1_tE941F153E0D05B0746B266E9F8686EBDA90F1A12;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
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
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
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
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
struct CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21;
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
struct DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE;
struct DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3;
struct DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A;
struct DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct FieldInfo_t;
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27;
struct IInputActionCollection_tCACBB682A8D400B755D43654E7FF9B4F3CECD3FD;
struct IInputStateChangeMonitor_t043FD8736A6F45C06A2FAFFC5BE70A565F999598;
struct INotification_tEF630287442F0A66470493068A5D158E3C2D3C6B;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct KitchenObjectSO_t2A4206F6F4928B06691CB24EFFF19DAA019A02DC;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
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
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct Baselib_RegisteredNetwork_Buffer_t2D0BDFB0FC8B41F70E5AD38C481363BEDC54EB42;
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
struct MessageHandler_t274427DA3D8CD7F490DA359D05918564E2D8CF2F;
struct VersionGetter_tEBCCEFCC0C247D6C445A8F0D060D1A5F3B4FE92F;
struct NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
IL2CPP_EXTERN_C String_t* _stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke;
struct BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
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
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	int32_t ____offset_2;
	int32_t ____count_3;
};
struct BufferedItem_tBB083C3C10DB7BA1B48AF4106080595F672E2E00 
{
	float ___Item_0;
	double ___TimeSent_1;
};
struct ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC 
{
	float ___sum_0;
	int32_t ___count_1;
};
struct EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E 
{
	int64_t ___intervalStart_0;
	int64_t ___intervalEnd_1;
	RuntimeObject* ___item_2;
};
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	RuntimeObject* ___Value_0;
	int32_t ___HashCode_1;
	int32_t ___Next_2;
};
struct Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint8_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	bool ___value_3;
};
struct Entry_tD522C09559070EF861CE8629AC53D945627CD974 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	uint8_t ___value_3;
};
struct Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	Il2CppChar ___value_3;
};
struct Entry_t7D024B3A4DD33F9564AB9F99900543A39F8D6C1F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int16_t ___value_3;
};
struct Entry_tA212E7034D981AC2F7E219C600769EE485919684 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int32_t ___value_3;
};
struct Entry_t56DFE5C32B6C0F59B83A080FD15B9AFB39F27185 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int32_t ___value_3;
};
struct Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int64_t ___value_3;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t532FECF491646E3372F9D145FEC277E0C5089CBC 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	float ___value_3;
};
struct Entry_t1232972772EBD9E3138EC9BDCB25B677AA243239 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	uint32_t ___value_3;
};
struct Entry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	uint64_t ___value_3;
};
struct Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	bool ___value_3;
};
struct Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int32_t ___value_3;
};
struct Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	int32_t ___value_3;
};
struct Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int64_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	bool ___value_3;
};
struct Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	int32_t ___value_3;
};
struct Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	int32_t ___value_3;
};
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	float ___value_3;
};
struct Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	uint32_t ___value_3;
};
struct Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	int32_t ___value_3;
};
struct Entry_tA14C5108B629D2EAB6DDB9646A275143C268DB75 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	int64_t ___value_3;
};
struct Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	uint32_t ___value_3;
};
struct Entry_tDBB209A41727310C443EF0AFAB992280EFCDD0A9 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	bool ___value_3;
};
struct Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t0D1BA21BCA6514AA4CB47B54099EFCA1CF692861 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	uint64_t ___value_3;
};
struct FieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_t8A65018A43098590B8FE77A424204D524E1CDFAE* ___read_2;
	WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* ___write_3;
};
struct FieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_t2894A0E655128DCA085A62AC7E91AA50E34051FE* ___read_2;
	WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* ___write_3;
};
struct FieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_t768E45AC224B8B0A2FF0AF51561075C9EA671111* ___read_2;
	WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* ___write_3;
};
struct FieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___read_2;
	WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* ___write_3;
};
struct FieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_tDC72553AEF8707070A5FFB9D46F144F9BE06A9EC* ___read_2;
	WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* ___write_3;
};
struct FieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_tCF2EB71968412F781C874AB88FAFB49525BC76FA* ___read_2;
	WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* ___write_3;
};
struct FieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4 
{
	String_t* ___name_0;
	String_t* ___ussName_1;
	Func_2_t74E67EF682F267BFC373E1C713DA5D46A68F08E4* ___read_2;
	WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* ___write_3;
};
struct InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 
{
	int32_t ___length_0;
	uint64_t ___firstValue_1;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___additionalValues_2;
};
struct KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 
{
	uint8_t ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	int32_t ___key_0;
	bool ___value_1;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___value_1;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
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
struct StructMultiKey_2_tBE8AC1F77387A29245D48FBA8C8C8E1763344DD5 
{
	RuntimeObject* ___Value1_0;
	RuntimeObject* ___Value2_1;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
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
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	RuntimeObject* ___m_Data_1;
	RuntimeObject* ___m_Children_2;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1_0;
	RuntimeObject* ___Item2_1;
};
struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1_0;
	int32_t ___Item2_1;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
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
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page_1;
	uint16_t ___pageLine_2;
	uint8_t ___bitIndex_3;
	uint8_t ___ownedState_4;
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
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B 
{
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	int32_t ___NumOptionalParams_1;
};
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B_marshaled_pinvoke
{
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	int32_t ___NumOptionalParams_1;
};
struct CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B_marshaled_com
{
	CommandData_t1ABD7834A5DD05B6EE2D210BDA90324BFEB69C21* ___Command_0;
	int32_t ___NumOptionalParams_1;
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
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues_1;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames_2;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names_3;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip_4;
	bool ___flags_5;
	Type_t* ___underlyingType_6;
	bool ___unsigned_7;
	bool ___serializable_8;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Il2CppSafeArray* ___flagValues_1;
	char** ___displayNames_2;
	char** ___names_3;
	char** ___tooltip_4;
	int32_t ___flags_5;
	Type_t* ___underlyingType_6;
	int32_t ___unsigned_7;
	int32_t ___serializable_8;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values_0;
	Il2CppSafeArray* ___flagValues_1;
	Il2CppChar** ___displayNames_2;
	Il2CppChar** ___names_3;
	Il2CppChar** ___tooltip_4;
	int32_t ___flags_5;
	Type_t* ___underlyingType_6;
	int32_t ___unsigned_7;
	int32_t ___serializable_8;
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
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate_0;
	float ___m_YCoordinate_1;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement_0;
	float ___m_YPlacement_1;
	float ___m_XAdvance_2;
	float ___m_YAdvance_3;
};
struct Guid_t 
{
	int32_t ____a_1;
	int16_t ____b_2;
	int16_t ____c_3;
	uint8_t ____d_4;
	uint8_t ____e_5;
	uint8_t ____f_6;
	uint8_t ____g_7;
	uint8_t ____h_8;
	uint8_t ____i_9;
	uint8_t ____j_10;
	uint8_t ____k_11;
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
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment_0;
	float ___m_YPositionAdjustment_1;
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
struct MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C 
{
	int32_t ___U3CTypeIndexU3Ek__BackingField_0;
	int32_t ___U3CEnumValueU3Ek__BackingField_1;
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
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
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle_0;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType_0;
	int32_t ___valueIndex_1;
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
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	int32_t ___tileX_0;
	int32_t ___tileZ_1;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index_0;
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
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_3;
	bool ___appendMode_4;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_5;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder_6;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	String_t* ___baseUriStr_13;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri_14;
	bool ___isEof_15;
	bool ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	bool ___eolNormalized_19;
	bool ___entityResolvedManually_20;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_pinvoke
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_3;
	int32_t ___appendMode_4;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_5;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder_6;
	Il2CppSafeArray* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	char* ___baseUriStr_13;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_com
{
	uint8_t* ___chars_0;
	int32_t ___charPos_1;
	int32_t ___charsUsed_2;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_3;
	int32_t ___appendMode_4;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_5;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder_6;
	Il2CppSafeArray* ___bytes_7;
	int32_t ___bytePos_8;
	int32_t ___bytesUsed_9;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader_10;
	int32_t ___lineNo_11;
	int32_t ___lineStartPos_12;
	Il2CppChar* ___baseUriStr_13;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri_14;
	int32_t ___isEof_15;
	int32_t ___isStreamEof_16;
	RuntimeObject* ___entity_17;
	int32_t ___entityId_18;
	int32_t ___eolNormalized_19;
	int32_t ___entityResolvedManually_20;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 
{
	String_t* ___prefix_0;
	String_t* ___ns_1;
	bool ___declared_2;
	int32_t ___prevNsIndex_3;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___ns_1;
	int32_t ___declared_2;
	int32_t ___prevNsIndex_3;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C 
{
	String_t* ___name_0;
	String_t* ___prefix_1;
	String_t* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	String_t* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	bool ___mixed_8;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke
{
	char* ___name_0;
	char* ___prefix_1;
	char* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___defaultNs_2;
	int32_t ___defaultNsState_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
	int32_t ___prevNsTop_6;
	int32_t ___prefixCount_7;
	int32_t ___mixed_8;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 
{
	String_t* ___prefix_0;
	String_t* ___namespaceUri_1;
	String_t* ___localName_2;
	int32_t ___prev_3;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___namespaceUri_1;
	char* ___localName_2;
	int32_t ___prev_3;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___namespaceUri_1;
	Il2CppChar* ___localName_2;
	int32_t ___prev_3;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 
{
	int32_t ___prevNSTop_0;
	String_t* ___prefix_1;
	String_t* ___localName_2;
	String_t* ___namespaceUri_3;
	int32_t ___xmlSpace_4;
	String_t* ___xmlLang_5;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshaled_pinvoke
{
	int32_t ___prevNSTop_0;
	char* ___prefix_1;
	char* ___localName_2;
	char* ___namespaceUri_3;
	int32_t ___xmlSpace_4;
	char* ___xmlLang_5;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshaled_com
{
	int32_t ___prevNSTop_0;
	Il2CppChar* ___prefix_1;
	Il2CppChar* ___localName_2;
	Il2CppChar* ___namespaceUri_3;
	int32_t ___xmlSpace_4;
	Il2CppChar* ___xmlLang_5;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 
{
	String_t* ___prefix_0;
	String_t* ___namespaceUri_1;
	int32_t ___kind_2;
	int32_t ___prevNsIndex_3;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshaled_pinvoke
{
	char* ___prefix_0;
	char* ___namespaceUri_1;
	int32_t ___kind_2;
	int32_t ___prevNsIndex_3;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshaled_com
{
	Il2CppChar* ___prefix_0;
	Il2CppChar* ___namespaceUri_1;
	int32_t ___kind_2;
	int32_t ___prevNsIndex_3;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 
{
	int32_t ___Depth_0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node_1;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshaled_pinvoke
{
	int32_t ___Depth_0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node_1;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshaled_com
{
	int32_t ___Depth_0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node_1;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 
{
	String_t* ___displayName_0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_1;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_pinvoke
{
	char* ___displayName_0;
	Il2CppMethodPointer ___action_1;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_com
{
	Il2CppChar* ___displayName_0;
	Il2CppMethodPointer ___action_1;
};
struct PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 
{
	uint32_t ___Hi_0;
	uint64_t ___MidLo_1;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 
{
	Il2CppChar ___match_0;
	String_t* ___replacement_1;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshaled_pinvoke
{
	uint8_t ___match_0;
	char* ___replacement_1;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshaled_com
{
	uint8_t ___match_0;
	Il2CppChar* ___replacement_1;
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
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 
{
	Func_1_t97C6124008260D65F78265F8B3965ACA776F0671* ___factoryMethod_0;
	String_t* ___metadata_1;
};
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_marshaled_pinvoke
{
	Il2CppMethodPointer ___factoryMethod_0;
	char* ___metadata_1;
};
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_marshaled_com
{
	Il2CppMethodPointer ___factoryMethod_0;
	Il2CppChar* ___metadata_1;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 
{
	String_t* ___devicePath_0;
	bool ___isOptional_1;
	bool ___isOR_2;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke
{
	char* ___devicePath_0;
	int32_t ___isOptional_1;
	int32_t ___isOR_2;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com
{
	Il2CppChar* ___devicePath_0;
	int32_t ___isOptional_1;
	int32_t ___isOR_2;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E 
{
	String_t* ___path_0;
	String_t* ___value_1;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E_marshaled_pinvoke
{
	char* ___path_0;
	char* ___value_1;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E_marshaled_com
{
	Il2CppChar* ___path_0;
	Il2CppChar* ___value_1;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	String_t* ____name_3;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	char* ____name_3;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index_0;
	int32_t ____stackDepth_1;
	int32_t ____continuationsDepth_2;
	Il2CppChar* ____name_3;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction_4;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index_0;
	String_t* ___name_1;
	float ___actualWidth_2;
	float ___width_3;
	bool ___visible_4;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index_0;
	char* ___name_1;
	float ___actualWidth_2;
	float ___width_3;
	int32_t ___visible_4;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index_0;
	Il2CppChar* ___name_1;
	float ___actualWidth_2;
	float ___width_3;
	int32_t ___visible_4;
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
struct BufferedItem_tA1A6B2F7AA138BFEEA7F95DAF9039D1C01B5B2C3 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Item_0;
	double ___TimeSent_1;
};
struct Entry_tEA99553F325828A74A65B889F46BE09836044044 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t7877D89C33343A89369109CFFA5D53EB07088C3A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t7552872EBB1030DCE2B482FAD066D2E2739AF59D 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Guid_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key_2;
	int32_t ___value_3;
};
struct Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value_3;
};
struct Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value_3;
};
struct Entry_tC547DC595E8834D5C43800A8BB940AA036D7939A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___value_3;
};
struct Entry_t527DA100A303E999D54D4B92AEE950BC1015C30F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90 ___value_3;
};
struct Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value_3;
};
struct Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_3;
};
struct Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value_3;
};
struct Entry_tF9ECDAEBED73AC9601E5F855B4F92DB6EC24B93F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	intptr_t ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_2;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___value_3;
};
struct Entry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_2;
	PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 ___value_3;
};
struct Entry_t4EDF04216779884FF78327E73E3ACAB0840B4599 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	MetricId_t9B12C3D1517436215EA243A319FDFC36F9C4438C ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_3;
};
struct Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value_3;
};
struct Entry_t23FD4D5C91DAF54FF667F7C0F7C5B9F291E18F11 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value_3;
};
struct Entry_t9C767DDAF68BC43C733C2B0C2B10AAC59D82798F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value_3;
};
struct Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value_3;
};
struct Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value_3;
};
struct Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_3;
};
struct Entry_tC47B516CF468780EF7C008DB6CF3CEA2EA7463A5 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value_3;
};
struct Entry_t9C565819818CEE927F7310B20154140C74FF0587 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_3;
};
struct Entry_tDC011E4AD8EA5EF199B4BE33DA77FB94247CDB8D 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value_3;
};
struct Entry_t6A17C7D474D0B06F949844FCD5D76B77B3F7B4FD 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_3;
};
struct Entry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___value_3;
};
struct Entry_t24F25ECA3BDA03521151C33B3297BAAE878226BF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 ___value_3;
};
struct Entry_t67BC95FE2A69B8C6000E1C465B99284BA4A5D4C1 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___value_3;
};
struct Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value_3;
};
struct Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key_2;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value_3;
};
struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key_2;
	int32_t ___value_3;
};
struct Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key_2;
	int32_t ___value_3;
};
struct Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___key_2;
	RuntimeObject* ___value_3;
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
struct KeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B 
{
	StructMultiKey_2_tBE8AC1F77387A29245D48FBA8C8C8E1763344DD5 ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t96DF222FD133EFE4BDCA5CD194CF2A841FE730A0 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t0FC8A97F3302BA76A914E7C448813E00218562A1 
{
	CollapsedCommand_tF18F844F2AAE15B2C032D1D3A92142AF0EF2A85B ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key_0;
	int32_t ___value_1;
};
struct KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD 
{
	int32_t ___key_0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value_1;
};
struct KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED 
{
	int32_t ___key_0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value_1;
};
struct KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F 
{
	int32_t ___key_0;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___value_1;
};
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};
struct NativeList_1_t04917686A677DCA96B3A082C15D174D765D4DF5F 
{
	UnsafeList_1_t7576474D288A30F1540A43F66481308FA0558594* ___m_ListData_0;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};
struct NativeList_1_t663B318E0C7E204D6FB8867DB99328D712EACB2C 
{
	UnsafeList_1_tE941F153E0D05B0746B266E9F8686EBDA90F1A12* ___m_ListData_0;
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
struct ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1_0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2_1;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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
struct FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 
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
					char ___offset0048_3_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989__padding[126];
	};
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex_0;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
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
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint_1;
	uint32_t ___m_MarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment_3;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint_1;
	uint32_t ___m_CombiningMarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment_3;
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
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	int32_t ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
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
struct Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pos_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rot_1;
};
struct Entry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_t008CACF55D7F47352355FB69BA62E34489CF2116 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 ___value_3;
};
struct Entry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int32_t ___key_2;
	CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___value_3;
};
struct Entry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	int64_t ___key_2;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___value_3;
};
struct Entry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value_3;
};
struct Entry_t15952077773B78941375B7CB0017E82A8039A22A 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___value_3;
};
struct Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value_3;
};
struct Entry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___value_3;
};
struct Entry_tEC1A94D2B396350073237678CBE5013D9C23336F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___value_3;
};
struct Entry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___value_3;
};
struct Entry_t0EFE3411C7B5E0D0035938943D5FCE7E8FC7A2CD 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	NativeList_1_t663B318E0C7E204D6FB8867DB99328D712EACB2C ___value_3;
};
struct KeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___key_0;
	RuntimeObject* ___value_1;
};
struct KeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B 
{
	int32_t ___key_0;
	ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 ___value_1;
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
struct BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 
{
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Data_0;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_HeadTailIndices_1;
	int32_t ___m_MaximumCapacity_2;
	int32_t ___m_MinimumCapacity_3;
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
struct FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes_0;
			FixedBytes126_tC223222E11A3E93A15FE1C62C3429FC169DBC989 ___bytes_1;
		};
		uint8_t FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952__padding[128];
	};
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	int32_t ___m_FeatureLookupFlags_2;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName_0;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher_1;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName_0;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher_1;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName_0;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher_1;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 
{
	int32_t ___m_RequirementIndex_0;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements_1;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_marshaled_pinvoke
{
	int32_t ___m_RequirementIndex_0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements_1;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_marshaled_com
{
	int32_t ___m_RequirementIndex_0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements_1;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls_2;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E 
{
	float ___Time_0;
	bool ___IsCut_1;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item_2;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_marshaled_pinvoke
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item_2;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_marshaled_com
{
	float ___Time_0;
	int32_t ___IsCut_1;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item_2;
};
struct Entry_tA9DD1EB07FCD53125B86374F53D523E32CEFA01F 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___key_2;
	RuntimeObject* ___value_3;
};
struct Entry_tDE76A86B3AFB86909E7512372AF080D2551709E3 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___value_3;
};
struct Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___value_3;
};
struct Entry_t97462FAC7FDB1F8954B3F5FB81C67F2E1298F430 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	ProbeVolumeBakingProcessSettings_t1A0C71DD07CFB6660AFC0D3EBF81FA5064CFDAD7 ___value_3;
};
struct Entry_tD8875C96F18F04DE9948C96AC2CB648E8901D064 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	RuntimeObject* ___key_2;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value_3;
};
struct Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint32_t ___key_2;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value_3;
};
struct Entry_tF710003FC8708778F4563D38DB460834F64976F3 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	uint64_t ___key_2;
	TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 ___value_3;
};
struct Entry_t9D6C9624624DF9D5AB3DE4AE31F81E878441314B 
{
	int32_t ___hashCode_0;
	int32_t ___next_1;
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key_2;
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___value_3;
};
struct KeyValuePair_2_t71AC02E7631CC104AFEFE094AAE47779ACBF5338 
{
	FixedString128Bytes_tEBC488E0CC30C6D842951A4E6F09AC58677F1952 ___key_0;
	RuntimeObject* ___value_1;
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
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};
struct EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC_StaticFields
{
	EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC ___Default_0;
};
struct EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E_StaticFields
{
	EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E ___Default_0;
};
struct EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D_StaticFields
{
	EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D ___Default_0;
};
struct EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38_StaticFields
{
	EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 ___Default_0;
};
struct EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83_StaticFields
{
	EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 ___Default_0;
};
struct EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022_StaticFields
{
	EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 ___Default_0;
};
struct EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3_StaticFields
{
	EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 ___Default_0;
};
struct EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C_StaticFields
{
	EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C ___Default_0;
};
struct EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182_StaticFields
{
	EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 ___Default_0;
};
struct EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533_StaticFields
{
	EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 ___Default_0;
};
struct EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0_StaticFields
{
	EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 ___Default_0;
};
struct EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1_StaticFields
{
	EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 ___Default_0;
};
struct EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F_StaticFields
{
	EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F ___Default_0;
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_StaticFields
{
	EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___Default_0;
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_StaticFields
{
	EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___Default_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207 (uint16_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QName_Equals_mE8465B903C08BDE00EA2293C8BF6841EFB650634 (QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_mDC042F93AA9594EB642017B564DDE1F6395897CB_gshared (RuntimeArray* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5 = ___0_item;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC06E99986937CFA12CBFE4F7212619918ADE33E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt16_Equals_mA21E8831A57BC983311BFEE7023615002FC50207((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt16Enum_t481D129F5FAE551E8684190D640F0FAEFB237CF8_m96155B7525A4A8B332E7093F12E6C4889CB9677E_gshared (RuntimeArray* __this, uint16_t ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint16_t L_5 = ___0_item;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint16_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mB598970CC4AFA95A38D6DBDE6CB0D4043C1F5A64_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt32_Equals_mC516812849D8243A72D34D830D840A1F1E32795E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m4F30BDE21238E1F62BB09B6AD0780CEE39424C89_gshared (RuntimeArray* __this, uint32_t ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint32_t L_5 = ___0_item;
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<uint32_t> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF41FACACB76BF1E2A384B990A17AD895AF3AB357_gshared (RuntimeArray* __this, uint64_t ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		uint64_t L_5 = ___0_item;
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = UInt64_Equals_m175E7A6F2A4606A94579529400854317542648A9((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136_m2B3BC669375B3307D036CF0CF6386FA71C40672B_gshared (RuntimeArray* __this, UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 L_5 = ___0_item;
		UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UcgQosServer_tB2AFA57F819F8A2EFB52F813E38521D31F765136> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220_m0DD3DD62946D60567B4C42613F999280DB48E385_gshared (RuntimeArray* __this, UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_5 = ___0_item;
		UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UnnamedMessageEvent_t46FC0EE36E43495452CA9BB2ADB9256D94373220> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_mA415E8D5D61C3FA6AC088AED36EF156B24B16C9A_gshared (RuntimeArray* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_5 = ___0_item;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m01C8456C1A7B1A78BE016ED5248D83A0748A2C5C_gshared (RuntimeArray* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_item;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2_Equals_mA4E81D6FCE503DBD502BA499708344410F60DA4E_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mF92CB1A90C96594B6A67E7E2680C004FAD67913E_gshared (RuntimeArray* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = ___0_item;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector2Int_Equals_m6D91EFAA6B3254334436BD262A4547EA08281BA3_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8607C92881A800B10A96D62148CE7A750E62640E_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2050E232F77364815777E995C96FC9E41E98C582_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___0_item;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF072B5964F42AC3B28463A6572BBB5E3E8A89AC1_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___0_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_mD4D910CB0A446EB60AB4A2DC996822EAAC33B519_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = ___0_item;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m4E4CB613B2606CD31E2057AC9E443B271954A42C_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = ___0_item;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mBB7A6225A160ECD0FBE13434056C573C2F22718E_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = ___0_item;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m918733C0E20E9F3647BEC1F72DAA45D2D593026F_gshared (RuntimeArray* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_5 = ___0_item;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m7012AAA1078B7C25D31DC2489735A49EB3200F40_gshared (RuntimeArray* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_5 = ___0_item;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m8A974827B6ED52B570A43AB71D2EA251B552CC33_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = ___0_item;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_m638C56CD91A3E5CE706043D796606C529D2CB119_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = ___0_item;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_mED6789E3761D6FA098C8691795306CD85349365B_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = ___0_item;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m0C5C554BB812EDD8F79E40C669E95F95EC6160F9_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = ___0_item;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_m6B3F37F3FCC9B6D0C9D422AB871825F9973D5C98_gshared (RuntimeArray* __this, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_5 = ___0_item;
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m266C25C63246A960D5FCE8A6234C25CE961826B1_gshared (RuntimeArray* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ___0_item;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_m04440F253D76CE434E42CB6CE4962F933CC528DC_gshared (RuntimeArray* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_5 = ___0_item;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m448C264CB8FE04F8819A7AFBE2FEC93289E6216F_gshared (RuntimeArray* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_5 = ___0_item;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mB696172EB9652C14700FFAB54C7F6F65ECC416B4_gshared (RuntimeArray* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_item;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mBFA13200E975E6D04E95673A9D1EE83211D3E2F3_gshared (RuntimeArray* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___0_item;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m210D3D2CAFCFBD1638A0F50F5A5FCEF6A9867AB8_gshared (RuntimeArray* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___0_item;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mF115854BF0EEBBACD62DFDC41024B6E0A7D0D483_gshared (RuntimeArray* __this, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_5 = ___0_item;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisint4_tBA77D4945786DE82C3A487B33955EA1004996052_m851EE47A6B716BC6E89AEE483DAD3FD19CBDB1C5_gshared (RuntimeArray* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = ___0_item;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mED8E439E04FB9F91B7180387B5CF3635FE8D9AC6_gshared (RuntimeArray* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_5 = ___0_item;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m7333310631C789ADCB310F96285FAFD89F5DB195_gshared (RuntimeArray* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_5 = ___0_item;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA_m5B4DD45E6B5AB207D22A00E0525281E91097B59A_gshared (RuntimeArray* __this, ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA L_5 = ___0_item;
		ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShadowResolutionRequest_tE0E30FA18ACE318D6540C2BA217F4E8B3E6766CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0_m6373CA08E5D3F43267850033871F54E887A70721_gshared (RuntimeArray* __this, WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 L_5 = ___0_item;
		WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WeightInfo_t9942B0D2C77A00A5C9824732AEAA0AB0A55620B0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A_mAD7BE0D3D70C2F63953A0FE77318B99E0F3C54E4_gshared (RuntimeArray* __this, AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_5 = ___0_item;
		AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AtlasNode_tE1393243E3FBC4D627662BB3BD7D37E36687987A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_m06256604D61B4F324224F520CA9A5B5881DEDA2A_gshared (RuntimeArray* __this, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_5 = ___0_item;
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m42022C48B079C10FB78D4C9AD7B18FBB1AB42B33_gshared (RuntimeArray* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = ___0_item;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128_mE21089BED56169A086D59D5F0CC1A676F9621C1E_gshared (RuntimeArray* __this, BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 L_5 = ___0_item;
		BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BaselibData_t9DBF15F308D32D64DA4633540C58A5043B939128> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDBD0FB46B01ABF3DDAF2B784A3A3E91CC16C998F_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBaselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1_m4C7EFA9BDE44EA2B675E3E71EFF8077CFAF76783_gshared (RuntimeArray* __this, Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 L_5 = ___0_item;
		Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_m2326940FBBFF6C4D56FA7B8FC99DDF815289E2F9_gshared (RuntimeArray* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_5 = ___0_item;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Page_t04FE552A388BF55B12C8868E19589136957E00A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB_mE5EC000B77E6762AA966BA816BBCC70E20C3F359_gshared (RuntimeArray* __this, CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_5 = ___0_item;
		CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInstruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B_m9390E1AB764E8C596890D4F932703A9596FB62B0_gshared (RuntimeArray* __this, Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B L_5 = ___0_item;
		Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Instruction_t0D96DA0EDA87F958B2B8954EAF7347865898919B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3_m8647679AB2F3FD55B33C79A2C54B68476E82FCEA_gshared (RuntimeArray* __this, CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 L_5 = ___0_item;
		CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CustomBlend_t1CA5382919FB6CC3B59B0598F52C1AA48FF3CDE3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2_m242C8BD3ED54F51AEDB26347062CEBAC349A7748_gshared (RuntimeArray* __this, Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 L_5 = ___0_item;
		Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Pair_t395B1EC1E7854C08811AF7E0584C4BA7AE3C6AF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrbit_tFB7313130D10593990AD5CA9C685500758DB866D_mA6D4E4AD0016DD0EBABBDCB240DB37BF9BEBB736_gshared (RuntimeArray* __this, Orbit_tFB7313130D10593990AD5CA9C685500758DB866D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Orbit_tFB7313130D10593990AD5CA9C685500758DB866D L_5 = ___0_item;
		Orbit_tFB7313130D10593990AD5CA9C685500758DB866D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Orbit_tFB7313130D10593990AD5CA9C685500758DB866D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWaypoint_tF0147D859449A4A396E398063D02E76A7214066D_m4DCCAF005DD3A9515184D51FE216951767046520_gshared (RuntimeArray* __this, Waypoint_tF0147D859449A4A396E398063D02E76A7214066D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Waypoint_tF0147D859449A4A396E398063D02E76A7214066D L_5 = ___0_item;
		Waypoint_tF0147D859449A4A396E398063D02E76A7214066D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Waypoint_tF0147D859449A4A396E398063D02E76A7214066D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWaypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27_m814F128D6B8C6CCE5FFED52000EF27B8E6568ACD_gshared (RuntimeArray* __this, Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 L_5 = ___0_item;
		Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Waypoint_tCC0FEDAE66B3FE1C78D8608FF9D7263637B48B27> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHashPair_t176F7624706A73500F3AB84D61111316D45ECCEC_m4A8437121D8716839DB528910F4DD89B403B7140_gshared (RuntimeArray* __this, HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC L_5 = ___0_item;
		HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HashPair_t176F7624706A73500F3AB84D61111316D45ECCEC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInstruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C_m82E887064259DAE5A52ED4554CDC5D1057B5F986_gshared (RuntimeArray* __this, Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C L_5 = ___0_item;
		Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Instruction_t34ACBE0AA41EE3F5E0742A1F99BDD6F86829B45C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4_m0D3C998F1A0CE51D41C2F801CEFA5FBF6184EFF3_gshared (RuntimeArray* __this, ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 L_5 = ___0_item;
		ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParentHash_t5DC86CE2C6807E8A69BC30E36412B227D8AF28A4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTarget_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641_m1AF41A9CDF0C0A089BBF7A05ED4919FB4E447023_gshared (RuntimeArray* __this, Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 L_5 = ___0_item;
		Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Target_t1BE8C1DD1B464DF9994293478CE3F2AFB3C8A641> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1_m40BA08C68972E9B206650C5A0DDD1764597957C6_gshared (RuntimeArray* __this, DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_5 = ___0_item;
		DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DoublePoint_t934804C749E5C1464C50671424B1A7BB8C598DD1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674_m194F3F91B794002BD009A311E906825A96C47D26_gshared (RuntimeArray* __this, IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_5 = ___0_item;
		IntPoint_tB90EC7E3658ADAC927B4405BEFE1CBAD98BBC674 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = IntPoint_Equals_m6E23677EC9306F8D66DD717865D49A3E9A9BAB5E((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m3BAEFC9B5542B6A887B221028FD733779E8F23EB_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = ___0_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C_m05E6FF20C64E236175DC1C31642B874D6A7D0D08_gshared (RuntimeArray* __this, PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C L_5 = ___0_item;
		PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PolygonSolution_tAF24FAC932885B257486B439AACD765C7D49CB4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_mD628D4BC3DE15A6E96F72EE8FDAF3BC8DFFBBD87_gshared (RuntimeArray* __this, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_5 = ___0_item;
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_m517CDFCC671986C67F6CB56ABF52E9063EDCA3EA_gshared (RuntimeArray* __this, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_5 = ___0_item;
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_m56FBDCCC892EFF9144FAE93A2E1F2766DD3D2208_gshared (RuntimeArray* __this, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_5 = ___0_item;
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D_m78965E60CA0F8D8DA9E27A835289803A5CBD49B8_gshared (RuntimeArray* __this, DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_5 = ___0_item;
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_m2792BBD9B1089B3C26D0FAE541544180A29D05A0_gshared (RuntimeArray* __this, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_5 = ___0_item;
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7_m61639067DCC8BEBBC509D4E47CDD862C33F85BDD_gshared (RuntimeArray* __this, TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 L_5 = ___0_item;
		TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerData_t961063E87733CDD8443A71444D93E7529D0FD3F7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692_m9A0CD3524B1AD1A22BE4FE0F9EB6F2561D3698FD_gshared (RuntimeArray* __this, TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 L_5 = ___0_item;
		TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerInfo_tF7AA42ADD2EA448322A10B27FB8B6154E3EBF692> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializedStat_t69FB608589D2800069C126A46296A8D8BF420423_m5874EE8658E03228F2F30409369FCC19305C4C98_gshared (RuntimeArray* __this, SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 L_5 = ___0_item;
		SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializedStat_t69FB608589D2800069C126A46296A8D8BF420423> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_m30FA6D1F4240D26CE1A7D7B6B197F09E4430E438_gshared (RuntimeArray* __this, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_5 = ___0_item;
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m8D42839F5033101608759246007E834BB78F5A34_gshared (RuntimeArray* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = ___0_item;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mE6AB4B39A9EE3036CD5E36258643D4B14B560F99_gshared (RuntimeArray* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_5 = ___0_item;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_mE744B04BFFAF70A4E1BF0B373F6B725B4242B832_gshared (RuntimeArray* __this, DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_5 = ___0_item;
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_m3BFE4A559C95BA5D1BD9F9E3AB33C69458415D95_gshared (RuntimeArray* __this, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_5 = ___0_item;
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m3046D7DEC9CED9D96EE064B1862594C6EC755E41_gshared (RuntimeArray* __this, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_5 = ___0_item;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7_m77D8E2C51712B5EE4901CE8AFEA43CA130C3A9F9_gshared (RuntimeArray* __this, HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_5 = ___0_item;
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_mE06B4DA690BFEE6EFB21D1714CC549487F399B21_gshared (RuntimeArray* __this, HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_5 = ___0_item;
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F_mE936F2AD7507789BB7F33174979FA2F90C2A9A76_gshared (RuntimeArray* __this, HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_5 = ___0_item;
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F_m922598E17FC74CF89B0D5C26004FD5B46995C993_gshared (RuntimeArray* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_5 = ___0_item;
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0_m6152CFDBE6A641209CD91A7736FF7B9307FBADDB_gshared (RuntimeArray* __this, Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_5 = ___0_item;
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3_m74F88EA3F347402D12661A7232F4D68E508480F2_gshared (RuntimeArray* __this, Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_5 = ___0_item;
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042_mC210119A626925F08B1DF56E02C4A7FD48D3F105_gshared (RuntimeArray* __this, Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_5 = ___0_item;
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7_m92D5ACE2BF2579F0F71E11B4CF2BE9FB4EF4E71A_gshared (RuntimeArray* __this, Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_5 = ___0_item;
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mA601AC1A9209505C75ABCBE3D5DFBA677221EAE0_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = ___0_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisItem_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2_m44F5E59BEE100040454A743A492A0A2D519DE544_gshared (RuntimeArray* __this, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_5 = ___0_item;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m2B1D94AA92AE385E5FCEDD0B5113118ABDDFF90B_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = ___0_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_m26CB01E30E96EC9BD05BABAB5ACDE3A10EAEFDB5_gshared (RuntimeArray* __this, BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_5 = ___0_item;
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_mE21BF469E6EE32DB237508CB37ED5DBAE4F9264B_gshared (RuntimeArray* __this, BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_5 = ___0_item;
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_m566E260598518BB769AAE3AA93D2820C109826CE_gshared (RuntimeArray* __this, ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_5 = ___0_item;
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_m42EA84E81D7BCD8825F88D95732F9C0899603E1E_gshared (RuntimeArray* __this, ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_5 = ___0_item;
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_m51B5BB964F5BD68454377825EB159249E2CA9203_gshared (RuntimeArray* __this, WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_5 = ___0_item;
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_m59544530C179882B28D722C464FDBA6CF4F67FC8_gshared (RuntimeArray* __this, WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_5 = ___0_item;
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_m48F922AF59CC071545D85B4D151EEC5A65165E16_gshared (RuntimeArray* __this, Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_5 = ___0_item;
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_m07EBB4CF49C64BA810DC9222B0A7C4A87EE5359C_gshared (RuntimeArray* __this, ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_5 = ___0_item;
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_m560AF2A896CF67E9F6B2FDF6EC4541E560EF7585_gshared (RuntimeArray* __this, ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_5 = ___0_item;
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_m2EC0B74436603B32934748E25B6A0BB0CB36969C_gshared (RuntimeArray* __this, PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_5 = ___0_item;
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_mA91FA44A824E45957E04A938E889B0E64AE64299_gshared (RuntimeArray* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_5 = ___0_item;
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_m6A0E7EFA9A802266CA04DCE9DC75A40B5BC05D6F_gshared (RuntimeArray* __this, ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_5 = ___0_item;
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_mAECF9C1B5D13DFB96B8A5E4998B20F556C36C834_gshared (RuntimeArray* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_5 = ___0_item;
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = DeviceRequirement_Equals_m8B21D6C5F042071FE736CC9D3F360265AEE9F6D8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_mEDFFBEE7EEB4B1001F3A214DAD96889A4C16B10B_gshared (RuntimeArray* __this, SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_5 = ___0_item;
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0_mDEB3E004A1E5FF5F437E882204531F1A0326A087_gshared (RuntimeArray* __this, ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_5 = ___0_item;
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_m63BD7317CBE7DCE42E98F77CC3A25FC401367D98_gshared (RuntimeArray* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_5 = ___0_item;
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_mFAFBFEC78FBE5ACAD79047FF95A9D65BB94A1109_gshared (RuntimeArray* __this, AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_5 = ___0_item;
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_m3424C1E431699A2C8D9DBB70DCA097B120D41850_gshared (RuntimeArray* __this, StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_5 = ___0_item;
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_mEBBED4B22984B79037B58119C795928C64A409D9_gshared (RuntimeArray* __this, StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_5 = ___0_item;
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_m70DCACE3B314850639BFD7A49B0BD02CC4528E7C_gshared (RuntimeArray* __this, StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_5 = ___0_item;
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_m6F8D910DD10DB908807E17EFCD299E8B89C0866D_gshared (RuntimeArray* __this, RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_5 = ___0_item;
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_m127A8B6703C3725B2145BE2DEEF75481A4A59CF9_gshared (RuntimeArray* __this, RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_5 = ___0_item;
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecord_tF7FF07DC502355356B48CE78337FB16B196E2EE0_m570EC8080CCDE3D1BB38C17144DC915ECAC94B39_gshared (RuntimeArray* __this, Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_5 = ___0_item;
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Record_Equals_mEAE03AEEBA5DD28BBFD29288ABD97ECA570E1745((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_m5F0973F54663839AE7841A98493AA4CD5FD5A373_gshared (RuntimeArray* __this, InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_5 = ___0_item;
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_m9BE1B4398B37D2EB506CB3ED1831D43737E41072_gshared (RuntimeArray* __this, OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_5 = ___0_item;
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_m1D2DC3C85918D71C69638592C5DA8F54B1DFC8BD_gshared (RuntimeArray* __this, UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_5 = ___0_item;
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m707EC9D4CB192201E6201500CA1AA2DC59ABBC38_gshared (RuntimeArray* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_5 = ___0_item;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = JsonValue_Equals_m4A516862648D99564D5FA05FC99DF63A275D2996((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBinding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE_m769AA096AA7F91BEAC17C27A7B5F07E201262BD0_gshared (RuntimeArray* __this, Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE L_5 = ___0_item;
		Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Binding_t9E25D6A2A4C675443DA467D1EA0D19CDEE5923AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m08B10E2BA8F69F3F32142B161EC79C137870920F_gshared (RuntimeArray* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_5 = ___0_item;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_m51F9D553C0A527E3EF9C54DCF005777E8FD8CB3F_gshared (RuntimeArray* __this, LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_5 = ___0_item;
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C_m5B45BA13395A85FC016BB361ACD6F9C7830AF4DD_gshared (RuntimeArray* __this, BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_5 = ___0_item;
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928_m7D856960824CA5302737FD7549F08D345FC9FC2F_gshared (RuntimeArray* __this, MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 L_5 = ___0_item;
		MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MessageWithHandler_t4ACB5C5EEE685A991095B46F0029CEF035C51928> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6_m06FD3F936E8347E3C1C941893D1C25C2CE272B52_gshared (RuntimeArray* __this, ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 L_5 = ___0_item;
		ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReceiveQueueItem_t60F7AA40B886CF8C6231945A5262F76297738DB6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47_m62FC42C75943AEE1FD314377E400A861A367120C_gshared (RuntimeArray* __this, SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 L_5 = ___0_item;
		SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SendQueueItem_tFA46EA1EF42596165A1AAE755E4984B2DBFB1B47> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_mD69603BF7C970A53FCD893F6706E0C1405D95A75_gshared (RuntimeArray* __this, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_5 = ___0_item;
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9462C44919744DD9BF9B046902620D84100FB8B6_gshared (RuntimeArray* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_5 = ___0_item;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_mBEAAA5DFF79A6F1F9C975F8BA225FD5EE7AC05DF_gshared (RuntimeArray* __this, AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_5 = ___0_item;
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m31D0E6E648AD8C01A44FE0CD5B6D17241963CD3E_gshared (RuntimeArray* __this, AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_5 = ___0_item;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_m4737B72875E189324FF2DC378B7A9018E76F58F7_gshared (RuntimeArray* __this, ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 L_5 = ___0_item;
		ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04_m03ABF764DC2D7EF2B84CBE02E3E71BAD1F1220DA_gshared (RuntimeArray* __this, AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 L_5 = ___0_item;
		AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AnimationUpdate_t9FC4FB04206837B32CACC14535FB418BBBB5DD04> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709_m797F00ABCE57BE5674864308785D6E589F029209_gshared (RuntimeArray* __this, ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 L_5 = ___0_item;
		ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterUpdate_t0C2ABEDFE84A19E690D9AB37A723A1F427A4C709> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58_m9D26B304AEF19EC0677A61E8A9EFB7D36C421D57_gshared (RuntimeArray* __this, TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 L_5 = ___0_item;
		TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TriggerUpdate_t454130E1C39FF275EE036C9E9869EA3053AB5E58> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConnection_t57B7A8186502E304AD87933A0FFD76FDF0972D70_mB94BB411B97A84DD44A95BF2AF186BE96BE75E9E_gshared (RuntimeArray* __this, Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 L_5 = ___0_item;
		Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Connection_Equals_m18298C6FEC449DB9A270A7B275A50EA8403E9958((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E_mA20148E257EB3517EEA8BE854756414C85B9E2C0_gshared (RuntimeArray* __this, PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E L_5 = ___0_item;
		PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PipelineImpl_t422927EB35F759F18ECBA1C7B075AAC92918017E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2_mFE7B5CF81BB59B35CDDE30850C9743B7F352C96B_gshared (RuntimeArray* __this, UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_5 = ___0_item;
		UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UpdatePipeline_t8D511DB7DDEC2170FC3349B879D1E46CD18C35D2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_mFCD2CD839900055C928700AC99708F368391AAA5_gshared (RuntimeArray* __this, TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 L_5 = ___0_item;
		TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_mD4F84A932F94D7D781700834C3B4F84A4CF4520D_gshared (RuntimeArray* __this, OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_5 = ___0_item;
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_mC66BCEC5997879778FB48B85283513E7C9F19DE1_gshared (RuntimeArray* __this, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_5 = ___0_item;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisKitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD_m209AFDC799147977A5DF4558ED97F9538D8498D9_gshared (RuntimeArray* __this, KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD L_5 = ___0_item;
		KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<KitchenObjectSO_GameObject_tD41F6E40D697D753DA51B486C642D0F67A2E5CAD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_m8E283C6E972C0C2D8202BF74D4C9CDE2366FC907_gshared (RuntimeArray* __this, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_5 = ___0_item;
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_mCDC98C72E7779F960FD49DC607B283EDFA5C8C66_gshared (RuntimeArray* __this, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_5 = ___0_item;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9_m9CA0D04863AF92524DD97FFAA722CEA2275114B5_gshared (RuntimeArray* __this, ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_5 = ___0_item;
		ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedBrick_tCFAA149CAAD025D942AF59976B1CC697E96CACB9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B_m97EC877CCE58159A2EEE4CE639BA5BE80461F58A_gshared (RuntimeArray* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_5 = ___0_item;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970_m083A762E6C70EAF9DEC249EAA217E5E587AB8C7E_gshared (RuntimeArray* __this, CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_5 = ___0_item;
		CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CellCounts_tE8F649895E00B2C75ABEA7C6ECC40BBDE1EF5970> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC_m3574B0A9129B2B89561E8DB3FCDC5316EFC145F1_gshared (RuntimeArray* __this, PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_5 = ___0_item;
		PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerScenarioData_t550076045279B9168297EFAEC12D729EB36C67CC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92_m0E20F434B7DB1430AA09AEDA4C390CCCFF9DBFB5_gshared (RuntimeArray* __this, SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_5 = ___0_item;
		SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePerScenarioDataItem_t8ECC5ABF9BA05017D9B44DB66430D5946393AC92> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640_m29F5B38AB8FF55D1AB4AFD6968642A0B45E22C52_gshared (RuntimeArray* __this, SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_5 = ___0_item;
		SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableBoundItem_tF2F8CD24513F8F4D69DCAC89522EA0D3C032A640> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C_m97AA4AE237C4BD6D0CB1B50BDDA6730EB41F1469_gshared (RuntimeArray* __this, SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_5 = ___0_item;
		SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializableHasPVItem_t061E2CE4D8B201F280D06ABD0246C7AD8FD9571C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452_m3ECBD06F6C19A2A31B0EB83B4F94CCF0DA03EC40_gshared (RuntimeArray* __this, SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_5 = ___0_item;
		SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVBakeSettings_t9C88167788303739AC5D93A20092598DF654A452> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C_m4391B32F78BA7AB0C7E919449F22AB351F90E279_gshared (RuntimeArray* __this, SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_5 = ___0_item;
		SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializablePVProfile_t5A21743AE68601F4B203BC9CE6A6B9A94B114D5C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A_mFECBCCA2A7EFD841ABED5663725F1FBE68A31142_gshared (RuntimeArray* __this, InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A L_5 = ___0_item;
		InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InternalQosServer_t56825CF99AB62B0FD12D69A5E5EB72FA463E687A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_mD4F4574659D3CF238BB42E8C9FE97A74E3EAAC97_gshared (RuntimeArray* __this, CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_5 = ___0_item;
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_m7B5F1DC7B98598CF59BA5AAB966E0D8679A4D001_gshared (RuntimeArray* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_item;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_mAEC37F2039B0F7F73E9403615F03B431ADE58D13_gshared (RuntimeArray* __this, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_5 = ___0_item;
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mAE6B169036ECFBDE5BBD3D8A641A3235F1A758D0_gshared (RuntimeArray* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = ___0_item;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_mC7B3CB05AB193EEBA1E49FB8BD138A1EDEDE27F2_gshared (RuntimeArray* __this, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_5 = ___0_item;
		RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615_m3C30096F5A1E018D63076791CEC41BC3FC84EC71_gshared (RuntimeArray* __this, CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_5 = ___0_item;
		CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledPassInfo_t7434C596A1EA90A428DAECAA3FFB87314BC84615> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A_mDB2AC282B26F949D05B22B1CA77E3421C7D9C923_gshared (RuntimeArray* __this, CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_5 = ___0_item;
		CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledResourceInfo_t1B258600AF5819B19709F6E4FF0D2803D039336A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258_m19B05F7C3DF48561CADC8EFDD5A713AAB5B924D5_gshared (RuntimeArray* __this, PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_5 = ___0_item;
		PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PassDebugData_tE911DB0148519C33C773511F2D92F57AF1B6D258> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B_m366CA953B314BF9A7978E63A09CC59757AC5ED2B_gshared (RuntimeArray* __this, ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_5 = ___0_item;
		ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceDebugData_t83301B4E44B1F0B49486E21F019AFEE444809A9B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_mA936B807A02B5465FFD26D1EEE1F5F28B671349B_gshared (RuntimeArray* __this, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_5 = ___0_item;
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_mC55B38F8F17BCB40BA76C54D41E7EE4E5498CF65_gshared (RuntimeArray* __this, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_5 = ___0_item;
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m9BDDE4FA2EAF5C8E854CB2C04E4397E5501894EB_gshared (RuntimeArray* __this, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_5 = ___0_item;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEdge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB_m366F9ADA75D26BC7EEB41E539DF232343EFBEACF_gshared (RuntimeArray* __this, Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB L_5 = ___0_item;
		Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Edge_tC0E866D7F28E832CE7BEF95C87BECCD97FB09AAB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B_m36D8E5EDD2689046B5048891009485A44525E1FA_gshared (RuntimeArray* __this, WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_5 = ___0_item;
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_m269BDB3F4D473D96BA2863991CCFF95FF98FAAA5_gshared (RuntimeArray* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = ___0_item;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_m1359E84ED80560DC8719533F13A642EEE993FA4E_gshared (RuntimeArray* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___0_item;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_mEDC204D897D57BED6CEE721EB401F8C1E7F8FA05_gshared (RuntimeArray* __this, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_5 = ___0_item;
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574_m573A2963FF86144B07F7F8AE6593A6F71DA1345E_gshared (RuntimeArray* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_5 = ___0_item;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_mD4A0E3D2C943FF36684930D2D9824C55B9E1609F_gshared (RuntimeArray* __this, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_5 = ___0_item;
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722_m1E29A9360C1E1046DBA44FD2E7CD0EAAAA6E1A85_gshared (RuntimeArray* __this, UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_5 = ___0_item;
		UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UnicodeChar_tB86B7DE9203E1D985B08268AF1964DECB8A5F722> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mB128E0A356F08CB5456DAA2D88E96655A8AB7003_gshared (RuntimeArray* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_5 = ___0_item;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m8F716108A5A14F5A7B25F6343D3D0E0745826D7A_gshared (RuntimeArray* __this, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_5 = ___0_item;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m1774B27BC5EF4D40FB16BBE549B614260745420B_gshared (RuntimeArray* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_5 = ___0_item;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_m5FFBC09949B7E60E859100058D764EAD74E4EAEA_gshared (RuntimeArray* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_5 = ___0_item;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_mD9D89FB216988AE6FFF71483494D974954088EC9_gshared (RuntimeArray* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_5 = ___0_item;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m4717169AE2C7EE107250FB849FC360F98161B166_gshared (RuntimeArray* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_5 = ___0_item;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_m66ACA982297C43137C1C7A354418A03820137E25_gshared (RuntimeArray* __this, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C L_5 = ___0_item;
		SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62_m289B35947481DD83D2E1380EBEBD2C29762EF21A_gshared (RuntimeArray* __this, NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_5 = ___0_item;
		NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NotificationEntry_tBBA39A8ACD63E90360DB0FFC4835E8702DFC2E62> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHitData_t5EAB266730389AB27715962670C2512800451841_mEED3E7196C62F4D9F8C200CFD83C6D2DBE054CD7_gshared (RuntimeArray* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_5 = ___0_item;
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHitData_t5EAB266730389AB27715962670C2512800451841> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntry_tB8765CA56422E2C92887314844384843688DCB9F_m291E88F5A4705D486649397582B9759ABC1ECE16_gshared (RuntimeArray* __this, Entry_tB8765CA56422E2C92887314844384843688DCB9F ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Entry_tB8765CA56422E2C92887314844384843688DCB9F L_5 = ___0_item;
		Entry_tB8765CA56422E2C92887314844384843688DCB9F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Entry_tB8765CA56422E2C92887314844384843688DCB9F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935_m46A0199019A53C0B34DEA8A5AE908B6170621859_gshared (RuntimeArray* __this, RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 L_5 = ___0_item;
		RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RepeatRectUV_t9DEBA876B6627ACC6496B9BC609EB953E3593935> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_m6E06811914A9B267F927DE35C37BB11115EE93F6_gshared (RuntimeArray* __this, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_5 = ___0_item;
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_mC60FDA052C390D02DD08D19745BBE46EDD67E07B_gshared (RuntimeArray* __this, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_5 = ___0_item;
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_mBD39F281C02F002724F0481D668C1289046168B2_gshared (RuntimeArray* __this, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_5 = ___0_item;
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m58E5D996F93DBF21AFC6350D6F1C60211B661A75_gshared (RuntimeArray* __this, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_5 = ___0_item;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m31A62937883F119D36E9BE9D9BA31B6369B45579_gshared (RuntimeArray* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_mF9906686B2E233D4850BC3F743AF5ED3CCE72F7D_gshared (RuntimeArray* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5 = ___0_item;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m65196C7AD14E9DDD39207B970223C78B5148B332_gshared (RuntimeArray* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = ___0_item;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_mD89894A2B146936D502A2786F4B2D71EAD42CD48_gshared (RuntimeArray* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = ___0_item;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m303EA946CB42AE7FF787F8EF4C4243021BBE5277_gshared (RuntimeArray* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = ___0_item;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mA3BB24204157BEA8D7C7C4FAA18219698CC277BF_gshared (RuntimeArray* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = ___0_item;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m513A1C50C2CB69AAB1809B589F7E5A41F0888468_gshared (RuntimeArray* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = ___0_item;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_mC99463EDC5F84A918CA1AD971B365F67D9764F31_gshared (RuntimeArray* __this, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_5 = ___0_item;
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_mDEBEADAC35098D86A9B1AE35C5D818600E0949AC_gshared (RuntimeArray* __this, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_5 = ___0_item;
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_m2449D15E3C465968295B042BDCBD7344E2438546_gshared (RuntimeArray* __this, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_5 = ___0_item;
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_mBECD338B2169FB1BC822C7E780674CC0CB8D6A07_gshared (RuntimeArray* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_5 = ___0_item;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_m3902C7E949A1C4B98C874A5448DB6899F17B50EC_gshared (RuntimeArray* __this, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_5 = ___0_item;
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_m33E479332C8785CB2A60EBD41696A432347FA2D3_gshared (RuntimeArray* __this, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 ___0_item, const RuntimeMethod* method) 
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
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_5 = ___0_item;
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisQName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_m4DA56ADAB8FD118CC9A76AEA0EEEC17A0ED9EC78_gshared (RuntimeArray* __this, QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 L_5 = ___0_item;
		QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = QName_Equals_mE8465B903C08BDE00EA2293C8BF6841EFB650634((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_m7829131FF37D8DD97590E4BEAD321C72A7FDDB5D_gshared (RuntimeArray* __this, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 L_5 = ___0_item;
		ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_m69965253944E8C82009F8A022AC56F0727CD5324_gshared (RuntimeArray* __this, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 L_5 = ___0_item;
		Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_mC5617510E303CE09898EC562E69750F74573CF23_gshared (RuntimeArray* __this, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C L_5 = ___0_item;
		TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_m9E8480CBA65E66A3C7A58CB8378060DA3BE19876_gshared (RuntimeArray* __this, AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 L_5 = ___0_item;
		AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_mB67C3187FFBE6280617F9D6D0283C4009FC9717E_gshared (RuntimeArray* __this, ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 L_5 = ___0_item;
		ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_m7B288F4A0D5A48653D127C2042602F4F63620A5B_gshared (RuntimeArray* __this, Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 L_5 = ___0_item;
		Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_m77B9EC1B726A5AA7DE6CF08E7CEE01F913777983_gshared (RuntimeArray* __this, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 L_5 = ___0_item;
		AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_m98B90DB0F3A0C680176A596860A348921543D96B_gshared (RuntimeArray* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_5 = ___0_item;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m38545E86C92832E3FC46B6C11B726012CDCF7C47_gshared (RuntimeArray* __this, PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_5 = ___0_item;
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMap_t130828B38036909DD82C3A4CCCB9AA0130113AA7_mC3226A5647FB60BA4DD5846234516C0CD8C48B7C_gshared (RuntimeArray* __this, Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 L_5 = ___0_item;
		Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_m66481E93FE6839038D7EAB17EC9C1B438368B14B_gshared (RuntimeArray* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_5 = ___0_item;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_mFB96E42F120F086850EBC9858904A22CDD2B8F9A_gshared (RuntimeArray* __this, PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 L_5 = ___0_item;
		PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatch_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_m4401EB68F218868A62921C266A92C344A9ADF161_gshared (RuntimeArray* __this, Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 L_5 = ___0_item;
		Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_m6E24CAD84FB55B3087E59E1A9C0017348AE9EF1C_gshared (RuntimeArray* __this, DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 L_5 = ___0_item;
		DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCapability_t1A686C4F719B0408BCBB428021405F440196E16E_mEAD1D59BA141ED0F19FAF7155FD23D69AFCAB3E8_gshared (RuntimeArray* __this, Capability_t1A686C4F719B0408BCBB428021405F440196E16E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Capability_t1A686C4F719B0408BCBB428021405F440196E16E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Capability_t1A686C4F719B0408BCBB428021405F440196E16E L_5 = ___0_item;
		Capability_t1A686C4F719B0408BCBB428021405F440196E16E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Capability_t1A686C4F719B0408BCBB428021405F440196E16E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m01B920BED27D5B68BD3FA2C588E117DE574C1115_gshared (RuntimeArray* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_5 = ___0_item;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m284F002503E533DFF1FE9F75765F4112988807BD_gshared (RuntimeArray* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = ___0_item;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m4DDB961B892D9E1DCE42D279882F70AFB5225AEE_gshared (RuntimeArray* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_5 = ___0_item;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m55677A9E3FD599C30FF6AF0BF18A62552D9604B0_gshared (RuntimeArray* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_5 = ___0_item;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_m314F69352F273B49C3D148E1309233E3BACE1F3B_gshared (RuntimeArray* __this, int32_t ___0_index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBufferedItem_tA1A6B2F7AA138BFEEA7F95DAF9039D1C01B5B2C3_mEE7BBB30161A0A0730B56121F4108B52B7B72A78_gshared (RuntimeArray* __this, int32_t ___0_index, BufferedItem_tA1A6B2F7AA138BFEEA7F95DAF9039D1C01B5B2C3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisBufferedItem_tBB083C3C10DB7BA1B48AF4106080595F672E2E00_m46E584EB0D0178B31E972F9F4941F538FF11DADA_gshared (RuntimeArray* __this, int32_t ___0_index, BufferedItem_tBB083C3C10DB7BA1B48AF4106080595F672E2E00 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_mF9A73ADA1BCBFCBCC98E58C799CFE5E6ED248C7E_gshared (RuntimeArray* __this, int32_t ___0_index, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC_mDD91C37EC3F8EB264876226ADBE309F82864C7EB_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E_m5B3034871551AD522083FD42D0C361EEFB7CCE16_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D_mD1AF03D14D50FE18B27CAA3324EFFE251076086A_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38_mE5BD99C7BA922CC0B352419E3BDA9A2831DE907F_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83_mFFAF8BB3EFDF5060C0DCB8B947D9824EEEFCFEE1_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022_mD11F36CBB17CEDC356294E2A6BD921E71BBDC0EF_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3_m78331CCC18EFD3A68E20ADD07C5AA844D919D57D_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C_m9572804B67904EACD78E5F8D78E499F34E934DA5_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182_mC95327291CD283A9F3253A753B47503DC8BC5406_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533_mD8FE840A114E43E4AA4779FF7F12B45D738F1850_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0_m05CABF3A27739D88F97C652FA07C889EF524A0D8_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1_mBFE0F071FEA4238E142D656EB860C097331068D3_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F_mB59D57020A8BA457DDA7B38D10CF53CE4EF2E8A1_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_m06C63068AD2D6555442052B6B8BD103A007B1D9A_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_m67EE0EAB15B63389D791F507AAD16D6C485F25DD_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E_mC4B14FBF69A5B1765A9797A6ACAE564EA5995E11_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t2EBE8F0B2EC8789846CCD693457A5504B953A43E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6E72C722C46949F140550D563C1F41E304752583_m0ED5C89C81D24171B6FD8C9718C3A497A235C4CF_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6E72C722C46949F140550D563C1F41E304752583 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEA99553F325828A74A65B889F46BE09836044044_m01A9D4BEE15F6B4309FD801D4EE5F3B0152A0F47_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEA99553F325828A74A65B889F46BE09836044044 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7877D89C33343A89369109CFFA5D53EB07088C3A_m7E9D6B81BE5F1D6646F9B8E3AEC7AEE09BAB6CB1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7877D89C33343A89369109CFFA5D53EB07088C3A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3_mE8929310EF7A0AC6A92C7F71BDECA62EC4E27AE9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_m8FA8D029CBA9CF562E15D497FCB1206AFE78A06F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944_m871652275C2F7AC4FDA329BCABFCBC550A2C6D92_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t659CBE26663956D18C2742F62B83981D65BDFBAF_mF1D90136208655607BD3C1E0BFEB3CC16C57ECC3_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7552872EBB1030DCE2B482FAD066D2E2739AF59D_m41F55F94CECE3981153A0B7C0E136FC91D2B864A_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7552872EBB1030DCE2B482FAD066D2E2739AF59D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA9DD1EB07FCD53125B86374F53D523E32CEFA01F_m06084F9CE4A27CD600A311896F327F78EC0E933C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA9DD1EB07FCD53125B86374F53D523E32CEFA01F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF_m6214821C1AFFC81312CB32C17D9D6E9A2AD94D85_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t899F478E066573053AECA9BF68F5B4E9D05CD67D_m6A15984853375E3EBB56C00A9DF11363F21633BC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F_mC0171B2B356904DAA7C0E120D0E132E2FD4C8D83_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C_m6AF51E26448B162EB7CED405D18701AE5D88FDAB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9_mE4A1FA0FE0E799C9A8F5EEFE57FE86E18551FE9B_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t008CACF55D7F47352355FB69BA62E34489CF2116_m37E5014F647CFF8CB392C76DC6924A77B13D6C67_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t008CACF55D7F47352355FB69BA62E34489CF2116 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE_mF87C2901411DF09497E5EA9EE60917D237E81049_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tD522C09559070EF861CE8629AC53D945627CD974_mF8B4F20FA2F9BA028AC7191EC99EACAE6474469B_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tD522C09559070EF861CE8629AC53D945627CD974 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t5A1DD43C826878A3853C7DF32E971C3D19805227_m11DED3080CA11A4690814F465FC2DDF49F630606_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7D024B3A4DD33F9564AB9F99900543A39F8D6C1F_mAB43DEFE1EE65E11C81919580F35992128C41576_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7D024B3A4DD33F9564AB9F99900543A39F8D6C1F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA212E7034D981AC2F7E219C600769EE485919684_m7DE05A76E0313C1C4BA91A674F23A6E2BA9E05E4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t56DFE5C32B6C0F59B83A080FD15B9AFB39F27185_m2E7D39631E40E1C5033BD959EB574F0BF759B9C5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t56DFE5C32B6C0F59B83A080FD15B9AFB39F27185 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4F374F13C9422AE969BA033893F5B076AEE88131_m4F8F1AF6401723741E21F3E3AC3751FC7290106F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m508C778EC3299E72EF498E4796B441D48B35C8AE_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC547DC595E8834D5C43800A8BB940AA036D7939A_m8A5D4BAAA6628B001B76947DBD0F5C6372C3D4EC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC547DC595E8834D5C43800A8BB940AA036D7939A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t532FECF491646E3372F9D145FEC277E0C5089CBC_m668E265388ABD68F73AA94BC9500A11ED4B75C25_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t532FECF491646E3372F9D145FEC277E0C5089CBC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t527DA100A303E999D54D4B92AEE950BC1015C30F_m5CD1F941B3A3D81EC698C0C6E0AE3776F0A451E4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t527DA100A303E999D54D4B92AEE950BC1015C30F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1232972772EBD9E3138EC9BDCB25B677AA243239_m26B073E16C34FEBEA950CEE2CFAFBF409D701D62_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1232972772EBD9E3138EC9BDCB25B677AA243239 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B_m609BF6C0C1491512EFC6C3B8BA4268BB371F6048_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5_m82E24B57C866F1F20C842979FF5C64D4B13C216D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t8C7B304855EF8908B42E4E5470A57C55BD36864A_m7ACC4578A6740D6930E21BD95754894D7DA7B469_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725_m3510327BFCABD7600BE3473A396807C31A689664_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20_m5E59915B810EE242E2C3A0D27C501614DE1D91B5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7B3861A33B85B48715972326859F7104EAEFDF50_m55DFE2CE93CCE3296B0C49D1F7B3FD6C7107155D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t787B5926E2DAD340D81286D743DEB8AED0192C40_mFB7F685E21806EAED279E103E3BEF59F3501B05F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A_m78FC61CF97EF4821137A8F5441717A6DA166123D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4D5A107E6414D8B9DE012405A201C46AACFACF98_m4525A499EB167CBAE14F03976A50AA1B2F61B3A2_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C_mF0BA4EB2D2C1A42E24A5C7EC04BB87F410018004_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438_mE0D556598F5A308003B63FBEB0D4AF78F18AB26C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF9ECDAEBED73AC9601E5F855B4F92DB6EC24B93F_m42574FB1D0EA8E77EB3C4BF1F989C4307180B7FA_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF9ECDAEBED73AC9601E5F855B4F92DB6EC24B93F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F_mBBF79A0BDA569EF4E938A45670FFB0844D2C93EA_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA_m501AEDD776F60C965795A09EFA26EB7EE014DB00_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB_m05E8DBA8E50B11CE5842498BAEC2BA43FE99DC56_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4EDF04216779884FF78327E73E3ACAB0840B4599_mC57FF1898520DB65B930A2B41343F5F30B74E441_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4EDF04216779884FF78327E73E3ACAB0840B4599 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C_m9736C2CCF17DC4310A3D14EFD306CCF719874A47_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95_mF896BFC39C9F768EA2DE8DE2AD7B6C8F9058692C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979_m63731855175424BDA66B6F799BCC7F9DC6DFF3AB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF89ABDC06E5A566B1D6516C4ADE91D9909F02979 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE39771EB73DA3008BB0DF74028FF7285866C18C8_m3017D56AC2AF0D18D7653DC8D6EA902E0C6BB6F2_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t23FD4D5C91DAF54FF667F7C0F7C5B9F291E18F11_m7B1EAE82E9B9A9F1A76AE9A1745E70A8C9232324_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t23FD4D5C91DAF54FF667F7C0F7C5B9F291E18F11 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDE76A86B3AFB86909E7512372AF080D2551709E3_mA76AD99990BA8970733A2FD3883FEA55544E80C5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDE76A86B3AFB86909E7512372AF080D2551709E3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_m67CAFF8F487DD85F0544EAF82289F0F2E0487741_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202_mA098AEB0AE8B5C1328F2043D045DAB09BC57EE53_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_mF2CD865AF12B1E19DB9B7AB31DD11C62FF699AD9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF_m417FE551B63657EE002118A6B5F2B054A4AAF746_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3AB5691AF3E0D016BCEC28C7E883AB24FAA130EF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t97462FAC7FDB1F8954B3F5FB81C67F2E1298F430_m67E6C6C37A817F3A8DE71D58AFB478495B4DD063_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t97462FAC7FDB1F8954B3F5FB81C67F2E1298F430 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t15952077773B78941375B7CB0017E82A8039A22A_mD3F7592463491FBD1350A02343D00772AFAB05E3_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t15952077773B78941375B7CB0017E82A8039A22A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9C767DDAF68BC43C733C2B0C2B10AAC59D82798F_mAFCDE9361BF0A3A35AB45D0984A309AADC5B4A36_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9C767DDAF68BC43C733C2B0C2B10AAC59D82798F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_m62BBDC98F25347277960A69F05C7DB25C8C0BA73_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A_m4A716AABA3163046398D8401F18BA797F90B76B0_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98_m4604444E87D4C6070D734B5571BC3959DE7774B4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t8C80D6795974A124B4CD390BBB064C11BAD5D216_m68EB115D169E18697BB6200C2389DD320DCFF497_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56_m45A59E666A67A0F6EBFCB626CCA46EEE934A99AE_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC2C8EF34432BD0CDF0164C3590A242BCE9864A56 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDA878B789C830BB6D853BCCA94EC9A56473F9192_mF4CA2AFA1D1D64F82B81D68691DFC73FB6BDB26E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDA878B789C830BB6D853BCCA94EC9A56473F9192 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC47B516CF468780EF7C008DB6CF3CEA2EA7463A5_m4C078EF44A77E07791AC1420E79B1BC7AD22E5C0_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC47B516CF468780EF7C008DB6CF3CEA2EA7463A5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9C565819818CEE927F7310B20154140C74FF0587_m9EE309676DC229543731B8D014D938ADD5F05818_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9C565819818CEE927F7310B20154140C74FF0587 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDC011E4AD8EA5EF199B4BE33DA77FB94247CDB8D_mD268B5A0DC3274E309FB3021DD451AED96B7E99D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDC011E4AD8EA5EF199B4BE33DA77FB94247CDB8D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6A17C7D474D0B06F949844FCD5D76B77B3F7B4FD_m147A75615F2A070D2DDA213E01AF7A949FD3AD91_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6A17C7D474D0B06F949844FCD5D76B77B3F7B4FD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50_m3B14C43B248774F2EC0EA18F488BECE70B0A252F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B_m0CFBCF77F91DE3370F67291B2EEA314400F12C44_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t24F25ECA3BDA03521151C33B3297BAAE878226BF_m87FF9106DC20E59911AFC26A8B8B0DF704938305_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t24F25ECA3BDA03521151C33B3297BAAE878226BF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tD8875C96F18F04DE9948C96AC2CB648E8901D064_m62E42AC4BAD2865FBD2DEA3941F0C17F935D09DC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tD8875C96F18F04DE9948C96AC2CB648E8901D064 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t67BC95FE2A69B8C6000E1C465B99284BA4A5D4C1_m69AF134EB0FD91399ACC77F36B0A4FB2C60271D7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t67BC95FE2A69B8C6000E1C465B99284BA4A5D4C1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164_m116EF753783F1FAB4816F77E6FE591AE81BE8606_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC6604B503225E2D191CE25713A68DA2A5228CA1C_mF6B9C383BE12449CA2354406727BF327CEE3CD87_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578_mE64040F2C104B94E317E7A66F436711EEED0C20F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677_m2EE7A2B9DF7A6AB98DB38FF637578D7E569DB5B1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA14C5108B629D2EAB6DDB9646A275143C268DB75_mF8656BBC728BD53061A96A99D895CA5870249703_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA14C5108B629D2EAB6DDB9646A275143C268DB75 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEC1A94D2B396350073237678CBE5013D9C23336F_mA1DE66F12FC985978D5673A11AE4C4642AD4BDF9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEC1A94D2B396350073237678CBE5013D9C23336F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88_mA47B8C919C30E07907E2A46F8AA0217514C352B5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715_m984E989135146A6512D9C0F7098A19A37A42EB87_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218_mD38C7D70DFA33E177E02DFBF417FA733B5FEC66A_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t8DBA43D6278FB62ADE0F36B5405862F425F5D218 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t0EFE3411C7B5E0D0035938943D5FCE7E8FC7A2CD_m7BE13DA9ECC6A2C71628E21A18F4E2EF83E846ED_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t0EFE3411C7B5E0D0035938943D5FCE7E8FC7A2CD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDBB209A41727310C443EF0AFAB992280EFCDD0A9_m2D5D1568C7179D8E17599ED1C385C5E828D345BE_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDBB209A41727310C443EF0AFAB992280EFCDD0A9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFD7B628ECE954788AF855318B268E2D31F25D4F6_m27E633DD3819684BDDADBB2B85940F240460D1A7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFD7B628ECE954788AF855318B268E2D31F25D4F6 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t0D1BA21BCA6514AA4CB47B54099EFCA1CF692861_mF1ED117B266B13E1181A1E075E663C68595E43E1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t0D1BA21BCA6514AA4CB47B54099EFCA1CF692861 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF710003FC8708778F4563D38DB460834F64976F3_m58BA9C915A4297164818BFC68D563CCE36D7E5D0_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF710003FC8708778F4563D38DB460834F64976F3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCF88C24D7105D87CDA347D74881C44071E0DB782_m6846F06F7FA053D6316BD204500CA13DB69A339F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCF88C24D7105D87CDA347D74881C44071E0DB782 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE850363938764CC80F151D8A949A63B1588A5BF9_mA8EB5F48E674DE73F4B1F3477320D7F1D686355F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1_m02B5485A354258838A3BEEA0CB2ACAA176B93115_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E_m822199169AD39861E318806F8B5B126DB2511534_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB_m540F0D774D1E6689E3BA5AA00ABEE0E3808FA3B4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86_m53A0C4BB8DC2DB09B3FA758257FA5E9E5525F0E7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9DD41777766A237ECDB0E269740F073135AB4A64_mC83DE3EF62A8240042042A79733BAC9019935E9E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9D6C9624624DF9D5AB3DE4AE31F81E878441314B_m9CA0E5F34C48B7BD41C19F8999FFC9C16E9E6E48_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9D6C9624624DF9D5AB3DE4AE31F81E878441314B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84_mD39A719C643657D28D2BDFE1F76B740D65AECDB7_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91_m43B599232A1C3C784892FA9798E8314C7D396792_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9_m67A782FEA7D6A3008ADDE50D629E9A385104B39C_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751_m5100F4DB3EAD30DAB142F9D6FB067FD05F73B573_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0_m115DB3498B047515CCC3E841DE10E852F38CDCF0_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C_m0A6E3141D3B603E4417F9E4EC52FF31B9C55011E_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4_m6D871C1D1968D2EA2B8C0D469084C8970E8C2C15_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13_m979D16D2287F5E0D5A5C4CD9C12E23AAD87E797E_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B_m595B525F2E49DF4FBDCD48EDE001A0AB96911223_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t96DF222FD133EFE4BDCA5CD194CF2A841FE730A0_m57CB8D3C6DB13A45FBD60281786285E196A93530_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t96DF222FD133EFE4BDCA5CD194CF2A841FE730A0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE_m323D3F0B6DF5316200F030A86EFD335A208B4058_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m476C66106A6409EC4D5BE8D65183F9A3A9C1E5D3_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E_m1963EF9A7F1ADDC2078F2F8AABC965F74BBE4DA2_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370_m7A977DAADE5851134EA296A0A98802954A5F10CD_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t0FC8A97F3302BA76A914E7C448813E00218562A1_m3CF85BB6FAF7A79F7F14355109F03A4C9888DE63_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t0FC8A97F3302BA76A914E7C448813E00218562A1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t71AC02E7631CC104AFEFE094AAE47779ACBF5338_m58286EFCC7C188E71A3C22E99816BAD1221E9963_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t71AC02E7631CC104AFEFE094AAE47779ACBF5338 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936_m4DD4A621AE7C62CCCFE0F911FB6AD9CF73B15097_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008_m833AC6E75CDDAA84331AF60F09A8A228B69B09E8_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1_m1CB20DEA0709FCFF96E638466845FE3036592A9B_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD_m7ABBE55FEF9BCE1B3AA9CE16B251A082706BC7CF_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED_m46AD6C4D1968F464E727BCC21BB21B1CC93748BC_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F_m3D9ECFDCDABF553064B3331073E94CFDA7C55A02_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B_m1548A00A20CE6E06900045E9A82A3B47A68513BB_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213_m2F129A9D6FBC97C3B36C0F7CD08899532C4A7442_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
