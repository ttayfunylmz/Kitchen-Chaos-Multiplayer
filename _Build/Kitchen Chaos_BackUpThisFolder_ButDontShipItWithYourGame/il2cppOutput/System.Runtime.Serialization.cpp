#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F;
struct DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73;
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F;
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5CFA55679A8E9D2525AFBC9C50BEC051BEA21310 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___name_0;
	bool ___isNameSetExplicitly_1;
	bool ___isReference_2;
};
struct DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___name_0;
	bool ___isNameSetExplicitly_1;
	int32_t ___order_2;
	bool ___isRequired_3;
	bool ___emitDefaultValue_4;
};
struct EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___value_0;
	bool ___isValueSetExplicitly_1;
};
struct IgnoreDataMemberAttribute_tC1AC455123E5BF654B22396F3E5CB1C514D86777  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
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
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractAttribute__ctor_mAFB75FDCDDBB5925CCE916496408E843E9DDB6BC (DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataContractAttribute_get_IsReference_mEC2FFE0351B0DD896E7805670D6A614B1AE4C101 (DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isReference_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractAttribute_set_Name_mD6136EF537543C289BE7F68B31EFAE0F0AAC75B2 (DataContractAttribute_tD065D7D14CC8AA548815166AB8B8210D1B3C699F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		__this->___isNameSetExplicitly_1 = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMemberAttribute__ctor_m077F867534BAD9865D6DD156A8FBBB4068283A42 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		__this->___order_2 = (-1);
		__this->___emitDefaultValue_4 = (bool)1;
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataMemberAttribute_get_Name_m8C4BF39A517D901076BAFF6FF89DD53C5F4B2B3E (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMemberAttribute_set_Name_mCF9CB9ED10BD17E99D79CC5CA33431F2135971DF (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		__this->___isNameSetExplicitly_1 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataMemberAttribute_get_Order_m34D8C756AE07BD345011D887546DF54D71898956 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___order_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_IsRequired_m318C586E28E349EA87096FE6FE473B4C4FD58C73 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isRequired_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMemberAttribute_set_IsRequired_m660325F5E5D02CE9563D6E28CBC725A90ED63078 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isRequired_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMemberAttribute_get_EmitDefaultValue_m430708B4CFB34DD522B6D01A66CE8FDEDCC088E8 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___emitDefaultValue_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMemberAttribute_set_EmitDefaultValue_m3E31B38EB7B3B88A198F23D2B121A3D4F45D43C4 (DataMemberAttribute_t8AE446BE9032B9BC8E7B2EDC785F5C6FA0E5BB73* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___emitDefaultValue_4 = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumMemberAttribute__ctor_m3F91AFEBFAFB8DA2B8527180896657BC30BA94E3 (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mB41126B613B9FD1CD8A05D08FCEC4B6663864BE9 (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumMemberAttribute_set_Value_mF6DD8C5291188BCA38A2073FDEA4C76EF1692EB6 (EnumMemberAttribute_t65B5E85E642C96791DD6AE5EAD0276350954126F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_0), (void*)L_0);
		__this->___isValueSetExplicitly_1 = (bool)1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
