#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MethodInfo_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F;
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637;
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCC519CABEDAEB613734AF73009C6330BE9E186E4 
{
};
struct Binding_t4175ACCDA50512713728ADA73FFBB161A0B2C496  : public RuntimeObject
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
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};
struct UIntPtr_t 
{
	void* ____pointer_1;
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
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80 
{
	uint32_t ___role_0;
	uint32_t ___state_1;
	uint32_t ___handshakeState_2;
	intptr_t ___ctx_3;
	unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___config_4;
	intptr_t ___internalCtx_5;
};
struct unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 
{
	uint8_t* ___dataPtr_0;
	uintptr_t ___dataLen_1;
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
struct unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F 
{
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___caPEM_0;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___serverPEM_1;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___privateKeyPEM_2;
	uint32_t ___clientAuth_3;
	uint32_t ___transportProtocol_4;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___psk_5;
	unitytls_dataRef_t1BFC0BF3A4F679AA362BA5EB11A849C82D5F64B8 ___pskIdentity_6;
	intptr_t ___onDataCB_7;
	intptr_t ___dataSendCB_8;
	intptr_t ___dataReceiveCB_9;
	intptr_t ___dataReceiveTimeoutCB_10;
	intptr_t ___transportUserData_11;
	intptr_t ___applicationUserData_12;
	int32_t ___handshakeReturnsOnStep_13;
	int32_t ___handshakeReturnsIfWouldBlock_14;
	uint32_t ___ssl_read_timeout_ms_15;
	uint8_t* ___hostname_16;
	uint32_t ___tracelevel_17;
	intptr_t ___logCallback_18;
	uint32_t ___ssl_handshake_timeout_min_19;
	uint32_t ___ssl_handshake_timeout_max_20;
	uint16_t ___mtu_21;
};
struct unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637  : public MulticastDelegate_t
{
};
struct unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D  : public MulticastDelegate_t
{
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_data, uintptr_t ___2_dataLen, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint8_t*, uintptr_t);
	static Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_send_data_m5086C52FA8F5F51D6A764CDF277FFFBCBA6D1928_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_send_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_data, ___2_dataLen);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, uint8_t* ___1_buffer, uintptr_t ___2_bufferLen, uintptr_t* ___3_bytesRead, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*, uint8_t*, uintptr_t, uintptr_t*);
	static Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_read_data_mF232A9B9C2DB17E25ACB540144CB2C4CD3D67C2F_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_read_data(Unity.TLS.LowLevel.Binding/unitytls_client*,System.Byte*,System.UIntPtr,System.UIntPtr*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance, ___1_buffer, ___2_bufferLen, ___3_bytesRead);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5 (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___0_config, const RuntimeMethod* method) 
{
	typedef void (*Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn) (unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*);
	static Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_config_m82074495EA2A17758484F4A7FF1C6BB2EFE198B5_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init_config(Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	_il2cpp_icall_func(___0_config);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026 (uint32_t ___0_role, unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F* ___1_config, const RuntimeMethod* method) 
{
	typedef unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* (*Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn) (uint32_t, unitytls_client_config_t573FD029CCF308C0D922A8643773696C20726F4F*);
	static Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_create_mA830787311EBD55A7ACAA925541EE3A28F398026_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_create(System.UInt32,Unity.TLS.LowLevel.Binding/unitytls_client_config*)");
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* icallRetVal = _il2cpp_icall_func(___0_role, ___1_config);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef void (*Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_destroy_m3454EE8424B3F530183F2FB04DE935EFA0D4CE0B_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_destroy(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	_il2cpp_icall_func(___0_clientInstance);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef int32_t (*Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_init_m4A2D0AEC37B2EEAFFF7793ECE1C27B52E718C9AA_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_init(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_handshake_mD90B620858219D8DF2E01747ED7DEFE6CF944F46_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_handshake(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199 (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_handshake_state_m5DCB8B5E8841F1BCF2CC2E52310B30CCE0EB2199_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_handshake_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_state_mFA36FD1C48800D3B88D142ED9E1FFFC65F196B0F_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_state(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___0_clientInstance, const RuntimeMethod* method) 
{
	typedef uint32_t (*Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn) (unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80*);
	static Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Binding_unitytls_client_get_role_m1F838334033B29D9251DDD0153303DEE21B6C8EB_ftn)il2cpp_codegen_resolve_icall ("Unity.TLS.LowLevel.Binding::unitytls_client_get_role(Unity.TLS.LowLevel.Binding/unitytls_client*)");
	uint32_t icallRetVal = _il2cpp_icall_func(___0_clientInstance);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_Multicast(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* currentDelegate = reinterpret_cast<unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenInst(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStatic(unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_send_callback__ctor_mA3190917673633997FB351384D19AC2DCB09F3D4 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_send_callback_Invoke_m9BAC5496CD637DEBFA55F4D2BA1960C45B8AF277 (unitytls_client_data_send_callback_tB5FB8708A9D65A75EAE308331AF01EC223ADEC0D* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_Multicast(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* currentDelegate = reinterpret_cast<unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenInst(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStatic(unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637 (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, uint8_t*, uintptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc(___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unitytls_client_data_receive_callback__ctor_m856BA3CAF960B07B7C62FF0A91FA3108F55FF56E (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t unitytls_client_data_receive_callback_Invoke_m569CE992486A426475D923974F91171087AAE6B8 (unitytls_client_data_receive_callback_tECB295DCE81436DB820825B50A360D64B4195637* __this, intptr_t ___0_arg0, uint8_t* ___1_arg1, uintptr_t ___2_arg2, uint32_t ___3_arg3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint8_t*, uintptr_t, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, ___2_arg2, ___3_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
