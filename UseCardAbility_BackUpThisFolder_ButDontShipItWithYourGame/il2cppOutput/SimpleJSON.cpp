#include "pch-cpp.hpp"





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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D;
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
struct Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8;
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
struct IEnumerable_1_t8A219DAE00F8F982C5E262E4749780207C6EBAFB;
struct IEnumerable_1_t0D0F3B0BA51CB7EE6AE9F9DC5E04AAAEC925BA18;
struct IEnumerator_1_tBBBFB8635662E98891D46E88EB228439ED5D13C5;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634;
struct List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ValueCollection_t10E5C32E0A6D8EFCD275FDA531807CAA739FA4B2;
struct EntryU5BU5D_tF60951CA89C6EC561D8BE3E397F617B877D3C73E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JSONNodeU5BU5D_t46817AEB1DBD09CF00114BD4599969EBF9610B77;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D;
struct JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E;
struct JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879;
struct JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6;
struct JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55;
struct JSONNumber_t624C1976C833252B19E651869C101D49818E5A88;
struct JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E;
struct JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StringBuilder_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t5C33AA445D2A5A9FE068C3D94128B6211BA0BC6C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2;
struct U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9;
struct U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619;
struct U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9;
struct U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73;
struct U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1;
struct U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0D0F3B0BA51CB7EE6AE9F9DC5E04AAAEC925BA18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBBBFB8635662E98891D46E88EB228439ED5D13C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNodeType_tF4143A3744E313EBCB5555C7CFC3A2F82E41A4D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____54F4E7890F0ABD5A23D2A2F1AC6EE73463B11A6FC646C8C64B4D56F51560D898_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____EEE934E402D2BC29E34C5F262D51EB020DF024753B248EF8245A37CDE679878C_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A;
IL2CPP_EXTERN_C String_t* _stringLiteral5703E0056B9B4C239F9C1589A2955D3F601A9DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBA50698D290C50E7964484AB442BDC02A81AE613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mC2D8CEE3EF55C33B66307913B3E03C7C1B37FA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m400DF4A4F477758483F19D7590AED57E4E7C4C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m27BCB84907CBB5DBBDA4EE2D999E8537A2D8D273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m90157E523686EEAF7C7CAD33EA13A66FF1297555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C79D1254A69484BE77A5A18D639F70E372E0D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB50DA39B61FE772FA25B543BD83345E2157687EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedBase64_mB4FC79F29A0D24470F0D472D9E76698BA3DA4760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedFile_m6B9558F946FCF7ACAC141E03408EFED822CD348E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_LoadFromCompressedStream_m89F1B6A5C729D08804FA98D2341D7B5855C147FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedBase64_m37B1B87CB60C4793D34907A4492209DAAF349EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedFile_m811EEE600929857B0A4F4BA6BB8B706DC03BED54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_SaveToCompressedStream_m83749812F2B4B0F6A77E053216C7F7EF1EB1AEDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m916C79021BC5BDA184FF71B4EAD9C229F9BE2CDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA41A42D27735B047FFFB8C3D53811DA6B0C97089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m722B6912CC934485E59C53F21134AA024B8092D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A7C7CC84E6F1F5C59F920A081EACEAF9044285A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mBAD42A6F2C76B51A51B6AB8B07BD6D5FE475DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m693D26C818C5B92074790721DBBFB0DD2F83708C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m483B376F54487CE48D23E24AD0CDAAB020E8E791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__19_System_Collections_IEnumerator_Reset_m054DEF5B537866E99EEF8A4C123872636C824A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__20_System_Collections_IEnumerator_Reset_mF9164731BBC3CAEF23950B7FF1B91A47C8B3C019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CRemoveU3Eb__0_mB07E12462B66F705D52C959DE6A43904D3CBF35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m32EF127E305642033496632AF9702DABDD93CA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__19_System_Collections_IEnumerator_Reset_mE903BC8D7E0510D3E2A521CF302A1022E6EA558D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__29_System_Collections_IEnumerator_Reset_m3B6439052331B486F9ED192FD92939E89D2CD126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildrenU3Ed__31_System_Collections_IEnumerator_Reset_m98B20EA7A52FF8990BEF205EF829B81375341F6F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t7B74D38E60AE93418DF0A253CF2A685F1753E016 
{
};
struct Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF60951CA89C6EC561D8BE3E397F617B877D3C73E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634* ____keys;
	ValueCollection_t10E5C32E0A6D8EFCD275FDA531807CAA739FA4B2* ____values;
	RuntimeObject* ____syncRoot;
};
struct KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634  : public RuntimeObject
{
	Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* ____dictionary;
};
struct List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7  : public RuntimeObject
{
	JSONNodeU5BU5D_t46817AEB1DBD09CF00114BD4599969EBF9610B77* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C  : public RuntimeObject
{
	JSONNodeU5BU5D_t46817AEB1DBD09CF00114BD4599969EBF9610B77* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880  : public RuntimeObject
{
};
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer;
	int32_t ___m_maxCharsSize;
	bool ___m_2BytesPerChar;
	bool ___m_isMemoryStream;
	bool ___m_leaveOpen;
};
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding;
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder;
	bool ____leaveOpen;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer;
	int32_t ____maxChars;
};
struct JSON_tBB58221A9FA631BFB54CBA38A0D49225B57A3E59  : public RuntimeObject
{
};
struct JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6  : public RuntimeObject
{
};
struct JsonHelper_tB3828399886589305E1D78E76FABC5C8DA9228EC  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t5C33AA445D2A5A9FE068C3D94128B6211BA0BC6C  : public RuntimeObject
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
struct U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
};
struct U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3E7__wrap1;
	RuntimeObject* ___U3CU3E7__wrap2;
};
struct U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73  : public RuntimeObject
{
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___aNode;
};
struct Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 
{
	List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* ____list;
	int32_t ____index;
	int32_t ____version;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____currentKey;
};
struct Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2 
{
	Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	String_t* ____currentKey;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 
{
	String_t* ___key;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* ___m_List;
	bool ___inline;
};
struct JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	bool ___m_Data;
};
struct JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___m_Node;
	String_t* ___m_Key;
};
struct JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
};
struct JSONNumber_t624C1976C833252B19E651869C101D49818E5A88  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	double ___m_Data;
};
struct JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* ___m_Dict;
	bool ___inline;
};
struct JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006  : public JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6
{
	String_t* ___m_Data;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D116_t46AD2582A41DB36886E3B079321726DB89B5BE34 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t46AD2582A41DB36886E3B079321726DB89B5BE34__padding[116];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D265_t4F16D77FE86B6622830FFA9C63B4DE6C6227800D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D265_t4F16D77FE86B6622830FFA9C63B4DE6C6227800D__padding[265];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E 
{
	Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	int32_t ___value__;
};
struct JSONNodeType_tF4143A3744E313EBCB5555C7CFC3A2F82E41A4D7 
{
	int32_t ___value__;
};
struct JSONTextMode_tB73D2BD093B2977C18CDF5999DD7FE6B1EBF045E 
{
	int32_t ___value__;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* ___U3CU3E4__this;
	Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 ___U3CU3E7__wrap1;
};
struct U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* ___U3CU3E4__this;
	Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 ___U3CU3E7__wrap1;
};
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	int32_t ___value__;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* ___U3CU3E4__this;
	Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E ___U3CU3E7__wrap1;
};
struct U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* ___U3CU3E4__this;
	Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E ___U3CU3E7__wrap1;
};
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	int32_t ___Flags;
	int32_t ___Mode;
	uint32_t ___Uid;
	uint32_t ___Gid;
	int64_t ___Size;
	int64_t ___ATime;
	int64_t ___ATimeNsec;
	int64_t ___MTime;
	int64_t ___MTimeNsec;
	int64_t ___CTime;
	int64_t ___CTimeNsec;
	int64_t ___BirthTime;
	int64_t ___BirthTimeNsec;
	int64_t ___Dev;
	int64_t ___Ino;
	uint32_t ___UserFlags;
};
struct Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8  : public MulticastDelegate_t
{
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	bool ___U3CInitiallyDirectoryU3Ek__BackingField;
	bool ____isDirectory;
	bool ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus;
	String_t* ___FullPath;
	String_t* ___OriginalPath;
	String_t* ____name;
};
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7_StaticFields
{
	JSONNodeU5BU5D_t46817AEB1DBD09CF00114BD4599969EBF9610B77* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880_StaticFields
{
	__StaticArrayInitTypeSizeU3D116_t46AD2582A41DB36886E3B079321726DB89B5BE34 ___54F4E7890F0ABD5A23D2A2F1AC6EE73463B11A6FC646C8C64B4D56F51560D898;
	__StaticArrayInitTypeSizeU3D265_t4F16D77FE86B6622830FFA9C63B4DE6C6227800D ___EEE934E402D2BC29E34C5F262D51EB020DF024753B248EF8245A37CDE679878C;
};
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null;
};
struct JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields
{
	StringBuilder_t* ___m_EscapeBuilder;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC8ABDA345F7C58BD3955F75BB8ED7F3FA1028970_gshared (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m93CBB954FCCA2D8CD18552A18B58326CDD9F1DBD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__29__ctor_m0895C54FB51F966B63B4DA2026F02E5C95735986 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31__ctor_m604E37F7B60D52B9C7FFD61F37233E72E8FCAA79 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m4CC185553BC1E2EE46974B7788D9170F49725A87 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, String_t* ___0_aData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, double ___0_aData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, bool ___0_aData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m2D1DC42DDECFC730F7534C120C9883D5118AEF7C (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_mBB291A3F209615DD533AE97B6AF44AA2DB221381 (bool ___0_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m2EEA66B341E1A133A3D3B8C4730EC4718EFBF207 (double ___0_n, const RuntimeMethod* method) ;
inline void Stack_1__ctor_m483B376F54487CE48D23E24AD0CDAAB020E8E791 (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) ;
inline void Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1 (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006 (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) ;
inline int32_t Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_inline (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* Stack_1_Pop_m693D26C818C5B92074790721DBBFB0DD2F83708C (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_ParseElement_m215EBD7565960C0C131FC49575252CA96F07BE29 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_ctx, String_t* ___1_token, String_t* ___2_tokenName, bool ___3_quoted, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___0_s, int32_t ___1_style, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6 (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenWrite_m5DD7E6EDB15631A97328297A58E9395B47CFB6AB (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToStream_mBB94F04C43622FBCC42CEDC9D6EC77974B370A7C (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_aReader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromStream_m8236399D131EF93E2F0B394D3E632E70C1A2DDB0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__29_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m7508F380896413C66B5FF087BC269ACC0E8FD4E1 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally1_m0E281E9679354CFAA4ECEDFFEA43245900DA77BC (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally2_mC88D4545FDF1885AA0251227B6AF19666A87E311 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_System_IDisposable_Dispose_m146638427E3804B48293D18ED712D106DBB952B0 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_m839D8C06EFBE6577CF6C4915F86F9D672BC7DF9D (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__31_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m071CF8D1F6DEEE153E7F9EB7786F54538F6924E3 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m253520732548E7BD056404F7BB81D60F66C13914 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, const RuntimeMethod* method) ;
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6 (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_inline (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_set_Item_mBAD42A6F2C76B51A51B6AB8B07BD6D5FE475DC9B (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, int32_t ___0_index, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, int32_t, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_RemoveAt_mA41A42D27735B047FFFB8C3D53811DA6B0C97089 (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m722B6912CC934485E59C53F21134AA024B8092D5 (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18__ctor_m37E442B63A4BED063E48AB36CEE4A7F6AADE2992 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19__ctor_m48D468716607D99F01E78E9A163419BCAE44B8E3 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___0_value, int32_t ___1_repeatCount, const RuntimeMethod* method) ;
inline void List_1__ctor_m5A7C7CC84E6F1F5C59F920A081EACEAF9044285A (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19_U3CU3Em__Finally1_mD9E6959114EC20C6D55CB63B72B2E820B67B71B6 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19_System_IDisposable_Dispose_m8A8DCB9E48BFDC4D42BE97DF675E3414360440ED (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) ;
inline Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012 (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 (*) (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_inline (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013 (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18_U3CU3Em__Finally1_m7125F7FE4754E6F28F930CF19209732C01544648 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18_System_IDisposable_Dispose_m26CE2DCB471544DE7AF895B03B3F615BE510B460 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mAA557652BCB987F27F06710D98C0C81A977CD5B6 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93 (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m8A9D83F7F5137D6935777732765B2025A1D01506 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, String_t* ___1_aKey, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0 (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, String_t* ___0_key, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2 (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, String_t* ___0_key, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
inline KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC8ABDA345F7C58BD3955F75BB8ED7F3FA1028970_gshared)(___0_source, ___1_index, method);
}
inline JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline (KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* (*) (KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
inline String_t* KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_inline (KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6 (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE9923E45E02528BB1A30B0902B9D093754C2F066 (U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m348C317ADE65BE20F4AA461303EF31FEFD5AEAAB (Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m27BCB84907CBB5DBBDA4EE2D999E8537A2D8D273 (RuntimeObject* ___0_source, Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___0_source, ___1_predicate, method);
}
inline KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 Enumerable_First_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m400DF4A4F477758483F19D7590AED57E4E7C4C09 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m93CBB954FCCA2D8CD18552A18B58326CDD9F1DBD_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19__ctor_m88818A7DF3C824BE8F33E3EB353C279D64D8E140 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20__ctor_m6F7362669DF4C63981738CDA57A6AC0D08C46BCE (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634* Dictionary_2_get_Keys_mC2D8CEE3EF55C33B66307913B3E03C7C1B37FA4D (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634* (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
inline Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2 KeyCollection_GetEnumerator_m916C79021BC5BDA184FF71B4EAD9C229F9BE2CDC (KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2 (*) (KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
inline void Enumerator_Dispose_m90157E523686EEAF7C7CAD33EA13A66FF1297555 (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
inline String_t* Enumerator_get_Current_mB50DA39B61FE772FA25B543BD83345E2157687EC_inline (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m5C79D1254A69484BE77A5A18D639F70E372E0D1C (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
inline Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
inline void Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
inline KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_inline (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 (*) (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m72861C0191A4B62507EC19CB47A0ED707C6A5CEA (String_t* ___0_aText, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
inline void Dictionary_2__ctor_mBA50698D290C50E7964484AB442BDC02A81AE613 (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20_U3CU3Em__Finally1_m43317B48EA81E7E0A5EE02104AB72373AEC3D1C4 (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20_System_IDisposable_Dispose_m58EDCA354FF84A867D64949E976449860B9F729B (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19_U3CU3Em__Finally1_mC76F4120EF661C11247DFD19503A4A134FD2F208 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19_System_IDisposable_Dispose_mB5CDF83FA4CFA2D8392D43F60F80807E4FFF1039 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA08061390360BBB1C582D4FBF1A4FB60CC1FE6D8 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_m77E1E33DD5B1F3FF3EFE9B10DBA71B38828331BE (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0 (StringBuilder_t* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_m3AE4A580CBFC7AF70B9A41C076CC49B3D32065F6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m360C9D9113089FE31E403922593974F894D7C991 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533 (String_t* ___0_aJSON, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 95213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m0B90E8C1C2BDF2249BC20D5BC72F76C4AD83BAE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____54F4E7890F0ABD5A23D2A2F1AC6EE73463B11A6FC646C8C64B4D56F51560D898_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____EEE934E402D2BC29E34C5F262D51EB020DF024753B248EF8245A37CDE679878C_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)116));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____54F4E7890F0ABD5A23D2A2F1AC6EE73463B11A6FC646C8C64B4D56F51560D898_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)265));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t82CCE49BE5783A3DA96B470D9FC3DF6145717880____EEE934E402D2BC29E34C5F262D51EB020DF024753B248EF8245A37CDE679878C_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 2;
		(&V_0)->___TotalTypes = ((int32_t)11);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 95214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m8E387495DB33A7002FBF12F08AE7C09E6824C55F (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t5C33AA445D2A5A9FE068C3D94128B6211BA0BC6C* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_pinvoke(const MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7& unmarshaled, MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_pinvoke_back(const MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_pinvoke& marshaled, MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_pinvoke_cleanup(MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_com(const MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7& unmarshaled, MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_com_back(const MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_com& marshaled, MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshal_com_cleanup(MonoScriptData_t8914B73447515B94F330194E6807C62546F9D2A7_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 95215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_get_Item_m59CC1EEC2CD2C7365819FB950829FA1E1070B358 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:109>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}
}
// Method Definition Index: 95216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_m1DB56831909822356046E9D4C700699F23493AE6 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, int32_t ___0_aIndex, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:109>
		return;
	}
}
// Method Definition Index: 95217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_get_Item_m13926F364CC9D072A749B6267BC5EF1823E24890 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:111>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}
}
// Method Definition Index: 95218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_mEC8105E715AE19F50902B6A19E64E3125F4C7960 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:111>
		return;
	}
}
// Method Definition Index: 95219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_get_Value_mB24A17A31F8E8D596A61CAC8C76AD5EC19CE37AA (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:113>
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// Method Definition Index: 95220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Value_m1A5960BE575943F448A3F48CFB68F9C6D4BD170F (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:113>
		return;
	}
}
// Method Definition Index: 95221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_Count_m90342C3E8AFEB3AB3AFEDE96DBECBCC9340458C1 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:115>
		return 0;
	}
}
// Method Definition Index: 95222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNumber_m3AF79C4388BE800EC3CD56DE47DAE55A27D5DFC6 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:117>
		return (bool)0;
	}
}
// Method Definition Index: 95223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsString_m107CB28A86957CEF3B3F797D7F920F5919CEF69C (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:118>
		return (bool)0;
	}
}
// Method Definition Index: 95224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsBoolean_m72870AB79CC79DDFB2C2FCECC3EED439D8C34272 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:119>
		return (bool)0;
	}
}
// Method Definition Index: 95225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNull_m36D76781594D1E861FBDDCDAB3B21CC8D73F5025 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:120>
		return (bool)0;
	}
}
// Method Definition Index: 95226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsArray_m87C4BCD6BBD19492138B6570532E24760BE2512C (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:121>
		return (bool)0;
	}
}
// Method Definition Index: 95227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsObject_mFEAE1634002CE43AC99CE08E08349E6D497324A2 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:122>
		return (bool)0;
	}
}
// Method Definition Index: 95228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_m5481C1CDCAF6589D1ACF4CBEB34243425DE80E49 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_aItem, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:126>
		return;
	}
}
// Method Definition Index: 95229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_m06DA59E1E4FE0B434AB79B9EAD14212A88F5D2A8 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:129>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_aItem;
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, __this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:130>
		return;
	}
}
// Method Definition Index: 95230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Remove_m1B9266F195FBAB55D7454CDD5D59322DCE5310CE (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:134>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}
}
// Method Definition Index: 95231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Remove_mB49347E8DC920CB6236FE02FA12B50992BB8E7C8 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:139>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}
}
// Method Definition Index: 95232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Remove_mDBBAE724AF7CBFA278EA32CDCBD7B77AA76ED377 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:144>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_aNode;
		return L_0;
	}
}
// Method Definition Index: 95233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Children_m773602A0FFB98A09CDC8990E42852B7790430B23 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* L_0 = (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__29__ctor_m0895C54FB51F966B63B4DA2026F02E5C95735986(L_0, ((int32_t)-2), NULL);
		return L_0;
	}
}
// Method Definition Index: 95234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_m839D8C06EFBE6577CF6C4915F86F9D672BC7DF9D (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* L_0 = (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9*)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9_il2cpp_TypeInfo_var);
		U3Cget_DeepChildrenU3Ed__31__ctor_m604E37F7B60D52B9C7FFD61F37233E72E8FCAA79(L_0, ((int32_t)-2), NULL);
		U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 95235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_mC448D25BA262E433658F0DFE5129E849EDEC8A8A (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:167>
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:168>
		StringBuilder_t* L_1 = V_0;
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(24, __this, L_1, 0, 0, 0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:169>
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_2);
		return L_3;
	}
}
// Method Definition Index: 95236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_m8482CEDFDED09B66DCADCC7589A4F85286622C15 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, int32_t ___0_aIndent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:174>
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:175>
		StringBuilder_t* L_1 = V_0;
		int32_t L_2 = ___0_aIndent;
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(24, __this, L_1, 0, L_2, 1);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:176>
		StringBuilder_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		return L_4;
	}
}
// Method Definition Index: 95239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_get_AsDouble_m709138CABC13D59F5D36048669095AB9993D686D (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:190>
		V_0 = (0.0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:191>
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8, __this);
		bool L_1;
		L_1 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:192>
		double L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:193>
		return (0.0);
	}
}
// Method Definition Index: 95240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsDouble_mA60C27C58DEE17BE8AC53F56236B048B3B26B094 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:197>
		String_t* L_0;
		L_0 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(9, __this, L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:198>
		return;
	}
}
// Method Definition Index: 95241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_AsInt_mFA75CFAC2DE3421C24AC0A32402ED82339C92C51 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:203>
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(26, __this);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_0);
	}
}
// Method Definition Index: 95242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsInt_m48E354E957F01F7D72F210A36B12AF4C434DCEC0 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:204>
		int32_t L_0 = ___0_value;
		VirtualActionInvoker1< double >::Invoke(27, __this, ((double)L_0));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:204>
		return;
	}
}
// Method Definition Index: 95243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_get_AsFloat_m4F7DA92AE2AD236A21EA5655BB54AA6D81A3C4D5 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:209>
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(26, __this);
		return ((float)L_0);
	}
}
// Method Definition Index: 95244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsFloat_mB5B91E795C1518A8FC4AA73CF9DBC4C06939F189 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:210>
		float L_0 = ___0_value;
		VirtualActionInvoker1< double >::Invoke(27, __this, ((double)L_0));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:210>
		return;
	}
}
// Method Definition Index: 95245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_AsBool_mDEE220D9E5ABEB5B9EBD42129DAF2A12E2A11B60 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:217>
		V_0 = (bool)0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:218>
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8, __this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_1;
		L_1 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:219>
		bool L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:220>
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8, __this);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 95246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsBool_m3946BA4265D7B1C6EE1619931C7D9D8232E29721 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* G_B2_0 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* G_B3_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:224>
		bool L_0 = ___0_value;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(9, G_B3_1, G_B3_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:225>
		return;
	}
}
// Method Definition Index: 95247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* JSONNode_get_AsArray_mA50A54AE6166632BE9130B67DBD11B575BEF3AE9 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:232>
		return ((JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)IsInstClass((RuntimeObject*)__this, JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var));
	}
}
// Method Definition Index: 95248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* JSONNode_get_AsObject_mAFB3C5F83B5609057BCC30DF03C0AEABC5CD31D9 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:240>
		return ((JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)IsInstClass((RuntimeObject*)__this, JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var));
	}
}
// Method Definition Index: 95249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m2D1DC42DDECFC730F7534C120C9883D5118AEF7C (String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:251>
		String_t* L_0 = ___0_s;
		JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* L_1 = (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006*)il2cpp_codegen_object_new(JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var);
		JSONString__ctor_m4CC185553BC1E2EE46974B7788D9170F49725A87(L_1, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_op_Implicit_m39AE879BDAB8EAAD2BD8068ECF37F1AEE851A0DF (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:255>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_d;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_2);
		return L_3;
	}

IL_0010:
	{
		return (String_t*)NULL;
	}
}
// Method Definition Index: 95251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m2EEA66B341E1A133A3D3B8C4730EC4718EFBF207 (double ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:260>
		double L_0 = ___0_n;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_op_Implicit_m842EB5C86332694022DCDF6C75437E7AEC0E9FF5 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:264>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_d;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(26, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0);
	}
}
// Method Definition Index: 95253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m12797601462A291B34CC96412CA3A6B8A9EC19B4 (float ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:269>
		float L_0 = ___0_n;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, ((double)L_0), NULL);
		return L_1;
	}
}
// Method Definition Index: 95254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_op_Implicit_m64E7F66ABFA8213C2EE0316077F34A7B8C66C18B (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:273>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_d;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(30, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0f);
	}
}
// Method Definition Index: 95255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_m9F4B6F7CC3CE9E0F1FED7A562810B24B005B6539 (int32_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:278>
		int32_t L_0 = ___0_n;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, ((double)L_0), NULL);
		return L_1;
	}
}
// Method Definition Index: 95256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_op_Implicit_m80033DD8676566E2096935E8A6050E92D9F8C41C (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:282>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_d;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_2);
		return L_3;
	}

IL_0010:
	{
		return 0;
	}
}
// Method Definition Index: 95257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_op_Implicit_mBB291A3F209615DD533AE97B6AF44AA2DB221381 (bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:287>
		bool L_0 = ___0_b;
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_1 = (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E*)il2cpp_codegen_object_new(JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879(L_1, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Implicit_mBAAE8DCBF9E312B6CD1E0D59C01C907B0D5E07D9 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:291>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_d;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(32, L_2);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// Method Definition Index: 95259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:296>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		if ((!(((RuntimeObject*)(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:297>
		return (bool)1;
	}

IL_0006:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:298>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_a;
		if (((JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)IsInstClass((RuntimeObject*)L_2, JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_3 = ___0_a;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4 = ___0_a;
		G_B6_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)((JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)IsInstClass((RuntimeObject*)L_4, JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B6_0 = 1;
	}

IL_001d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:299>
		RuntimeObject* L_5 = ___1_b;
		if (((JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)IsInstClass((RuntimeObject*)L_5, JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var)))
		{
			G_B9_0 = G_B6_0;
			goto IL_0033;
		}
		G_B7_0 = G_B6_0;
	}
	{
		RuntimeObject* L_6 = ___1_b;
		if (!L_6)
		{
			G_B9_0 = G_B7_0;
			goto IL_0033;
		}
		G_B8_0 = G_B7_0;
	}
	{
		RuntimeObject* L_7 = ___1_b;
		G_B10_0 = ((!(((RuntimeObject*)(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)((JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)IsInstClass((RuntimeObject*)L_7, JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0034:
	{
		V_0 = (bool)G_B10_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:300>
		bool L_8 = V_0;
		if (!((int32_t)(G_B10_1&(int32_t)L_8)))
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:301>
		return (bool)1;
	}

IL_003b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:302>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_9 = ___0_a;
		RuntimeObject* L_10 = ___1_b;
		NullCheck(L_9);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_9, L_10);
		return L_11;
	}
}
// Method Definition Index: 95260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:307>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 95261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_m77E1E33DD5B1F3FF3EFE9B10DBA71B38828331BE (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:312>
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((((RuntimeObject*)(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))? 1 : 0);
	}
}
// Method Definition Index: 95262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_GetHashCode_m5A90FD8C122054D73C7EAA8596E9F65B6C2C37FB (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:317>
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 95263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m72861C0191A4B62507EC19CB47A0ED707C6A5CEA (String_t* ___0_aText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:324>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:325>
		StringBuilder_t* L_1 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_1, NULL);
		String_t* L_3 = ___0_aText;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5 = ___0_aText;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_4, ((int32_t)(L_6/((int32_t)10))))))))
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:326>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_7 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		String_t* L_8 = ___0_aText;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		String_t* L_10 = ___0_aText;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		NullCheck(L_7);
		StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574(L_7, ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)(L_11/((int32_t)10))))), NULL);
	}

IL_0041:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:327>
		String_t* L_12 = ___0_aText;
		V_0 = L_12;
		V_1 = 0;
		goto IL_010a;
	}

IL_004a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:327>
		String_t* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, L_14, NULL);
		V_2 = L_15;
		Il2CppChar L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, 8)))
		{
			case 0:
			{
				goto IL_00d6;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_00a0;
			}
			case 3:
			{
				goto IL_00fa;
			}
			case 4:
			{
				goto IL_00e8;
			}
			case 5:
			{
				goto IL_00b2;
			}
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)34))))
		{
			goto IL_008e;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00fa;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:332>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_19 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:333>
		goto IL_0106;
	}

IL_008e:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:335>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_21 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:336>
		goto IL_0106;
	}

IL_00a0:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:338>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_23 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:339>
		goto IL_0106;
	}

IL_00b2:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:341>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_25 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:342>
		goto IL_0106;
	}

IL_00c4:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:344>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_27 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:345>
		goto IL_0106;
	}

IL_00d6:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:347>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_29 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:348>
		goto IL_0106;
	}

IL_00e8:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:350>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_31 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:351>
		goto IL_0106;
	}

IL_00fa:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:353>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_33 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		Il2CppChar L_34 = V_2;
		NullCheck(L_33);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, L_34, NULL);
	}

IL_0106:
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_010a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:327>
		int32_t L_37 = V_1;
		String_t* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_004a;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:357>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		StringBuilder_t* L_40 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_40);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:358>
		StringBuilder_t* L_42 = ((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder;
		NullCheck(L_42);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_42, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:359>
		return L_41;
	}
}
// Method Definition Index: 95264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_ParseElement_m215EBD7565960C0C131FC49575252CA96F07BE29 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_ctx, String_t* ___1_token, String_t* ___2_tokenName, bool ___3_quoted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:364>
		bool L_0 = ___3_quoted;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:366>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1 = ___0_ctx;
		String_t* L_2 = ___2_tokenName;
		String_t* L_3 = ___1_token;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4;
		L_4 = JSONNode_op_Implicit_m2D1DC42DDECFC730F7534C120C9883D5118AEF7C(L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_1, L_2, L_4);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:367>
		return;
	}

IL_0011:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:369>
		String_t* L_5 = ___1_token;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		V_0 = L_6;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:370>
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_10)
		{
			goto IL_004a;
		}
	}

IL_0032:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:371>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_11 = ___0_ctx;
		String_t* L_12 = ___2_tokenName;
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_15;
		L_15 = JSONNode_op_Implicit_mBB291A3F209615DD533AE97B6AF44AA2DB221381(L_14, NULL);
		NullCheck(L_11);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_11, L_12, L_15);
		return;
	}

IL_004a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:372>
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:373>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_18 = ___0_ctx;
		String_t* L_19 = ___2_tokenName;
		NullCheck(L_18);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_18, L_19, (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL);
		return;
	}

IL_0060:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:377>
		String_t* L_20 = ___1_token;
		bool L_21;
		L_21 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_20, (&V_1), NULL);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:378>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_22 = ___0_ctx;
		String_t* L_23 = ___2_tokenName;
		double L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_25;
		L_25 = JSONNode_op_Implicit_m2EEA66B341E1A133A3D3B8C4730EC4718EFBF207(L_24, NULL);
		NullCheck(L_22);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_22, L_23, L_25);
		return;
	}

IL_0078:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:380>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_26 = ___0_ctx;
		String_t* L_27 = ___2_tokenName;
		String_t* L_28 = ___1_token;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_29;
		L_29 = JSONNode_op_Implicit_m2D1DC42DDECFC730F7534C120C9883D5118AEF7C(L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_26, L_27, L_29);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:382>
		return;
	}
}
// Method Definition Index: 95265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533 (String_t* ___0_aJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m693D26C818C5B92074790721DBBFB0DD2F83708C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m483B376F54487CE48D23E24AD0CDAAB020E8E791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* V_0 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	String_t* V_9 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:386>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_0 = (Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C*)il2cpp_codegen_object_new(Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C_il2cpp_TypeInfo_var);
		Stack_1__ctor_m483B376F54487CE48D23E24AD0CDAAB020E8E791(L_0, Stack_1__ctor_m483B376F54487CE48D23E24AD0CDAAB020E8E791_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:387>
		V_1 = (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:388>
		V_2 = 0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:389>
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_3 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:390>
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:391>
		V_5 = (bool)0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:392>
		V_6 = (bool)0;
		goto IL_0342;
	}

IL_0022:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:395>
		String_t* L_2 = ___0_aJSON;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_7 = L_4;
		Il2CppChar L_5 = V_7;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)44)))))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppChar L_6 = V_7;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)32)))))
		{
			goto IL_0063;
		}
	}
	{
		Il2CppChar L_7 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_0265;
			}
			case 1:
			{
				goto IL_033e;
			}
			case 2:
			{
				goto IL_0330;
			}
			case 3:
			{
				goto IL_0330;
			}
			case 4:
			{
				goto IL_033e;
			}
		}
	}
	{
		Il2CppChar L_8 = V_7;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_0265;
		}
	}
	{
		goto IL_0330;
	}

IL_0063:
	{
		Il2CppChar L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0204;
		}
	}
	{
		Il2CppChar L_10 = V_7;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_0217;
		}
	}
	{
		goto IL_0330;
	}

IL_007a:
	{
		Il2CppChar L_11 = V_7;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_00a4;
		}
	}
	{
		Il2CppChar L_12 = V_7;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)58))))
		{
			goto IL_01d6;
		}
	}
	{
		Il2CppChar L_13 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_010b;
			}
			case 1:
			{
				goto IL_027f;
			}
			case 2:
			{
				goto IL_015e;
			}
		}
	}
	{
		goto IL_0330;
	}

IL_00a4:
	{
		Il2CppChar L_14 = V_7;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)123))))
		{
			goto IL_00b8;
		}
	}
	{
		Il2CppChar L_15 = V_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)125))))
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0330;
	}

IL_00b8:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:398>
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:400>
		StringBuilder_t* L_17 = V_3;
		String_t* L_18 = ___0_aJSON;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_18, L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, L_20, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:401>
		goto IL_033e;
	}

IL_00cf:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:403>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_22 = V_0;
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_23 = (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)il2cpp_codegen_object_new(JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F(L_23, NULL);
		NullCheck(L_22);
		Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1(L_22, L_23, Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:404>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52(L_24, NULL, NULL);
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:406>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_26 = V_1;
		String_t* L_27 = V_4;
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_28 = V_0;
		NullCheck(L_28);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_29;
		L_29 = Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006(L_28, Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		NullCheck(L_26);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_26, L_27, L_29);
	}

IL_00f1:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:408>
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:409>
		StringBuilder_t* L_30 = V_3;
		NullCheck(L_30);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_30, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:410>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_31 = V_0;
		NullCheck(L_31);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_32;
		L_32 = Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006(L_31, Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		V_1 = L_32;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:411>
		goto IL_033e;
	}

IL_010b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:414>
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_0122;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:416>
		StringBuilder_t* L_34 = V_3;
		String_t* L_35 = ___0_aJSON;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Il2CppChar L_37;
		L_37 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, L_36, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_37, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:417>
		goto IL_033e;
	}

IL_0122:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:420>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_39 = V_0;
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_40 = (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)il2cpp_codegen_object_new(JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E(L_40, NULL);
		NullCheck(L_39);
		Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1(L_39, L_40, Stack_1_Push_m3D9DD72D4FFDBDE1BB67668C2BD9F78617731ED1_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:421>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52(L_41, NULL, NULL);
		if (!L_42)
		{
			goto IL_0144;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:423>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_43 = V_1;
		String_t* L_44 = V_4;
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_45 = V_0;
		NullCheck(L_45);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_46;
		L_46 = Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006(L_45, Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		NullCheck(L_43);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_43, L_44, L_46);
	}

IL_0144:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:425>
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:426>
		StringBuilder_t* L_47 = V_3;
		NullCheck(L_47);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_47, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:427>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_48 = V_0;
		NullCheck(L_48);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_49;
		L_49 = Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006(L_48, Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		V_1 = L_49;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:428>
		goto IL_033e;
	}

IL_015e:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:432>
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0175;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:435>
		StringBuilder_t* L_51 = V_3;
		String_t* L_52 = ___0_aJSON;
		int32_t L_53 = V_2;
		NullCheck(L_52);
		Il2CppChar L_54;
		L_54 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_52, L_53, NULL);
		NullCheck(L_51);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_51, L_54, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:436>
		goto IL_033e;
	}

IL_0175:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:438>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_inline(L_56, Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_RuntimeMethod_var);
		if (L_57)
		{
			goto IL_0188;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:439>
		Exception_t* L_58 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533_RuntimeMethod_var)));
	}

IL_0188:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:441>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_59 = V_0;
		NullCheck(L_59);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_60;
		L_60 = Stack_1_Pop_m693D26C818C5B92074790721DBBFB0DD2F83708C(L_59, Stack_1_Pop_m693D26C818C5B92074790721DBBFB0DD2F83708C_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:442>
		StringBuilder_t* L_61 = V_3;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_61, NULL);
		bool L_63 = V_6;
		if (!((int32_t)(((((int32_t)L_62) > ((int32_t)0))? 1 : 0)|(int32_t)L_63)))
		{
			goto IL_01b0;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:444>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_64 = V_1;
		StringBuilder_t* L_65 = V_3;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_65);
		String_t* L_67 = V_4;
		bool L_68 = V_6;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_ParseElement_m215EBD7565960C0C131FC49575252CA96F07BE29(L_64, L_66, L_67, L_68, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:445>
		V_6 = (bool)0;
	}

IL_01b0:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:447>
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:448>
		StringBuilder_t* L_69 = V_3;
		NullCheck(L_69);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_69, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:449>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_inline(L_70, Stack_1_get_Count_m0910B8FBF23255355182D4FFEDD0CF2254E70C08_RuntimeMethod_var);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_033e;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:450>
		Stack_1_t3CF9D4C5AEE7BA9CBD88B3E3E1C872C57C18EF1C* L_72 = V_0;
		NullCheck(L_72);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_73;
		L_73 = Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006(L_72, Stack_1_Peek_mBABAC7DAEF92764335F04A5EAB719269526FB006_RuntimeMethod_var);
		V_1 = L_73;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:451>
		goto IL_033e;
	}

IL_01d6:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:454>
		bool L_74 = V_5;
		if (!L_74)
		{
			goto IL_01ed;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:456>
		StringBuilder_t* L_75 = V_3;
		String_t* L_76 = ___0_aJSON;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		Il2CppChar L_78;
		L_78 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_76, L_77, NULL);
		NullCheck(L_75);
		StringBuilder_t* L_79;
		L_79 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_75, L_78, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:457>
		goto IL_033e;
	}

IL_01ed:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:459>
		StringBuilder_t* L_80 = V_3;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_80);
		V_4 = L_81;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:460>
		StringBuilder_t* L_82 = V_3;
		NullCheck(L_82);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_82, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:461>
		V_6 = (bool)0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:462>
		goto IL_033e;
	}

IL_0204:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:465>
		bool L_83 = V_5;
		V_5 = (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:466>
		bool L_84 = V_6;
		bool L_85 = V_5;
		V_6 = (bool)((int32_t)((int32_t)L_84|(int32_t)L_85));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:467>
		goto IL_033e;
	}

IL_0217:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:470>
		bool L_86 = V_5;
		if (!L_86)
		{
			goto IL_022e;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:472>
		StringBuilder_t* L_87 = V_3;
		String_t* L_88 = ___0_aJSON;
		int32_t L_89 = V_2;
		NullCheck(L_88);
		Il2CppChar L_90;
		L_90 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_88, L_89, NULL);
		NullCheck(L_87);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_87, L_90, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:473>
		goto IL_033e;
	}

IL_022e:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:475>
		StringBuilder_t* L_92 = V_3;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_92, NULL);
		bool L_94 = V_6;
		if (!((int32_t)(((((int32_t)L_93) > ((int32_t)0))? 1 : 0)|(int32_t)L_94)))
		{
			goto IL_024f;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:477>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_95 = V_1;
		StringBuilder_t* L_96 = V_3;
		NullCheck(L_96);
		String_t* L_97;
		L_97 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_96);
		String_t* L_98 = V_4;
		bool L_99 = V_6;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_ParseElement_m215EBD7565960C0C131FC49575252CA96F07BE29(L_95, L_97, L_98, L_99, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:478>
		V_6 = (bool)0;
	}

IL_024f:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:480>
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:481>
		StringBuilder_t* L_100 = V_3;
		NullCheck(L_100);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_100, 0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:482>
		V_6 = (bool)0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:483>
		goto IL_033e;
	}

IL_0265:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:491>
		bool L_101 = V_5;
		if (!L_101)
		{
			goto IL_033e;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:492>
		StringBuilder_t* L_102 = V_3;
		String_t* L_103 = ___0_aJSON;
		int32_t L_104 = V_2;
		NullCheck(L_103);
		Il2CppChar L_105;
		L_105 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_103, L_104, NULL);
		NullCheck(L_102);
		StringBuilder_t* L_106;
		L_106 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_102, L_105, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:493>
		goto IL_033e;
	}

IL_027f:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:496>
		int32_t L_107 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:497>
		bool L_108 = V_5;
		if (!L_108)
		{
			goto IL_033e;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:499>
		String_t* L_109 = ___0_aJSON;
		int32_t L_110 = V_2;
		NullCheck(L_109);
		Il2CppChar L_111;
		L_111 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_109, L_110, NULL);
		V_8 = L_111;
		Il2CppChar L_112 = V_8;
		if ((!(((uint32_t)L_112) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_02a7;
		}
	}
	{
		Il2CppChar L_113 = V_8;
		if ((((int32_t)L_113) == ((int32_t)((int32_t)98))))
		{
			goto IL_02ea;
		}
	}
	{
		Il2CppChar L_114 = V_8;
		if ((((int32_t)L_114) == ((int32_t)((int32_t)102))))
		{
			goto IL_02f4;
		}
	}
	{
		goto IL_0325;
	}

IL_02a7:
	{
		Il2CppChar L_115 = V_8;
		if ((((int32_t)L_115) == ((int32_t)((int32_t)110))))
		{
			goto IL_02df;
		}
	}
	{
		Il2CppChar L_116 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_116, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_02d4;
			}
			case 1:
			{
				goto IL_0325;
			}
			case 2:
			{
				goto IL_02c9;
			}
			case 3:
			{
				goto IL_02ff;
			}
		}
	}
	{
		goto IL_0325;
	}

IL_02c9:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:503>
		StringBuilder_t* L_117 = V_3;
		NullCheck(L_117);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_117, ((int32_t)9), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:504>
		goto IL_033e;
	}

IL_02d4:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:506>
		StringBuilder_t* L_119 = V_3;
		NullCheck(L_119);
		StringBuilder_t* L_120;
		L_120 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_119, ((int32_t)13), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:507>
		goto IL_033e;
	}

IL_02df:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:509>
		StringBuilder_t* L_121 = V_3;
		NullCheck(L_121);
		StringBuilder_t* L_122;
		L_122 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_121, ((int32_t)10), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:510>
		goto IL_033e;
	}

IL_02ea:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:512>
		StringBuilder_t* L_123 = V_3;
		NullCheck(L_123);
		StringBuilder_t* L_124;
		L_124 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_123, 8, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:513>
		goto IL_033e;
	}

IL_02f4:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:515>
		StringBuilder_t* L_125 = V_3;
		NullCheck(L_125);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_125, ((int32_t)12), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:516>
		goto IL_033e;
	}

IL_02ff:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:519>
		String_t* L_127 = ___0_aJSON;
		int32_t L_128 = V_2;
		NullCheck(L_127);
		String_t* L_129;
		L_129 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_127, ((int32_t)il2cpp_codegen_add(L_128, 1)), 4, NULL);
		V_9 = L_129;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:520>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:521>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:522>
		StringBuilder_t* L_130 = V_3;
		String_t* L_131 = V_9;
		int32_t L_132;
		L_132 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_131, ((int32_t)512), NULL);
		NullCheck(L_130);
		StringBuilder_t* L_133;
		L_133 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_130, ((int32_t)(uint16_t)L_132), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:523>
		int32_t L_134 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_134, 4));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:524>
		goto IL_033e;
	}

IL_0325:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:527>
		StringBuilder_t* L_135 = V_3;
		Il2CppChar L_136 = V_8;
		NullCheck(L_135);
		StringBuilder_t* L_137;
		L_137 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_135, L_136, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:528>
		goto IL_033e;
	}

IL_0330:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:534>
		StringBuilder_t* L_138 = V_3;
		String_t* L_139 = ___0_aJSON;
		int32_t L_140 = V_2;
		NullCheck(L_139);
		Il2CppChar L_141;
		L_141 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_139, L_140, NULL);
		NullCheck(L_138);
		StringBuilder_t* L_142;
		L_142 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_138, L_141, NULL);
	}

IL_033e:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:537>
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_0342:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:393>
		int32_t L_144 = V_2;
		String_t* L_145 = ___0_aJSON;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_145, NULL);
		if ((((int32_t)L_144) < ((int32_t)L_146)))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:539>
		bool L_147 = V_5;
		if (!L_147)
		{
			goto IL_035d;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:541>
		Exception_t* L_148 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_148, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_148, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533_RuntimeMethod_var)));
	}

IL_035d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:543>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_149 = V_1;
		return L_149;
	}
}
// Method Definition Index: 95266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Serialize_m592C0605D4552C28048D548354EF13BF10C1BD26 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:548>
		return;
	}
}
// Method Definition Index: 95267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToStream_mBB94F04C43622FBCC42CEDC9D6EC77974B370A7C (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:552>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_aData;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:553>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = V_0;
		VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(36, __this, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:554>
		return;
	}
}
// Method Definition Index: 95268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToCompressedStream_m83749812F2B4B0F6A77E053216C7F7EF1EB1AEDF (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:594>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedStream_m83749812F2B4B0F6A77E053216C7F7EF1EB1AEDF_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToCompressedFile_m811EEE600929857B0A4F4BA6BB8B706DC03BED54 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:599>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedFile_m811EEE600929857B0A4F4BA6BB8B706DC03BED54_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_SaveToCompressedBase64_m37B1B87CB60C4793D34907A4492209DAAF349EE5 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:604>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_SaveToCompressedBase64_m37B1B87CB60C4793D34907A4492209DAAF349EE5_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_SaveToFile_m4049186CB72A52C7CC3C1AE80C5D01D380B626B6 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:611>
		String_t* L_0 = ___0_aFileName;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		NullCheck(L_1);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2;
		L_2 = FileInfo_get_Directory_m17FDB04561FFB59BF0EAF22E92A6A8BAD3572EE6(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_2);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:612>
		String_t* L_5 = ___0_aFileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
		L_6 = File_OpenWrite_m5DD7E6EDB15631A97328297A58E9395B47CFB6AB(L_5, NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_0;
					if (!L_7)
					{
						goto IL_002f;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_002f:
				{
					return;
				}
			}
		});
		try
		{
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:614>
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_0;
			JSONNode_SaveToStream_mBB94F04C43622FBCC42CEDC9D6EC77974B370A7C(__this, L_9, NULL);
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:615>
			goto IL_0030;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:619>
		return;
	}
}
// Method Definition Index: 95272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_SaveToBase64_m79F4F4CE0CF6718803576E24944724D254289EC0 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:623>
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002c:
				{
					return;
				}
			}
		});
		try
		{
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:625>
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			JSONNode_SaveToStream_mBB94F04C43622FBCC42CEDC9D6EC77974B370A7C(__this, L_3, NULL);
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:626>
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			NullCheck(L_4);
			VirtualActionInvoker1< int64_t >::Invoke(12, L_4, ((int64_t)0));
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:627>
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
			L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36, L_5);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_7;
			L_7 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_6, NULL);
			V_1 = L_7;
			goto IL_002d;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:629>
		String_t* L_8 = V_1;
		return L_8;
	}
}
// Method Definition Index: 95273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_aReader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_8 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:633>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_aReader;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_009d;
			}
			case 4:
			{
				goto IL_00b5;
			}
			case 5:
			{
				goto IL_00a9;
			}
		}
	}
	{
		goto IL_00bb;
	}

IL_002c:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:638>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = ___0_aReader;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(15, L_3);
		V_1 = L_4;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:639>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_5 = (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)il2cpp_codegen_object_new(JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E(L_5, NULL);
		V_2 = L_5;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:640>
		V_3 = 0;
		goto IL_004d;
	}

IL_003d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:641>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_6 = V_2;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_aReader;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8;
		L_8 = JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(18, L_6, L_8);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:640>
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:640>
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:642>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_12 = V_2;
		return L_12;
	}

IL_0053:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:646>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_aReader;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(15, L_13);
		V_4 = L_14;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:647>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_15 = (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)il2cpp_codegen_object_new(JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F(L_15, NULL);
		V_5 = L_15;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:648>
		V_6 = 0;
		goto IL_0088;
	}

IL_0067:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:650>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_aReader;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(22, L_16);
		V_7 = L_17;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:651>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_aReader;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_19;
		L_19 = JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16(L_18, NULL);
		V_8 = L_19;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:652>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_20 = V_5;
		String_t* L_21 = V_7;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_22 = V_8;
		NullCheck(L_20);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_20, L_21, L_22);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:648>
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0088:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:648>
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0067;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:654>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_26 = V_5;
		return L_26;
	}

IL_0091:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:658>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = ___0_aReader;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(22, L_27);
		JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* L_29 = (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006*)il2cpp_codegen_object_new(JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var);
		JSONString__ctor_m4CC185553BC1E2EE46974B7788D9170F49725A87(L_29, L_28, NULL);
		return L_29;
	}

IL_009d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:662>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_30 = ___0_aReader;
		NullCheck(L_30);
		double L_31;
		L_31 = VirtualFuncInvoker0< double >::Invoke(20, L_30);
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_32 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_32, L_31, NULL);
		return L_32;
	}

IL_00a9:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:666>
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = ___0_aReader;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(9, L_33);
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_35 = (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E*)il2cpp_codegen_object_new(JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879(L_35, L_34, NULL);
		return L_35;
	}

IL_00b5:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:670>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_36 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_36, NULL);
		return L_36;
	}

IL_00bb:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:674>
		Il2CppFakeBox<int32_t> L_37(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNodeType_tF4143A3744E313EBCB5555C7CFC3A2F82E41A4D7_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_38;
		L_38 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_37), NULL);
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5703E0056B9B4C239F9C1589A2955D3F601A9DC0)), L_38, NULL);
		Exception_t* L_40 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_40, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromCompressedFile_m6B9558F946FCF7ACAC141E03408EFED822CD348E (String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:706>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedFile_m6B9558F946FCF7ACAC141E03408EFED822CD348E_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromCompressedStream_m89F1B6A5C729D08804FA98D2341D7B5855C147FA (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:711>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedStream_m89F1B6A5C729D08804FA98D2341D7B5855C147FA_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromCompressedBase64_mB4FC79F29A0D24470F0D472D9E76698BA3DA4760 (String_t* ___0_aBase64, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:716>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral267728DB976DC54468CED5DA57858FCD9E58B05A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_LoadFromCompressedBase64_mB4FC79F29A0D24470F0D472D9E76698BA3DA4760_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromStream_m8236399D131EF93E2F0B394D3E632E70C1A2DDB0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:722>
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_aData;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}
		});
		try
		{
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:724>
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = V_0;
			il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
			JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5;
			L_5 = JSONNode_Deserialize_mB3BAF0DFEEB19AA4ADDB56232171F894AD8C5E16(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:726>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 95278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromFile_mA2874C8C005DF87E4C2005B905204735DDB08578 (String_t* ___0_aFileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:731>
		String_t* L_0 = ___0_aFileName;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}
		});
		try
		{
			//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:733>
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
			il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
			JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5;
			L_5 = JSONNode_LoadFromStream_m8236399D131EF93E2F0B394D3E632E70C1A2DDB0(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:738>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 95279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONNode_LoadFromBase64_m380D3859604C92693D8A4DCE362E1C1849F4414F (String_t* ___0_aBase64, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:742>
		String_t* L_0 = ___0_aBase64;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:743>
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:744>
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = L_2;
		NullCheck(L_3);
		VirtualActionInvoker1< int64_t >::Invoke(12, L_3, ((int64_t)0));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:745>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4;
		L_4 = JSONNode_LoadFromStream_m8236399D131EF93E2F0B394D3E632E70C1A2DDB0(L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 95280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9 (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 95281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__cctor_mC36B4DCD99A9B6202E43A5CC1F9F5C04B04BF0C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:321>
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var))->___m_EscapeBuilder), (void*)L_0);
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
// Method Definition Index: 95282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__29__ctor_m0895C54FB51F966B63B4DA2026F02E5C95735986 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
// Method Definition Index: 95283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__29_System_IDisposable_Dispose_m66758D4510975A32B973BD7D87D95EDA85E47DA3 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 95284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__29_MoveNext_m9FB5B821BBA48E63177563BEB78170BEAB1499BB (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:151>
		return (bool)0;
	}
}
// Method Definition Index: 95285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* U3Cget_ChildrenU3Ed__29_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m19DFD172D8CAA513F29400C3D95B25DCF1ACC659 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__29_System_Collections_IEnumerator_Reset_m3B6439052331B486F9ED192FD92939E89D2CD126 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__29_System_Collections_IEnumerator_Reset_m3B6439052331B486F9ED192FD92939E89D2CD126_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__29_System_Collections_IEnumerator_get_Current_m7912B3719414B1D66EEE200C68B75F42A26096D0 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__29_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m7508F380896413C66B5FF087BC269ACC0E8FD4E1 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* L_3 = (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__29__ctor_m0895C54FB51F966B63B4DA2026F02E5C95735986(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 95289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__29_System_Collections_IEnumerable_GetEnumerator_mF7DC471DD7BD10B6B619CD2D8C3F79FAFF924370 (U3Cget_ChildrenU3Ed__29_tF46388B434607DE8D0A70788E6A80DD9733FA619* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__29_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m7508F380896413C66B5FF087BC269ACC0E8FD4E1(__this, NULL);
		return L_0;
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
// Method Definition Index: 95290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31__ctor_m604E37F7B60D52B9C7FFD61F37233E72E8FCAA79 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
// Method Definition Index: 95291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_System_IDisposable_Dispose_m146638427E3804B48293D18ED712D106DBB952B0 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{
				U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally1_m0E281E9679354CFAA4ECEDFFEA43245900DA77BC(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{
						U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally2_mC88D4545FDF1885AA0251227B6AF19666A87E311(__this, NULL);
						return;
					}
				});
				try
				{
					goto IL_002f;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 95292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildrenU3Ed__31_MoveNext_mDECEE3B15CD3C9CBF197277805B361D6AA1A9B56 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0D0F3B0BA51CB7EE6AE9F9DC5E04AAAEC925BA18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBBBFB8635662E98891D46E88EB228439ED5D13C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_2 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_3 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c5:
			{
				U3Cget_DeepChildrenU3Ed__31_System_IDisposable_Dispose_m146638427E3804B48293D18ED712D106DBB952B0(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0085_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00cc;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state = (-1);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:159>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22, L_4);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t0D0F3B0BA51CB7EE6AE9F9DC5E04AAAEC925BA18_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1), (void*)L_6);
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_00a7_1;
			}

IL_003e_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:159>
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1;
				NullCheck(L_7);
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8;
				L_8 = InterfaceFuncInvoker0< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(0, IEnumerator_1_tBBBFB8635662E98891D46E88EB228439ED5D13C5_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:160>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_9 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = JSONNode_get_DeepChildren_m839D8C06EFBE6577CF6C4915F86F9D672BC7DF9D(L_9, NULL);
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t0D0F3B0BA51CB7EE6AE9F9DC5E04AAAEC925BA18_il2cpp_TypeInfo_var, L_10);
				__this->___U3CU3E7__wrap2 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)L_11);
				__this->___U3CU3E1__state = ((int32_t)-4);
				goto IL_008d_1;
			}

IL_0065_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:160>
				RuntimeObject* L_12 = __this->___U3CU3E7__wrap2;
				NullCheck(L_12);
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_13;
				L_13 = InterfaceFuncInvoker0< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(0, IEnumerator_1_tBBBFB8635662E98891D46E88EB228439ED5D13C5_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:161>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_14 = V_4;
				__this->___U3CU3E2__current = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_14);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_00cc;
			}

IL_0085_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-4);
			}

IL_008d_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:160>
				RuntimeObject* L_15 = __this->___U3CU3E7__wrap2;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0065_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally2_mC88D4545FDF1885AA0251227B6AF19666A87E311(__this, NULL);
				__this->___U3CU3E7__wrap2 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2), (void*)(RuntimeObject*)NULL);
			}

IL_00a7_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:159>
				RuntimeObject* L_17 = __this->___U3CU3E7__wrap1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003e_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally1_m0E281E9679354CFAA4ECEDFFEA43245900DA77BC(__this, NULL);
				__this->___U3CU3E7__wrap1 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1), (void*)(RuntimeObject*)NULL);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:162>
				V_0 = (bool)0;
				goto IL_00cc;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 95293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally1_m0E281E9679354CFAA4ECEDFFEA43245900DA77BC (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 95294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_U3CU3Em__Finally2_mC88D4545FDF1885AA0251227B6AF19666A87E311 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = ((int32_t)-3);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Method Definition Index: 95295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* U3Cget_DeepChildrenU3Ed__31_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mFED4A4F76A7BC2334BB9F010F72FD156C119172C (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__31_System_Collections_IEnumerator_Reset_m98B20EA7A52FF8990BEF205EF829B81375341F6F (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildrenU3Ed__31_System_Collections_IEnumerator_Reset_m98B20EA7A52FF8990BEF205EF829B81375341F6F_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__31_System_Collections_IEnumerator_get_Current_mD595EBBB8A5BE49C2E901F4819FA3D84DD75D31A (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__31_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m071CF8D1F6DEEE153E7F9EB7786F54538F6924E3 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* L_3 = (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9*)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9_il2cpp_TypeInfo_var);
		U3Cget_DeepChildrenU3Ed__31__ctor_m604E37F7B60D52B9C7FFD61F37233E72E8FCAA79(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* L_4 = V_0;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 95299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__31_System_Collections_IEnumerable_GetEnumerator_m4660CD293E78FA83C97A21A60B12511D610BA417 (U3Cget_DeepChildrenU3Ed__31_t5E6F65FF9DCF4844B184C316F5C3386FAF6012F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildrenU3Ed__31_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m071CF8D1F6DEEE153E7F9EB7786F54538F6924E3(__this, NULL);
		return L_0;
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
// Method Definition Index: 95300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Tag_m12DBF79E8C28A9F369769500B6CF9825E8B0F5BC (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:755>
		return (int32_t)(1);
	}
}
// Method Definition Index: 95301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_IsArray_m68D899739B05ABC252BB474935A6AF8D3ACC5B31 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:756>
		return (bool)1;
	}
}
// Method Definition Index: 95302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONArray_get_Item_m9B6F57425BE984B17BE61C3A40E75DB34F519D3E (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:762>
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_2 = __this->___m_List;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_2, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:763>
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_4 = (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)il2cpp_codegen_object_new(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m253520732548E7BD056404F7BB81D60F66C13914(L_4, __this, NULL);
		return L_4;
	}

IL_0019:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:764>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_5 = __this->___m_List;
		int32_t L_6 = ___0_aIndex;
		NullCheck(L_5);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_7;
		L_7 = List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6(L_5, L_6, List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		return L_7;
	}
}
// Method Definition Index: 95303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_m11B27BA984FB57B4532FE6C88981DD6E3F8ED2A0 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, int32_t ___0_aIndex, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBAD42A6F2C76B51A51B6AB8B07BD6D5FE475DC9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:768>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:769>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_value = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:770>
		int32_t L_3 = ___0_aIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_aIndex;
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_5 = __this->___m_List;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_5, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:771>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_7 = __this->___m_List;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8 = ___1_value;
		NullCheck(L_7);
		List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_inline(L_7, L_8, List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:773>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_9 = __this->___m_List;
		int32_t L_10 = ___0_aIndex;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_11 = ___1_value;
		NullCheck(L_9);
		List_1_set_Item_mBAD42A6F2C76B51A51B6AB8B07BD6D5FE475DC9B(L_9, L_10, L_11, List_1_set_Item_mBAD42A6F2C76B51A51B6AB8B07BD6D5FE475DC9B_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:774>
		return;
	}
}
// Method Definition Index: 95304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONArray_get_Item_mC02763D5D720843DCE965A5E99B29B137ABC16C9 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:779>
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_0 = (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)il2cpp_codegen_object_new(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m253520732548E7BD056404F7BB81D60F66C13914(L_0, __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 95305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_m61DD45C0B69E82D091D062705FEEDF84BFD98265 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:782>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:783>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_value = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:784>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_3 = __this->___m_List;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4 = ___1_value;
		NullCheck(L_3);
		List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_inline(L_3, L_4, List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:785>
		return;
	}
}
// Method Definition Index: 95306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Count_m7B875E93F7768690563DD97720E68542600D0892 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:790>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_0, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 95307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Add_m49E2EE0F3C842A11F51E1DF99FC8D5BE7E38EA91 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:795>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_aItem;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:796>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_aItem = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:797>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_3 = __this->___m_List;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_4 = ___1_aItem;
		NullCheck(L_3);
		List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_inline(L_3, L_4, List_1_Add_m2959C7E8F9C39A6833F2AFB86B5788BD1400D306_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:798>
		return;
	}
}
// Method Definition Index: 95308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONArray_Remove_m1876E83C84656DD42DF64D47D294D5F43C1215DB (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA41A42D27735B047FFFB8C3D53811DA6B0C97089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:802>
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_2 = __this->___m_List;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_2, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:803>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}

IL_0014:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:804>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_4 = __this->___m_List;
		int32_t L_5 = ___0_aIndex;
		NullCheck(L_4);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_6;
		L_6 = List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6(L_4, L_5, List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:805>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_7 = __this->___m_List;
		int32_t L_8 = ___0_aIndex;
		NullCheck(L_7);
		List_1_RemoveAt_mA41A42D27735B047FFFB8C3D53811DA6B0C97089(L_7, L_8, List_1_RemoveAt_mA41A42D27735B047FFFB8C3D53811DA6B0C97089_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:806>
		return L_6;
	}
}
// Method Definition Index: 95309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONArray_Remove_m552565618F3E521E4F1C9146A86BACD356048F88 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m722B6912CC934485E59C53F21134AA024B8092D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:811>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_0 = __this->___m_List;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1 = ___0_aNode;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m722B6912CC934485E59C53F21134AA024B8092D5(L_0, L_1, List_1_Remove_m722B6912CC934485E59C53F21134AA024B8092D5_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:812>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_3 = ___0_aNode;
		return L_3;
	}
}
// Method Definition Index: 95310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_get_Children_mB582C210649C575F58E80F3329C36B8651E5A0C0 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* L_0 = (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__18__ctor_m37E442B63A4BED063E48AB36CEE4A7F6AADE2992(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 95311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_GetEnumerator_m326AD80816A1C59F009CD125019E3DC138FA929E (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* L_0 = (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__19__ctor_m48D468716607D99F01E78E9A163419BCAE44B8E3(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 95312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Serialize_m4CDE855DE35A5843D0B0CCF5BC64B16553E3DB18 (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:832>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)1);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:833>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_2 = __this->___m_List;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_2, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16, L_1, L_3);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:834>
		V_0 = 0;
		goto IL_0032;
	}

IL_001c:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:836>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_4 = __this->___m_List;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_6;
		L_6 = List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6(L_4, L_5, List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = ___0_aWriter;
		NullCheck(L_6);
		VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(36, L_6, L_7);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:834>
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0032:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:834>
		int32_t L_9 = V_0;
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_10 = __this->___m_List;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_10, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:838>
		return;
	}
}
// Method Definition Index: 95313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_WriteToStringBuilder_m1EAA1AC84A5FA91935456359089C79238A5B458D (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:842>
		StringBuilder_t* L_0 = ___0_aSB;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:843>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_2 = __this->___m_List;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_inline(L_2, List_1_get_Count_m07B38EFA8AF401EF739DAFE469BA349EE3970C42_RuntimeMethod_var);
		V_0 = L_3;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:844>
		bool L_4 = __this->___inline;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:845>
		___3_aMode = 0;
	}

IL_0020:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:846>
		V_1 = 0;
		goto IL_006a;
	}

IL_0024:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:848>
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:849>
		StringBuilder_t* L_6 = ___0_aSB;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)44), NULL);
	}

IL_0031:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:850>
		int32_t L_8 = ___3_aMode;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:851>
		StringBuilder_t* L_9 = ___0_aSB;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_9, NULL);
	}

IL_003d:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:853>
		int32_t L_11 = ___3_aMode;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:854>
		StringBuilder_t* L_12 = ___0_aSB;
		int32_t L_13 = ___1_aIndent;
		int32_t L_14 = ___2_aIndentInc;
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_12, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
	}

IL_004e:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:855>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_16 = __this->___m_List;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_18;
		L_18 = List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6(L_16, L_17, List_1_get_Item_mF2BACCBA9A9CDABCC9036E461F8C483E553D69F6_RuntimeMethod_var);
		StringBuilder_t* L_19 = ___0_aSB;
		int32_t L_20 = ___1_aIndent;
		int32_t L_21 = ___2_aIndentInc;
		int32_t L_22 = ___2_aIndentInc;
		int32_t L_23 = ___3_aMode;
		NullCheck(L_18);
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(24, L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22, L_23);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:846>
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006a:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:846>
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:857>
		int32_t L_27 = ___3_aMode;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:858>
		StringBuilder_t* L_28 = ___0_aSB;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_28, NULL);
		int32_t L_30 = ___1_aIndent;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_29, ((int32_t)32), L_30, NULL);
	}

IL_0082:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:859>
		StringBuilder_t* L_32 = ___0_aSB;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)93), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:860>
		return;
	}
}
// Method Definition Index: 95314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A7C7CC84E6F1F5C59F920A081EACEAF9044285A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:752>
		List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_0 = (List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7*)il2cpp_codegen_object_new(List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7_il2cpp_TypeInfo_var);
		List_1__ctor_m5A7C7CC84E6F1F5C59F920A081EACEAF9044285A(L_0, List_1__ctor_m5A7C7CC84E6F1F5C59F920A081EACEAF9044285A_RuntimeMethod_var);
		__this->___m_List = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_List), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
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
// Method Definition Index: 95315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19__ctor_m48D468716607D99F01E78E9A163419BCAE44B8E3 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 95316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19_System_IDisposable_Dispose_m8A8DCB9E48BFDC4D42BE97DF675E3414360440ED (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CGetEnumeratorU3Ed__19_U3CU3Em__Finally1_mD9E6959114EC20C6D55CB63B72B2E820B67B71B6(__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 95317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__19_MoveNext_m29563E583BD20A93B5B5831D5862534703B4DE39 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_2 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				U3CGetEnumeratorU3Ed__19_System_IDisposable_Dispose_m8A8DCB9E48BFDC4D42BE97DF675E3414360440ED(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:826>
				JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_4 = V_2;
				NullCheck(L_4);
				List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_5 = L_4->___m_List;
				NullCheck(L_5);
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 L_6;
				L_6 = List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012(L_5, List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____list), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____current), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:826>
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_7 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8;
				L_8 = Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_inline(L_7, Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_RuntimeMethod_var);
				V_3 = L_8;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:827>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_9 = V_3;
				__this->___U3CU3E2__current = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_9);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0061_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:826>
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_10 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013(L_10, Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__19_U3CU3Em__Finally1_mD9E6959114EC20C6D55CB63B72B2E820B67B71B6(__this, NULL);
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_12 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15));
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:828>
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 95318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19_U3CU3Em__Finally1_mD9E6959114EC20C6D55CB63B72B2E820B67B71B6 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_0 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B(L_0, Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 95319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8E8A90222FF366373B33298E914DF056B8ED5221 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__19_System_Collections_IEnumerator_Reset_m054DEF5B537866E99EEF8A4C123872636C824A17 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__19_System_Collections_IEnumerator_Reset_m054DEF5B537866E99EEF8A4C123872636C824A17_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__19_System_Collections_IEnumerator_get_Current_m311103EC1C255F9965D400CFEEAD2D452B9F3FF5 (U3CGetEnumeratorU3Ed__19_t4380F5106933DA48563C48428A770A215DE45DF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
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
// Method Definition Index: 95322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18__ctor_m37E442B63A4BED063E48AB36CEE4A7F6AADE2992 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
// Method Definition Index: 95323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18_System_IDisposable_Dispose_m26CE2DCB471544DE7AF895B03B3F615BE510B460 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3Cget_ChildrenU3Ed__18_U3CU3Em__Finally1_m7125F7FE4754E6F28F930CF19209732C01544648(__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 95324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__18_MoveNext_m9CDD5EF83371215B72EBC714965D0979A92357B9 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_2 = NULL;
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{
				U3Cget_ChildrenU3Ed__18_System_IDisposable_Dispose_m26CE2DCB471544DE7AF895B03B3F615BE510B460(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:819>
				JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_4 = V_2;
				NullCheck(L_4);
				List_1_t8860DF00E35775C244512F9B67E58B66EF8F48C7* L_5 = L_4->___m_List;
				NullCheck(L_5);
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15 L_6;
				L_6 = List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012(L_5, List_1_GetEnumerator_mC07BFFABFB6A167351A2E4E0D8F6F19789B42012_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____list), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____current), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:819>
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_7 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8;
				L_8 = Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_inline(L_7, Enumerator_get_Current_mD39A2AED90C16DF2D22EDD4A31EE101B1A66C190_RuntimeMethod_var);
				V_3 = L_8;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:820>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_9 = V_3;
				__this->___U3CU3E2__current = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_9);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0061_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:819>
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_10 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013(L_10, Enumerator_MoveNext_mFD0A56500ECAC847FBED5294B6D982D366B95013_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__18_U3CU3Em__Finally1_m7125F7FE4754E6F28F930CF19209732C01544648(__this, NULL);
				Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_12 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15));
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:821>
				V_0 = (bool)0;
				goto IL_008b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 95325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18_U3CU3Em__Finally1_m7125F7FE4754E6F28F930CF19209732C01544648 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15* L_0 = (Enumerator_tA43D906E96D78DC9FDE10C4F9C724D5B6154EA15*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B(L_0, Enumerator_Dispose_m344E5DDEF9ACB9593B72CF34B2C2860A5FF1887B_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 95326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* U3Cget_ChildrenU3Ed__18_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mE872197293431089C10EAF2D4B2406390C5B0ECA (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m32EF127E305642033496632AF9702DABDD93CA58 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__18_System_Collections_IEnumerator_Reset_m32EF127E305642033496632AF9702DABDD93CA58_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__18_System_Collections_IEnumerator_get_Current_m73E5B9E6245D116887DBB878405E4A85CEE93A1E (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mAA557652BCB987F27F06710D98C0C81A977CD5B6 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* L_3 = (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__18__ctor_m37E442B63A4BED063E48AB36CEE4A7F6AADE2992(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* L_4 = V_0;
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 95330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__18_System_Collections_IEnumerable_GetEnumerator_mDEDEE12E743BB38346DF46FE0CA57240B6FEBA73 (U3Cget_ChildrenU3Ed__18_t34DD4C2031A6DBDE2E19E97E6C0FA56AD5D686A9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__18_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mAA557652BCB987F27F06710D98C0C81A977CD5B6(__this, NULL);
		return L_0;
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
// Method Definition Index: 95331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Tag_mDB07ECDCD7EF5E1EB49020E756C2AC6823DA9406 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:870>
		return (int32_t)(2);
	}
}
// Method Definition Index: 95332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m80F31EE3661E60E8106FC9247BE45A81860BEC94 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:871>
		return (bool)1;
	}
}
// Method Definition Index: 95333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONObject_get_Item_m4805AFE586B19507AF81442A6A01506AAAA88308 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:878>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_0 = __this->___m_Dict;
		String_t* L_1 = ___0_aKey;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93(L_0, L_1, Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:879>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_3 = __this->___m_Dict;
		String_t* L_4 = ___0_aKey;
		NullCheck(L_3);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5;
		L_5 = Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C(L_3, L_4, Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:881>
		String_t* L_6 = ___0_aKey;
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_7 = (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)il2cpp_codegen_object_new(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m8A9D83F7F5137D6935777732765B2025A1D01506(L_7, __this, L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 95334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mF1F35A2EC4F9E9921506C375B2C7BBC445BA1D1F (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:885>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:886>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_value = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:887>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_3 = __this->___m_Dict;
		String_t* L_4 = ___0_aKey;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93(L_3, L_4, Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:888>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_6 = __this->___m_Dict;
		String_t* L_7 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_8 = ___1_value;
		NullCheck(L_6);
		Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0(L_6, L_7, L_8, Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:890>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_9 = __this->___m_Dict;
		String_t* L_10 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_11 = ___1_value;
		NullCheck(L_9);
		Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2(L_9, L_10, L_11, Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:891>
		return;
	}
}
// Method Definition Index: 95335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONObject_get_Item_mBDBCD7F3490589789B3A8D23BE43D9DA892D19A9 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:898>
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_2 = __this->___m_Dict;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D(L_2, Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:899>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}

IL_0014:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:900>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_4 = __this->___m_Dict;
		int32_t L_5 = ___0_aIndex;
		KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_7;
		L_7 = KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline((&V_0), KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		return L_7;
	}
}
// Method Definition Index: 95336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mAED701647DB2AEC8F39500F99654918E804DB288 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, int32_t ___0_aIndex, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:904>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:905>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_value = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:906>
		int32_t L_3 = ___0_aIndex;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_aIndex;
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_5 = __this->___m_Dict;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D(L_5, Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:907>
		return;
	}

IL_0023:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:908>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_7 = __this->___m_Dict;
		int32_t L_8 = ___0_aIndex;
		KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_9;
		L_9 = Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E(L_7, L_8, Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		V_1 = L_9;
		String_t* L_10;
		L_10 = KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_inline((&V_1), KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		V_0 = L_10;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:909>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_11 = __this->___m_Dict;
		String_t* L_12 = V_0;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_13 = ___1_value;
		NullCheck(L_11);
		Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0(L_11, L_12, L_13, Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:910>
		return;
	}
}
// Method Definition Index: 95337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m3A2869E2199AC1A7A1758E9E8C40C9B7C2BEA033 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:915>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_0 = __this->___m_Dict;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D(L_0, Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 95338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m61506BBC8702F6835F63AB97683E34C58CDDF775 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:920>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___1_aItem;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:921>
		JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* L_2 = (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)il2cpp_codegen_object_new(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5(L_2, NULL);
		___1_aItem = L_2;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:923>
		String_t* L_3 = ___0_aKey;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:925>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_5 = __this->___m_Dict;
		String_t* L_6 = ___0_aKey;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93(L_5, L_6, Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:926>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_8 = __this->___m_Dict;
		String_t* L_9 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_10 = ___1_aItem;
		NullCheck(L_8);
		Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0(L_8, L_9, L_10, Dictionary_2_set_Item_mB8CF09224BF6EB19895F454096AC3320ABCDA5A0_RuntimeMethod_var);
		return;
	}

IL_0034:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:928>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_11 = __this->___m_Dict;
		String_t* L_12 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_13 = ___1_aItem;
		NullCheck(L_11);
		Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2(L_11, L_12, L_13, Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var);
		return;
	}

IL_0042:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:931>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_14 = __this->___m_Dict;
		Guid_t L_15;
		L_15 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_17 = ___1_aItem;
		NullCheck(L_14);
		Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2(L_14, L_16, L_17, Dictionary_2_Add_m4C85C621FF0C02D13BAC13DCF44B59983AB12CA2_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:932>
		return;
	}
}
// Method Definition Index: 95339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONObject_Remove_mA4C70AE97032CF95DF4EC6AB9041FADB9102BDE8 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:936>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_0 = __this->___m_Dict;
		String_t* L_1 = ___0_aKey;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93(L_0, L_1, Dictionary_2_ContainsKey_mA38AA4172D6BB0CE33F164A5665C5F75CA9E4F93_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:937>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:938>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_3 = __this->___m_Dict;
		String_t* L_4 = ___0_aKey;
		NullCheck(L_3);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5;
		L_5 = Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C(L_3, L_4, Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:939>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_6 = __this->___m_Dict;
		String_t* L_7 = ___0_aKey;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6(L_6, L_7, Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:940>
		return L_5;
	}
}
// Method Definition Index: 95340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONObject_Remove_mC3801F60CDBF24D451478A68080902B74C336D4A (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:945>
		int32_t L_0 = ___0_aIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___0_aIndex;
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_2 = __this->___m_Dict;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D(L_2, Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:946>
		return (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
	}

IL_0014:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:947>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_4 = __this->___m_Dict;
		int32_t L_5 = ___0_aIndex;
		KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m8FC59884537CEBAC7E5D11B743F803B7CC36041E_RuntimeMethod_var);
		V_0 = L_6;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:948>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_7 = __this->___m_Dict;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_inline((&V_0), KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6(L_7, L_8, Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:949>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_10;
		L_10 = KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline((&V_0), KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		return L_10;
	}
}
// Method Definition Index: 95341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONObject_Remove_mEB6BF089238BE9B6556D1050A51CF00AD77D8AC6 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m400DF4A4F477758483F19D7590AED57E4E7C4C09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m27BCB84907CBB5DBBDA4EE2D999E8537A2D8D273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CRemoveU3Eb__0_mB07E12462B66F705D52C959DE6A43904D3CBF35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* V_0 = NULL;
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* L_0 = (U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass17_0__ctor_mE9923E45E02528BB1A30B0902B9D093754C2F066(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* L_1 = V_0;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_aNode;
		NullCheck(L_1);
		L_1->___aNode = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___aNode), (void*)L_2);
	}
	try
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:956>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_3 = __this->___m_Dict;
		U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* L_4 = V_0;
		Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8* L_5 = (Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8*)il2cpp_codegen_object_new(Func_2_t6B53AE3AB2ADDD5FF3C4C5FD8540D2596C49F3C8_il2cpp_TypeInfo_var);
		Func_2__ctor_m348C317ADE65BE20F4AA461303EF31FEFD5AEAAB(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CRemoveU3Eb__0_mB07E12462B66F705D52C959DE6A43904D3CBF35D_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m27BCB84907CBB5DBBDA4EE2D999E8537A2D8D273(L_3, L_5, Enumerable_Where_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m27BCB84907CBB5DBBDA4EE2D999E8537A2D8D273_RuntimeMethod_var);
		KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_7;
		L_7 = Enumerable_First_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m400DF4A4F477758483F19D7590AED57E4E7C4C09(L_6, Enumerable_First_TisKeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_m400DF4A4F477758483F19D7590AED57E4E7C4C09_RuntimeMethod_var);
		V_1 = L_7;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:957>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_8 = __this->___m_Dict;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_inline((&V_1), KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6(L_8, L_9, Dictionary_2_Remove_mE60B652F6D02BEC6B62A98847527AA9A2009D1F6_RuntimeMethod_var);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:958>
		U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* L_11 = V_0;
		NullCheck(L_11);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_12 = L_11->___aNode;
		V_2 = L_12;
		goto IL_004b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{
		RuntimeObject* L_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:960>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:962>
		V_2 = (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}

IL_004b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:964>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 95342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_get_Children_m9EADDFFE5C334B5EC6D1A481A187E6A07235938E (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* L_0 = (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__19__ctor_m88818A7DF3C824BE8F33E3EB353C279D64D8E140(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 95343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_GetEnumerator_m12E4E41A96EDF1C0CDCA3EE651F804928780B8B6 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* L_0 = (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__20__ctor_m6F7362669DF4C63981738CDA57A6AC0D08C46BCE(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 95344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Serialize_m5787FF8288D9821E143BF4CDBFF902F2F63C5B23 (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mC2D8CEE3EF55C33B66307913B3E03C7C1B37FA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m90157E523686EEAF7C7CAD33EA13A66FF1297555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C79D1254A69484BE77A5A18D639F70E372E0D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB50DA39B61FE772FA25B543BD83345E2157687EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m916C79021BC5BDA184FF71B4EAD9C229F9BE2CDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:983>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:984>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_2 = __this->___m_Dict;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D(L_2, Dictionary_2_get_Count_m8EEA98696B428346D2C39AD008EAAA4A3777839D_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16, L_1, L_3);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:985>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_4 = __this->___m_Dict;
		NullCheck(L_4);
		KeyCollection_t13FEFE707F78FAE800362FD755F42E0C24B9E634* L_5;
		L_5 = Dictionary_2_get_Keys_mC2D8CEE3EF55C33B66307913B3E03C7C1B37FA4D(L_4, Dictionary_2_get_Keys_mC2D8CEE3EF55C33B66307913B3E03C7C1B37FA4D_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t2C6216F1BBB7235DD6D6C98F41B679C0B10EA3A2 L_6;
		L_6 = KeyCollection_GetEnumerator_m916C79021BC5BDA184FF71B4EAD9C229F9BE2CDC(L_5, KeyCollection_GetEnumerator_m916C79021BC5BDA184FF71B4EAD9C229F9BE2CDC_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{
				Enumerator_Dispose_m90157E523686EEAF7C7CAD33EA13A66FF1297555((&V_0), Enumerator_Dispose_m90157E523686EEAF7C7CAD33EA13A66FF1297555_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004c_1;
			}

IL_002b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:985>
				String_t* L_7;
				L_7 = Enumerator_get_Current_mB50DA39B61FE772FA25B543BD83345E2157687EC_inline((&V_0), Enumerator_get_Current_mB50DA39B61FE772FA25B543BD83345E2157687EC_RuntimeMethod_var);
				V_1 = L_7;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:987>
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___0_aWriter;
				String_t* L_9 = V_1;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(21, L_8, L_9);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:988>
				Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_10 = __this->___m_Dict;
				String_t* L_11 = V_1;
				NullCheck(L_10);
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_12;
				L_12 = Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C(L_10, L_11, Dictionary_2_get_Item_m9CB89E869182ABC939C700778D26038F57E1D04C_RuntimeMethod_var);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = ___0_aWriter;
				NullCheck(L_12);
				VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(36, L_12, L_13);
			}

IL_004c_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:985>
				bool L_14;
				L_14 = Enumerator_MoveNext_m5C79D1254A69484BE77A5A18D639F70E372E0D1C((&V_0), Enumerator_MoveNext_m5C79D1254A69484BE77A5A18D639F70E372E0D1C_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0065;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:990>
		return;
	}
}
// Method Definition Index: 95345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_WriteToStringBuilder_m08EB385B643AF0ACB0FA6C942484EF870680C59A (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:993>
		StringBuilder_t* L_0 = ___0_aSB;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:994>
		V_0 = (bool)1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:995>
		bool L_2 = __this->___inline;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:996>
		___3_aMode = 0;
	}

IL_0016:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:997>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_3 = __this->___m_Dict;
		NullCheck(L_3);
		Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E L_4;
		L_4 = Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B(L_3, Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{
				Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D((&V_1), Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00a9_1;
			}

IL_0027_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:997>
				KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_5;
				L_5 = Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_inline((&V_1), Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
				V_2 = L_5;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:999>
				bool L_6 = V_0;
				if (L_6)
				{
					goto IL_003b_1;
				}
			}
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1000>
				StringBuilder_t* L_7 = ___0_aSB;
				NullCheck(L_7);
				StringBuilder_t* L_8;
				L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)44), NULL);
			}

IL_003b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1001>
				V_0 = (bool)0;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1002>
				int32_t L_9 = ___3_aMode;
				if ((!(((uint32_t)L_9) == ((uint32_t)1))))
				{
					goto IL_0049_1;
				}
			}
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1003>
				StringBuilder_t* L_10 = ___0_aSB;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_10, NULL);
			}

IL_0049_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1004>
				int32_t L_12 = ___3_aMode;
				if ((!(((uint32_t)L_12) == ((uint32_t)1))))
				{
					goto IL_005a_1;
				}
			}
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1005>
				StringBuilder_t* L_13 = ___0_aSB;
				int32_t L_14 = ___1_aIndent;
				int32_t L_15 = ___2_aIndentInc;
				NullCheck(L_13);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_13, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
			}

IL_005a_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1006>
				StringBuilder_t* L_17 = ___0_aSB;
				NullCheck(L_17);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)34), NULL);
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_inline((&V_2), KeyValuePair_2_get_Key_mC8448BF6D91094C1F99873384DEEA956A10C187B_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
				String_t* L_20;
				L_20 = JSONNode_Escape_m72861C0191A4B62507EC19CB47A0ED707C6A5CEA(L_19, NULL);
				NullCheck(L_18);
				StringBuilder_t* L_21;
				L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_20, NULL);
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)34), NULL);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1007>
				int32_t L_23 = ___3_aMode;
				if (L_23)
				{
					goto IL_008a_1;
				}
			}
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1008>
				StringBuilder_t* L_24 = ___0_aSB;
				NullCheck(L_24);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)58), NULL);
				goto IL_0096_1;
			}

IL_008a_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1010>
				StringBuilder_t* L_26 = ___0_aSB;
				NullCheck(L_26);
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, NULL);
			}

IL_0096_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1011>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_28;
				L_28 = KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline((&V_2), KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
				StringBuilder_t* L_29 = ___0_aSB;
				int32_t L_30 = ___1_aIndent;
				int32_t L_31 = ___2_aIndentInc;
				int32_t L_32 = ___2_aIndentInc;
				int32_t L_33 = ___3_aMode;
				NullCheck(L_28);
				VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(24, L_28, L_29, ((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32, L_33);
			}

IL_00a9_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:997>
				bool L_34;
				L_34 = Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB((&V_1), Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_00c5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1013>
		int32_t L_35 = ___3_aMode;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1014>
		StringBuilder_t* L_36 = ___0_aSB;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_36, NULL);
		int32_t L_38 = ___1_aIndent;
		NullCheck(L_37);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_37, ((int32_t)32), L_38, NULL);
	}

IL_00d9:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1015>
		StringBuilder_t* L_40 = ___0_aSB;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)125), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1016>
		return;
	}
}
// Method Definition Index: 95346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBA50698D290C50E7964484AB442BDC02A81AE613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:866>
		Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_0 = (Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D*)il2cpp_codegen_object_new(Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBA50698D290C50E7964484AB442BDC02A81AE613(L_0, Dictionary_2__ctor_mBA50698D290C50E7964484AB442BDC02A81AE613_RuntimeMethod_var);
		__this->___m_Dict = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dict), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
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
// Method Definition Index: 95347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE9923E45E02528BB1A30B0902B9D093754C2F066 (U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 95348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CRemoveU3Eb__0_mB07E12462B66F705D52C959DE6A43904D3CBF35D (U3CU3Ec__DisplayClass17_0_tCDD43DC28D1424AF72A38B3608187001F1628D73* __this, KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:956>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0;
		L_0 = KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline((&___0_k), KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1 = __this->___aNode;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_m76D6207B4050B5677FF8B2BE33C21121EE82648F(L_0, L_1, NULL);
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
// Method Definition Index: 95349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20__ctor_m6F7362669DF4C63981738CDA57A6AC0D08C46BCE (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 95350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20_System_IDisposable_Dispose_m58EDCA354FF84A867D64949E976449860B9F729B (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3CGetEnumeratorU3Ed__20_U3CU3Em__Finally1_m43317B48EA81E7E0A5EE02104AB72373AEC3D1C4(__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 95351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__20_MoveNext_m99840EBDA917B8980A5015EB8F84243A6FD4C452 (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_2 = NULL;
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0089:
			{
				U3CGetEnumeratorU3Ed__20_System_IDisposable_Dispose_m58EDCA354FF84A867D64949E976449860B9F729B(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005e_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0090;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:977>
				JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_5 = L_4->___m_Dict;
				NullCheck(L_5);
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E L_6;
				L_6 = Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B(L_5, Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___key), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___value), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0066_1;
			}

IL_003b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:977>
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_7 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_8;
				L_8 = Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_inline(L_7, Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
				V_3 = L_8;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:978>
				KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_9 = V_3;
				KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_10 = L_9;
				RuntimeObject* L_11 = Box(KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433_il2cpp_TypeInfo_var, &L_10);
				__this->___U3CU3E2__current = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_0090;
			}

IL_005e_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0066_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:977>
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_12 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				bool L_13;
				L_13 = Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB(L_12, Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__20_U3CU3Em__Finally1_m43317B48EA81E7E0A5EE02104AB72373AEC3D1C4(__this, NULL);
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_14 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E));
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:979>
				V_0 = (bool)0;
				goto IL_0090;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// Method Definition Index: 95352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20_U3CU3Em__Finally1_m43317B48EA81E7E0A5EE02104AB72373AEC3D1C4 (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_0 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D(L_0, Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 95353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mADFFC615CB232ECB1E03D853903B521218F7340B (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__20_System_Collections_IEnumerator_Reset_mF9164731BBC3CAEF23950B7FF1B91A47C8B3C019 (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__20_System_Collections_IEnumerator_Reset_mF9164731BBC3CAEF23950B7FF1B91A47C8B3C019_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__20_System_Collections_IEnumerator_get_Current_mB7E710DB11A5ADC2490EDA63959BCB826BC98951 (U3CGetEnumeratorU3Ed__20_t3C0B2E3A2442C7B8BE2FF9D0BE31FDB3377407D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
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
// Method Definition Index: 95356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19__ctor_m88818A7DF3C824BE8F33E3EB353C279D64D8E140 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId = L_1;
		return;
	}
}
// Method Definition Index: 95357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19_System_IDisposable_Dispose_mB5CDF83FA4CFA2D8392D43F60F80807E4FFF1039 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				U3Cget_ChildrenU3Ed__19_U3CU3Em__Finally1_mC76F4120EF661C11247DFD19503A4A134FD2F208(__this, NULL);
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 95358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__19_MoveNext_m8E264A97F3A6BA2DB253DFC876C28C8EDE56113A (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_2 = NULL;
	KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008a:
			{
				U3Cget_ChildrenU3Ed__19_System_IDisposable_Dispose_mB5CDF83FA4CFA2D8392D43F60F80807E4FFF1039(__this, NULL);
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = __this->___U3CU3E1__state;
				V_1 = L_0;
				JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_1 = __this->___U3CU3E4__this;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0091;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state = (-1);
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:970>
				JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_tF163B9455E1A9D8EBDA9C3E051A7B093F088AC2D* L_5 = L_4->___m_Dict;
				NullCheck(L_5);
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E L_6;
				L_6 = Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B(L_5, Dictionary_2_GetEnumerator_m03E94115EFC760D7E5D03336B58481441E0E6A7B_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1))->____dictionary), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___key), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1))->____current))->___value), (void*)NULL);
				#endif
				__this->___U3CU3E1__state = ((int32_t)-3);
				goto IL_0067_1;
			}

IL_003b_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:970>
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_7 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				KeyValuePair_2_tA041E762C5CE5218C66883C45E2CA474FA05D433 L_8;
				L_8 = Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_inline(L_7, Enumerator_get_Current_m128576F68DB12A4382F0FCF9DA5AAEC7241A235B_RuntimeMethod_var);
				V_3 = L_8;
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:971>
				JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_9;
				L_9 = KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_inline((&V_3), KeyValuePair_2_get_Value_m5D026EB47FB4050D64004211C6EACFDDE2A1D26A_RuntimeMethod_var);
				__this->___U3CU3E2__current = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_9);
				__this->___U3CU3E1__state = 1;
				V_0 = (bool)1;
				goto IL_0091;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state = ((int32_t)-3);
			}

IL_0067_1:
			{
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:970>
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_10 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				bool L_11;
				L_11 = Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB(L_10, Enumerator_MoveNext_m5078CD02D457C9EE62E4DB6B9B1E7567C179A6FB_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__19_U3CU3Em__Finally1_mC76F4120EF661C11247DFD19503A4A134FD2F208(__this, NULL);
				Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_12 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E));
				//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:972>
				V_0 = (bool)0;
				goto IL_0091;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 95359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19_U3CU3Em__Finally1_mC76F4120EF661C11247DFD19503A4A134FD2F208 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state = (-1);
		Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E* L_0 = (Enumerator_t0B58523C7335CA6BA6C0340E5A8D0F1EC38E021E*)(&__this->___U3CU3E7__wrap1);
		Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D(L_0, Enumerator_Dispose_mE53FA7C9AA9BA5C09F1FF9E9ED8070DC215E891D_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 95360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* U3Cget_ChildrenU3Ed__19_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m6A3819B9EE99AA1A4F5DE37F25DF2CCB52D753BA (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__19_System_Collections_IEnumerator_Reset_mE903BC8D7E0510D3E2A521CF302A1022E6EA558D (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__19_System_Collections_IEnumerator_Reset_mE903BC8D7E0510D3E2A521CF302A1022E6EA558D_RuntimeMethod_var)));
	}
}
// Method Definition Index: 95362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__19_System_Collections_IEnumerator_get_Current_mA77C95706D72D2D6276484636E9F50FAA4147095 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 95363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA08061390360BBB1C582D4FBF1A4FB60CC1FE6D8 (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* L_3 = (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__19__ctor_m88818A7DF3C824BE8F33E3EB353C279D64D8E140(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* L_4 = V_0;
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_5 = __this->___U3CU3E4__this;
		NullCheck(L_4);
		L_4->___U3CU3E4__this = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 95364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m75A251D74F3F105AF491C821CA4EBE271A33C3DD (U3Cget_ChildrenU3Ed__19_t2BEA70D2046047F9E8F8A882CAD2AEA32BCF505E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__19_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA08061390360BBB1C582D4FBF1A4FB60CC1FE6D8(__this, NULL);
		return L_0;
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
// Method Definition Index: 95365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_get_Tag_m99046826F0306B490E4083E88F3D954FCEC8D18A (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1025>
		return (int32_t)(3);
	}
}
// Method Definition Index: 95366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_get_IsString_mB2AC27017F3112ACF1E35B88443400FDC368DA62 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1026>
		return (bool)1;
	}
}
// Method Definition Index: 95367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONString_get_Value_mE60981ACC3CFBDD6FDDD0E46B5A293F3955E7AD8 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1030>
		String_t* L_0 = __this->___m_Data;
		return L_0;
	}
}
// Method Definition Index: 95368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_set_Value_mBAF37F2FD828E9AB8734FAB46BA260B9132F45C6 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1033>
		String_t* L_0 = ___0_value;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1034>
		return;
	}
}
// Method Definition Index: 95369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m4CC185553BC1E2EE46974B7788D9170F49725A87 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, String_t* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1037>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1039>
		String_t* L_0 = ___0_aData;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1040>
		return;
	}
}
// Method Definition Index: 95370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_Serialize_m558133B90EFF514C4A7A5FA69416662A9DDDA12D (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1044>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)3);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1045>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		String_t* L_2 = __this->___m_Data;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(21, L_1, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1046>
		return;
	}
}
// Method Definition Index: 95371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_WriteToStringBuilder_m8F54360B5206E4DE717C05D247034629638A19AF (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1049>
		StringBuilder_t* L_0 = ___0_aSB;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = __this->___m_Data;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JSONNode_Escape_m72861C0191A4B62507EC19CB47A0ED707C6A5CEA(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)34), NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1050>
		return;
	}
}
// Method Definition Index: 95372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_Equals_m73162F82A31AEC65E4041292D8051B8219DE4126 (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* V_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1053>
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = JSONNode_Equals_m77E1E33DD5B1F3FF3EFE9B10DBA71B38828331BE(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1054>
		return (bool)1;
	}

IL_000b:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1055>
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, il2cpp_defaults.string_class));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1056>
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1057>
		String_t* L_4 = __this->___m_Data;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1058>
		RuntimeObject* L_7 = ___0_obj;
		V_1 = ((JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006*)IsInstClass((RuntimeObject*)L_7, JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006_il2cpp_TypeInfo_var));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1059>
		JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52(L_8, NULL, NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1060>
		String_t* L_10 = __this->___m_Data;
		JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->___m_Data;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_12, NULL);
		return L_13;
	}

IL_0044:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1061>
		return (bool)0;
	}
}
// Method Definition Index: 95373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_GetHashCode_mE8B6BABC7A454224404CEB8FE8640E07BDC0545D (JSONString_tF91CE6F888E5BEDD8F121E0B408D9575EE45F006* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1065>
		String_t* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
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
// Method Definition Index: 95374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_get_Tag_mE76D3137548A645F58E08A5B82F59C992E344B7A (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1074>
		return (int32_t)(4);
	}
}
// Method Definition Index: 95375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_get_IsNumber_mA71BA91D18E2451E7A82DB67F68F58D4F911D4BC (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1075>
		return (bool)1;
	}
}
// Method Definition Index: 95376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNumber_get_Value_mB4CC832E8C6DD2DFF1CBB7A2C2DA11E11F909DB5 (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1080>
		double* L_0 = (double*)(&__this->___m_Data);
		String_t* L_1;
		L_1 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_Value_m19D833F2FB75323D0869114B281F5AF281DB5A9B (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1084>
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1085>
		double L_2 = V_0;
		__this->___m_Data = L_2;
	}

IL_0011:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1086>
		return;
	}
}
// Method Definition Index: 95378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNumber_get_AsDouble_mB8727B10C2A9064B94B65402B22B7818C985E664 (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1091>
		double L_0 = __this->___m_Data;
		return L_0;
	}
}
// Method Definition Index: 95379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsDouble_m95312185BD57C3DABDE00DB6DE5CD2F4BE604305 (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1092>
		double L_0 = ___0_value;
		__this->___m_Data = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1092>
		return;
	}
}
// Method Definition Index: 95380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, double ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1095>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1097>
		double L_0 = ___0_aData;
		__this->___m_Data = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1098>
		return;
	}
}
// Method Definition Index: 95381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m4049FDD50C34BDD3DF83C4079B173DB23A1CCE9B (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, String_t* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1100>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1102>
		String_t* L_0 = ___0_aData;
		VirtualActionInvoker1< String_t* >::Invoke(9, __this, L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1103>
		return;
	}
}
// Method Definition Index: 95382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_Serialize_mFAB214C4E5CD7721013E26D9B8085C3F10B7F08A (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1107>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)4);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1108>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		double L_2 = __this->___m_Data;
		NullCheck(L_1);
		VirtualActionInvoker1< double >::Invoke(13, L_1, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1109>
		return;
	}
}
// Method Definition Index: 95383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_WriteToStringBuilder_m67BC13FE1A36AEA5D1AB7ED3FDDA10A0B6CAA7F1 (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1112>
		StringBuilder_t* L_0 = ___0_aSB;
		double L_1 = __this->___m_Data;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_0, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1113>
		return;
	}
}
// Method Definition Index: 95384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_m3AE4A580CBFC7AF70B9A41C076CC49B3D32065F6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1116>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1117>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1118>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1119>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1120>
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1121>
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_defaults.int32_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_defaults.uint32_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, il2cpp_defaults.single_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, il2cpp_defaults.double_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_4 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, il2cpp_defaults.int64_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_6 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, il2cpp_defaults.uint64_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, il2cpp_defaults.int16_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, il2cpp_defaults.uint16_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, il2cpp_defaults.sbyte_class)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, il2cpp_defaults.byte_class))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// Method Definition Index: 95385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_Equals_m660CD6BAE73C404A2096C15A02421AC9F0A8C21E (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1125>
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1126>
		return (bool)0;
	}

IL_0005:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1127>
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = JSONNode_Equals_m77E1E33DD5B1F3FF3EFE9B10DBA71B38828331BE(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1128>
		return (bool)1;
	}

IL_0010:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1129>
		RuntimeObject* L_3 = ___0_obj;
		V_0 = ((JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)IsInstClass((RuntimeObject*)L_3, JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var));
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1130>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = JSONNode_op_Inequality_m0470C80692D526B4B36A915C78423C162633AE52(L_4, NULL, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1131>
		double L_6 = __this->___m_Data;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_7 = V_0;
		NullCheck(L_7);
		double L_8 = L_7->___m_Data;
		return (bool)((((double)L_6) == ((double)L_8))? 1 : 0);
	}

IL_002f:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1132>
		RuntimeObject* L_9 = ___0_obj;
		bool L_10;
		L_10 = JSONNumber_IsNumeric_m3AE4A580CBFC7AF70B9A41C076CC49B3D32065F6(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1133>
		RuntimeObject* L_11 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_11, NULL);
		double L_13 = __this->___m_Data;
		return (bool)((((double)L_12) == ((double)L_13))? 1 : 0);
	}

IL_0046:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1134>
		return (bool)0;
	}
}
// Method Definition Index: 95386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_GetHashCode_m5F76DA35717CF202F46FFE63CDB1035B6D96082B (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1138>
		double* L_0 = (double*)(&__this->___m_Data);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
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
// Method Definition Index: 95387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_get_Tag_m6AB6AB767FCA103FFBA5BB6FF78CDD7061425537 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1147>
		return (int32_t)(6);
	}
}
// Method Definition Index: 95388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_IsBoolean_m93F828DBC1CD9BFFFA942D1CA3AA6F7164F15D34 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1148>
		return (bool)1;
	}
}
// Method Definition Index: 95389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONBool_get_Value_mC1BFECCF9B6E94D730F2AF104B16E3C28D71D3A4 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1153>
		bool* L_0 = (bool*)(&__this->___m_Data);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_Value_mC48E9559ECAA2EA7BBE9998D055E29506E898D06 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1157>
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_1;
		L_1 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1158>
		bool L_2 = V_0;
		__this->___m_Data = L_2;
	}

IL_0011:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1159>
		return;
	}
}
// Method Definition Index: 95391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_AsBool_m705BD81AD0D3592FE9E8F367A48B7C188DFE35E8 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1163>
		bool L_0 = __this->___m_Data;
		return L_0;
	}
}
// Method Definition Index: 95392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_AsBool_m1DB7BEFD4DAC07CF26E1149EAF3A2878C7A19610 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1164>
		bool L_0 = ___0_value;
		__this->___m_Data = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1164>
		return;
	}
}
// Method Definition Index: 95393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, bool ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1167>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1169>
		bool L_0 = ___0_aData;
		__this->___m_Data = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1170>
		return;
	}
}
// Method Definition Index: 95394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_m883A58BCF7EDD268D76E1E5F79F3639FCD31EE77 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, String_t* ___0_aData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1172>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1174>
		String_t* L_0 = ___0_aData;
		VirtualActionInvoker1< String_t* >::Invoke(9, __this, L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1175>
		return;
	}
}
// Method Definition Index: 95395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_Serialize_m291BBBC5297BC9783E2C5D93DAC4B03BFB54BD5B (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1179>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)6);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1180>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___0_aWriter;
		bool L_2 = __this->___m_Data;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(7, L_1, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1181>
		return;
	}
}
// Method Definition Index: 95396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_WriteToStringBuilder_m0408AF94E53E1488190B86C113D65E77E15B881E (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1184>
		StringBuilder_t* L_0 = ___0_aSB;
		bool L_1 = __this->___m_Data;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
		G_B1_0 = L_0;
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1185>
		return;
	}
}
// Method Definition Index: 95397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_Equals_mC59503A81D3287C4913E15B2B06C61BF415F1347 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1188>
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1189>
		return (bool)0;
	}

IL_0005:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1190>
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_defaults.boolean_class)))
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1191>
		bool L_2 = __this->___m_Data;
		RuntimeObject* L_3 = ___0_obj;
		return (bool)((((int32_t)L_2) == ((int32_t)((*(bool*)UnBox(L_3, il2cpp_defaults.boolean_class)))))? 1 : 0);
	}

IL_001c:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1192>
		return (bool)0;
	}
}
// Method Definition Index: 95398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_GetHashCode_mCF8B4221902FFAA972F0E7CFEC54C768588AF2B3 (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1196>
		bool* L_0 = (bool*)(&__this->___m_Data);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(L_0, NULL);
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
// Method Definition Index: 95399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_get_Tag_mFB1859F5BA055262C47B0E16CB554EB4322974FC (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1204>
		return (int32_t)(5);
	}
}
// Method Definition Index: 95400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_IsNull_m2544FE8151B6D520AAC8816F2079957FF3A0306F (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1205>
		return (bool)1;
	}
}
// Method Definition Index: 95401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNull_get_Value_m08D72D37F6ABCD0CC6867BAD46A9981D1381F0E9 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1209>
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
// Method Definition Index: 95402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_Value_m792CD523EB4061AD26C8F7DA1B30B437F221029B (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1210>
		return;
	}
}
// Method Definition Index: 95403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_AsBool_mBC582E427487C42CE70914735DB973731C4742DE (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1214>
		return (bool)0;
	}
}
// Method Definition Index: 95404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_AsBool_mDFECF0AC2E947D9161ED88991B149C58061E8C02 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1215>
		return;
	}
}
// Method Definition Index: 95405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_Equals_m3E3CA23B3A81C6AD8DDF175627AA097CD1C3B9B9 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1220>
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1221>
		return (bool)1;
	}

IL_0006:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1222>
		RuntimeObject* L_1 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)((JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55*)IsInstClass((RuntimeObject*)L_1, JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 95406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_GetHashCode_m4E2837ECE5975FBB074709D8FDF24168A95F341E (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1226>
		return 0;
	}
}
// Method Definition Index: 95407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_Serialize_m1D6A32DF1C78AE1BC5B2753C10C1643D374919DD (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___0_aWriter, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1231>
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___0_aWriter;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8, L_0, (uint8_t)5);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1232>
		return;
	}
}
// Method Definition Index: 95408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_WriteToStringBuilder_mEA2BAF1064513D06BC6027287C7E4104EA400322 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1235>
		StringBuilder_t* L_0 = ___0_aSB;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1236>
		return;
	}
}
// Method Definition Index: 95409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_mB07DAA8C5B0A0295B807756029913407E0FEE3F5 (JSONNull_tD3CC25065CDD24BEE20A7187D2F224B93051EE55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
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
// Method Definition Index: 95410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_Tag_m43EC91FDA19580A4FA56902697780FBA7E3B48FD (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1245>
		return (int32_t)(7);
	}
}
// Method Definition Index: 95411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m253520732548E7BD056404F7BB81D60F66C13914 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1247>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1249>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_aNode;
		__this->___m_Node = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node), (void*)L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1250>
		__this->___m_Key = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key), (void*)(String_t*)NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1251>
		return;
	}
}
// Method Definition Index: 95412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m8A9D83F7F5137D6935777732765B2025A1D01506 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aNode, String_t* ___1_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1253>
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode__ctor_mF10084F295AE4B043F47752661A7336532B40BC9(__this, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1255>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_0 = ___0_aNode;
		__this->___m_Node = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node), (void*)L_0);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1256>
		String_t* L_1 = ___1_aKey;
		__this->___m_Key = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key), (void*)L_1);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1257>
		return;
	}
}
// Method Definition Index: 95413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aVal, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1261>
		String_t* L_0 = __this->___m_Key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1263>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1 = __this->___m_Node;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_aVal;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(18, L_1, L_2);
		goto IL_0028;
	}

IL_0016:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1267>
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_3 = __this->___m_Node;
		String_t* L_4 = __this->___m_Key;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_5 = ___0_aVal;
		NullCheck(L_3);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_3, L_4, L_5);
	}

IL_0028:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1269>
		__this->___m_Node = (JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node), (void*)(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6*)NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1270>
		return;
	}
}
// Method Definition Index: 95414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONLazyCreator_get_Item_m84416A1D53EA7160F1D7DDFE3BAAF512E5E53DF6 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, int32_t ___0_aIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1276>
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_0 = (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)il2cpp_codegen_object_new(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m253520732548E7BD056404F7BB81D60F66C13914(L_0, __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 95415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m231D9C8D8B4FDEF732C8E59156C8454FF83BCAE1 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, int32_t ___0_aIndex, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1280>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_0 = (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)il2cpp_codegen_object_new(JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1281>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_1 = V_0;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___1_value;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(18, L_1, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1282>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_3 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_3, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1283>
		return;
	}
}
// Method Definition Index: 95416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSONLazyCreator_get_Item_mFC7993A0B83E757C87B11E0F0B7E22034D38248E (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, String_t* ___0_aKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1290>
		String_t* L_0 = ___0_aKey;
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_1 = (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)il2cpp_codegen_object_new(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m8A9D83F7F5137D6935777732765B2025A1D01506(L_1, __this, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 95417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m0282C5FEF323DA41D098D781CC98D3B61D51DCA2 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1294>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_0 = (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)il2cpp_codegen_object_new(JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1295>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_1 = V_0;
		String_t* L_2 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_3 = ___1_value;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_1, L_2, L_3);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1296>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_4 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_4, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1297>
		return;
	}
}
// Method Definition Index: 95418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_m467D13D4F9C9CF48F1EA57620A6E8C523282E1E5 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___0_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1302>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_0 = (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)il2cpp_codegen_object_new(JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1303>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_1 = V_0;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_2 = ___0_aItem;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(18, L_1, L_2);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1304>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_3 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_3, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1305>
		return;
	}
}
// Method Definition Index: 95419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mE51716512FCFE0B32B52ACE916B59E290E1DEE25 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, String_t* ___0_aKey, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* ___1_aItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1309>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_0 = (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)il2cpp_codegen_object_new(JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1310>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_1 = V_0;
		String_t* L_2 = ___0_aKey;
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_3 = ___1_aItem;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* >::Invoke(17, L_1, L_2, L_3);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1311>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_4 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_4, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1312>
		return;
	}
}
// Method Definition Index: 95420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m360C9D9113089FE31E403922593974F894D7C991 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1316>
		RuntimeObject* L_0 = ___1_b;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1317>
		return (bool)1;
	}

IL_0005:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1318>
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_1 = ___0_a;
		RuntimeObject* L_2 = ___1_b;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
	}
}
// Method Definition Index: 95421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m8986C75A002E4E2E0BE6EBA2D89CC74B505ADCB1 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1323>
		JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* L_0 = ___0_a;
		RuntimeObject* L_1 = ___1_b;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_m360C9D9113089FE31E403922593974F894D7C991(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 95422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_m772C4C718A9546ADD17543E5E102AFD48280C499 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1328>
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1329>
		return (bool)1;
	}

IL_0005:
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1330>
		RuntimeObject* L_1 = ___0_obj;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// Method Definition Index: 95423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_mD37868C46FCE4E1556B6867597B0A637E2714817 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1335>
		return 0;
	}
}
// Method Definition Index: 95424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_m0CE9AC8D24D65A79A7E7239ED44CE88A1E0B9605 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1342>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_0 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_0, (0.0), NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1343>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1344>
		return 0;
	}
}
// Method Definition Index: 95425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_m9B1637A4C6E7D0A49C858E964F0F264AA19C88CD (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1348>
		int32_t L_0 = ___0_value;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, ((double)L_0), NULL);
		V_0 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1349>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_2 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_2, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1350>
		return;
	}
}
// Method Definition Index: 95426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_mB0B248ABA10D3A40D61B7AAD46A96BE0217A998A (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1357>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_0 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_0, (0.0), NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1358>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1359>
		return (0.0f);
	}
}
// Method Definition Index: 95427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_mA0035DE4AD55F514FBF4502797F7009FC9D6418E (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1363>
		float L_0 = ___0_value;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, ((double)L_0), NULL);
		V_0 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1364>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_2 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_2, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1365>
		return;
	}
}
// Method Definition Index: 95428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_m17D88E06796ECFD496354F0157693E19BD701AAE (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1372>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_0 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_0, (0.0), NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1373>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1374>
		return (0.0);
	}
}
// Method Definition Index: 95429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_m5DB871D6782DA3C59E4AF059A6F5FA5A2B726DD3 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1378>
		double L_0 = ___0_value;
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_1 = (JSONNumber_t624C1976C833252B19E651869C101D49818E5A88*)il2cpp_codegen_object_new(JSONNumber_t624C1976C833252B19E651869C101D49818E5A88_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m13E15BFB2CBA39C646068681227FBA2F99CE7FCE(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1379>
		JSONNumber_t624C1976C833252B19E651869C101D49818E5A88* L_2 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_2, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1380>
		return;
	}
}
// Method Definition Index: 95430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_mFB3BB6C27F57D60D62EE9E69C783C28FD9B1E4D6 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1387>
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_0 = (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E*)il2cpp_codegen_object_new(JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879(L_0, (bool)0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1388>
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1389>
		return (bool)0;
	}
}
// Method Definition Index: 95431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m2C8BC03C85781A634404CCC2A8DC50992A39638B (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1393>
		bool L_0 = ___0_value;
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_1 = (JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E*)il2cpp_codegen_object_new(JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E_il2cpp_TypeInfo_var);
		JSONBool__ctor_mAA3029ABD25419794F340DEFC5A753493075A879(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1394>
		JSONBool_t18FD6A88A1F93DA95FD7859A33027A0C8BF60B8E* L_2 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_2, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1395>
		return;
	}
}
// Method Definition Index: 95432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* JSONLazyCreator_get_AsArray_m603810924C78039C2CA1C463DB0245461E11B721 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1402>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_0 = (JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D*)il2cpp_codegen_object_new(JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D_il2cpp_TypeInfo_var);
		JSONArray__ctor_m465D1AF0F20FAB37E671754E8ADB1178A88B264E(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1403>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1404>
		JSONArray_tFAF1EDB360713E57AF7935D4E6E48BE254F1D72D* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 95433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* JSONLazyCreator_get_AsObject_mD0C349D218A4268F40752379E8E6AF313002CCF7 (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* V_0 = NULL;
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1412>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_0 = (JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E*)il2cpp_codegen_object_new(JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E_il2cpp_TypeInfo_var);
		JSONObject__ctor_m248F512CF069F4ECA874649187041F8C9DBD696F(L_0, NULL);
		V_0 = L_0;
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1413>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_1 = V_0;
		JSONLazyCreator_Set_m1E2B37C821A7EA06B4DD3D6512BC13A23DEAAC58(__this, L_1, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1414>
		JSONObject_t2156CA2483D74C5431006A54D28DC3E3B342060E* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 95434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_WriteToStringBuilder_mC0B0D883C51AD2843722F5942F58D9C73F28233F (JSONLazyCreator_t7B00CB5B059DEE4D4AB7AFF9888087CD16BF7879* __this, StringBuilder_t* ___0_aSB, int32_t ___1_aIndent, int32_t ___2_aIndentInc, int32_t ___3_aMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1419>
		StringBuilder_t* L_0 = ___0_aSB;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1420>
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
// Method Definition Index: 95435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* JSON_Parse_mB41590C323506EEF8E5C18B89ADF9A498ECCA9E4 (String_t* ___0_aJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/TurnBasedCardGame/Client/TurnBasedClientGame/Assets/ThirdPartyPlugins/SimpleJSON/SimpleJSON.cs:1428>
		String_t* L_0 = ___0_aJSON;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6_il2cpp_TypeInfo_var);
		JSONNode_t5292B3F3288249B1BFB22DD52E5A99AEACE8B7F6* L_1;
		L_1 = JSONNode_Parse_mFD3EDE7E12E0CC5319C50FBCEE3D68991C374533(L_0, NULL);
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
// Method Definition Index: 19316
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 20199
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
// Method Definition Index: 29901
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 29771
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 29782
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 29834
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 29763
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 29762
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 29706
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentKey;
		return L_0;
	}
}
// Method Definition Index: 29682
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 19633
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
