#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodBase_t;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07;
IL2CPP_EXTERN_C String_t* _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68;
IL2CPP_EXTERN_C String_t* _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9959D6967BF0405610B0041D446B892A631997;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C;
IL2CPP_EXTERN_C String_t* _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B;
IL2CPP_EXTERN_C String_t* _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176;
IL2CPP_EXTERN_C String_t* _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32;
IL2CPP_EXTERN_C String_t* _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral55AB22B2467908555951B9F987BB50A5863EEBDA;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C;
IL2CPP_EXTERN_C String_t* _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF;
IL2CPP_EXTERN_C String_t* _stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88;
IL2CPP_EXTERN_C String_t* _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
IL2CPP_EXTERN_C String_t* _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185;
IL2CPP_EXTERN_C String_t* _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845;
IL2CPP_EXTERN_C String_t* _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156;
IL2CPP_EXTERN_C String_t* _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1;
IL2CPP_EXTERN_C String_t* _stringLiteral82B3E36E6E8906C154EE4B2CED4D1C81C11CC4A8;
IL2CPP_EXTERN_C String_t* _stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3;
IL2CPP_EXTERN_C String_t* _stringLiteral852A452931F9E561DB70A527B5DFF5E07394E85D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
IL2CPP_EXTERN_C String_t* _stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552;
IL2CPP_EXTERN_C String_t* _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055;
IL2CPP_EXTERN_C String_t* _stringLiteral99FC1E77413E0B4E1641BA07B63F36293BA59B6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D;
IL2CPP_EXTERN_C String_t* _stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC608D7891AF4D70F7C0529C9B6A7D0C628BE0E25;
IL2CPP_EXTERN_C String_t* _stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904;
IL2CPP_EXTERN_C String_t* _stringLiteralCE42F595933CDB601C52327F32C83017C908C430;
IL2CPP_EXTERN_C String_t* _stringLiteralD235D81E8F45112183F59836279ED31B64FA3CBA;
IL2CPP_EXTERN_C String_t* _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E;
IL2CPP_EXTERN_C String_t* _stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC;
IL2CPP_EXTERN_C String_t* _stringLiteralEB86645FD4CAF139C7CFC0A789470B8A75034AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaProxy_hashCode_m7991233D3D6D5F994E7BC59C3CB65DBBEDF8CA93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_CreateJNIArgArray_mA3976C6F68E0BF29442CB20FBD69CBA72EAB9D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E;
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t72288DCFA45FEA57618C4D622E6CC0D7F3747E3F 
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};
struct AndroidJNISafe_t8F403436E87D77E436B1E426920A105A4E05BEBA  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	StringBuilder_t* ___m_ChunkPrevious_1;
	int32_t ___m_ChunkLength_2;
	int32_t ___m_ChunkOffset_3;
	int32_t ___m_MaxCapacity_4;
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
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};
struct Permission_t915D93FAF4E75226FA1C92144D9291C232C15803 
{
	union
	{
		struct
		{
		};
		uint8_t Permission_t915D93FAF4E75226FA1C92144D9291C232C15803__padding[1];
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
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
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value_0;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	intptr_t ___proxyObject_1;
};
struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908  : public RuntimeObject
{
};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle_0;
};
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	bool ___m_disposed_0;
	intptr_t ___m_jobject_1;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
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
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer_0;
	int32_t ____length_1;
};
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	String_t* ___mJavaStackTrace_18;
};
struct AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___mRunnable_4;
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints_0;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_Activity_0;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	intptr_t ___s_HashCodeMethodID_3;
};
struct AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_ReflectionHelperClass_0;
	intptr_t ___s_ReflectionHelperGetConstructorID_1;
	intptr_t ___s_ReflectionHelperGetMethodID_2;
	intptr_t ___s_ReflectionHelperGetFieldID_3;
	intptr_t ___s_ReflectionHelperGetFieldSignature_4;
	intptr_t ___s_ReflectionHelperNewProxyInstance_5;
	intptr_t ___s_ReflectionHelperSetNativeExceptionOnProxy_6;
	intptr_t ___s_FieldGetDeclaringClass_7;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* m_Items[1];

	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_gshared (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7 (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0 (intptr_t ___0_globalref, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_inline (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy_run_m014F4E0A8ED56A054096F2BAC90653716D2A0D46 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_Invoke_mD2B81C060739751DA8148FB2B8C3DBCBE1EE4FCE (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, intptr_t ___1_javaArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_javaInterface, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A (intptr_t ___0_globalref, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94 (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_mFD918AF40C7599B983DE0FEB557246150DC93AF6 (intptr_t ___0_proxy, Exception_t* ___1_e, bool ___2_methodNotFound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0 (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_m354F5BA4592A9B712951AE557F0B0011B7113C0E (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_m2C8ACD78C001428B06BA5B1E5D7341B68A484EE1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65 (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB (intptr_t ___0_obj1, intptr_t ___1_obj2, const RuntimeMethod* method) ;
inline void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40 (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_constructorID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m0DEC2DAD0835B99FC58E6B44F14994A7EE05565E (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536 (intptr_t ___0_obj, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A (String_t* ___0_chars, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m7186730B5574226E150225A11B48B4B15FC74020 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7 (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF (intptr_t ___0_player, intptr_t ___1_delegateHandle, intptr_t ___2_interfaze, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_runnable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C (intptr_t ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213 (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043 (int32_t ___0_size, intptr_t ___1_clazz, intptr_t ___2_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2 (intptr_t ___0_array, int32_t ___1_index, intptr_t ___2_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0 (intptr_t ___0_javaClass, String_t* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B (intptr_t ___0_refMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27 (intptr_t ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259 (intptr_t ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184 (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95 (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Permission_GetActivity_mB826613D19EC4BADCAA411A99D2D1B10FEC65153 (const RuntimeMethod* method) ;
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___0_fieldName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36 (intptr_t ___0_player, intptr_t ___1_delegateHandle, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___2_proxy, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_CreateJNIArgArray_mA3976C6F68E0BF29442CB20FBD69CBA72EAB9D45 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m44D912ADAF5C0E49A914AD7B1DE776C13AC4F61A (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_mBC04AC9A326AC66A599C56CB1C8EAE11940A72A3 (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_val, String_t* ___1_boxedClass, String_t* ___2_signature, const RuntimeMethod* method) ;
inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049 (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC (String_t* ___0_chars, const RuntimeMethod* method) ;
inline void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*, const RuntimeMethod*))Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m1255E35A517F4BC178F1FC3CA06A6ECDDCF08490 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m42628886D81E2DB3F9802AEC7A872B5EB5044FE7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888 (int8_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F (Il2CppChar* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7 (int16_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56 (int32_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7 (int64_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05 (float* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C (double* ___0_array, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182 (intptr_t* ___0_array, int32_t ___1_length, intptr_t ___2_arrayClass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___0_message, String_t* ___1_javaStackTrace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B (String_t* ___0_chars, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5 (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43 (intptr_t ___0_refMethod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_m495F8FDA574E6645C469B34C297768FCF4038C45 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m6550C24C8D4E39C18D1D9C97FD2DBEED5452DFC2 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_m12188877F62FA50C21D16ABEF706410E81651D50 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m563873CBBD357A5301C122CAF6563B8AA302E43C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_m8A6B5AAB05E1AC468D1E927A02E9ECEA46D933DB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m3409D4BF5A4801BCAB79E4EE0498CD358B283F4A (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_mEC10B7CC01D5C2933E9A993D8C9683EE6C5EB5CD (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mB5EA26617BD31207DFD57C50FD49ECAF659D6CCB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m78EEA97BFBC305BCB3B7578A81EF245F71ADA1A9 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m0EF2AF8C9395B147DCE092F9A1778BF0FB23ACDB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_mD168ECFAF2855BE5A4E61B5EF3EFADAAA7297734 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mD9A45F8ECDE53096DDAC297DEDA6D6309C80BBC3 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_mF3C4822DD3311879591F5BC730DC01ED6F24571F (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m6319B0007021421F5EA1D3660F1322AFE56E9547 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m4A66035AEA817B8F0C1C2C0FA009447116E9A686 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mBED49D3756A1A8FB3038A454AA421734DF87E609 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m63392BAB11BF3A055E39B43A0FB3BFF959AD5253 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_mED891B3ED4526E3CEB3C7B133460E61DCF015432 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mFF5A7095DF874C9536DE192057C0624F7A500FF6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m61006AE6C02C028A0A43761330FDB9C9AE655184 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m3895BC6DD12AFFF33323C1878E32864E166D8283 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_arrayClass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB (intptr_t ___0_array, const RuntimeMethod* method) ;
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* currentDelegate = reinterpret_cast<AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenInst(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStatic(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, String_t* ___0_message, String_t* ___1_javaStackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___1_javaStackTrace;
		__this->___mJavaStackTrace_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mJavaStackTrace_18), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJavaException_get_StackTrace_m28AC922BCC16051CCBA4C7E5F69698264AA7CC27 (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___mJavaStackTrace_18;
		String_t* L_1;
		L_1 = Exception_get_StackTrace_m601D1BDBA58B7BAB3B750ABC5E72C9449F6FD58E(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B2_0 = NULL;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B1_0 = NULL;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* G_B3_1 = NULL;
	{
		__this->___m_disposed_0 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
		G_B1_0 = __this;
	}
	{
		intptr_t L_2 = ___0_jobject;
		intptr_t L_3;
		L_3 = AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_jobject_1 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Finalize_m2EE89F98A391773F885A4A312FD4BD134E0D46D8 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(__this, NULL);
			goto IL_0013;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_jobject_1;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520 (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_disposed_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0036;
	}

IL_000d:
	{
		__this->___m_disposed_0 = (bool)1;
		intptr_t L_2 = __this->___m_jobject_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, 0, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		intptr_t L_5 = __this->___m_jobject_1;
		AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0(L_5, NULL);
	}

IL_0036:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_runnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral22225741051C0DE6E1B24FA555DFA8109FC5CA2B, NULL);
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_runnable;
		__this->___mRunnable_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRunnable_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy_run_m014F4E0A8ED56A054096F2BAC90653716D2A0D46 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, const RuntimeMethod* method) 
{
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = __this->___mRunnable_4;
		NullCheck(L_0);
		AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaRunnableProxy_Invoke_m72839D8A915DA6FB2E25959330E57B4AC884CB77 (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* __this, String_t* ___0_methodName, intptr_t ___1_javaArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		intptr_t L_0 = ___1_javaArgs;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		intptr_t L_3 = ___1_javaArgs;
		int32_t L_4;
		L_4 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_3, NULL);
		V_0 = L_4;
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___0_methodName;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
	}

IL_002a:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		AndroidJavaRunnableProxy_run_m014F4E0A8ED56A054096F2BAC90653716D2A0D46(__this, NULL);
		V_3 = 0;
		goto IL_0049;
	}

IL_003e:
	{
		String_t* L_9 = ___0_methodName;
		intptr_t L_10 = ___1_javaArgs;
		intptr_t L_11;
		L_11 = AndroidJavaProxy_Invoke_mD2B81C060739751DA8148FB2B8C3DBCBE1EE4FCE(__this, L_9, L_10, NULL);
		V_3 = L_11;
		goto IL_0049;
	}

IL_0049:
	{
		intptr_t L_12 = V_3;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_javaInterface;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, L_0, NULL);
		AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_mFA05DF6B31FC284C65D378C02A2A34F277DFE6E5 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_javaInterface, const RuntimeMethod* method) 
{
	{
		__this->___proxyObject_1 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_javaInterface;
		__this->___javaInterface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___javaInterface_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy_Finalize_m6E4C294F2117D7A07E82A315081C9239AFA217E8 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = __this->___proxyObject_1;
			AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A(L_0, NULL);
			goto IL_0018;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	MethodInfo_t* V_6 = NULL;
	bool V_7 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_9 = NULL;
	Exception_t* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Type_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_2 = NULL;
	Type_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	Type_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	String_t* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Type_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_3 = NULL;
	intptr_t G_B22_4;
	memset((&G_B22_4), 0, sizeof(G_B22_4));
	Type_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	intptr_t G_B21_4;
	memset((&G_B21_4), 0, sizeof(G_B21_4));
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_3 = NULL;
	intptr_t G_B23_4;
	memset((&G_B23_4), 0, sizeof(G_B23_4));
	{
		V_0 = (Exception_t*)NULL;
		V_1 = ((int32_t)60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_2 = L_1;
		V_4 = 0;
		goto IL_0039;
	}

IL_0014:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = V_2;
		int32_t L_3 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (!L_7)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_2;
			goto IL_0028;
		}
		G_B2_0 = L_3;
		G_B2_1 = L_2;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___1_args;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0032;
	}

IL_0028:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0032:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Type_t*)G_B4_0);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		int32_t L_16 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___1_args;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0014;
		}
	}
	{
	}
	try
	{
		{
			Type_t* L_19;
			L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
			String_t* L_20 = ___0_methodName;
			int32_t L_21 = V_1;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_2;
			NullCheck(L_19);
			MethodInfo_t* L_23;
			L_23 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_19, L_20, L_21, (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_22, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
			V_6 = L_23;
			MethodInfo_t* L_24 = V_6;
			bool L_25;
			L_25 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_24, (MethodInfo_t*)NULL, NULL);
			V_7 = L_25;
			bool L_26 = V_7;
			if (!L_26)
			{
				goto IL_007d_1;
			}
		}
		{
			MethodInfo_t* L_27 = V_6;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = ___1_args;
			NullCheck(L_27);
			RuntimeObject* L_29;
			L_29 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_27, __this, L_28, NULL);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30;
			L_30 = _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0(L_29, NULL);
			V_8 = L_30;
			goto IL_0189;
		}

IL_007d_1:
		{
			goto IL_0097;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008e;
		}
		throw e;
	}

CATCH_0080:
	{
		V_9 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*));
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_31 = V_9;
		NullCheck(L_31);
		Exception_t* L_32;
		L_32 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_31, NULL);
		V_0 = L_32;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0097;
	}

CATCH_008e:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_33 = V_10;
		V_0 = L_33;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0097;
	}

IL_0097:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = ___1_args;
		NullCheck(L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)));
		V_3 = L_35;
		V_11 = 0;
		goto IL_00b8;
	}

IL_00a5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_3;
		int32_t L_37 = V_11;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_38 = V_2;
		int32_t L_39 = V_11;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Type_t* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_41);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (String_t*)L_42);
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00b8:
	{
		int32_t L_44 = V_11;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_45 = V_2;
		NullCheck(L_45);
		V_12 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))? 1 : 0);
		bool L_46 = V_12;
		if (L_46)
		{
			goto IL_00a5;
		}
	}
	{
		Exception_t* L_47 = V_0;
		V_13 = (bool)((!(((RuntimeObject*)(Exception_t*)L_47) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0120;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		Type_t* L_51;
		L_51 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_52 = L_51;
		if (L_52)
		{
			G_B18_0 = L_52;
			G_B18_1 = 0;
			G_B18_2 = L_50;
			G_B18_3 = L_50;
			goto IL_00e4;
		}
		G_B17_0 = L_52;
		G_B17_1 = 0;
		G_B17_2 = L_50;
		G_B17_3 = L_50;
	}
	{
		G_B19_0 = ((String_t*)(NULL));
		G_B19_1 = G_B17_1;
		G_B19_2 = G_B17_2;
		G_B19_3 = G_B17_3;
		goto IL_00e9;
	}

IL_00e4:
	{
		NullCheck(G_B18_0);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B18_0);
		G_B19_0 = L_53;
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
	}

IL_00e9:
	{
		NullCheck(G_B19_2);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (String_t*)G_B19_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = G_B19_3;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_54;
		String_t* L_56 = ___0_methodName;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_55;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_3;
		String_t* L_60;
		L_60 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB)), L_59, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_60);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_58;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)));
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_61, NULL);
		Exception_t* L_63 = V_0;
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_64 = (TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)));
		TargetInvocationException__ctor_mEE5FEDD311B4396452D5AFF140B2D79907447F94(L_64, L_62, L_63, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaProxy_Invoke_m9D765F3E7DC37C5CB14C4884F2873B48D2F96BFB_RuntimeMethod_var)));
	}

IL_0120:
	{
		intptr_t L_65;
		L_65 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEB0FDB1D6EA8C345A32F7C7B64C24BEDF2AB6FFC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		Type_t* L_69;
		L_69 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		Type_t* L_70 = L_69;
		if (L_70)
		{
			G_B22_0 = L_70;
			G_B22_1 = 1;
			G_B22_2 = L_68;
			G_B22_3 = L_68;
			G_B22_4 = L_65;
			goto IL_0143;
		}
		G_B21_0 = L_70;
		G_B21_1 = 1;
		G_B21_2 = L_68;
		G_B21_3 = L_68;
		G_B21_4 = L_65;
	}
	{
		G_B23_0 = ((String_t*)(NULL));
		G_B23_1 = G_B21_1;
		G_B23_2 = G_B21_2;
		G_B23_3 = G_B21_3;
		G_B23_4 = G_B21_4;
		goto IL_0148;
	}

IL_0143:
	{
		NullCheck(G_B22_0);
		String_t* L_71;
		L_71 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B22_0);
		G_B23_0 = L_71;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
	}

IL_0148:
	{
		NullCheck(G_B23_2);
		(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (String_t*)G_B23_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = G_B23_3;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		String_t* L_74 = ___0_methodName;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_74);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_73;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = V_3;
		String_t* L_78;
		L_78 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_77, NULL);
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_76;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_80;
		L_80 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_79, NULL);
		Exception_t* L_81 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_81, L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		AndroidReflection_SetNativeExceptionOnProxy_mFD918AF40C7599B983DE0FEB557246150DC93AF6(G_B23_4, L_81, (bool)1, NULL);
		V_8 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0189;
	}

IL_0189:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_82 = V_8;
		return L_82;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_mCAE9C5E669AD50DE372494E12224FF1F31A43F1D (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___1_javaArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_0 = ___1_javaArgs;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0046;
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_4 = ___1_javaArgs;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731(L_7, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_12, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_14 = ___1_javaArgs;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0040;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_19 = ___1_javaArgs;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_22, NULL);
	}

IL_0040:
	{
	}

IL_0041:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0046:
	{
		int32_t L_24 = V_1;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_25 = ___1_javaArgs;
		NullCheck(L_25);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_27 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29;
		L_29 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4, __this, L_27, L_28);
		V_5 = L_29;
		goto IL_005e;
	}

IL_005e:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_5;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_Invoke_mD2B81C060739751DA8148FB2B8C3DBCBE1EE4FCE (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, intptr_t ___1_javaArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852A452931F9E561DB70A527B5DFF5E07394E85D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t V_8 = 0;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_11 = NULL;
	bool V_12 = false;
	int32_t G_B5_0 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B9_0 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B18_1 = NULL;
	int32_t G_B17_0 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B17_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* G_B19_2 = NULL;
	{
		V_0 = 0;
		intptr_t L_0 = ___1_javaArgs;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		intptr_t L_3 = ___1_javaArgs;
		int32_t L_4;
		L_4 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_3, NULL);
		V_0 = L_4;
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = ___0_methodName;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807, NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
	}

IL_002b:
	{
		V_3 = (bool)G_B5_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		intptr_t L_9 = ___1_javaArgs;
		intptr_t L_10;
		L_10 = AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0(L_9, 0, NULL);
		V_4 = L_10;
		intptr_t L_11 = V_4;
		bool L_12;
		L_12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, 0, NULL);
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		intptr_t L_13 = V_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_14, L_13, NULL);
		G_B9_0 = L_14;
		goto IL_0051;
	}

IL_0050:
	{
		G_B9_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
	}

IL_0051:
	{
		V_5 = G_B9_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_5;
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* >::Invoke(7, __this, L_15);
		intptr_t L_17;
		L_17 = AndroidJNIHelper_Box_m354F5BA4592A9B712951AE557F0B0011B7113C0E(L_16, NULL);
		V_6 = L_17;
		goto IL_0112;
	}

IL_0067:
	{
		int32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_19 = ___0_methodName;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral852A452931F9E561DB70A527B5DFF5E07394E85D, NULL);
		G_B13_0 = ((int32_t)(L_20));
		goto IL_0078;
	}

IL_0077:
	{
		G_B13_0 = 0;
	}

IL_0078:
	{
		V_7 = (bool)G_B13_0;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		intptr_t L_23;
		L_23 = AndroidJNIHelper_Box_m2C8ACD78C001428B06BA5B1E5D7341B68A484EE1(L_22, NULL);
		V_6 = L_23;
		goto IL_0112;
	}

IL_0091:
	{
		int32_t L_24 = V_0;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_25 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_1 = L_25;
		V_8 = 0;
		goto IL_00cb;
	}

IL_009d:
	{
		intptr_t L_26 = ___1_javaArgs;
		int32_t L_27 = V_8;
		intptr_t L_28;
		L_28 = AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0(L_26, L_27, NULL);
		V_9 = L_28;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_29 = V_1;
		int32_t L_30 = V_8;
		intptr_t L_31 = V_9;
		bool L_32;
		L_32 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_31, 0, NULL);
		if (L_32)
		{
			G_B18_0 = L_30;
			G_B18_1 = L_29;
			goto IL_00bc;
		}
		G_B17_0 = L_30;
		G_B17_1 = L_29;
	}
	{
		G_B19_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)(NULL));
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00c3;
	}

IL_00bc:
	{
		intptr_t L_33 = V_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34;
		L_34 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_33, NULL);
		G_B19_0 = L_34;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00c3:
	{
		NullCheck(G_B19_2);
		ArrayElementTypeCheck (G_B19_2, G_B19_0);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)G_B19_0);
		int32_t L_35 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00cb:
	{
		int32_t L_36 = V_8;
		int32_t L_37 = V_0;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_39 = ___0_methodName;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_40 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41;
		L_41 = VirtualFuncInvoker2< AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* >::Invoke(5, __this, L_39, L_40);
		V_11 = L_41;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0105:
			{
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42 = V_11;
					if (!L_42)
					{
						goto IL_0111;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_43 = V_11;
					NullCheck(L_43);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_43);
				}

IL_0111:
				{
					return;
				}
			}
		});
		try
		{
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = V_11;
				V_12 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_44) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_45 = V_12;
				if (!L_45)
				{
					goto IL_00f5_1;
				}
			}
			{
				V_6 = 0;
				goto IL_0112;
			}

IL_00f5_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_46 = V_11;
				NullCheck(L_46);
				intptr_t L_47;
				L_47 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_46, NULL);
				intptr_t L_48;
				L_48 = AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65(L_47, NULL);
				V_6 = L_48;
				goto IL_0112;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0112:
	{
		intptr_t L_49 = V_6;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaProxy_equals_mC390139E035408E858940EB523D45ED3C8377110 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_obj;
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		intptr_t L_3 = __this->___proxyObject_1;
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaProxy_hashCode_m7991233D3D6D5F994E7BC59C3CB65DBBEDF8CA93 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_hashCode_m7991233D3D6D5F994E7BC59C3CB65DBBEDF8CA93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		uint32_t L_0 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)1) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), AndroidJavaProxy_hashCode_m7991233D3D6D5F994E7BC59C3CB65DBBEDF8CA93_RuntimeMethod_var);
		intptr_t L_1 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)1), (int32_t)L_0));
		int8_t* L_2 = (int8_t*) (L_1 ? alloca(L_1) : NULL);
		memset(L_2, 0, L_1);
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_3), (void*)(L_2), 1, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_3;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_4 = V_1;
		V_0 = L_4;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_5;
		L_5 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (0), ((&V_0))->____length_1);
		intptr_t L_6;
		L_6 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		L_5->___l_8 = L_6;
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_7 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2;
		intptr_t L_8;
		L_8 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_7, NULL);
		intptr_t L_9 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_HashCodeMethodID_3;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_0;
		int32_t L_11;
		L_11 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(__this, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = 0;
		intptr_t L_0 = __this->___proxyObject_1;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_3 = __this->___proxyObject_1;
		intptr_t L_4;
		L_4 = AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, 0, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		intptr_t L_8 = __this->___proxyObject_1;
		AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D(L_8, NULL);
		__this->___proxyObject_1 = 0;
	}

IL_0050:
	{
	}

IL_0051:
	{
		intptr_t L_9 = V_0;
		bool L_10;
		L_10 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, 0, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		intptr_t L_12;
		L_12 = AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F(__this, NULL);
		V_0 = L_12;
		intptr_t L_13 = V_0;
		intptr_t L_14;
		L_14 = AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA(L_13, NULL);
		__this->___proxyObject_1 = L_14;
	}

IL_0075:
	{
		intptr_t L_15 = V_0;
		V_4 = L_15;
		goto IL_007a;
	}

IL_007a:
	{
		intptr_t L_16 = V_4;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__cctor_m44B4074B6A6D8193D86E65DB4C165C2371615D63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteralA7BDDC7501EECF3151484AEBEF8627D03E365077, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2), (void*)L_1);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_JavaLangSystemClass_2;
		intptr_t L_3;
		L_3 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_2, NULL);
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_3, _stringLiteral27F2FC8F8A0DFFAC96353D8AC1CDD811C4A7644B, _stringLiteralAFC4A16FF7AEE06FF380F93BBF26ACF1014CFB82, (bool)1, NULL);
		((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___s_HashCodeMethodID_3 = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___0_className;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA39614FE650CC59501DA62392479CBAD5E59947A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___0_jobject;
		intptr_t L_5;
		L_5 = AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3(L_4, NULL);
		V_0 = L_5;
		intptr_t L_6 = ___0_jobject;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_7 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_7, L_6, NULL);
		__this->___m_jobject_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_7);
		intptr_t L_8 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_9, L_8, NULL);
		__this->___m_jclass_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_9);
		intptr_t L_10 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields*)il2cpp_codegen_static_fields_for(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___enableDebugPrints_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0016;
	}

IL_000f:
	{
		String_t* L_2 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
	}

IL_0016:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m1284CB7198514B8C06A2BF794ACDC909DC26443F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_className;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA38BB5AAC6BE96538C93F39E86053E620B41407D, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		String_t* L_2 = ___0_className;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_4;
		L_4 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_6 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_6, L_5, NULL);
		__this->___m_jclass_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)L_6);
		intptr_t L_7 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_7, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = __this->___m_jclass_2;
		intptr_t L_9;
		L_9 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_8, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___1_args;
		intptr_t L_11;
		L_11 = AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40(L_9, L_10, NULL);
		V_1 = L_11;
		intptr_t L_12 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
		AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5(__this, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_constructorID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0008:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_002a;
	}

IL_0012:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_2;
		uint32_t L_4 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)((uintptr_t)L_3) * (uintptr_t)L_4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), AndroidJavaObject__AndroidJavaObject_m19164C456D01B4A1B0D4B186A0E38C12C956ABE5_RuntimeMethod_var);
		intptr_t L_5 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_3), (int32_t)L_4));
		int8_t* L_6 = (int8_t*) (L_5 ? alloca(L_5) : NULL);
		memset(L_6, 0, L_5);
		int32_t L_7 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_8), (void*)(L_6), L_7, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_3 = L_8;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_9 = V_3;
		V_1 = L_9;
	}

IL_002a:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10 = V_1;
		V_0 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_11, L_12, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___1_args;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_14 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9(L_13, L_14, NULL);
				return;
			}
		});
		try
		{
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = __this->___m_jclass_2;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			intptr_t L_17 = ___0_constructorID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_NewObject_m0DEC2DAD0835B99FC58E6B44F14994A7EE05565E(L_16, L_17, L_18, NULL);
			V_4 = L_19;
			intptr_t L_20 = V_4;
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_21, L_20, NULL);
			__this->___m_jobject_1 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)L_21);
			intptr_t L_22 = V_4;
			AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_22, NULL);
			goto IL_006c;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Finalize_m87374EE46B27BE3559CACED8A1B62475200AB5AA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			VirtualActionInvoker1< bool >::Invoke(5, __this, (bool)1);
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m87886676A84FA079C0FE45E6C31D790D764652BE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		V_0 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_2 = __this->___m_jobject_1;
		NullCheck(L_2);
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_2, NULL);
		__this->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0023:
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jclass_2;
		V_1 = (bool)((!(((RuntimeObject*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = __this->___m_jclass_2;
		NullCheck(L_5);
		GlobalJavaObjectRef_Dispose_m45E67345587866D5A50D250D1C17425110703520(L_5, NULL);
		__this->___m_jclass_2 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_jclass_2), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
	}

IL_0045:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				intptr_t L_0 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_1 = ___0_jobject;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				intptr_t L_0 = ___0_jclass;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_1 = ___0_jclass;
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_2, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawObject_mC5B8B60BEF515F5EE2A113D60991A433DA740C69 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jobject_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = __this->___m_jobject_1;
		intptr_t L_2;
		L_2 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject__GetRawClass_m470EAEBF8B0BD365FD13F1C6F55119836452FDFA (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass_2;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		String_t* L_0 = ___0_className;
		AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__AndroidJavaClass_mF481A9584D78F32C64219FDA49CB84B6F0A017DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_className;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral204582C83E45E7B0A9BD3FA17ADE77EFC4EC4D6A, L_0, NULL);
		AndroidJavaObject_DebugPrint_m047934BF3D1E6676FDDBDA038E1AF387C5413533(__this, L_1, NULL);
		String_t* L_2 = ___0_className;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_2, ((int32_t)46), ((int32_t)47), NULL);
		intptr_t L_4;
		L_4 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_6 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_6, L_5, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_6);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
		intptr_t L_7 = V_0;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AndroidJavaObject__ctor_m67B4EEAB015B123D5A3EDCAD914B4795A3B67F04(__this, NULL);
		intptr_t L_0 = ___0_jclass;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65572413F78A98D745AF7C2CCAF152BD2C90FF88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0_RuntimeMethod_var)));
	}

IL_0023:
	{
		intptr_t L_4 = ___0_jclass;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_5 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_5, L_4, NULL);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jclass_2), (void*)L_5);
		((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this)->___m_jobject_1), (void*)(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___0_t;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Type_t* L_0 = ___0_t;
		Type_t* L_1 = ___1_from;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_clazz;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_3 = V_0;
			String_t* L_4 = ___1_methodName;
			String_t* L_5 = ___2_signature;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7 (String_t* ___0_clazz, String_t* ___1_methodName, String_t* ___2_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_clazz;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_3 = V_0;
			String_t* L_4 = ___1_methodName;
			String_t* L_5 = ___2_signature;
			intptr_t L_6;
			L_6 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_3, L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		intptr_t L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}
		});
		try
		{
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
			NullCheck(L_3);
			intptr_t L_4 = ___0_jclass;
			((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = ___1_signature;
			intptr_t L_7;
			L_7 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_6, NULL);
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_7;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_8 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_9;
			L_9 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_8, NULL);
			intptr_t L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_11 = V_0;
			intptr_t L_12;
			L_12 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_9, L_10, L_11, NULL);
			V_1 = L_12;
			goto IL_0055;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		intptr_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				NullCheck(L_3);
				intptr_t L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			intptr_t L_6 = ___0_jclass;
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = ___1_methodName;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_8, NULL);
			((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = ___2_signature;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_11, NULL);
			((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = ___3_isStatic;
			((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
				NullCheck(L_1);
				intptr_t L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				NullCheck(L_3);
				intptr_t L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_4, NULL);
				return;
			}
		});
		try
		{
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
			NullCheck(L_5);
			intptr_t L_6 = ___0_jclass;
			((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_6;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = ___1_fieldName;
			intptr_t L_9;
			L_9 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_8, NULL);
			((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___l_8 = L_9;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = ___2_signature;
			intptr_t L_12;
			L_12 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_11, NULL);
			((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_12;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = ___3_isStatic;
			((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___z_0 = L_14;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_15 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
			intptr_t L_16;
			L_16 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_15, NULL);
			intptr_t L_17 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_0;
			intptr_t L_19;
			L_19 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_16, L_17, L_18, NULL);
			V_1 = L_19;
			goto IL_0086;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		intptr_t L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27 (intptr_t ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_field;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7;
		intptr_t L_2;
		L_2 = AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057(L_0, L_1, (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)NULL, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259 (intptr_t ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___0_field;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_3, NULL);
		intptr_t L_5 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
		String_t* L_7;
		L_7 = AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE(L_4, L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF (intptr_t ___0_player, intptr_t ___1_delegateHandle, intptr_t ___2_interfaze, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___0_player;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___1_delegateHandle), NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___j_5 = L_4;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = V_0;
		NullCheck(L_5);
		intptr_t L_6 = ___2_interfaze;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___l_8 = L_6;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_7 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_8;
		L_8 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_7, NULL);
		intptr_t L_9 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_10 = V_0;
		intptr_t L_11;
		L_11 = AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_004d;
	}

IL_004d:
	{
		intptr_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection_SetNativeExceptionOnProxy_mFD918AF40C7599B983DE0FEB557246150DC93AF6 (intptr_t ___0_proxy, Exception_t* ___1_e, bool ___2_methodNotFound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1 = V_0;
		NullCheck(L_1);
		intptr_t L_2 = ___0_proxy;
		((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_2;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
		NullCheck(L_3);
		Exception_t* L_4 = ___1_e;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_4, NULL);
		intptr_t L_6;
		L_6 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_5, NULL);
		V_1 = L_6;
		int64_t L_7;
		L_7 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_1), NULL);
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___j_5 = L_7;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ___2_methodNotFound;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___z_0 = L_9;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24(L_10, NULL);
		intptr_t L_12 = ((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperSetNativeExceptionOnProxy_6;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_13 = V_0;
		AndroidJNISafe_CallStaticVoidMethod_m7186730B5574226E150225A11B48B4B15FC74020(L_11, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReflection__cctor_m59365F63F057115EA8FBCB0AFBAF94012DAAC622 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29533AC1D363321ECFB96B50441B9418763D4176);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997CC228CD49CB51A21F3301055CBEE380042055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE42F595933CDB601C52327F32C83017C908C430);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_1 = (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8*)il2cpp_codegen_object_new(GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8_il2cpp_TypeInfo_var);
		GlobalJavaObjectRef__ctor_mFE5679D1B51F51CBF11721773C0D767286AC22E8(L_1, L_0, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperClass_0), (void*)L_1);
		intptr_t L_2;
		L_2 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralF0C6BCBD6A21B83CD30A85140E181D764C4E1198, _stringLiteralB40004C0135CEF645A079B4A245A04F302EA80F2, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetConstructorID_1 = L_2;
		intptr_t L_3;
		L_3 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral95743D14EBFB666745B1AE894875A26AD08F3552, _stringLiteral721D70DB4B32A2AEDC1FCA8FD3B608ED50CE0156, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetMethodID_2 = L_3;
		intptr_t L_4;
		L_4 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral7300AD57DB611A5D85FBD10E00B41B82F2DC677F, _stringLiteralCE42F595933CDB601C52327F32C83017C908C430, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldID_3 = L_4;
		intptr_t L_5;
		L_5 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral997CC228CD49CB51A21F3301055CBEE380042055, _stringLiteral42B0C97654CB0F536C2C643B8D4D9C2C7B8D71AF, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperGetFieldSignature_4 = L_5;
		intptr_t L_6;
		L_6 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteral77E7609799DC0A299115C3AE174DEE8AEDDCBC05, _stringLiteralD907BF066F60C9788357C51002DD677DA3E090C5, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperNewProxyInstance_5 = L_6;
		intptr_t L_7;
		L_7 = AndroidReflection_GetStaticMethodID_mF8378F28D71354360CA9F8AAF8EAF24A3B9594CF(_stringLiteralC963684A2BAB3B6684B4D82B4781E59FECC45904, _stringLiteralE46DFB424F1D16B497976AB817F603BF3B170AF9, _stringLiteralFFF76791D0FE1272AD994E3611223AB6D219F5FC, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_ReflectionHelperSetNativeExceptionOnProxy_6 = L_7;
		intptr_t L_8;
		L_8 = AndroidReflection_GetMethodID_m4318CE3C372444B966909092BF046833A9733EE7(_stringLiteralAD2FC71AE60261B73977F0195D3744E79CCC12B9, _stringLiteral29533AC1D363321ECFB96B50441B9418763D4176, _stringLiteralBE3E2515DEF82B38D4ACFEBDC9D69E894CA05BBE, NULL);
		((AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var))->___s_FieldGetDeclaringClass_7 = L_8;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36 (intptr_t ___0_player, intptr_t ___1_delegateHandle, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___2_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_player;
		intptr_t L_1 = ___1_delegateHandle;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_2 = ___2_proxy;
		NullCheck(L_2);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = L_2->___javaInterface_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = AndroidReflection_NewProxyInstance_m052E9828C670A85F3B9DD9D4632A9A6B52FB5EDF(L_0, L_1, L_4, NULL);
		V_0 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_jrunnable;
		AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1* L_1 = (AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1*)il2cpp_codegen_object_new(AndroidJavaRunnableProxy_t547CDA51566934F90B55642DCD5824DB5FC388F1_il2cpp_TypeInfo_var);
		AndroidJavaRunnableProxy__ctor_mB173256AF7629962B226343C4F6F94FFFF7317C3(L_1, L_0, NULL);
		intptr_t L_2;
		L_2 = AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_InvokeJavaProxyMethod_mCA9BD35B5AE99B6DFABBFE9968DD1EBE931F70C2 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, intptr_t ___1_jmethodName, intptr_t ___2_jargs, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_0 = ___0_proxy;
		intptr_t L_1 = ___1_jmethodName;
		String_t* L_2;
		L_2 = AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C(L_1, NULL);
		intptr_t L_3 = ___2_jargs;
		NullCheck(L_0);
		intptr_t L_4;
		L_4 = VirtualFuncInvoker2< intptr_t, String_t*, intptr_t >::Invoke(6, L_0, L_2, L_3);
		V_0 = L_4;
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_5 = ___0_proxy;
		NullCheck(L_5);
		intptr_t L_6;
		L_6 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(L_5, NULL);
		Exception_t* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var)));
		AndroidReflection_SetNativeExceptionOnProxy_mFD918AF40C7599B983DE0FEB557246150DC93AF6(L_6, L_7, (bool)0, NULL);
		V_0 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}

IL_002a:
	{
		intptr_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_CreateJNIArgArray_mA3976C6F68E0BF29442CB20FBD69CBA72EAB9D45 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_ret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Type_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	Type_t* G_B36_0 = NULL;
	String_t* G_B36_1 = NULL;
	String_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	{
		V_0 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		V_1 = L_0;
		V_2 = 0;
		goto IL_02e9;
	}

IL_000d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		RuntimeObject* L_5 = V_3;
		V_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_8;
		L_8 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_7), ((&___1_ret))->____length_1);
		L_8->___l_8 = 0;
		goto IL_02e0;
	}

IL_0033:
	{
		RuntimeObject* L_9 = V_3;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_10, NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_01ad;
		}
	}
	{
		RuntimeObject* L_13 = V_3;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_16;
		L_16 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_15), ((&___1_ret))->____length_1);
		RuntimeObject* L_17 = V_3;
		L_16->___i_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_006f:
	{
		RuntimeObject* L_18 = V_3;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_20 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_21;
		L_21 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_20), ((&___1_ret))->____length_1);
		RuntimeObject* L_22 = V_3;
		L_21->___z_0 = ((*(bool*)((bool*)(bool*)UnBox(L_22, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_0096:
	{
		RuntimeObject* L_23 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_23, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00cb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD956959ACBEB8436506C180DF3D8E268AAA4C614, NULL);
		int32_t L_25 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_26;
		L_26 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_25), ((&___1_ret))->____length_1);
		RuntimeObject* L_27 = V_3;
		L_26->___b_1 = ((int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_27, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))));
		goto IL_01a7;
	}

IL_00cb:
	{
		RuntimeObject* L_28 = V_3;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_28, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_30 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_31;
		L_31 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_30), ((&___1_ret))->____length_1);
		RuntimeObject* L_32 = V_3;
		L_31->___b_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_32, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_00f2:
	{
		RuntimeObject* L_33 = V_3;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_33, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_35 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_36;
		L_36 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_35), ((&___1_ret))->____length_1);
		RuntimeObject* L_37 = V_3;
		L_36->___s_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_37, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_0119:
	{
		RuntimeObject* L_38 = V_3;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_38, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_40 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_41;
		L_41 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_40), ((&___1_ret))->____length_1);
		RuntimeObject* L_42 = V_3;
		L_41->___j_5 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_42, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_013d:
	{
		RuntimeObject* L_43 = V_3;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_43, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_45 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_46;
		L_46 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_45), ((&___1_ret))->____length_1);
		RuntimeObject* L_47 = V_3;
		L_46->___f_6 = ((*(float*)((float*)(float*)UnBox(L_47, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_0161:
	{
		RuntimeObject* L_48 = V_3;
		V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_48, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_50 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_51;
		L_51 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_50), ((&___1_ret))->____length_1);
		RuntimeObject* L_52 = V_3;
		L_51->___d_7 = ((*(double*)((double*)(double*)UnBox(L_52, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		goto IL_01a7;
	}

IL_0185:
	{
		RuntimeObject* L_53 = V_3;
		V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_53, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_55 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_56;
		L_56 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_55), ((&___1_ret))->____length_1);
		RuntimeObject* L_57 = V_3;
		L_56->___c_2 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_57, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
	}

IL_01a7:
	{
		goto IL_02e0;
	}

IL_01ad:
	{
		RuntimeObject* L_58 = V_3;
		V_15 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_58, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_59 = V_15;
		if (!L_59)
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_60 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_61;
		L_61 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_60), ((&___1_ret))->____length_1);
		RuntimeObject* L_62 = V_3;
		intptr_t L_63;
		L_63 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(((String_t*)CastclassSealed((RuntimeObject*)L_62, String_t_il2cpp_TypeInfo_var)), NULL);
		L_61->___l_8 = L_63;
		goto IL_02e0;
	}

IL_01db:
	{
		RuntimeObject* L_64 = V_3;
		V_16 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_64, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_65 = V_16;
		if (!L_65)
		{
			goto IL_0209;
		}
	}
	{
		int32_t L_66 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_67;
		L_67 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_66), ((&___1_ret))->____length_1);
		RuntimeObject* L_68 = V_3;
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_68, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		intptr_t L_69;
		L_69 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_68, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		L_67->___l_8 = L_69;
		goto IL_02e0;
	}

IL_0209:
	{
		RuntimeObject* L_70 = V_3;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_70, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_71 = V_17;
		if (!L_71)
		{
			goto IL_0237;
		}
	}
	{
		int32_t L_72 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_73;
		L_73 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_72), ((&___1_ret))->____length_1);
		RuntimeObject* L_74 = V_3;
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_74, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		intptr_t L_75;
		L_75 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_74, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)), NULL);
		L_73->___l_8 = L_75;
		goto IL_02e0;
	}

IL_0237:
	{
		RuntimeObject* L_76 = V_3;
		V_18 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_76, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_0262;
		}
	}
	{
		int32_t L_78 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_79;
		L_79 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_78), ((&___1_ret))->____length_1);
		RuntimeObject* L_80 = V_3;
		intptr_t L_81;
		L_81 = _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213(((RuntimeArray*)CastclassClass((RuntimeObject*)L_80, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		L_79->___l_8 = L_81;
		goto IL_02e0;
	}

IL_0262:
	{
		RuntimeObject* L_82 = V_3;
		V_19 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_82, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_83 = V_19;
		if (!L_83)
		{
			goto IL_028d;
		}
	}
	{
		int32_t L_84 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_85;
		L_85 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_84), ((&___1_ret))->____length_1);
		RuntimeObject* L_86 = V_3;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_86, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_87;
		L_87 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_86, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		L_85->___l_8 = L_87;
		goto IL_02e0;
	}

IL_028d:
	{
		RuntimeObject* L_88 = V_3;
		V_20 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_88, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_02b8;
		}
	}
	{
		int32_t L_90 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_91;
		L_91 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_ret))->____pointer_0))->value, (L_90), ((&___1_ret))->____length_1);
		RuntimeObject* L_92 = V_3;
		intptr_t L_93;
		L_93 = AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_92, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		L_91->___l_8 = L_93;
		goto IL_02e0;
	}

IL_02b8:
	{
		RuntimeObject* L_94 = V_3;
		NullCheck(L_94);
		Type_t* L_95;
		L_95 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_94, NULL);
		Type_t* L_96 = L_95;
		if (L_96)
		{
			G_B37_0 = L_96;
			G_B37_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02cb;
		}
		G_B36_0 = L_96;
		G_B36_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
	}
	{
		G_B38_0 = ((String_t*)(NULL));
		G_B38_1 = G_B36_1;
		goto IL_02d0;
	}

IL_02cb:
	{
		NullCheck(G_B37_0);
		String_t* L_97;
		L_97 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B37_0);
		G_B38_0 = L_97;
		G_B38_1 = G_B37_1;
	}

IL_02d0:
	{
		String_t* L_98;
		L_98 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B38_1, G_B38_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_99 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_99, L_98, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_CreateJNIArgArray_mA3976C6F68E0BF29442CB20FBD69CBA72EAB9D45_RuntimeMethod_var)));
	}

IL_02e0:
	{
		int32_t L_100 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		int32_t L_101 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_02e9:
	{
		int32_t L_102 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = V_1;
		NullCheck(L_103);
		if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeArray* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		V_6 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_7 = NULL;
		goto IL_021a;
	}

IL_0013:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral9BC1A16BF700ED5325C6B4FD49819E1C48ECC035, NULL);
		V_0 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_obj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral61B6DDF2435F416EB6E75E0A742D181B32C37FDF, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_11;
		L_11 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_9, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_10, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_3 = L_11;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ___0_obj;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		NullCheck(L_12);
		int32_t L_16;
		L_16 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_12, _stringLiteral81AB20ED8D2182D1A0D3ECAA43335FF4D94E66E1, L_14, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_4 = L_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
		L_18 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_17);
		bool L_19;
		L_19 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_17, _stringLiteral9AF65B36DFE45F7D43114A8BC74824FA223F60D2, L_18, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_0187;
		}
	}
	{
		String_t* L_21 = V_3;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_24 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_5 = (RuntimeArray*)L_25;
		goto IL_0184;
	}

IL_00a1:
	{
		String_t* L_26 = V_3;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490, L_26, NULL);
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_29 = V_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_30 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_5 = (RuntimeArray*)L_30;
		goto IL_0184;
	}

IL_00c0:
	{
		String_t* L_31 = V_3;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, L_31, NULL);
		V_11 = L_32;
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_34 = V_4;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_5 = (RuntimeArray*)L_35;
		goto IL_0184;
	}

IL_00df:
	{
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, L_36, NULL);
		V_12 = L_37;
		bool L_38 = V_12;
		if (!L_38)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_39 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_5 = (RuntimeArray*)L_40;
		goto IL_0184;
	}

IL_00fe:
	{
		String_t* L_41 = V_3;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, L_41, NULL);
		V_13 = L_42;
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_44 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_45 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_5 = (RuntimeArray*)L_45;
		goto IL_0184;
	}

IL_011a:
	{
		String_t* L_46 = V_3;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, L_46, NULL);
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_49 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_5 = (RuntimeArray*)L_50;
		goto IL_0184;
	}

IL_0136:
	{
		String_t* L_51 = V_3;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, L_51, NULL);
		V_15 = L_52;
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_54 = V_4;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_54);
		V_5 = (RuntimeArray*)L_55;
		goto IL_0184;
	}

IL_0152:
	{
		String_t* L_56 = V_3;
		bool L_57;
		L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, L_56, NULL);
		V_16 = L_57;
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_59 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_5 = (RuntimeArray*)L_60;
		goto IL_0184;
	}

IL_016e:
	{
		String_t* L_61 = V_3;
		String_t* L_62;
		L_62 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B)), L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_63 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A_RuntimeMethod_var)));
	}

IL_0184:
	{
		goto IL_01c8;
	}

IL_0187:
	{
		String_t* L_64 = V_3;
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_64, NULL);
		V_17 = L_65;
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_67 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_67);
		V_5 = (RuntimeArray*)L_68;
		goto IL_01c8;
	}

IL_01a3:
	{
		String_t* L_69 = V_3;
		bool L_70;
		L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_69, NULL);
		V_18 = L_70;
		bool L_71 = V_18;
		if (!L_71)
		{
			goto IL_01bf;
		}
	}
	{
		int32_t L_72 = V_4;
		AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E* L_73 = (AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E*)SZArrayNew(AndroidJavaClassU5BU5D_tB6BC38ADA4C92011CA743CEDAB23DFCDB926385E_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_5 = (RuntimeArray*)L_73;
		goto IL_01c8;
	}

IL_01bf:
	{
		int32_t L_74 = V_4;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_75 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_74);
		V_5 = (RuntimeArray*)L_75;
	}

IL_01c8:
	{
		V_19 = 0;
		goto IL_0201;
	}

IL_01cd:
	{
		RuntimeArray* L_76 = V_5;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_77 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_78;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = ___0_obj;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_79;
		int32_t L_82 = V_19;
		int32_t L_83 = L_82;
		RuntimeObject* L_84 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_84);
		NullCheck(L_77);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85;
		L_85 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_77, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_81, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		RuntimeObject* L_86;
		L_86 = _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731(L_85, NULL);
		int32_t L_87 = V_19;
		NullCheck(L_76);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_76, L_86, L_87, NULL);
		int32_t L_88 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0201:
	{
		int32_t L_89 = V_19;
		int32_t L_90 = V_4;
		V_20 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_20;
		if (L_91)
		{
			goto IL_01cd;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_92 = V_0;
		NullCheck(L_92);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_92, NULL);
		RuntimeArray* L_93 = V_5;
		V_7 = L_93;
		goto IL_021a;
	}

IL_021a:
	{
		RuntimeObject* L_94 = V_7;
		return L_94;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_Unbox_m7D786B14E4A90E5411FC9AA7F985451DEBC95731 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = NULL;
		goto IL_0201;
	}

IL_0010:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_obj;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f6:
			{
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0200;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0200:
				{
					return;
				}
			}
		});
		try
		{
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
				L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_7);
				String_t* L_9;
				L_9 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_7, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_8, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_3 = L_9;
				String_t* L_10 = V_3;
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_10, NULL);
				V_4 = L_11;
				bool L_12 = V_4;
				if (!L_12)
				{
					goto IL_005f_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
				L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_13);
				int32_t L_15;
				L_15 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_13, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_14, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				int32_t L_16 = L_15;
				RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
				V_1 = L_17;
				goto IL_0201;
			}

IL_005f_1:
			{
				String_t* L_18 = V_3;
				bool L_19;
				L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_18, NULL);
				V_5 = L_19;
				bool L_20 = V_5;
				if (!L_20)
				{
					goto IL_008b_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22;
				L_22 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_21);
				bool L_23;
				L_23 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_21, _stringLiteral7BD850E4DDBA17AE057506A43953C4D0DB03DC66, L_22, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				bool L_24 = L_23;
				RuntimeObject* L_25 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_24);
				V_1 = L_25;
				goto IL_0201;
			}

IL_008b_1:
			{
				String_t* L_26 = V_3;
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_26, NULL);
				V_6 = L_27;
				bool L_28 = V_6;
				if (!L_28)
				{
					goto IL_00b7_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30;
				L_30 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_29);
				int8_t L_31;
				L_31 = AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B(L_29, _stringLiteral1518EB1645470EBD2FAB6435208F4404D786664E, L_30, AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_RuntimeMethod_var);
				int8_t L_32 = L_31;
				RuntimeObject* L_33 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_32);
				V_1 = L_33;
				goto IL_0201;
			}

IL_00b7_1:
			{
				String_t* L_34 = V_3;
				bool L_35;
				L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_34, NULL);
				V_7 = L_35;
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_00e3_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
				L_38 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_37);
				int16_t L_39;
				L_39 = AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345(L_37, _stringLiteral530BFE609FFD8493BEF7537EACF3B344E426E4EC, L_38, AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_RuntimeMethod_var);
				int16_t L_40 = L_39;
				RuntimeObject* L_41 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_40);
				V_1 = L_41;
				goto IL_0201;
			}

IL_00e3_1:
			{
				String_t* L_42 = V_3;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_42, NULL);
				V_8 = L_43;
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_010f_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46;
				L_46 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_45);
				int64_t L_47;
				L_47 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_45, _stringLiteral02318B712552D9B62DF47C0277C285D8D227DB68, L_46, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
				int64_t L_48 = L_47;
				RuntimeObject* L_49 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_48);
				V_1 = L_49;
				goto IL_0201;
			}

IL_010f_1:
			{
				String_t* L_50 = V_3;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_50, NULL);
				V_9 = L_51;
				bool L_52 = V_9;
				if (!L_52)
				{
					goto IL_013b_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54;
				L_54 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_53);
				float L_55;
				L_55 = AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1(L_53, _stringLiteralB61F72088FF6940FDC49659789D1C5CA70C2E293, L_54, AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_RuntimeMethod_var);
				float L_56 = L_55;
				RuntimeObject* L_57 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_56);
				V_1 = L_57;
				goto IL_0201;
			}

IL_013b_1:
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_58, NULL);
				V_10 = L_59;
				bool L_60 = V_10;
				if (!L_60)
				{
					goto IL_0167_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62;
				L_62 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_61);
				double L_63;
				L_63 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_61, _stringLiteral2357A4E0D0D00387C99FD0191A8303405A83489C, L_62, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
				double L_64 = L_63;
				RuntimeObject* L_65 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_64);
				V_1 = L_65;
				goto IL_0201;
			}

IL_0167_1:
			{
				String_t* L_66 = V_3;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_66, NULL);
				V_11 = L_67;
				bool L_68 = V_11;
				if (!L_68)
				{
					goto IL_0190_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70;
				L_70 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_69);
				Il2CppChar L_71;
				L_71 = AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C(L_69, _stringLiteral682203F9A53FBD397E722133EF0FD4D0C4CBECC3, L_70, AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_RuntimeMethod_var);
				Il2CppChar L_72 = L_71;
				RuntimeObject* L_73 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_72);
				V_1 = L_73;
				goto IL_0201;
			}

IL_0190_1:
			{
				String_t* L_74 = V_3;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_74, NULL);
				V_12 = L_75;
				bool L_76 = V_12;
				if (!L_76)
				{
					goto IL_01b4_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ___0_obj;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78;
				L_78 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_77);
				String_t* L_79;
				L_79 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_77, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, L_78, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				V_1 = L_79;
				goto IL_0201;
			}

IL_01b4_1:
			{
				String_t* L_80 = V_3;
				bool L_81;
				L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(_stringLiteral4377BD0CB5AA33032D96FCC5148ABEDB0BD8CC10, L_80, NULL);
				V_13 = L_81;
				bool L_82 = V_13;
				if (!L_82)
				{
					goto IL_01d3_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = ___0_obj;
				NullCheck(L_83);
				intptr_t L_84;
				L_84 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_83, NULL);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_85 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_85, L_84, NULL);
				V_1 = L_85;
				goto IL_0201;
			}

IL_01d3_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_86 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87;
				L_87 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_86);
				bool L_88;
				L_88 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_86, _stringLiteralF3E8EFC0C8EF0E48C41E622D432E07CB573E6983, L_87, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				V_14 = L_88;
				bool L_89 = V_14;
				if (!L_89)
				{
					goto IL_01f2_1;
				}
			}
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = ___0_obj;
				RuntimeObject* L_91;
				L_91 = _AndroidJNIHelper_UnboxArray_m5A46896F07017C9B0908AE3D72DA1285071DEA4A(L_90, NULL);
				V_1 = L_91;
				goto IL_0201;
			}

IL_01f2_1:
			{
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92 = ___0_obj;
				V_1 = L_92;
				goto IL_0201;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0201:
	{
		RuntimeObject* L_93 = V_1;
		return L_93;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8F0908585792018E468F1010A23CFD167A686C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Type_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Type_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	String_t* G_B24_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	Type_t* G_B38_0 = NULL;
	String_t* G_B38_1 = NULL;
	String_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		goto IL_0310;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0213;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___0_obj;
		int32_t L_11 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_13, _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_9, NULL);
		V_1 = L_13;
		goto IL_0310;
	}

IL_0054:
	{
		RuntimeObject* L_14 = ___0_obj;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		RuntimeObject* L_18 = ___0_obj;
		bool L_19 = ((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_21, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_17, NULL);
		V_1 = L_21;
		goto IL_0310;
	}

IL_0087:
	{
		RuntimeObject* L_22 = ___0_obj;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		RuntimeObject* L_26 = ___0_obj;
		int8_t L_27 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_26, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_28 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_29, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_25, NULL);
		V_1 = L_29;
		goto IL_0310;
	}

IL_00ba:
	{
		RuntimeObject* L_30 = ___0_obj;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_30, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		RuntimeObject* L_34 = ___0_obj;
		int8_t L_35 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		RuntimeObject* L_36 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_37, _stringLiteral3869C7DBCD094A6000BF07A9FAC6332A50AEEFBE, L_33, NULL);
		V_1 = L_37;
		goto IL_0310;
	}

IL_00ed:
	{
		RuntimeObject* L_38 = ___0_obj;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_38, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0120;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		RuntimeObject* L_42 = ___0_obj;
		int16_t L_43 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_42, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		RuntimeObject* L_44 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_45, _stringLiteral70E7C8827E971A1A7DEECE0C662165AF9F4E8845, L_41, NULL);
		V_1 = L_45;
		goto IL_0310;
	}

IL_0120:
	{
		RuntimeObject* L_46 = ___0_obj;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_46, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0153;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = L_48;
		RuntimeObject* L_50 = ___0_obj;
		int64_t L_51 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_50, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		RuntimeObject* L_52 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_52);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_53, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_49, NULL);
		V_1 = L_53;
		goto IL_0310;
	}

IL_0153:
	{
		RuntimeObject* L_54 = ___0_obj;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_54, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_55 = V_9;
		if (!L_55)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		RuntimeObject* L_58 = ___0_obj;
		float L_59 = ((*(float*)((float*)(float*)UnBox(L_58, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_60 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_60);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_61, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_57, NULL);
		V_1 = L_61;
		goto IL_0310;
	}

IL_0186:
	{
		RuntimeObject* L_62 = ___0_obj;
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_62, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_01b9;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		RuntimeObject* L_66 = ___0_obj;
		double L_67 = ((*(double*)((double*)(double*)UnBox(L_66, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		RuntimeObject* L_68 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_69, _stringLiteralBB8F0908585792018E468F1010A23CFD167A686C, L_65, NULL);
		V_1 = L_69;
		goto IL_0310;
	}

IL_01b9:
	{
		RuntimeObject* L_70 = ___0_obj;
		V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_70, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_01ec;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_72;
		RuntimeObject* L_74 = ___0_obj;
		Il2CppChar L_75 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_74, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))));
		RuntimeObject* L_76 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_76);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_77, _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_73, NULL);
		V_1 = L_77;
		goto IL_0310;
	}

IL_01ec:
	{
		RuntimeObject* L_78 = ___0_obj;
		NullCheck(L_78);
		Type_t* L_79;
		L_79 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_78, NULL);
		Type_t* L_80 = L_79;
		if (L_80)
		{
			G_B23_0 = L_80;
			G_B23_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_01fe;
		}
		G_B22_0 = L_80;
		G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_0203;
	}

IL_01fe:
	{
		NullCheck(G_B23_0);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B23_0);
		G_B24_0 = L_81;
		G_B24_1 = G_B23_1;
	}

IL_0203:
	{
		String_t* L_82;
		L_82 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B24_1, G_B24_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_83 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_83, L_82, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var)));
	}

IL_0213:
	{
		RuntimeObject* L_84 = ___0_obj;
		V_12 = (bool)((!(((RuntimeObject*)(String_t*)((String_t*)IsInstSealed((RuntimeObject*)L_84, String_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0242;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_86;
		RuntimeObject* L_88 = ___0_obj;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_89 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_89, _stringLiteral6139DAA93E5F3831FAE16E66A26D39B54342887C, L_87, NULL);
		V_1 = L_89;
		goto IL_0310;
	}

IL_0242:
	{
		RuntimeObject* L_90 = ___0_obj;
		V_13 = (bool)((!(((RuntimeObject*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)IsInstClass((RuntimeObject*)L_90, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_91 = V_13;
		if (!L_91)
		{
			goto IL_0268;
		}
	}
	{
		RuntimeObject* L_92 = ___0_obj;
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		intptr_t L_93;
		L_93 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_92, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_94, L_93, NULL);
		V_1 = L_94;
		goto IL_0310;
	}

IL_0268:
	{
		RuntimeObject* L_95 = ___0_obj;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)IsInstClass((RuntimeObject*)L_95, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_96 = V_14;
		if (!L_96)
		{
			goto IL_0284;
		}
	}
	{
		RuntimeObject* L_97 = ___0_obj;
		V_1 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_97, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		goto IL_0310;
	}

IL_0284:
	{
		RuntimeObject* L_98 = ___0_obj;
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_98, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_99 = V_15;
		if (!L_99)
		{
			goto IL_02a7;
		}
	}
	{
		RuntimeObject* L_100 = ___0_obj;
		intptr_t L_101;
		L_101 = _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213(((RuntimeArray*)CastclassClass((RuntimeObject*)L_100, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_102;
		L_102 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_101, NULL);
		V_1 = L_102;
		goto IL_0310;
	}

IL_02a7:
	{
		RuntimeObject* L_103 = ___0_obj;
		V_16 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_103, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_104 = V_16;
		if (!L_104)
		{
			goto IL_02c5;
		}
	}
	{
		RuntimeObject* L_105 = ___0_obj;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_106;
		L_106 = AndroidJavaProxy_GetProxyObject_mBFD2FBEF9ED9D4AE23DECF5836E5C73A886E2109(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_105, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_106;
		goto IL_0310;
	}

IL_02c5:
	{
		RuntimeObject* L_107 = ___0_obj;
		V_17 = (bool)((!(((RuntimeObject*)(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_107, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_108 = V_17;
		if (!L_108)
		{
			goto IL_02e8;
		}
	}
	{
		RuntimeObject* L_109 = ___0_obj;
		intptr_t L_110;
		L_110 = AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F(((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)CastclassSealed((RuntimeObject*)L_109, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)), NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_111;
		L_111 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_110, NULL);
		V_1 = L_111;
		goto IL_0310;
	}

IL_02e8:
	{
		RuntimeObject* L_112 = ___0_obj;
		NullCheck(L_112);
		Type_t* L_113;
		L_113 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_112, NULL);
		Type_t* L_114 = L_113;
		if (L_114)
		{
			G_B39_0 = L_114;
			G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
			goto IL_02fb;
		}
		G_B38_0 = L_114;
		G_B38_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED680D6EF3BE92ADBBED1552BB70280D27D120B));
	}
	{
		G_B40_0 = ((String_t*)(NULL));
		G_B40_1 = G_B38_1;
		goto IL_0300;
	}

IL_02fb:
	{
		NullCheck(G_B39_0);
		String_t* L_115;
		L_115 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B39_0);
		G_B40_0 = L_115;
		G_B40_1 = G_B39_1;
	}

IL_0300:
	{
		String_t* L_116;
		L_116 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B40_1, G_B40_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_117 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_117, L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_Box_mA0B7B8444C6AC2BABBDC7B1A7FACDA3EA6F816B0_RuntimeMethod_var)));
	}

IL_0310:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = V_1;
		return L_118;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_m44D912ADAF5C0E49A914AD7B1DE776C13AC4F61A (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_006a;
	}

IL_000b:
	{
		V_0 = 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_args;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0064;
	}

IL_0014:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		RuntimeObject* L_7 = V_4;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_8 = V_4;
		if (((AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)IsInstSealed((RuntimeObject*)L_8, AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_9 = V_4;
		if (((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_9, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_10 = V_4;
		G_B8_0 = ((!(((RuntimeObject*)(RuntimeArray*)((RuntimeArray*)IsInstClass((RuntimeObject*)L_10, RuntimeArray_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B8_0 = 1;
	}

IL_0042:
	{
		V_5 = (bool)G_B8_0;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_12 = V_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_13;
		L_13 = il2cpp_span_get_item((jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((Il2CppByReference*)&(((&___1_jniArgs))->____pointer_0))->value, (L_12), ((&___1_jniArgs))->____length_1);
		intptr_t L_14 = L_13->___l_8;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_14, NULL);
	}

IL_005b:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0064:
	{
		int32_t L_17 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_006a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213 (RuntimeArray* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_13 = NULL;
	int32_t V_14 = 0;
	intptr_t V_15;
	memset((&V_15), 0, sizeof(V_15));
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	intptr_t V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_21 = NULL;
	int32_t V_22 = 0;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_23 = NULL;
	intptr_t V_24;
	memset((&V_24), 0, sizeof(V_24));
	intptr_t V_25;
	memset((&V_25), 0, sizeof(V_25));
	intptr_t V_26;
	memset((&V_26), 0, sizeof(V_26));
	int32_t V_27 = 0;
	bool V_28 = false;
	intptr_t V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeArray* L_0 = ___0_array;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_018a;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeArray* L_11 = ___0_array;
		intptr_t L_12;
		L_12 = AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB(((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_12;
		goto IL_0324;
	}

IL_0040:
	{
		Type_t* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeArray* L_18 = ___0_array;
		intptr_t L_19;
		L_19 = AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A(((BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)Castclass((RuntimeObject*)L_18, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_19;
		goto IL_0324;
	}

IL_0067:
	{
		Type_t* L_20 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral831D7CED62F1BBB173BA1CEEEB6F169BFC6B02A3, NULL);
		RuntimeArray* L_25 = ___0_array;
		intptr_t L_26;
		L_26 = AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_25, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_26;
		goto IL_0324;
	}

IL_009a:
	{
		Type_t* L_27 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeArray* L_32 = ___0_array;
		intptr_t L_33;
		L_33 = AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C(((SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)Castclass((RuntimeObject*)L_32, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_33;
		goto IL_0324;
	}

IL_00c1:
	{
		Type_t* L_34 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		V_7 = L_37;
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00e8;
		}
	}
	{
		RuntimeArray* L_39 = ___0_array;
		intptr_t L_40;
		L_40 = AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED(((Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)Castclass((RuntimeObject*)L_39, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_40;
		goto IL_0324;
	}

IL_00e8:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		V_8 = L_44;
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_010f;
		}
	}
	{
		RuntimeArray* L_46 = ___0_array;
		intptr_t L_47;
		L_47 = AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C(((Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)Castclass((RuntimeObject*)L_46, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_47;
		goto IL_0324;
	}

IL_010f:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		bool L_51;
		L_51 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_48, L_50, NULL);
		V_9 = L_51;
		bool L_52 = V_9;
		if (!L_52)
		{
			goto IL_0136;
		}
	}
	{
		RuntimeArray* L_53 = ___0_array;
		intptr_t L_54;
		L_54 = AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732(((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_53, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_54;
		goto IL_0324;
	}

IL_0136:
	{
		Type_t* L_55 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		bool L_58;
		L_58 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_55, L_57, NULL);
		V_10 = L_58;
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_015d;
		}
	}
	{
		RuntimeArray* L_60 = ___0_array;
		intptr_t L_61;
		L_61 = AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1(((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)Castclass((RuntimeObject*)L_60, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_61;
		goto IL_0324;
	}

IL_015d:
	{
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
		V_11 = L_65;
		bool L_66 = V_11;
		if (!L_66)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeArray* L_67 = ___0_array;
		intptr_t L_68;
		L_68 = AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12(((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)Castclass((RuntimeObject*)L_67, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_68;
		goto IL_0324;
	}

IL_0184:
	{
		goto IL_031c;
	}

IL_018a:
	{
		Type_t* L_69 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		V_12 = L_72;
		bool L_73 = V_12;
		if (!L_73)
		{
			goto IL_0217;
		}
	}
	{
		RuntimeArray* L_74 = ___0_array;
		V_13 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_74, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		RuntimeArray* L_75 = ___0_array;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_75, 0, NULL);
		V_14 = L_76;
		intptr_t L_77;
		L_77 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteral6F7F7B4F6009074DEBEA1316DB8BDEC4E57CA185, NULL);
		V_15 = L_77;
		int32_t L_78 = V_14;
		intptr_t L_79 = V_15;
		intptr_t L_80;
		L_80 = AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043(L_78, L_79, 0, NULL);
		V_16 = L_80;
		V_17 = 0;
		goto IL_01fb;
	}

IL_01d3:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = V_13;
		int32_t L_82 = V_17;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		String_t* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		intptr_t L_85;
		L_85 = AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A(L_84, NULL);
		V_18 = L_85;
		intptr_t L_86 = V_16;
		int32_t L_87 = V_17;
		intptr_t L_88 = V_18;
		AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2(L_86, L_87, L_88, NULL);
		intptr_t L_89 = V_18;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_89, NULL);
		int32_t L_90 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01fb:
	{
		int32_t L_91 = V_17;
		int32_t L_92 = V_14;
		V_19 = (bool)((((int32_t)L_91) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_19;
		if (L_93)
		{
			goto IL_01d3;
		}
	}
	{
		intptr_t L_94 = V_15;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_94, NULL);
		intptr_t L_95 = V_16;
		V_3 = L_95;
		goto IL_0324;
	}

IL_0217:
	{
		Type_t* L_96 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		V_20 = L_99;
		bool L_100 = V_20;
		if (!L_100)
		{
			goto IL_02f9;
		}
	}
	{
		RuntimeArray* L_101 = ___0_array;
		V_21 = ((AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)Castclass((RuntimeObject*)L_101, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var));
		RuntimeArray* L_102 = ___0_array;
		NullCheck(L_102);
		int32_t L_103;
		L_103 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_102, 0, NULL);
		V_22 = L_103;
		int32_t L_104 = V_22;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_105 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832_il2cpp_TypeInfo_var, (uint32_t)L_104);
		V_23 = L_105;
		intptr_t L_106;
		L_106 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(_stringLiteral94DFCFD5DDE6D7CBBBB5D3176A4B2A5C7CD26D8E, NULL);
		V_24 = L_106;
		V_25 = 0;
		V_27 = 0;
		goto IL_02d5;
	}

IL_0263:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_107 = V_21;
		int32_t L_108 = V_27;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_28 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_110) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_111 = V_28;
		if (!L_111)
		{
			goto IL_02c2;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_112 = V_23;
		int32_t L_113 = V_27;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_114 = V_21;
		int32_t L_115 = V_27;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		intptr_t L_118;
		L_118 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_117, NULL);
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (intptr_t)L_118);
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_119 = V_21;
		int32_t L_120 = V_27;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		intptr_t L_123;
		L_123 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_122, NULL);
		V_29 = L_123;
		intptr_t L_124 = V_25;
		intptr_t L_125 = V_29;
		bool L_126;
		L_126 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_124, L_125, NULL);
		V_30 = L_126;
		bool L_127 = V_30;
		if (!L_127)
		{
			goto IL_02bf;
		}
	}
	{
		intptr_t L_128 = V_25;
		bool L_129;
		L_129 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_128, 0, NULL);
		V_31 = L_129;
		bool L_130 = V_31;
		if (!L_130)
		{
			goto IL_02b8;
		}
	}
	{
		intptr_t L_131 = V_29;
		V_25 = L_131;
		goto IL_02be;
	}

IL_02b8:
	{
		intptr_t L_132 = V_24;
		V_25 = L_132;
	}

IL_02be:
	{
	}

IL_02bf:
	{
		goto IL_02ce;
	}

IL_02c2:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_133 = V_23;
		int32_t L_134 = V_27;
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (intptr_t)0);
	}

IL_02ce:
	{
		int32_t L_135 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_135, 1));
	}

IL_02d5:
	{
		int32_t L_136 = V_27;
		int32_t L_137 = V_22;
		V_32 = (bool)((((int32_t)L_136) < ((int32_t)L_137))? 1 : 0);
		bool L_138 = V_32;
		if (L_138)
		{
			goto IL_0263;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_139 = V_23;
		intptr_t L_140 = V_25;
		intptr_t L_141;
		L_141 = AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F(L_139, L_140, NULL);
		V_26 = L_141;
		intptr_t L_142 = V_24;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_142, NULL);
		intptr_t L_143 = V_26;
		V_3 = L_143;
		goto IL_0324;
	}

IL_02f9:
	{
		Type_t* L_144 = V_0;
		Type_t* L_145 = L_144;
		if (L_145)
		{
			G_B40_0 = L_145;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
			goto IL_0307;
		}
		G_B39_0 = L_145;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63ABF5649A2AE850683F7D7D13A6E33FC41F4CAA));
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_030c;
	}

IL_0307:
	{
		NullCheck(G_B40_0);
		String_t* L_146;
		L_146 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B40_0);
		G_B41_0 = L_146;
		G_B41_1 = G_B40_1;
	}

IL_030c:
	{
		String_t* L_147;
		L_147 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_148 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_148, L_147, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_148, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertToJNIArray_m6E451CD0C15DE2812F103C604CB1EF1D358D1213_RuntimeMethod_var)));
	}

IL_031c:
	{
		V_3 = 0;
		goto IL_0324;
	}

IL_0324:
	{
		intptr_t L_149 = V_3;
		return L_149;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		String_t* L_2;
		L_2 = _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7(L_1, NULL);
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490 (intptr_t ___0_jclass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{
				intptr_t L_0 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}
		});
		try
		{
			try
			{
				intptr_t L_1 = ___0_jclass;
				String_t* L_2 = ___1_signature;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_3;
				L_3 = AndroidReflection_GetConstructorMember_m6380904C6B5AF39F973E79B13B3C2B53DFD759B3(L_1, L_2, NULL);
				V_0 = L_3;
				intptr_t L_4 = V_0;
				intptr_t L_5;
				L_5 = AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B(L_4, NULL);
				V_1 = L_5;
				goto IL_0049;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0019_1;
				}
				throw e;
			}

CATCH_0019_1:
			{
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					intptr_t L_6 = ___0_jclass;
					String_t* L_7 = ___1_signature;
					intptr_t L_8;
					L_8 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1AC4D20161E303D304EC6B1002667BE658488EE)), L_7, NULL);
					V_3 = L_8;
					intptr_t L_9 = V_3;
					bool L_10;
					L_10 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_9, 0, NULL);
					V_4 = L_10;
					bool L_11 = V_4;
					if (!L_11)
					{
						goto IL_003d_1;
					}
				}
				{
					intptr_t L_12 = V_3;
					V_1 = L_12;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0049;
				}

IL_003d_1:
				{
					Exception_t* L_13 = V_2;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490_RuntimeMethod_var)));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		intptr_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184 (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				intptr_t L_0 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_0, NULL);
				return;
			}
		});
		try
		{
			try
			{
				intptr_t L_1 = ___0_jclass;
				String_t* L_2 = ___1_methodName;
				String_t* L_3 = ___2_signature;
				bool L_4 = ___3_isStatic;
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				intptr_t L_5;
				L_5 = AndroidReflection_GetMethodMember_m2871C6DC2BA1AE5FF3FA448AC36022CC8B19C9EA(L_1, L_2, L_3, L_4, NULL);
				V_0 = L_5;
				intptr_t L_6 = V_0;
				intptr_t L_7;
				L_7 = AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B(L_6, NULL);
				V_1 = L_7;
				goto IL_0048;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001b_1;
				}
				throw e;
			}

CATCH_001b_1:
			{
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					intptr_t L_8 = ___0_jclass;
					String_t* L_9 = ___1_methodName;
					String_t* L_10 = ___2_signature;
					bool L_11 = ___3_isStatic;
					intptr_t L_12;
					L_12 = _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F(L_8, L_9, L_10, L_11, NULL);
					V_3 = L_12;
					intptr_t L_13 = V_3;
					bool L_14;
					L_14 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_13, 0, NULL);
					V_4 = L_14;
					bool L_15 = V_4;
					if (!L_15)
					{
						goto IL_003c_1;
					}
				}
				{
					intptr_t L_16 = V_3;
					V_1 = L_16;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0048;
				}

IL_003c_1:
				{
					Exception_t* L_17 = V_2;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184_RuntimeMethod_var)));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		intptr_t L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_m7155B2DE7C4F4E71C6AE29F856A1A9618ADAAD4F (intptr_t ___0_jclass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
	}
	try
	{
		{
			bool L_0 = ___3_isStatic;
			if (L_0)
			{
				goto IL_000f_1;
			}
		}
		{
			intptr_t L_1 = ___0_jclass;
			String_t* L_2 = ___1_methodName;
			String_t* L_3 = ___2_signature;
			intptr_t L_4;
			L_4 = AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536(L_1, L_2, L_3, NULL);
			G_B4_0 = L_4;
			goto IL_0017_1;
		}

IL_000f_1:
		{
			intptr_t L_5 = ___0_jclass;
			String_t* L_6 = ___1_methodName;
			String_t* L_7 = ___2_signature;
			intptr_t L_8;
			L_8 = AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8(L_5, L_6, L_7, NULL);
			G_B4_0 = L_8;
		}

IL_0017_1:
		{
			V_0 = G_B4_0;
			goto IL_0027;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}

IL_001f:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0027:
	{
		intptr_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95 (intptr_t ___0_jclass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	{
		V_0 = 0;
		V_1 = (Exception_t*)NULL;
		int32_t L_0;
		L_0 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)10), NULL);
	}
	try
	{
		{
			intptr_t L_1 = ___0_jclass;
			String_t* L_2 = ___1_fieldName;
			String_t* L_3 = ___2_signature;
			bool L_4 = ___3_isStatic;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_5;
			L_5 = AndroidReflection_GetFieldMember_m6E589FB4DEDCFEE84B2CFD9C416D0C21EDB09D2F(L_1, L_2, L_3, L_4, NULL);
			V_2 = L_5;
			bool L_6 = ___3_isStatic;
			V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_002c_1;
			}
		}
		{
			intptr_t L_8 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			intptr_t L_9;
			L_9 = AndroidReflection_GetFieldClass_m88D4993FF662A0EF387AADD915A4FD8054F0DF27(L_8, NULL);
			___0_jclass = L_9;
		}

IL_002c_1:
		{
			intptr_t L_10 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
			String_t* L_11;
			L_11 = AndroidReflection_GetFieldSignature_mF36DDDDB3E57742AD66487E2D7CECBE81736B259(L_10, NULL);
			___2_signature = L_11;
			goto IL_0040;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_4;
		V_1 = L_12;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}

IL_0040:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{
				intptr_t L_13;
				L_13 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				bool L_14 = ___3_isStatic;
				if (L_14)
				{
					goto IL_004f_1;
				}
			}
			{
				intptr_t L_15 = ___0_jclass;
				String_t* L_16 = ___1_fieldName;
				String_t* L_17 = ___2_signature;
				intptr_t L_18;
				L_18 = AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D(L_15, L_16, L_17, NULL);
				G_B9_0 = L_18;
				goto IL_0057_1;
			}

IL_004f_1:
			{
				intptr_t L_19 = ___0_jclass;
				String_t* L_20 = ___1_fieldName;
				String_t* L_21 = ___2_signature;
				intptr_t L_22;
				L_22 = AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482(L_19, L_20, L_21, NULL);
				G_B9_0 = L_22;
			}

IL_0057_1:
			{
				V_0 = G_B9_0;
				intptr_t L_23 = V_0;
				bool L_24;
				L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_23, 0, NULL);
				V_5 = L_24;
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0088_1;
				}
			}
			{
				Exception_t* L_26 = V_1;
				V_6 = (bool)((!(((RuntimeObject*)(Exception_t*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_27 = V_6;
				if (!L_27)
				{
					goto IL_0076_1;
				}
			}
			{
				Exception_t* L_28 = V_1;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var)));
			}

IL_0076_1:
			{
				String_t* L_29 = ___1_fieldName;
				String_t* L_30 = ___2_signature;
				String_t* L_31;
				L_31 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral519BF378C815B93F61B0116296D7B32C3805CB32)), L_29, L_30, NULL);
				Exception_t* L_32 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_32, L_31, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95_RuntimeMethod_var)));
			}

IL_0088_1:
			{
				intptr_t L_33 = V_0;
				V_7 = L_33;
				goto IL_009b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		intptr_t L_34 = V_7;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_19 = NULL;
	bool V_20 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_21 = NULL;
	bool V_22 = false;
	StringBuilder_t* V_23 = NULL;
	bool V_24 = false;
	Type_t* G_B5_0 = NULL;
	Type_t* G_B51_0 = NULL;
	int32_t G_B51_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B51_3 = NULL;
	Type_t* G_B50_0 = NULL;
	int32_t G_B50_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B50_3 = NULL;
	String_t* G_B52_0 = NULL;
	int32_t G_B52_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B52_3 = NULL;
	int32_t G_B54_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B54_2 = NULL;
	int32_t G_B53_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B53_2 = NULL;
	String_t* G_B55_0 = NULL;
	int32_t G_B55_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B55_3 = NULL;
	int32_t G_B57_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B57_2 = NULL;
	int32_t G_B56_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B56_2 = NULL;
	String_t* G_B58_0 = NULL;
	int32_t G_B58_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B58_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_0378;
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (((Type_t*)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		G_B5_0 = L_4;
		goto IL_002a;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ___0_obj;
		G_B5_0 = ((Type_t*)CastclassClass((RuntimeObject*)L_5, Type_t_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		V_0 = G_B5_0;
		Type_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_9 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_9, L_11);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		V_2 = _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
		goto IL_0378;
	}

IL_005a:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_14, L_16);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		V_2 = _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
		goto IL_0378;
	}

IL_007b:
	{
		Type_t* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_19, L_21);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD924CAE09D47CDF0481655AE527E8ADF940FF10E, NULL);
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_0378;
	}

IL_00a8:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		NullCheck(L_24);
		bool L_27;
		L_27 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_24, L_26);
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		goto IL_0378;
	}

IL_00c9:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_29, L_31);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ea;
		}
	}
	{
		V_2 = _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
		goto IL_0378;
	}

IL_00ea:
	{
		Type_t* L_34 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_34, L_36);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_010b;
		}
	}
	{
		V_2 = _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
		goto IL_0378;
	}

IL_010b:
	{
		Type_t* L_39 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_39, L_41);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_012c;
		}
	}
	{
		V_2 = _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
		goto IL_0378;
	}

IL_012c:
	{
		Type_t* L_44 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_44, L_46);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_014d;
		}
	}
	{
		V_2 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
		goto IL_0378;
	}

IL_014d:
	{
		Type_t* L_49 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_49, L_51);
		V_12 = L_52;
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		V_2 = _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
		goto IL_0378;
	}

IL_016e:
	{
		goto IL_0370;
	}

IL_0174:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		NullCheck(L_54);
		bool L_57;
		L_57 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_54, L_56);
		V_13 = L_57;
		bool L_58 = V_13;
		if (!L_58)
		{
			goto IL_0196;
		}
	}
	{
		V_2 = _stringLiteral90B5C222ABA0160226196AA2D9E75E9C0A6B3D39;
		goto IL_0378;
	}

IL_0196:
	{
		RuntimeObject* L_59 = ___0_obj;
		V_14 = (bool)((!(((RuntimeObject*)(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)IsInstClass((RuntimeObject*)L_59, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_60 = V_14;
		if (!L_60)
		{
			goto IL_01f1;
		}
	}
	{
		RuntimeObject* L_61 = ___0_obj;
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_62 = ((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_61, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var))->___javaInterface_0;
		NullCheck(L_62);
		intptr_t L_63;
		L_63 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_62, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_64, L_63, NULL);
		V_15 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e4:
			{
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65 = V_15;
					if (!L_65)
					{
						goto IL_01f0;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_66 = V_15;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_66);
				}

IL_01f0:
				{
					return;
				}
			}
		});
		try
		{
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = V_15;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68;
			L_68 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_67);
			String_t* L_69;
			L_69 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_67, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_68, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_70;
			L_70 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_69, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_70;
			goto IL_0378;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f1:
	{
		Type_t* L_71 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		NullCheck(L_71);
		bool L_74;
		L_74 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_71, L_73);
		V_16 = L_74;
		bool L_75 = V_16;
		if (!L_75)
		{
			goto IL_0213;
		}
	}
	{
		V_2 = _stringLiteral9D9409152ADEE0D2A5BE9C04915D8BF65B6B929A;
		goto IL_0378;
	}

IL_0213:
	{
		Type_t* L_76 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		NullCheck(L_76);
		bool L_79;
		L_79 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_76, L_78);
		V_17 = L_79;
		bool L_80 = V_17;
		if (!L_80)
		{
			goto IL_0235;
		}
	}
	{
		V_2 = _stringLiteral672EA443B619B60F88713BFAFFF2A3A7433C6827;
		goto IL_0378;
	}

IL_0235:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		NullCheck(L_81);
		bool L_84;
		L_84 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(123, L_81, L_83);
		V_18 = L_84;
		bool L_85 = V_18;
		if (!L_85)
		{
			goto IL_02b1;
		}
	}
	{
		RuntimeObject* L_86 = ___0_obj;
		Type_t* L_87 = V_0;
		V_20 = (bool)((((RuntimeObject*)(RuntimeObject*)L_86) == ((RuntimeObject*)(Type_t*)L_87))? 1 : 0);
		bool L_88 = V_20;
		if (!L_88)
		{
			goto IL_0262;
		}
	}
	{
		V_2 = _stringLiteral21A5AA703D97ABA8DE2D0B5CBC3B8548E0023E8E;
		goto IL_0378;
	}

IL_0262:
	{
		RuntimeObject* L_89 = ___0_obj;
		V_19 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_89, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = V_19;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91;
		L_91 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_90);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_92;
		L_92 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_90, _stringLiteral306716C9D6B9595061CC04B314471DA1BEBAA9BE, L_91, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_21 = L_92;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a4:
			{
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_93 = V_21;
					if (!L_93)
					{
						goto IL_02b0;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = V_21;
					NullCheck(L_94);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_94);
				}

IL_02b0:
				{
					return;
				}
			}
		});
		try
		{
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = V_21;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96;
			L_96 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_95);
			String_t* L_97;
			L_97 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_95, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_96, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
			String_t* L_98;
			L_98 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, L_97, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			V_2 = L_98;
			goto IL_0378;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02b1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		Type_t* L_101 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_100, L_101, NULL);
		V_22 = L_102;
		bool L_103 = V_22;
		if (!L_103)
		{
			goto IL_0314;
		}
	}
	{
		Type_t* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = VirtualFuncInvoker0< int32_t >::Invoke(47, L_104);
		V_24 = (bool)((((int32_t)((((int32_t)L_105) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_24;
		if (!L_106)
		{
			goto IL_02e6;
		}
	}
	{
		Exception_t* L_107 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F9959D6967BF0405610B0041D446B892A631997)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var)));
	}

IL_02e6:
	{
		StringBuilder_t* L_108 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_108, NULL);
		V_23 = L_108;
		StringBuilder_t* L_109 = V_23;
		NullCheck(L_109);
		StringBuilder_t* L_110;
		L_110 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_109, ((int32_t)91), NULL);
		StringBuilder_t* L_111 = V_23;
		Type_t* L_112 = V_0;
		NullCheck(L_112);
		Type_t* L_113;
		L_113 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_112);
		String_t* L_114;
		L_114 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_113, NULL);
		NullCheck(L_111);
		StringBuilder_t* L_115;
		L_115 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_111, L_114, NULL);
		StringBuilder_t* L_116 = V_23;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_116);
		V_2 = L_117;
		goto IL_0378;
	}

IL_0314:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119 = L_118;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9BADE7CDC853CF94309E8ECAB451D8BEFCD86DFD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_120 = L_119;
		Type_t* L_121 = V_0;
		Type_t* L_122 = L_121;
		if (L_122)
		{
			G_B51_0 = L_122;
			G_B51_1 = 1;
			G_B51_2 = L_120;
			G_B51_3 = L_120;
			goto IL_032d;
		}
		G_B50_0 = L_122;
		G_B50_1 = 1;
		G_B50_2 = L_120;
		G_B50_3 = L_120;
	}
	{
		G_B52_0 = ((String_t*)(NULL));
		G_B52_1 = G_B50_1;
		G_B52_2 = G_B50_2;
		G_B52_3 = G_B50_3;
		goto IL_0332;
	}

IL_032d:
	{
		NullCheck(G_B51_0);
		String_t* L_123;
		L_123 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B51_0);
		G_B52_0 = L_123;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
		G_B52_3 = G_B51_3;
	}

IL_0332:
	{
		NullCheck(G_B52_2);
		(G_B52_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_1), (String_t*)G_B52_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = G_B52_3;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BEC2753A5201D97F16E51BDAFBB18987ECD93B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = L_124;
		RuntimeObject* L_126 = ___0_obj;
		if (L_126)
		{
			G_B54_0 = 3;
			G_B54_1 = L_125;
			G_B54_2 = L_125;
			goto IL_0343;
		}
		G_B53_0 = 3;
		G_B53_1 = L_125;
		G_B53_2 = L_125;
	}
	{
		G_B55_0 = ((String_t*)(NULL));
		G_B55_1 = G_B53_0;
		G_B55_2 = G_B53_1;
		G_B55_3 = G_B53_2;
		goto IL_0349;
	}

IL_0343:
	{
		RuntimeObject* L_127 = ___0_obj;
		NullCheck(L_127);
		String_t* L_128;
		L_128 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_127);
		G_B55_0 = L_128;
		G_B55_1 = G_B54_0;
		G_B55_2 = G_B54_1;
		G_B55_3 = G_B54_2;
	}

IL_0349:
	{
		NullCheck(G_B55_2);
		(G_B55_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B55_1), (String_t*)G_B55_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129 = G_B55_3;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_130 = L_129;
		Type_t* L_131 = V_0;
		RuntimeObject* L_132 = ___0_obj;
		if ((((RuntimeObject*)(Type_t*)L_131) == ((RuntimeObject*)(RuntimeObject*)L_132)))
		{
			G_B57_0 = 5;
			G_B57_1 = L_130;
			G_B57_2 = L_130;
			goto IL_035f;
		}
		G_B56_0 = 5;
		G_B56_1 = L_130;
		G_B56_2 = L_130;
	}
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D));
		G_B58_1 = G_B56_0;
		G_B58_2 = G_B56_1;
		G_B58_3 = G_B56_2;
		goto IL_0364;
	}

IL_035f:
	{
		G_B58_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE771679CD1C7D2C1D9B577D342220161AD2D3D));
		G_B58_1 = G_B57_0;
		G_B58_2 = G_B57_1;
		G_B58_3 = G_B57_2;
	}

IL_0364:
	{
		NullCheck(G_B58_2);
		(G_B58_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B58_1), (String_t*)G_B58_0);
		String_t* L_133;
		L_133 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B58_3, NULL);
		Exception_t* L_134 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_134, L_133, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F_RuntimeMethod_var)));
	}

IL_0370:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0378;
	}

IL_0378:
	{
		String_t* L_135 = V_2;
		return L_135;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m309D35CC998B59CFEDA2D6EB5D0E221B3F1374F7 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_2 = _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07;
		goto IL_0067;
	}

IL_0018:
	{
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_args;
		V_3 = L_6;
		V_4 = 0;
		goto IL_004b;
	}

IL_002f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		StringBuilder_t* L_11 = V_0;
		RuntimeObject* L_12 = V_5;
		String_t* L_13;
		L_13 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_12, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004b:
	{
		int32_t L_16 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralD533C8C15007D85807A5FE481182C225E6A86D08, NULL);
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_20);
		V_2 = L_21;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_22 = V_2;
		return L_22;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.___z_0);
	marshaled.___b_1 = unmarshaled.___b_1;
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.___c_2);
	marshaled.___s_3 = unmarshaled.___s_3;
	marshaled.___i_4 = unmarshaled.___i_4;
	marshaled.___j_5 = unmarshaled.___j_5;
	marshaled.___f_6 = unmarshaled.___f_6;
	marshaled.___d_7 = unmarshaled.___d_7;
	marshaled.___l_8 = unmarshaled.___l_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_back(const jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225& unmarshaled)
{
	bool unmarshaledz_temp_0 = false;
	unmarshaledz_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.___z_0 = unmarshaledz_temp_0;
	int8_t unmarshaledb_temp_1 = 0x0;
	unmarshaledb_temp_1 = marshaled.___b_1;
	unmarshaled.___b_1 = unmarshaledb_temp_1;
	Il2CppChar unmarshaledc_temp_2 = 0x0;
	unmarshaledc_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.___c_2 = unmarshaledc_temp_2;
	int16_t unmarshaleds_temp_3 = 0;
	unmarshaleds_temp_3 = marshaled.___s_3;
	unmarshaled.___s_3 = unmarshaleds_temp_3;
	int32_t unmarshaledi_temp_4 = 0;
	unmarshaledi_temp_4 = marshaled.___i_4;
	unmarshaled.___i_4 = unmarshaledi_temp_4;
	int64_t unmarshaledj_temp_5 = 0;
	unmarshaledj_temp_5 = marshaled.___j_5;
	unmarshaled.___j_5 = unmarshaledj_temp_5;
	float unmarshaledf_temp_6 = 0.0f;
	unmarshaledf_temp_6 = marshaled.___f_6;
	unmarshaled.___f_6 = unmarshaledf_temp_6;
	double unmarshaledd_temp_7 = 0.0;
	unmarshaledd_temp_7 = marshaled.___d_7;
	unmarshaled.___d_7 = unmarshaledd_temp_7;
	intptr_t unmarshaledl_temp_8;
	memset((&unmarshaledl_temp_8), 0, sizeof(unmarshaledl_temp_8));
	unmarshaledl_temp_8 = marshaled.___l_8;
	unmarshaled.___l_8 = unmarshaledl_temp_8;
}
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_com_cleanup(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m2D883140A087C1CDB74FE9195D14643CB9A854F0 (intptr_t ___0_javaClass, String_t* ___1_signature, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_signature;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_m89A45100B1A05DEBF6586AB234A7DBE2044B2490(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_methodName;
		String_t* L_2 = ___2_signature;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_mECADE8D5FC2712DED913CDECBB9D7E8C46812184(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_javaClass;
		String_t* L_1 = ___1_fieldName;
		String_t* L_2 = ___2_signature;
		bool L_3 = ___3_isStatic;
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetFieldID_m698CE89D968CF7A131861E95FF72272A6A14FB95(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_000d;
	}

IL_000d:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_mBEE8C5060C69EE5C6922D4BA06C261055A3FF99F (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* ___0_jrunnable, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_0 = ___0_jrunnable;
		intptr_t L_1;
		L_1 = _AndroidJNIHelper_CreateJavaRunnable_m25981D4249F420FA78240CDC2F7E53B9EAD5F31A(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m75CA3C0BF15517CD52658E08F9FCBA1022822E6F (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___0_proxy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_0 = ___0_proxy;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_0, NULL);
		V_0 = L_1;
	}
	try
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = Permission_GetActivity_mB826613D19EC4BADCAA411A99D2D1B10FEC65153(NULL);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_2, _stringLiteral03F096569B9A00E2ADE02A86F7CCE84DE9A72AEB, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = V_0;
		intptr_t L_6;
		L_6 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_5, NULL);
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_7 = ___0_proxy;
		intptr_t L_8;
		L_8 = _AndroidJNIHelper_CreateJavaProxy_mAC059F7C2716D4E9099EA7268F5378260E6DDF36(L_4, L_6, L_7, NULL);
		V_1 = L_8;
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}

IL_0038:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___1_jniArgs), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6;
		L_6 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&___1_jniArgs), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var)));
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD235D81E8F45112183F59836279ED31B64FA3CBA)), L_5, L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F_RuntimeMethod_var)));
	}

IL_0038:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___0_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_12 = ___1_jniArgs;
		_AndroidJNIHelper_CreateJNIArgArray_mA3976C6F68E0BF29442CB20FBD69CBA72EAB9D45(L_11, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_m4FC468F2AD104C5B159A0EF496BF215C7260DCC9 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_1 = ___1_jniArgs;
		_AndroidJNIHelper_DeleteJNIArgArray_m44D912ADAF5C0E49A914AD7B1DE776C13AC4F61A(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_m0FDAC24E463246206BA8FBDE44B4A73D6CBF3D40 (intptr_t ___0_jclass, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		intptr_t L_2;
		L_2 = _AndroidJNIHelper_GetConstructorID_mD9CF17C7FA280BED12A8BB5D6F12E0D2C6778C3F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_mBC04AC9A326AC66A599C56CB1C8EAE11940A72A3 (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_val, String_t* ___1_boxedClass, String_t* ___2_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB86645FD4CAF139C7CFC0A789470B8A75034AF4);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___1_boxedClass;
		intptr_t L_1;
		L_1 = AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				intptr_t L_2 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_2, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_3 = V_0;
			String_t* L_4 = ___2_signature;
			intptr_t L_5;
			L_5 = AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8(L_3, _stringLiteralEB86645FD4CAF139C7CFC0A789470B8A75034AF4, L_4, NULL);
			V_1 = L_5;
			Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&V_2), (void*)((uintptr_t)(&___0_val)), 1, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
			intptr_t L_6 = V_0;
			intptr_t L_7 = V_1;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_8 = V_2;
			intptr_t L_9;
			L_9 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_6, L_7, L_8, NULL);
			V_3 = L_9;
			goto IL_0037;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		intptr_t L_10 = V_3;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_m2C8ACD78C001428B06BA5B1E5D7341B68A484EE1 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55AB22B2467908555951B9F987BB50A5863EEBDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC608D7891AF4D70F7C0529C9B6A7D0C628BE0E25);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		int32_t L_0 = ___0_value;
		(&V_0)->___i_4 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_1 = V_0;
		intptr_t L_2;
		L_2 = AndroidJNIHelper_Box_mBC04AC9A326AC66A599C56CB1C8EAE11940A72A3(L_1, _stringLiteral55AB22B2467908555951B9F987BB50A5863EEBDA, _stringLiteralC608D7891AF4D70F7C0529C9B6A7D0C628BE0E25, NULL);
		V_1 = L_2;
		goto IL_0024;
	}

IL_0024:
	{
		intptr_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_Box_m354F5BA4592A9B712951AE557F0B0011B7113C0E (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B3E36E6E8906C154EE4B2CED4D1C81C11CC4A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FC1E77413E0B4E1641BA07B63F36293BA59B6B);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		bool L_0 = ___0_value;
		(&V_0)->___z_0 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_1 = V_0;
		intptr_t L_2;
		L_2 = AndroidJNIHelper_Box_mBC04AC9A326AC66A599C56CB1C8EAE11940A72A3(L_1, _stringLiteral99FC1E77413E0B4E1641BA07B63F36293BA59B6B, _stringLiteral82B3E36E6E8906C154EE4B2CED4D1C81C11CC4A8, NULL);
		V_1 = L_2;
		goto IL_0024;
	}

IL_0024:
	{
		intptr_t L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn) (String_t*);
	static AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FindClass(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43 (intptr_t ___0_refMethod, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn) (intptr_t);
	static AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_refMethod);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn) ();
	static AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionOccurred()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn) ();
	static AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ExceptionClear()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn) (int32_t);
	static AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_capacity);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn) (intptr_t);
	static AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_ptr);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn) (intptr_t);
	static AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewGlobalRef_m9A06F23234FB1ECF3F482AF3A6A6148A5916E9A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn) (intptr_t);
	static AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn) (intptr_t);
	static AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewWeakGlobalRef_m27D74DAC1D1F0A11796E4FA669D8CB8DBB1AF2BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn) (intptr_t);
	static AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn) (intptr_t);
	static AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewLocalRef_m286E59F912B94D07D1CE54DFE93A631B2162CD65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn) (intptr_t);
	static AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
	_il2cpp_icall_func(___0_obj);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB (intptr_t ___0_obj1, intptr_t ___1_obj2, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn) (intptr_t, intptr_t);
	static AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_IsSameObject_mA37D2BE7C0E40F30E6D438A937B038E7703DFDAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_obj1, ___1_obj2);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObject_m495F8FDA574E6645C469B34C297768FCF4038C45 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		intptr_t L_5;
		L_5 = AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		intptr_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObjectA_m95F13B24F964C82A9EEDA81EB5120BA818A042AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObjectA(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn) (intptr_t);
	static AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn) (intptr_t, String_t*, String_t*);
	static AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFieldID(System.IntPtr,System.String,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_name, ___2_sig);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B (String_t* ___0_chars, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_chars;
		intptr_t L_1;
		L_1 = AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC (String_t* ___0_chars, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn) (String_t*);
	static AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewStringFromStr_mF56D4A6456A326916DEF2E148E826F6EBC93B3CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewStringFromStr(System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_chars);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C (intptr_t ___0_str, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn) (intptr_t);
	static AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_str);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_obj;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		String_t* L_4;
		L_4 = AndroidJNI_CallStringMethod_m1255E35A517F4BC178F1FC3CA06A6ECDDCF08490(L_0, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m1255E35A517F4BC178F1FC3CA06A6ECDDCF08490 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		String_t* L_5;
		L_5 = AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStringMethodUnsafe_m9C19A5FDE56CEE8DF472517EB9F6BA8ECF004614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStringMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethod_mF3C4822DD3311879591F5BC730DC01ED6F24571F (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		intptr_t L_5;
		L_5 = AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		intptr_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallObjectMethodUnsafe_m2C9A9AB2D47751AA9F2D9048E0B23ED8057C8B56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallObjectMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_m3895BC6DD12AFFF33323C1878E32864E166D8283 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int32_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallIntMethodUnsafe_m41FAB53999456E0A70C8E310BCA63C6310C0B2F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallIntMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m61006AE6C02C028A0A43761330FDB9C9AE655184 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	bool V_2 = false;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		bool L_5;
		L_5 = AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallBooleanMethodUnsafe_m3DF3E7781C06330CA520F66BEA96CFF615794A4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallBooleanMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	bool icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethod_mED891B3ED4526E3CEB3C7B133460E61DCF015432 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int16_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int16_t L_5;
		L_5 = AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int16_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallShortMethodUnsafe_m211540B39F818D275F1F51268C9B676B809BC8DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallShortMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethod_mFF5A7095DF874C9536DE192057C0624F7A500FF6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int8_t V_2 = 0x0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int8_t L_5;
		L_5 = AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int8_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallSByteMethodUnsafe_m40F4B14CAAF4B55614D741C32DACCE3D2CAE68A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallSByteMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethod_m6319B0007021421F5EA1D3660F1322AFE56E9547 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		Il2CppChar L_5;
		L_5 = AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		Il2CppChar L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallCharMethodUnsafe_m258168724E6F6CC0313A584A885A061E0B543698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallCharMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethod_mBED49D3756A1A8FB3038A454AA421734DF87E609 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	float V_2 = 0.0f;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		float L_5;
		L_5 = AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		float L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallFloatMethodUnsafe_mA19B4DA3E878B13479A41063AAA0053D97D25AE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallFloatMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	float icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethod_m4A66035AEA817B8F0C1C2C0FA009447116E9A686 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	double V_2 = 0.0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		double L_5;
		L_5 = AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		double L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallDoubleMethodUnsafe_m211C3DA7C876DD9C5B925230C220F6E51A6D245F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallDoubleMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	double icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethod_m63392BAB11BF3A055E39B43A0FB3BFF959AD5253 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int64_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int64_t L_5;
		L_5 = AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int64_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallLongMethodUnsafe_m0AE09B468D8A3EB89920E9570731E95725A5F3C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallLongMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___0_obj, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_clazz;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		String_t* L_4;
		L_4 = AndroidJNI_CallStaticStringMethod_m42628886D81E2DB3F9802AEC7A872B5EB5044FE7(L_0, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m42628886D81E2DB3F9802AEC7A872B5EB5044FE7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		String_t* L_5;
		L_5 = AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticStringMethodUnsafe_m809DC1DE90B6FC3564CCDAB919740DF1916EC552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticStringMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethod_m563873CBBD357A5301C122CAF6563B8AA302E43C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		intptr_t L_5;
		L_5 = AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		intptr_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticObjectMethodUnsafe_m3892FD7D99D186C1AE028F8E49C660737E1DF89D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticObjectMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethod_mD9A45F8ECDE53096DDAC297DEDA6D6309C80BBC3 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int32_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticIntMethodUnsafe_mD53EAF407A8B5062744982BFD22F22B340065BEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticIntMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethod_mD168ECFAF2855BE5A4E61B5EF3EFADAAA7297734 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	bool V_2 = false;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		bool L_5;
		L_5 = AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticBooleanMethodUnsafe_m3F99D47A3B64BC4477DCF3228859601094BE1FAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticBooleanMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	bool icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethod_m78EEA97BFBC305BCB3B7578A81EF245F71ADA1A9 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int16_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int16_t L_5;
		L_5 = AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int16_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticShortMethodUnsafe_m8379FEC6D9133BC9CEA171BE5A82351576CA5C9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticShortMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethod_m0EF2AF8C9395B147DCE092F9A1778BF0FB23ACDB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int8_t V_2 = 0x0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int8_t L_5;
		L_5 = AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int8_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticSByteMethodUnsafe_m1921CB76340B4B912D290B317CE1D1445A803F65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticSByteMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethod_m8A6B5AAB05E1AC468D1E927A02E9ECEA46D933DB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		Il2CppChar L_5;
		L_5 = AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		Il2CppChar L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticCharMethodUnsafe_mB7CBD75837AAED45237D624B79F081DC1E60967C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticCharMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethod_mEC10B7CC01D5C2933E9A993D8C9683EE6C5EB5CD (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	float V_2 = 0.0f;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		float L_5;
		L_5 = AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		float L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticFloatMethodUnsafe_m68A9454AF94B2DD4F31C2AA29A412D4599010435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticFloatMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	float icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethod_m3409D4BF5A4801BCAB79E4EE0498CD358B283F4A (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	double V_2 = 0.0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		double L_5;
		L_5 = AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		double L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticDoubleMethodUnsafe_m2B11C8E55CB6CFB33749CF1F8750F5D7669BFEFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticDoubleMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	double icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethod_mB5EA26617BD31207DFD57C50FD49ECAF659D6CCB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	int64_t V_2 = 0;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		int64_t L_5;
		L_5 = AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		int64_t L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticLongMethodUnsafe_m61FBCF3A08EA05FB3B5E0C3FD54A6E6D64E816FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticLongMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethod_m12188877F62FA50C21D16ABEF706410E81651D50 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_0 = NULL;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* V_1 = NULL;
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_0;
		L_0 = Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049((&___2_args), Span_1_GetPinnableReference_m56356CEAA8E67F718DC61AF6B7C4A08BB6CB7049_RuntimeMethod_var);
		V_1 = L_0;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_1 = V_1;
		V_0 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)L_1);
		intptr_t L_2 = ___0_clazz;
		intptr_t L_3 = ___1_methodID;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4 = V_0;
		AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08(L_2, L_3, L_4, NULL);
		V_1 = (jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* ___2_args, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08_ftn) (intptr_t, intptr_t, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225*);
	static AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_CallStaticVoidMethodUnsafe_mD825FBC0CC3F6D642C2123AC79933C21AE26CA08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::CallStaticVoidMethodUnsafe(System.IntPtr,System.IntPtr,UnityEngine.jvalue*)");
	_il2cpp_icall_func(___0_clazz, ___1_methodID, ___2_args);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef String_t* (*AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticStringField(System.IntPtr,System.IntPtr)");
	String_t* icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticObjectField(System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef bool (*AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticBooleanField(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int8_t (*AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticSByteField(System.IntPtr,System.IntPtr)");
	int8_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef Il2CppChar (*AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticCharField(System.IntPtr,System.IntPtr)");
	Il2CppChar icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int16_t (*AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticShortField(System.IntPtr,System.IntPtr)");
	int16_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticIntField(System.IntPtr,System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef int64_t (*AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticLongField(System.IntPtr,System.IntPtr)");
	int64_t icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef float (*AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticFloatField(System.IntPtr,System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	typedef double (*AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn) (intptr_t, intptr_t);
	static AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetStaticDoubleField(System.IntPtr,System.IntPtr)");
	double icallRetVal = _il2cpp_icall_func(___0_clazz, ___1_fieldID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn) (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*);
	static AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*);
	static AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToByteArray(System.Byte[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int8_t* V_2 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_3 = NULL;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (int8_t*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (int8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		int8_t* L_6 = V_2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888 (int8_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888_ftn) (int8_t*, int32_t);
	static AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToSByteArray_mFF630560D87EDF0DECAFDAD991B4F5D97D14F888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToSByteArray(System.SByte*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (Il2CppChar*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (Il2CppChar*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		Il2CppChar* L_6 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F (Il2CppChar* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F_ftn) (Il2CppChar*, int32_t);
	static AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToCharArray_mC6D05FB1B5597173C755B9C722434B2E7EC3F88F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToCharArray(System.Char*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int16_t* V_2 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_3 = NULL;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (int16_t*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (int16_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		int16_t* L_6 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7 (int16_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7_ftn) (int16_t*, int32_t);
	static AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToShortArray_m1074CE2547E0B7BBB2AEB765578E75D313496DC7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToShortArray(System.Int16*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (int32_t*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (int32_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		int32_t* L_6 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56 (int32_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56_ftn) (int32_t*, int32_t);
	static AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToIntArray_m81093A2BD5CF7C3B8BFDC2CD3D476D7AC60C1F56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToIntArray(System.Int32*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t* V_2 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_3 = NULL;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (int64_t*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (int64_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		int64_t* L_6 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7 (int64_t* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7_ftn) (int64_t*, int32_t);
	static AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToLongArray_mECBB804892E33578D9C6ECEF875A8FE3A00803C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToLongArray(System.Int64*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	float* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (float*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (float*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		float* L_6 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05 (float* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05_ftn) (float*, int32_t);
	static AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToFloatArray_m7EB20DAF4AB85B6B3CBCA81FD28E160D03106E05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToFloatArray(System.Single*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	double* V_2 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_3 = NULL;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (double*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (double*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		double* L_6 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8;
		L_8 = AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		V_1 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		intptr_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C (double* ___0_array, int32_t ___1_length, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C_ftn) (double*, int32_t);
	static AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToDoubleArray_m96775F800752F09E88CC22CDAE6722F833F8685C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToDoubleArray(System.Double*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182 (intptr_t* ___0_array, int32_t ___1_length, intptr_t ___2_arrayClass, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182_ftn) (intptr_t*, int32_t, intptr_t);
	static AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr*,System.Int32,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_length, ___2_arrayClass);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944 (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_arrayClass, const RuntimeMethod* method) 
{
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t* V_2 = NULL;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* V_3 = NULL;
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_0012:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_2 = ___0_array;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = L_2;
		V_3 = L_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = V_3;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0021;
		}
	}

IL_001c:
	{
		V_2 = (intptr_t*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0021:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_5 = V_3;
		NullCheck(L_5);
		V_2 = (intptr_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_002a:
	{
		intptr_t* L_6 = V_2;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = ___0_array;
		NullCheck(L_7);
		intptr_t L_8 = ___1_arrayClass;
		intptr_t L_9;
		L_9 = AndroidJNI_ToObjectArray_mE2FC617A376102D3F45FE0BD382B59A0B592F182(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, NULL);
		V_1 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		intptr_t L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn) (intptr_t);
	static AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)");
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn) (intptr_t);
	static AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)");
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn) (intptr_t);
	static AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)");
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn) (intptr_t);
	static AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)");
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn) (intptr_t);
	static AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)");
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn) (intptr_t);
	static AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)");
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn) (intptr_t);
	static AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)");
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn) (intptr_t);
	static AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)");
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn) (intptr_t);
	static AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)");
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB (intptr_t ___0_array, const RuntimeMethod* method) 
{
	typedef int32_t (*AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn) (intptr_t);
	static AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_array);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043 (int32_t ___0_size, intptr_t ___1_clazz, intptr_t ___2_obj, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn) (int32_t, intptr_t, intptr_t);
	static AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_NewObjectArray_m4EAB5EA40119977AAD41793C78A3C19FF19A7043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_size, ___1_clazz, ___2_obj);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	typedef intptr_t (*AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn) (intptr_t, int32_t);
	static AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_array, ___1_index);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2 (intptr_t ___0_array, int32_t ___1_index, intptr_t ___2_obj, const RuntimeMethod* method) 
{
	typedef void (*AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn) (intptr_t, int32_t, intptr_t);
	static AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AndroidJNI_SetObjectArrayElement_mAEA12A91B1C20BF46CBFB5DC3B1D5AF95AA463B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___0_array, ___1_index, ___2_obj);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC (const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		intptr_t L_0;
		L_0 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
		V_0 = L_0;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, 0, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
		intptr_t L_4;
		L_4 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C)), NULL);
		V_2 = L_4;
		intptr_t L_5;
		L_5 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E)), NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				intptr_t L_6 = V_0;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_6, NULL);
				intptr_t L_7 = V_2;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_7, NULL);
				intptr_t L_8 = V_3;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_8, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_9 = V_2;
			intptr_t L_10;
			L_10 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56)), NULL);
			V_4 = L_10;
			intptr_t L_11 = V_3;
			intptr_t L_12;
			L_12 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB)), NULL);
			V_5 = L_12;
			intptr_t L_13 = V_0;
			intptr_t L_14 = V_4;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_15 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)0);
			String_t* L_16;
			L_16 = AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C(L_13, L_14, L_15, NULL);
			V_6 = L_16;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_17 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var)), (uint32_t)1);
			V_7 = L_17;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_18 = V_7;
			NullCheck(L_18);
			intptr_t L_19 = V_0;
			((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_19;
			intptr_t L_20 = V_3;
			intptr_t L_21 = V_5;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = V_7;
			String_t* L_23;
			L_23 = AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB(L_20, L_21, L_22, NULL);
			V_8 = L_23;
			String_t* L_24 = V_6;
			String_t* L_25 = V_8;
			AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD* L_26 = (AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)));
			AndroidJavaException__ctor_mD4B5992BB074504F8E86D79EA98752D3CB154541(L_26, L_24, L_25, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC_RuntimeMethod_var)));
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteGlobalRef_mD4ECCC474E98F40B65184E138EF9D84A4F4AAAA0 (intptr_t ___0_globalref, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_globalref;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___0_globalref;
		AndroidJNI_DeleteGlobalRef_mC50B6C056F32BB9F44B800949FA169C728D4C41D(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteWeakGlobalRef_mBC786B6240AB03EA493A71A43D4297871FFC679A (intptr_t ___0_globalref, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_globalref;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___0_globalref;
		AndroidJNI_DeleteWeakGlobalRef_mA1F19C1656B86A22A339497C335C156648736E6D(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_localref;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_3 = ___0_localref;
		AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewString_m6A9EC18D8B122E7B901DB6BF469BFD38D1E8FE5A (String_t* ___0_chars, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			String_t* L_0 = ___0_chars;
			intptr_t L_1;
			L_1 = AndroidJNI_NewString_m6F3143989EFE907B5D0091850D1754421795A39B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_str;
			String_t* L_1;
			L_1 = AndroidJNI_GetStringChars_mB61E4F713A2457F7DF053DBFE4455A559DA9623C(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectClass_m6FD815CB0F9760199ACD03D16FC88FED055BC9F3 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_ptr;
			intptr_t L_1;
			L_1 = AndroidJNI_GetObjectClass_m418C2D7DAE432AD104209833A0DF06B16E1E74B5(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_mAD5134FF6DE446852F3F28B791C15ADBD5E9E5E8 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_mF095B57A77BE529D51F369D94B66D14C2BC88536 (intptr_t ___0_obj, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_mAD9554C6DCE9389C441A9AB556001211B9B2663D (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetFieldID_mC6BFB1F17EF5FC82D45F08D25C11D346E51673F2(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_mCCCE792F7BE47B6370951D417CCB1E2713DBF482 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			String_t* L_1 = ___1_name;
			String_t* L_2 = ___2_sig;
			intptr_t L_3;
			L_3 = AndroidJNI_GetStaticFieldID_m89476A442BF57C00C1CBB0DA588077C2B4171654(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_mED131988778BF0267C4CE711854D4BC26D0D960B (intptr_t ___0_refMethod, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_refMethod;
			intptr_t L_1;
			L_1 = AndroidJNI_FromReflectedMethod_m1613634C8A528B0A2A1F6828B609F31792B7DF43(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m2E8072B600873B4D87B2197C1168967050208D1B (String_t* ___0_name, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			String_t* L_0 = ___0_name;
			intptr_t L_1;
			L_1 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewObject_m0DEC2DAD0835B99FC58E6B44F14994A7EE05565E (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_NewObject_m495F8FDA574E6645C469B34C297768FCF4038C45(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			intptr_t L_2;
			L_2 = AndroidJNI_GetStaticObjectField_m52268140CD4BD65B9FAC976669DBBD65D763731C(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			String_t* L_2;
			L_2 = AndroidJNI_GetStaticStringField_mFE7F821C85A677C32C199BB9B23CEB66A523A977(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetStaticCharField_m3B1D9B99424A25FB6F665DA504125C0F20CEC0BF(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			double L_2;
			L_2 = AndroidJNI_GetStaticDoubleField_mF882F4F690FE87E2A81D8779BB62C905DC217700(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			float L_2;
			L_2 = AndroidJNI_GetStaticFloatField_m68704C9BF92DF84E6982FCB03EAC0935F3934399(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int64_t L_2;
			L_2 = AndroidJNI_GetStaticLongField_mD403EAC792740D06B021D1E9D34D25CAFEE59194(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int16_t L_2;
			L_2 = AndroidJNI_GetStaticShortField_m66353DB84BAFDD75B35914D8AA5056AC6B3C0BDB(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int8_t L_2;
			L_2 = AndroidJNI_GetStaticSByteField_m0A5D05E28F47C16783818258361281644C5C6585(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			bool L_2;
			L_2 = AndroidJNI_GetStaticBooleanField_m6BC154F7001DA04748F5F96F61878A3D6205ECA4(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_fieldID;
			int32_t L_2;
			L_2 = AndroidJNI_GetStaticIntField_m039F7CB6BD326410250D18A49836F55CD1DD87F9(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m7186730B5574226E150225A11B48B4B15FC74020 (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___0_clazz;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		AndroidJNISafe_CallStaticVoidMethod_m6550C24C8D4E39C18D1D9C97FD2DBEED5452DFC2(L_0, L_1, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_CallStaticVoidMethod_m6550C24C8D4E39C18D1D9C97FD2DBEED5452DFC2 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000e:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			AndroidJNI_CallStaticVoidMethod_m12188877F62FA50C21D16ABEF706410E81651D50(L_0, L_1, L_2, NULL);
			goto IL_0017;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m545474765D15AC9B0144192760B45BAA963B8F5E (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_clazz;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		intptr_t L_4;
		L_4 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_0, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_CallStaticObjectMethod_m563873CBBD357A5301C122CAF6563B8AA302E43C(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m8BD92117111558CC00540B45437B4A90222B89BE (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_clazz;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		String_t* L_4;
		L_4 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_0, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			String_t* L_3;
			L_3 = AndroidJNI_CallStaticStringMethod_m42628886D81E2DB3F9802AEC7A872B5EB5044FE7(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallStaticCharMethod_m8A6B5AAB05E1AC468D1E927A02E9ECEA46D933DB(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			double L_3;
			L_3 = AndroidJNI_CallStaticDoubleMethod_m3409D4BF5A4801BCAB79E4EE0498CD358B283F4A(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			float L_3;
			L_3 = AndroidJNI_CallStaticFloatMethod_mEC10B7CC01D5C2933E9A993D8C9683EE6C5EB5CD(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int64_t L_3;
			L_3 = AndroidJNI_CallStaticLongMethod_mB5EA26617BD31207DFD57C50FD49ECAF659D6CCB(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int16_t L_3;
			L_3 = AndroidJNI_CallStaticShortMethod_m78EEA97BFBC305BCB3B7578A81EF245F71ADA1A9(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int8_t L_3;
			L_3 = AndroidJNI_CallStaticSByteMethod_m0EF2AF8C9395B147DCE092F9A1778BF0FB23ACDB(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			bool L_3;
			L_3 = AndroidJNI_CallStaticBooleanMethod_mD168ECFAF2855BE5A4E61B5EF3EFADAAA7297734(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_clazz;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int32_t L_3;
			L_3 = AndroidJNI_CallStaticIntMethod_mD9A45F8ECDE53096DDAC297DEDA6D6309C80BBC3(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectField_m5E3C5FF1582F4A62155220FDCB849574C0E36AD6(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			String_t* L_2;
			L_2 = AndroidJNI_GetStringField_m6A2FA57794ADA8735B103FF5D4819F3C4813992F(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			Il2CppChar L_2;
			L_2 = AndroidJNI_GetCharField_m7DA94A98ED33A97EE7874872C9F51515F151F019(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		Il2CppChar L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			double L_2;
			L_2 = AndroidJNI_GetDoubleField_mE2B23D9F1363B48811B6207BEF8A18B39CB3B22B(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		double L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			float L_2;
			L_2 = AndroidJNI_GetFloatField_m5C92103D7307A19F72F28DD40118F84D91C19A39(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int64_t L_2;
			L_2 = AndroidJNI_GetLongField_mC2DC315C44320CE9A406B95A4CAA1117A0FF56A8(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int64_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int16_t L_2;
			L_2 = AndroidJNI_GetShortField_m5EEACBB3920623AD54D9DF77499E8BA92B35E3D8(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int16_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int8_t L_2;
			L_2 = AndroidJNI_GetSByteField_mB81412A4748ABB311535E2B73092569AAE6CB735(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int8_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			bool L_2;
			L_2 = AndroidJNI_GetBooleanField_mC900428E2FD1E55BA21808A31B760FB0F10BC047(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_fieldID;
			int32_t L_2;
			L_2 = AndroidJNI_GetIntField_m6B78A3F6F8EE6D1ADEDECF1EC145BC9C5AE37E88(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_mBA06053048352614B802E9429FFF50C4A1B56057 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_obj;
		intptr_t L_1 = ___1_methodID;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___2_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_inline((&L_3), L_2, Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_RuntimeMethod_var);
		intptr_t L_4;
		L_4 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_0, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		intptr_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			intptr_t L_3;
			L_3 = AndroidJNI_CallObjectMethod_mF3C4822DD3311879591F5BC730DC01ED6F24571F(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		intptr_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			String_t* L_3;
			L_3 = AndroidJNI_CallStringMethod_m1255E35A517F4BC178F1FC3CA06A6ECDDCF08490(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			Il2CppChar L_3;
			L_3 = AndroidJNI_CallCharMethod_m6319B0007021421F5EA1D3660F1322AFE56E9547(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		Il2CppChar L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			double L_3;
			L_3 = AndroidJNI_CallDoubleMethod_m4A66035AEA817B8F0C1C2C0FA009447116E9A686(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		double L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			float L_3;
			L_3 = AndroidJNI_CallFloatMethod_mBED49D3756A1A8FB3038A454AA421734DF87E609(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int64_t L_3;
			L_3 = AndroidJNI_CallLongMethod_m63392BAB11BF3A055E39B43A0FB3BFF959AD5253(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int16_t L_3;
			L_3 = AndroidJNI_CallShortMethod_mED891B3ED4526E3CEB3C7B133460E61DCF015432(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int16_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int8_t L_3;
			L_3 = AndroidJNI_CallSByteMethod_mFF5A7095DF874C9536DE192057C0624F7A500FF6(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int8_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			bool L_3;
			L_3 = AndroidJNI_CallBooleanMethod_m61006AE6C02C028A0A43761330FDB9C9AE655184(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_obj;
			intptr_t L_1 = ___1_methodID;
			Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_2 = ___2_args;
			int32_t L_3;
			L_3 = AndroidJNI_CallIntMethod_m3895BC6DD12AFFF33323C1878E32864E166D8283(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0016;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
			L_1 = AndroidJNI_FromCharArray_m7149E127743A7D659017D1E1C3B174C3D615C638(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1;
			L_1 = AndroidJNI_FromDoubleArray_mF5D9E2F0D26862F10C98E8ECC8EB436EB9804692(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
			L_1 = AndroidJNI_FromFloatArray_mBA9EB0CE3EC9662D669877E2D7DA004B794C4331(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
			L_1 = AndroidJNI_FromLongArray_mB042FE2F3D5AC91673FE72145E98D04B8775BE36(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
			L_1 = AndroidJNI_FromShortArray_mA89CCCFED02DDFDA91835418DAD8211A4B7BDDC6(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
			L_1 = AndroidJNI_FromByteArray_m5C52B7F13653B39F42FFB7FEB1B665FAC07F0388(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
			L_1 = AndroidJNI_FromSByteArray_mFED4929D339523808AE9C94F3C2AB3A317E9C5E1(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
			L_1 = AndroidJNI_FromBooleanArray_m95D7BE45F113A7576DF27BF14BBDC35DD7748A67(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
			L_1 = AndroidJNI_FromIntArray_m5B8A47C4B6FDD607B3A67B02D4D1297B4C11CA6A(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m4C95D999242E900D9C70891E44100A5EB5020C5F (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_type, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
			intptr_t L_1 = ___1_type;
			intptr_t L_2;
			L_2 = AndroidJNI_ToObjectArray_m4843C4E669DDFDA28853BB0D627A4A30DD0E9944(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mFBF42A984F1C5D618CD0366B3B344E2BF8856B12 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToCharArray_mF58CDE4DA760CD4518E8F5F4DAD7A885B7166C5B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m6C1716EFF6DCA1AE3E04D292EB38A31E4132C1C1 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToDoubleArray_m368EFFE8C4387F994423DFC4DA5834A4D4B1EC0E(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m18207119C3AC0C5D71DA537B2CEB21D11301B732 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToFloatArray_m61F723D6040BFC3A3622EE08E0EF9BBCE2E8E88B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m67486F6D1F467D2354EEB74DACFDA79A1F3F7E0C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToLongArray_m53576F1D2526D6021B07FF19F4F3C220B13A4A92(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m170C4D2D7D1ED3A02B4C707FB666BF4F2A9D02ED (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToShortArray_m28E2EB565D92A8A0396646B0E3EBFF80A7E10246(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_mB36D6ABE2FF31844554A353E136B2153BFDF0F65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToByteArray_mE72C1AF34FE140D36F10A0386454137D4550FBDD(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToSByteArray_m10BD1D36C8D2D7F764FD8C87742FD700DB48665C (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToSByteArray_m1307FD21FE087877599392D80474D56EA03AA0B8(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m94630C7B69D819D7BE683691B46879C6154B5F3A (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToBooleanArray_m06017AECA409DC3207C993113FA1F88277F1D71B(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_mE4647AC18D85206D98121752C3B8CD7D52A321EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
			intptr_t L_1;
			L_1 = AndroidJNI_ToIntArray_mA5B1AF83EE6484437CABB1485875E86A5EAA8208(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_m02B6993F13670DD2D1557D75EC31D8D860F10FD0 (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			int32_t L_1 = ___1_index;
			intptr_t L_2;
			L_2 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_0, L_1, NULL);
			V_0 = L_2;
			goto IL_0015;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0015:
	{
		intptr_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{
				AndroidJNISafe_CheckException_m465A2955F921417ED62C035390E550889E93F8DC(NULL);
				return;
			}
		});
		try
		{
			intptr_t L_0 = ___0_array;
			int32_t L_1;
			L_1 = AndroidJNI_GetArrayLength_m7C02A09EAFEC667B3E8EBA9A06177E22E61028CB(L_0, NULL);
			V_0 = L_1;
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Permission_GetActivity_mB826613D19EC4BADCAA411A99D2D1B10FEC65153 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields*)il2cpp_codegen_static_fields_for(Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_0 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields*)il2cpp_codegen_static_fields_for(Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_1 = L_2;
		goto IL_0047;
	}

IL_0015:
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_2;
					if (!L_4)
					{
						goto IL_003e;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_003e:
				{
					return;
				}
			}
		});
		try
		{
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = V_2;
			NullCheck(L_6);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
			L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_6, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields*)il2cpp_codegen_static_fields_for(Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var))->___m_Activity_0 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&((Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields*)il2cpp_codegen_static_fields_for(Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var))->___m_Activity_0), (void*)L_7);
			goto IL_003f;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_StaticFields*)il2cpp_codegen_static_fields_for(Permission_t915D93FAF4E75226FA1C92144D9291C232C15803_il2cpp_TypeInfo_var))->___m_Activity_0;
		V_1 = L_8;
		goto IL_0047;
	}

IL_0047:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidJavaRunnable_Invoke_m98CFB1479B942F71BF29F53CFDAC1CB9DAFAEBE1_inline (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer_0 = L_3;
		int32_t L_4 = ___1_length;
		__this->____length_1 = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m13E8571165DB8DB1A1909B44B65D4F220890AC8F_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___0_array, const RuntimeMethod* method) 
{
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225));
		goto IL_0037;
	}

IL_0037:
	{
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_4;
		L_4 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>(L_3);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
