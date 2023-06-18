#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41;
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56;
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tC6F3BE26E8DBB3B8108F8360B026950D37DAF754 
{
};
struct InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873  : public RuntimeObject
{
	String_t* ___Identifier_0;
	RuntimeObject* ___UnityAdsIdentifierProvider_1;
	RuntimeObject* ___UnityAnalyticsIdentifierProvider_2;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56  : public RuntimeObject
{
};
struct UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D  : public RuntimeObject
{
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
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
struct IntPtr_t 
{
	void* ___m_value_0;
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
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty_0;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4 (String_t* ___0_identifier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_mD8E8D5B7A72C54F2517D33F9F2C89FA708CC6BF7 (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* L_0 = (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56*)il2cpp_codegen_object_new(UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56_il2cpp_TypeInfo_var);
		UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8(L_0, NULL);
		__this->___UnityAdsIdentifierProvider_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityAdsIdentifierProvider_1), (void*)L_0);
		UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* L_1 = (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D*)il2cpp_codegen_object_new(UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D_il2cpp_TypeInfo_var);
		UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B(L_1, NULL);
		__this->___UnityAnalyticsIdentifierProvider_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnityAnalyticsIdentifierProvider_2), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mC089486FCD96983C9186689C41D1D75E36EFB90C (InstallationId_tA5712B394172DB4DBA3B5F9A67D5522D37E2B873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0;
		L_0 = InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C(NULL);
		__this->___Identifier_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_0), (void*)L_0);
		String_t* L_1 = __this->___Identifier_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___UnityAnalyticsIdentifierProvider_2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = __this->___UnityAdsIdentifierProvider_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_9 = V_0;
		__this->___Identifier_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_0), (void*)L_9);
		goto IL_005e;
	}

IL_0042:
	{
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_12 = V_1;
		__this->___Identifier_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_0), (void*)L_12);
		goto IL_005e;
	}

IL_0053:
	{
		String_t* L_13;
		L_13 = InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A(NULL);
		__this->___Identifier_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Identifier_0), (void*)L_13);
	}

IL_005e:
	{
		String_t* L_14 = __this->___Identifier_0;
		InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4(L_14, NULL);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_17 = __this->___UnityAnalyticsIdentifierProvider_2;
		String_t* L_18 = __this->___Identifier_0;
		NullCheck(L_17);
		InterfaceActionInvoker1< String_t* >::Invoke(1, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_17, L_18);
	}

IL_0082:
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (!L_20)
		{
			goto IL_009b;
		}
	}
	{
		RuntimeObject* L_21 = __this->___UnityAdsIdentifierProvider_1;
		String_t* L_22 = __this->___Identifier_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< String_t* >::Invoke(1, IUserIdentifierProvider_t37955FEADD673B2F4333F6D756F9F9BEC3486E41_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_ReadIdentifierFromFile_m126AF7B4F947DBB382AA8848D51FEA52C91C3E7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_WriteIdentifierToFile_m67273AD8773FDBEE468B0BB7F502B3383AB9A6C4 (String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_identifier;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral9802A0C242B6B1F11EC74461BB2DF09CE62B8035, L_0, NULL);
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InstallationId_GenerateGuid_m7220D8C5AE5B4DCA4F4C01A6F921FF66C23E855A (const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAdsIdentifier_get_UserId_m4E41B6AEB6405B6BFA7D4E52FE3F66478A18D90A (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
{
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier_set_UserId_mA2519CC19694D24C35D6E2E72B79E2CE34DACA4F (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAdsIdentifier__ctor_mFD5085EB0AD902D689B820D13D697CE640E2E7B8 (UnityAdsIdentifier_t8D3A8D6DB9A1FB469E2E7F3D58B30C3D0D71DA56* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityAnalyticsIdentifier_get_UserId_m15964ABDB88E2D752C471143ED9C5A32017989CE (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier_set_UserId_m2751FA3CB0A777DAC8AA56ECBE8945EED55CAC3C (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		String_t* L_0 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral20353326ACF03BB4112F3080DBCA0AC47DBC7BB2, L_0, NULL);
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		goto IL_0015;
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
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0015;
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAnalyticsIdentifier__ctor_mE19B73CB1414B5AC0619E8EF1366C0164B06D14B (UnityAnalyticsIdentifier_tAB8DD85C666D878FC108C324E10DF6528B5BDA5D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
