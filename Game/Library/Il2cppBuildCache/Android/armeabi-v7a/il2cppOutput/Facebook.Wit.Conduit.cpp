#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162;
// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156;
// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct IEnumerable_1_tF684AAB1B8AF0D44CE067DFF135B6BDDD01CE12D;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.InvocationContext>
struct IEnumerable_1_tB804D8C592348F527A63875860A8E0F9A7C5FE52;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.ManifestParameter>
struct IEnumerable_1_tADA4B6BD6B2670AAAD4EA6667A770CEAF46AD911;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct KeyCollection_t40F240BB4B198049BB3E776D09E1A37FF1A3770E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>[]
struct EntryU5BU5D_t52681D98184961146F2D53CBCC8D3AEC962A4A29;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Meta.Conduit.InvocationContext[]
struct InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B;
// Meta.Conduit.ManifestAction[]
struct ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB;
// Meta.Conduit.ManifestEntity[]
struct ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8;
// Meta.Conduit.ManifestParameter[]
struct ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tE6B03462786E0469F3C7D189A07D55A6F5777BDC;
// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE;
// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98;
// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tD97B2A5264AF0B4BF8F3CEFDB032383D6CA1F133;
// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tB9B95E5573786DF0A04B9AD88F8323A9330FFB98;
// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386;
// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t7DFCE0E1281FCFCEB88DF7372FCC517E20BF8ED7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_tE7C7DA85A6198E9AD827D8E63B458519DE172B5A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Meta.Conduit.IInstanceResolver
struct IInstanceResolver_t6FD3BD9658C1AF016CA921F3640B1D8B5FADA184;
// Meta.Conduit.IManifestLoader
struct IManifestLoader_t7FD52A7FB2F518E11DB52ABFCC4BD752BE887F04;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1;
// Meta.Conduit.InvocationContext
struct InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24;
// Meta.Conduit.Manifest
struct Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207;
// Meta.Conduit.ManifestAction
struct ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F;
// Meta.Conduit.ManifestEntity
struct ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8;
// Meta.Conduit.ManifestLoader
struct ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E;
// Meta.Conduit.ManifestParameter
struct ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// Meta.Conduit.ParameterProvider
struct ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083;
// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF684AAB1B8AF0D44CE067DFF135B6BDDD01CE12D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAF80BEE1323201690D128D42576B0186A0A7ED2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceResolver_t6FD3BD9658C1AF016CA921F3640B1D8B5FADA184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestLoader_t7FD52A7FB2F518E11DB52ABFCC4BD752BE887F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tBEB85D19704BAA5D7A13215C33D1D94B19F8BD47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022184FDCAF79E398879AD81666844068AE208D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53;
IL2CPP_EXTERN_C String_t* _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E;
IL2CPP_EXTERN_C String_t* _stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteral7750CA9B613003DB0F9F92DF1AA17F64CD75FEEE;
IL2CPP_EXTERN_C String_t* _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B;
IL2CPP_EXTERN_C String_t* _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67;
IL2CPP_EXTERN_C String_t* _stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7;
IL2CPP_EXTERN_C String_t* _stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786;
IL2CPP_EXTERN_C String_t* _stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC21706C0E8B5C17AB5CFD17A7F07E274C8C610;
IL2CPP_EXTERN_C String_t* _stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B;
IL2CPP_EXTERN_C String_t* _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896;
IL2CPP_EXTERN_C String_t* _stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF2866152ABF66A7E9E457DC2C650C3FEFA90B90E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m19D9A408EE3116B0EF722D94E298295D4FF305C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m4DE145821DE3F8BFC09C301139871D6ABFC23F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m941C0D6E8FAC02DB4FA8332BC4986FD6B6C86D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD84CD5B05EE35122D0958E21D58C818797EC8189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m92C217FBF67F341CB493674EDCA1A16DCF539483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mC10D86926581ECB43F2D7E716C3E1C5AE910AA61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mDDD3FB2B7D8A04F3394F9496E816741E951B9F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_m683A1E689E41FCE4EBB17F1EF51667FBA9C0882D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mA43C0FC123772B8E77327D09E7D787D71FFB37F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mC5283A7A1E9965247B6452B63E5F910AAFA68908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisList_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_m8EFEB6325E772D45AF533CB9F0C73FDEB09C06A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m41A9B663873E1673E3A15CD39DD3E7F8674AB5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mED40CE4566DE36BDF277CB7E4834D91A0B5FA00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7E6932BC5F669571375829E10873EFB45CE9ABA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m89C636FEAB8D62050C0DF0CF040AA66F40F58701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m87F29E35959022F67DC3CC1F98444ACE7BE5AC76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB70A4833E42AFA5DA0DC5EF7F0CD7B88A775F994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC90ED13464332882EC8CB4F485EE30005C8D1FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD3FAC4361FBE0BBA78143ADFBA648DF54585B912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisManifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207_m8C17793A7ACA629A7ED5A6F5341FBB80646F61EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFC69145134A5A5B6FCABC9EE790180167CC65C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5183AD5F581AA971E29CDDFD728D8B44899A9B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m65046630460C121433BF9F4B319A09A21FF0BEF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m5B5BB1B37DA548E1C064E2CB0A66E46498911FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m10A0ADA0FAEE02355B8577E88F7B12C25BF65517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m369E40828B8EF2E5E977E4949FB0458470164C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7508E1894F23E13BC28A3BC4295855B3243ACCDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m860BE46453DA94FA2199F3AFB3ED338118BCB67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8C231024DF54263FD3BC08CF93CCFCB4A3AFB326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterProvider_GetSpecializedParameter_m15B3A52779855EE595B93B67DE378FBA230FB173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m5313E11E04DEBB3C4FC6AA7A32FA37B13209055B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_0_m2BBC68834131EE2892DAC4149C91B7BD99B2229D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE2C034ED583DC200AD1D03512AFBE23B9819B8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m37DE89F456D6FCB1050B5C9840713060219A2A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t57C621FCDDAB255BE3EE061E9BE1F94EA113298B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52681D98184961146F2D53CBCC8D3AEC962A4A29* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t40F240BB4B198049BB3E776D09E1A37FF1A3770E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___entries_1)); }
	inline EntryU5BU5D_t52681D98184961146F2D53CBCC8D3AEC962A4A29* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52681D98184961146F2D53CBCC8D3AEC962A4A29** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52681D98184961146F2D53CBCC8D3AEC962A4A29* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___keys_7)); }
	inline KeyCollection_t40F240BB4B198049BB3E776D09E1A37FF1A3770E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t40F240BB4B198049BB3E776D09E1A37FF1A3770E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t40F240BB4B198049BB3E776D09E1A37FF1A3770E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ___values_8)); }
	inline ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4, ____items_1)); }
	inline InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* get__items_1() const { return ____items_1; }
	inline InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_StaticFields, ____emptyArray_5)); }
	inline InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InvocationContextU5BU5D_t1290D98B9A0D1A4E0CB54B17FECB352B4A80660B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603, ____items_1)); }
	inline ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* get__items_1() const { return ____items_1; }
	inline ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603_StaticFields, ____emptyArray_5)); }
	inline ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestActionU5BU5D_t2B1FD1C0E1A27DD0C91BE22830B6AA29A689C5FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E, ____items_1)); }
	inline ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* get__items_1() const { return ____items_1; }
	inline ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E_StaticFields, ____emptyArray_5)); }
	inline ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestEntityU5BU5D_tFEAE2BD304CC5F695AB2B96CB1449B49690A45E8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E, ____items_1)); }
	inline ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* get__items_1() const { return ____items_1; }
	inline ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E_StaticFields, ____emptyArray_5)); }
	inline ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ManifestParameterU5BU5D_t78D4D0F4FA70FFE02D264D4D458D90EB87CE2949* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4, ___dictionary_0)); }
	inline Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE  : public RuntimeObject
{
public:
	// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::manifest
	Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * ___manifest_0;
	// Meta.Conduit.IManifestLoader Meta.Conduit.ConduitDispatcher::manifestLoader
	RuntimeObject* ___manifestLoader_1;
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcher::instanceResolver
	RuntimeObject* ___instanceResolver_2;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcher::parameterProvider
	RuntimeObject* ___parameterProvider_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ConduitDispatcher::parameterToRoleMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterToRoleMap_4;

public:
	inline static int32_t get_offset_of_manifest_0() { return static_cast<int32_t>(offsetof(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE, ___manifest_0)); }
	inline Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * get_manifest_0() const { return ___manifest_0; }
	inline Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 ** get_address_of_manifest_0() { return &___manifest_0; }
	inline void set_manifest_0(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * value)
	{
		___manifest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manifest_0), (void*)value);
	}

	inline static int32_t get_offset_of_manifestLoader_1() { return static_cast<int32_t>(offsetof(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE, ___manifestLoader_1)); }
	inline RuntimeObject* get_manifestLoader_1() const { return ___manifestLoader_1; }
	inline RuntimeObject** get_address_of_manifestLoader_1() { return &___manifestLoader_1; }
	inline void set_manifestLoader_1(RuntimeObject* value)
	{
		___manifestLoader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manifestLoader_1), (void*)value);
	}

	inline static int32_t get_offset_of_instanceResolver_2() { return static_cast<int32_t>(offsetof(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE, ___instanceResolver_2)); }
	inline RuntimeObject* get_instanceResolver_2() const { return ___instanceResolver_2; }
	inline RuntimeObject** get_address_of_instanceResolver_2() { return &___instanceResolver_2; }
	inline void set_instanceResolver_2(RuntimeObject* value)
	{
		___instanceResolver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceResolver_2), (void*)value);
	}

	inline static int32_t get_offset_of_parameterProvider_3() { return static_cast<int32_t>(offsetof(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE, ___parameterProvider_3)); }
	inline RuntimeObject* get_parameterProvider_3() const { return ___parameterProvider_3; }
	inline RuntimeObject** get_address_of_parameterProvider_3() { return &___parameterProvider_3; }
	inline void set_parameterProvider_3(RuntimeObject* value)
	{
		___parameterProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameterProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_parameterToRoleMap_4() { return static_cast<int32_t>(offsetof(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE, ___parameterToRoleMap_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_parameterToRoleMap_4() const { return ___parameterToRoleMap_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_parameterToRoleMap_4() { return &___parameterToRoleMap_4; }
	inline void set_parameterToRoleMap_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___parameterToRoleMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameterToRoleMap_4), (void*)value);
	}
};


// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98  : public RuntimeObject
{
public:
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcherFactory::instanceResolver
	RuntimeObject* ___instanceResolver_1;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcherFactory::parameterProvider
	RuntimeObject* ___parameterProvider_2;

public:
	inline static int32_t get_offset_of_instanceResolver_1() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98, ___instanceResolver_1)); }
	inline RuntimeObject* get_instanceResolver_1() const { return ___instanceResolver_1; }
	inline RuntimeObject** get_address_of_instanceResolver_1() { return &___instanceResolver_1; }
	inline void set_instanceResolver_1(RuntimeObject* value)
	{
		___instanceResolver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceResolver_1), (void*)value);
	}

	inline static int32_t get_offset_of_parameterProvider_2() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98, ___parameterProvider_2)); }
	inline RuntimeObject* get_parameterProvider_2() const { return ___parameterProvider_2; }
	inline RuntimeObject** get_address_of_parameterProvider_2() { return &___parameterProvider_2; }
	inline void set_parameterProvider_2(RuntimeObject* value)
	{
		___parameterProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameterProvider_2), (void*)value);
	}
};

struct ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_StaticFields
{
public:
	// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::instance
	RuntimeObject* ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386  : public RuntimeObject
{
public:

public:
};

struct ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex Meta.Conduit.ConduitUtilities::UnderscoreSplitter
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___UnderscoreSplitter_0;

public:
	inline static int32_t get_offset_of_UnderscoreSplitter_0() { return static_cast<int32_t>(offsetof(ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_StaticFields, ___UnderscoreSplitter_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_UnderscoreSplitter_0() const { return ___UnderscoreSplitter_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_UnderscoreSplitter_0() { return &___UnderscoreSplitter_0; }
	inline void set_UnderscoreSplitter_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___UnderscoreSplitter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnderscoreSplitter_0), (void*)value);
	}
};


// Meta.Conduit.InvocationContext
struct InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24  : public RuntimeObject
{
public:
	// System.Type Meta.Conduit.InvocationContext::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::<MethodInfo>k__BackingField
	MethodInfo_t * ___U3CMethodInfoU3Ek__BackingField_1;
	// System.Single Meta.Conduit.InvocationContext::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_2;
	// System.Single Meta.Conduit.InvocationContext::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24, ___U3CMethodInfoU3Ek__BackingField_1)); }
	inline MethodInfo_t * get_U3CMethodInfoU3Ek__BackingField_1() const { return ___U3CMethodInfoU3Ek__BackingField_1; }
	inline MethodInfo_t ** get_address_of_U3CMethodInfoU3Ek__BackingField_1() { return &___U3CMethodInfoU3Ek__BackingField_1; }
	inline void set_U3CMethodInfoU3Ek__BackingField_1(MethodInfo_t * value)
	{
		___U3CMethodInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodInfoU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinConfidenceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24, ___U3CMinConfidenceU3Ek__BackingField_2)); }
	inline float get_U3CMinConfidenceU3Ek__BackingField_2() const { return ___U3CMinConfidenceU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMinConfidenceU3Ek__BackingField_2() { return &___U3CMinConfidenceU3Ek__BackingField_2; }
	inline void set_U3CMinConfidenceU3Ek__BackingField_2(float value)
	{
		___U3CMinConfidenceU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxConfidenceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24, ___U3CMaxConfidenceU3Ek__BackingField_3)); }
	inline float get_U3CMaxConfidenceU3Ek__BackingField_3() const { return ___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxConfidenceU3Ek__BackingField_3() { return &___U3CMaxConfidenceU3Ek__BackingField_3; }
	inline void set_U3CMaxConfidenceU3Ek__BackingField_3(float value)
	{
		___U3CMaxConfidenceU3Ek__BackingField_3 = value;
	}
};


// Meta.Conduit.Manifest
struct Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::methodLookup
	Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * ___methodLookup_5;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___U3CVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_1() const { return ___U3CVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_1() { return &___U3CVersionU3Ek__BackingField_1; }
	inline void set_U3CVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDomainU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___U3CDomainU3Ek__BackingField_2)); }
	inline String_t* get_U3CDomainU3Ek__BackingField_2() const { return ___U3CDomainU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDomainU3Ek__BackingField_2() { return &___U3CDomainU3Ek__BackingField_2; }
	inline void set_U3CDomainU3Ek__BackingField_2(String_t* value)
	{
		___U3CDomainU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDomainU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___U3CEntitiesU3Ek__BackingField_3)); }
	inline List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * get_U3CEntitiesU3Ek__BackingField_3() const { return ___U3CEntitiesU3Ek__BackingField_3; }
	inline List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E ** get_address_of_U3CEntitiesU3Ek__BackingField_3() { return &___U3CEntitiesU3Ek__BackingField_3; }
	inline void set_U3CEntitiesU3Ek__BackingField_3(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * value)
	{
		___U3CEntitiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntitiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___U3CActionsU3Ek__BackingField_4)); }
	inline List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * get_U3CActionsU3Ek__BackingField_4() const { return ___U3CActionsU3Ek__BackingField_4; }
	inline List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 ** get_address_of_U3CActionsU3Ek__BackingField_4() { return &___U3CActionsU3Ek__BackingField_4; }
	inline void set_U3CActionsU3Ek__BackingField_4(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * value)
	{
		___U3CActionsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActionsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_methodLookup_5() { return static_cast<int32_t>(offsetof(Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207, ___methodLookup_5)); }
	inline Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * get_methodLookup_5() const { return ___methodLookup_5; }
	inline Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 ** get_address_of_methodLookup_5() { return &___methodLookup_5; }
	inline void set_methodLookup_5(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * value)
	{
		___methodLookup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodLookup_5), (void*)value);
	}
};


// Meta.Conduit.ManifestAction
struct ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestAction::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestAction::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::<Parameters>k__BackingField
	List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ___U3CParametersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAssemblyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F, ___U3CAssemblyU3Ek__BackingField_1)); }
	inline String_t* get_U3CAssemblyU3Ek__BackingField_1() const { return ___U3CAssemblyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAssemblyU3Ek__BackingField_1() { return &___U3CAssemblyU3Ek__BackingField_1; }
	inline void set_U3CAssemblyU3Ek__BackingField_1(String_t* value)
	{
		___U3CAssemblyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssemblyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F, ___U3CParametersU3Ek__BackingField_3)); }
	inline List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F, ___U3CAliasesU3Ek__BackingField_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_4() const { return ___U3CAliasesU3Ek__BackingField_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_4() { return &___U3CAliasesU3Ek__BackingField_4; }
	inline void set_U3CAliasesU3Ek__BackingField_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_4), (void*)value);
	}
};


// Meta.Conduit.ManifestEntity
struct ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestEntity::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestEntity::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestEntity::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::<Values>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CValuesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8, ___U3CIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIDU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8, ___U3CValuesU3Ek__BackingField_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CValuesU3Ek__BackingField_3() const { return ___U3CValuesU3Ek__BackingField_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CValuesU3Ek__BackingField_3() { return &___U3CValuesU3Ek__BackingField_3; }
	inline void set_U3CValuesU3Ek__BackingField_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_3), (void*)value);
	}
};


// Meta.Conduit.ManifestLoader
struct ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ManifestParameter
struct ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36  : public RuntimeObject
{
public:
	// System.String Meta.Conduit.ManifestParameter::name
	String_t* ___name_0;
	// System.String Meta.Conduit.ManifestParameter::<InternalName>k__BackingField
	String_t* ___U3CInternalNameU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedName>k__BackingField
	String_t* ___U3CQualifiedNameU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestParameter::<TypeAssembly>k__BackingField
	String_t* ___U3CTypeAssemblyU3Ek__BackingField_3;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedTypeName>k__BackingField
	String_t* ___U3CQualifiedTypeNameU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___U3CInternalNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CInternalNameU3Ek__BackingField_1() const { return ___U3CInternalNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CInternalNameU3Ek__BackingField_1() { return &___U3CInternalNameU3Ek__BackingField_1; }
	inline void set_U3CInternalNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CInternalNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQualifiedNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___U3CQualifiedNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CQualifiedNameU3Ek__BackingField_2() const { return ___U3CQualifiedNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CQualifiedNameU3Ek__BackingField_2() { return &___U3CQualifiedNameU3Ek__BackingField_2; }
	inline void set_U3CQualifiedNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CQualifiedNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQualifiedNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeAssemblyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___U3CTypeAssemblyU3Ek__BackingField_3)); }
	inline String_t* get_U3CTypeAssemblyU3Ek__BackingField_3() const { return ___U3CTypeAssemblyU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTypeAssemblyU3Ek__BackingField_3() { return &___U3CTypeAssemblyU3Ek__BackingField_3; }
	inline void set_U3CTypeAssemblyU3Ek__BackingField_3(String_t* value)
	{
		___U3CTypeAssemblyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeAssemblyU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQualifiedTypeNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___U3CQualifiedTypeNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CQualifiedTypeNameU3Ek__BackingField_4() const { return ___U3CQualifiedTypeNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CQualifiedTypeNameU3Ek__BackingField_4() { return &___U3CQualifiedTypeNameU3Ek__BackingField_4; }
	inline void set_U3CQualifiedTypeNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CQualifiedTypeNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQualifiedTypeNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36, ___U3CAliasesU3Ek__BackingField_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_5() const { return ___U3CAliasesU3Ek__BackingField_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_5() { return &___U3CAliasesU3Ek__BackingField_5; }
	inline void set_U3CAliasesU3Ek__BackingField_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Meta.Conduit.ParameterProvider
struct ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Meta.Conduit.ParameterProvider::ActualParameters
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___ActualParameters_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ParameterProvider::parameterToRoleMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterToRoleMap_1;

public:
	inline static int32_t get_offset_of_ActualParameters_0() { return static_cast<int32_t>(offsetof(ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075, ___ActualParameters_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_ActualParameters_0() const { return ___ActualParameters_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_ActualParameters_0() { return &___ActualParameters_0; }
	inline void set_ActualParameters_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___ActualParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActualParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of_parameterToRoleMap_1() { return static_cast<int32_t>(offsetof(ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075, ___parameterToRoleMap_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_parameterToRoleMap_1() const { return ___parameterToRoleMap_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_parameterToRoleMap_1() { return &___parameterToRoleMap_1; }
	inline void set_parameterToRoleMap_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___parameterToRoleMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameterToRoleMap_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083  : public RuntimeObject
{
public:
	// Meta.Conduit.ConduitDispatcher Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<>4__this
	ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * ___U3CU3E4__this_0;
	// System.Single Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::confidence
	float ___confidence_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083, ___U3CU3E4__this_0)); }
	inline ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_confidence_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083, ___confidence_1)); }
	inline float get_confidence_1() const { return ___confidence_1; }
	inline float* get_address_of_confidence_1() { return &___confidence_1; }
	inline void set_confidence_1(float value)
	{
		___confidence_1 = value;
	}
};


// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields
{
public:
	// Meta.Conduit.Manifest/<>c Meta.Conduit.Manifest/<>c::<>9
	U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__22_0
	Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * ___U3CU3E9__22_0_1;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__22_1
	Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * ___U3CU3E9__22_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields, ___U3CU3E9__22_1_2)); }
	inline Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * get_U3CU3E9__22_1_2() const { return ___U3CU3E9__22_1_2; }
	inline Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 ** get_address_of_U3CU3E9__22_1_2() { return &___U3CU3E9__22_1_2; }
	inline void set_U3CU3E9__22_1_2(Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * value)
	{
		___U3CU3E9__22_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_1_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>
struct Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D, ___list_0)); }
	inline List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * get_list_0() const { return ___list_0; }
	inline List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D, ___current_3)); }
	inline InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * get_current_3() const { return ___current_3; }
	inline InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>
struct Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB, ___list_0)); }
	inline List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * get_list_0() const { return ___list_0; }
	inline List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB, ___current_3)); }
	inline ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * get_current_3() const { return ___current_3; }
	inline ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>
struct Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056, ___list_0)); }
	inline List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * get_list_0() const { return ___list_0; }
	inline List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056, ___current_3)); }
	inline ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * get_current_3() const { return ___current_3; }
	inline ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_1;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<AllowPartial>k__BackingField
	bool ___U3CAllowPartialU3Ek__BackingField_2;
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMinConfidenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA, ___U3CMinConfidenceU3Ek__BackingField_0)); }
	inline float get_U3CMinConfidenceU3Ek__BackingField_0() const { return ___U3CMinConfidenceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CMinConfidenceU3Ek__BackingField_0() { return &___U3CMinConfidenceU3Ek__BackingField_0; }
	inline void set_U3CMinConfidenceU3Ek__BackingField_0(float value)
	{
		___U3CMinConfidenceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxConfidenceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA, ___U3CMaxConfidenceU3Ek__BackingField_1)); }
	inline float get_U3CMaxConfidenceU3Ek__BackingField_1() const { return ___U3CMaxConfidenceU3Ek__BackingField_1; }
	inline float* get_address_of_U3CMaxConfidenceU3Ek__BackingField_1() { return &___U3CMaxConfidenceU3Ek__BackingField_1; }
	inline void set_U3CMaxConfidenceU3Ek__BackingField_1(float value)
	{
		___U3CMaxConfidenceU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAllowPartialU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA, ___U3CAllowPartialU3Ek__BackingField_2)); }
	inline bool get_U3CAllowPartialU3Ek__BackingField_2() const { return ___U3CAllowPartialU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowPartialU3Ek__BackingField_2() { return &___U3CAllowPartialU3Ek__BackingField_2; }
	inline void set_U3CAllowPartialU3Ek__BackingField_2(bool value)
	{
		___U3CAllowPartialU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIntentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA, ___U3CIntentU3Ek__BackingField_3)); }
	inline String_t* get_U3CIntentU3Ek__BackingField_3() const { return ___U3CIntentU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CIntentU3Ek__BackingField_3() { return &___U3CIntentU3Ek__BackingField_3; }
	inline void set_U3CIntentU3Ek__BackingField_3(String_t* value)
	{
		___U3CIntentU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntentU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA, ___U3CAliasesU3Ek__BackingField_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_4() const { return ___U3CAliasesU3Ek__BackingField_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_4() { return &___U3CAliasesU3Ek__BackingField_4; }
	inline void set_U3CAliasesU3Ek__BackingField_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_4), (void*)value);
	}
};


// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tE6B03462786E0469F3C7D189A07D55A6F5777BDC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tD97B2A5264AF0B4BF8F3CEFDB032383D6CA1F133  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tB9B95E5573786DF0A04B9AD88F8323A9330FFB98  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Aliases>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CAliasesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitParameterAttribute_tB9B95E5573786DF0A04B9AD88F8323A9330FFB98, ___U3CAliasesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CAliasesU3Ek__BackingField_0() const { return ___U3CAliasesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CAliasesU3Ek__BackingField_0() { return &___U3CAliasesU3Ek__BackingField_0; }
	inline void set_U3CAliasesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CAliasesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_0), (void*)value);
	}
};


// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t7DFCE0E1281FCFCEB88DF7372FCC517E20BF8ED7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String[] Meta.Conduit.ConduitValueAttribute::<Aliases>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CAliasesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CAliasesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConduitValueAttribute_t7DFCE0E1281FCFCEB88DF7372FCC517E20BF8ED7, ___U3CAliasesU3Ek__BackingField_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CAliasesU3Ek__BackingField_0() const { return ___U3CAliasesU3Ek__BackingField_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CAliasesU3Ek__BackingField_0() { return &___U3CAliasesU3Ek__BackingField_0; }
	inline void set_U3CAliasesU3Ek__BackingField_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CAliasesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAliasesU3Ek__BackingField_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA, ____byRef_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.CallingConventions
struct CallingConventions_t9EE04367ABED67A03DB2971F80F83D3EBA9C04E0 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t9EE04367ABED67A03DB2971F80F83D3EBA9C04E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  m_Items[1];

public:
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_tC1C793BD8B003B24010657487AFD17A4BA3DF6EA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m4C0A04A431720E859C6CAB04F55175E5FBD2E08C_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F00629E0FA67620F4D49A27FEA7BA5C3333FBC1_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mF25EF48FEEA57D7B78F91ECB70D589D003F532C4_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8DB96FBD4690CB659B48155D5B7BBF8CE21E6DF0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_m3299FB848E47D8852A7FDE47B8753CDB7CF50769_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 Meta.Wit.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_ToObject_TisRuntimeObject_m37B11720CC98416A338D946A9BE209CC5954C937_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m70B643A5059B62F9F9A73E4D45888A35AEB17B69_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared)(___source0, method);
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m3E7F9D513614E47B402C40073590DFE94AB93572_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m3A9C0CE57A55161A5482BDC079EE44BE2C309224_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitActionAttribute::set_AllowPartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_AllowPartial_m0EBC171B81E7ED29CCB0F80168F628667D3B2874_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * Manifest_get_Actions_m0E05FF96C6F8A893CFC6A5AB7E3984DC260964FF_inline (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::GetEnumerator()
inline Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B (List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  (*) (List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::get_Current()
inline ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_inline (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB * __this, const RuntimeMethod* method)
{
	return ((  ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * (*) (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::GetEnumerator()
inline Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056  List_1_GetEnumerator_m5183AD5F581AA971E29CDDFD728D8B44899A9B80 (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056  (*) (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::get_Current()
inline ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * Enumerator_get_Current_m87F29E35959022F67DC3CC1F98444ACE7BE5AC76_inline (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 * __this, const RuntimeMethod* method)
{
	return ((  ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * (*) (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::MoveNext()
inline bool Enumerator_MoveNext_m7E6932BC5F669571375829E10873EFB45CE9ABA0 (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::Dispose()
inline void Enumerator_Dispose_m41A9B663873E1673E3A15CD39DD3E7F8674AB5F3 (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::MoveNext()
inline bool Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51 (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::Dispose()
inline void Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70 (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m789BBC74D08321457B965AD2864A292341D5252C (U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * Manifest_GetInvocationContexts_mCF48F80A8B05E2CDF83A6C2D9290D2DA83DFC88C (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___actionId0, const RuntimeMethod* method);
// System.Void System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC90ED13464332882EC8CB4F485EE30005C8D1FD4 (Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mC5283A7A1E9965247B6452B63E5F910AAFA68908 (RuntimeObject* ___source0, Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * Enumerable_ToList_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mA43C0FC123772B8E77327D09E7D787D71FFB37F2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3AB0AB30DAC385C2DF8A16D5CB8D3D41F62C751F_gshared)(___source0, method);
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method);
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m83FB43B20BCBEA5706CF500CC925BD4BD9A3BF8B_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method);
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mB7143665F0187E435CBE8019F28C00903A693C91_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97 (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_All_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mDDD3FB2B7D8A04F3394F9496E816741E951B9F15 (RuntimeObject* ___source0, Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m4C0A04A431720E859C6CAB04F55175E5FBD2E08C_gshared)(___source0, ___predicate1, method);
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_m10C81562E54AA6D990AFCFDACE37639BA6583C71 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___action0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * ConduitDispatcher_ResolveInvocationContexts_m5FBD5C931F742D8A515D78C612F7C21339B69A35 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, String_t* ___actionId0, float ___confidence1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::get_Count()
inline int32_t List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_inline (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::GetEnumerator()
inline Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D  List_1_GetEnumerator_m65046630460C121433BF9F4B319A09A21FF0BEF6 (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D  (*) (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::get_Current()
inline InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * Enumerator_get_Current_mB70A4833E42AFA5DA0DC5EF7F0CD7B88A775F994_inline (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D * __this, const RuntimeMethod* method)
{
	return ((  InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * (*) (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mA25F0457F588BE62514C0CC5E34AFA1515CC3EE4 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___invocationContext0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::MoveNext()
inline bool Enumerator_MoveNext_m89C636FEAB8D62050C0DF0CF040AA66F40F58701 (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::Dispose()
inline void Enumerator_Dispose_mED40CE4566DE36BDF277CB7E4834D91A0B5FA00B (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_gshared)(___source0, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m502B72A306E24A3C8A4F96B365D8A8F0272221A7_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mC6A00B1776B15E82B73A84C112060FD5A7FB11FA (ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m89ED38F108FA3E941E861B959894113C038CA424 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, RuntimeObject* ___parameterProvider2, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, String_t* ___replacement1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::.ctor()
inline void List_1__ctor_m369E40828B8EF2E5E977E4949FB0458470164C20 (List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::.ctor()
inline void List_1__ctor_m10A0ADA0FAEE02355B8577E88F7B12C25BF65517 (List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m92C217FBF67F341CB493674EDCA1A16DCF539483 (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6F00629E0FA67620F4D49A27FEA7BA5C3333FBC1_gshared)(__this, ___comparer0, method);
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Count()
inline int32_t List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_inline (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Item(System.Int32)
inline ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * List_1_get_Item_m8C231024DF54263FD3BC08CF93CCFCB4A3AFB326_inline (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * (*) (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m029A213C09F61496D42B3101E8E770D1C66CB795 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types4, ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B* ___modifiers5, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_gshared)(___source0, method);
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m6A2ADB40B11BD5A527D135C74B1791E223B1DE00 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m12257876BD547812A42618D8B0F0798142057A95_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m1BE8E1E89CAFB664DE1D02B40E4FBFABFA95B4E9_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method);
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m2082AEF22B536905E53473AEBD9911982F70B5B7_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m850248D376B32A8F7409E0D155E485EC0A33F264_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mD23F49DF55E0DF599B4D95D35C31B51AEB75C170_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method);
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1B8475772FF0A3FD21DF84F157C61D58055D6CB5_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::.ctor()
inline void List_1__ctor_m7508E1894F23E13BC28A3BC4295855B3243ACCDA (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Add(!0,!1)
inline void Dictionary_2_Add_m941C0D6E8FAC02DB4FA8332BC4986FD6B6C86D4C (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * __this, String_t* ___key0, List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *, String_t*, List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Item(!0)
inline List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * (*) (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Add(!0)
inline void List_1_Add_mFC69145134A5A5B6FCABC9EE790180167CC65C9C (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Values()
inline ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * Dictionary_2_get_Values_mC10D86926581ECB43F2D7E716C3E1C5AE910AA61 (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * (*) (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *, const RuntimeMethod*))Dictionary_2_get_Values_mF25EF48FEEA57D7B78F91ECB70D589D003F532C4_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD3FAC4361FBE0BBA78143ADFBA648DF54585B912 (Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisList_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_m8EFEB6325E772D45AF533CB9F0C73FDEB09C06A0 (RuntimeObject* ___source0, Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_mD8AE6780E78249FC87B2344E09D130624E70D7DA_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Comparison`1<Meta.Conduit.InvocationContext>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m19D9A408EE3116B0EF722D94E298295D4FF305C0 (Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m5B5BB1B37DA548E1C064E2CB0A66E46498911FF5 (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * __this, Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *, Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 *, const RuntimeMethod*))List_1_Sort_m8DB96FBD4690CB659B48155D5B7BBF8CE21E6DF0_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::.ctor()
inline void List_1__ctor_m860BE46453DA94FA2199F3AFB3ED338118BCB67E (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m0B0CFEB2BD3F40D081B97B81E6BFE1EFD95F800C (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * ___other0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.ManifestParameter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_m683A1E689E41FCE4EBB17F1EF51667FBA9C0882D (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m3299FB848E47D8852A7FDE47B8753CDB7CF50769_gshared)(___first0, ___second1, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m3299FB848E47D8852A7FDE47B8753CDB7CF50769_gshared)(___first0, ___second1, method);
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m257620A8CD4E44D04828F8D6EC1ED43018C46A19 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * ___other0, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m5313E11E04DEBB3C4FC6AA7A32FA37B13209055B (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m83108B6D8808A0E83DE12FD220A87000D19AEE00_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !!0 Meta.Wit.LitJson.JsonMapper::ToObject<Meta.Conduit.Manifest>(System.String)
inline Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * JsonMapper_ToObject_TisManifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207_m8C17793A7ACA629A7ED5A6F5341FBB80646F61EE (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m37B11720CC98416A338D946A9BE209CC5954C937_gshared)(___json0, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method);
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m4543B19D63F39E5C81FC07422C53613D5A972031 (String_t* ___input0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m96939A8FE95E2731BD6CFF7A56B83541D330017C (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * ___other0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_m81AB8436743CCEF553389528707ED7E19DFB1CCD (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mD84CD5B05EE35122D0958E21D58C818797EC8189 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039 (Type_t * ___enumType0, String_t* ___value1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4 (RuntimeObject * ___value0, Type_t * ___conversionType1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m7D075E0002B332048E710CBC4971871A91447B4D (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___invocationContext0, float ___confidence1, const RuntimeMethod* method);
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22E740F3F6E74D906E417FF00CE54177E34775DF (U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m2082AEF22B536905E53473AEBD9911982F70B5B7 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m3E7F9D513614E47B402C40073590DFE94AB93572 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mD23F49DF55E0DF599B4D95D35C31B51AEB75C170 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set;}
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m3A9C0CE57A55161A5482BDC079EE44BE2C309224 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set;}
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_AllowPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_AllowPartial_m3E785C67487700A8466DAFE0083FF0716B32335C (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public bool AllowPartial { get; protected set;}
		bool L_0 = __this->get_U3CAllowPartialU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_AllowPartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_AllowPartial_m0EBC171B81E7ED29CCB0F80168F628667D3B2874 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AllowPartial { get; protected set;}
		bool L_0 = ___value0;
		__this->set_U3CAllowPartialU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_mB26FE06D54AE4F8ED948B2DDD27A26A889CCC981 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, String_t* ___intent0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m70B643A5059B62F9F9A73E4D45888A35AEB17B69_inline(__this, L_0, /*hidden argument*/NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___aliases1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_4(L_2);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.Single,System.Single,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_mC6BB7D7B8E63D031806AA11A80DC0CD0438BAA93 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, String_t* ___intent0, float ___minConfidence1, float ___maxConfidence2, bool ___allowPartial3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", float minConfidence = 0.9f, float maxConfidence = 1f,
		//     bool allowPartial = false, params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Intent = intent;
		String_t* L_0 = ___intent0;
		ConduitActionAttribute_set_Intent_m70B643A5059B62F9F9A73E4D45888A35AEB17B69_inline(__this, L_0, /*hidden argument*/NULL);
		// this.MinConfidence = minConfidence;
		float L_1 = ___minConfidence1;
		ConduitActionAttribute_set_MinConfidence_m3E7F9D513614E47B402C40073590DFE94AB93572_inline(__this, L_1, /*hidden argument*/NULL);
		// this.MaxConfidence = maxConfidence;
		float L_2 = ___maxConfidence2;
		ConduitActionAttribute_set_MaxConfidence_m3A9C0CE57A55161A5482BDC079EE44BE2C309224_inline(__this, L_2, /*hidden argument*/NULL);
		// this.AllowPartial = allowPartial;
		bool L_3 = ___allowPartial3;
		ConduitActionAttribute_set_AllowPartial_m0EBC171B81E7ED29CCB0F80168F628667D3B2874_inline(__this, L_3, /*hidden argument*/NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___aliases4;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5;
		L_5 = Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6((RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_4(L_5);
		// }
		return;
	}
}
// System.String Meta.Conduit.ConduitActionAttribute::get_Intent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitActionAttribute_get_Intent_mFE59338763C2D9FBDFF8689B8951080FC896C518 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public string Intent { get; protected set; }
		String_t* L_0 = __this->get_U3CIntentU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m70B643A5059B62F9F9A73E4D45888A35AEB17B69 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Intent { get; protected set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ConduitActionAttribute_get_Aliases_m7E22D914564097EC87411B00CBF092223D9CEAD1 (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_4();
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
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m87BAF246924AC8CA43C06D23ECFF3277E3B88DAD (ConduitAssemblyAttribute_tE6B03462786E0469F3C7D189A07D55A6F5777BDC * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m89ED38F108FA3E941E861B959894113C038CA424 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, RuntimeObject* ___manifestLoader0, RuntimeObject* ___instanceResolver1, RuntimeObject* ___parameterProvider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_parameterToRoleMap_4(L_0);
		// public ConduitDispatcher(IManifestLoader manifestLoader, IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.manifestLoader = manifestLoader;
		RuntimeObject* L_1 = ___manifestLoader0;
		__this->set_manifestLoader_1(L_1);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_2 = ___instanceResolver1;
		__this->set_instanceResolver_2(L_2);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_3 = ___parameterProvider2;
		__this->set_parameterProvider_3(L_3);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_Initialize_m35BEFEA7600102C0908AA014E7103881FF288B9E (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, String_t* ___manifestFilePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m41A9B663873E1673E3A15CD39DD3E7F8674AB5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7E6932BC5F669571375829E10873EFB45CE9ABA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m87F29E35959022F67DC3CC1F98444ACE7BE5AC76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestLoader_t7FD52A7FB2F518E11DB52ABFCC4BD752BE887F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5183AD5F581AA971E29CDDFD728D8B44899A9B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (this.manifest != null)
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_0 = __this->get_manifest_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// manifest = this.manifestLoader.LoadManifest(manifestFilePath);
		RuntimeObject* L_1 = __this->get_manifestLoader_1();
		String_t* L_2 = ___manifestFilePath0;
		NullCheck(L_1);
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_3;
		L_3 = InterfaceFuncInvoker1< Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 *, String_t* >::Invoke(0 /* Meta.Conduit.Manifest Meta.Conduit.IManifestLoader::LoadManifest(System.String) */, IManifestLoader_t7FD52A7FB2F518E11DB52ABFCC4BD752BE887F04_il2cpp_TypeInfo_var, L_1, L_2);
		__this->set_manifest_0(L_3);
		// if (manifest == null)
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_4 = __this->get_manifest_0();
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		return;
	}

IL_0024:
	{
		// foreach (var action in manifest.Actions)
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_5 = __this->get_manifest_0();
		NullCheck(L_5);
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_6;
		L_6 = Manifest_get_Actions_m0E05FF96C6F8A893CFC6A5AB7E3984DC260964FF_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  L_7;
		L_7 = List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B(L_6, /*hidden argument*/List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0035:
	try
	{// begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0037:
		{
			// foreach (var action in manifest.Actions)
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_8;
			L_8 = Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_inline((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_RuntimeMethod_var);
			// foreach (var parameter in action.Parameters)
			NullCheck(L_8);
			List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_9;
			L_9 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056  L_10;
			L_10 = List_1_GetEnumerator_m5183AD5F581AA971E29CDDFD728D8B44899A9B80(L_9, /*hidden argument*/List_1_GetEnumerator_m5183AD5F581AA971E29CDDFD728D8B44899A9B80_RuntimeMethod_var);
			V_1 = L_10;
		}

IL_0049:
		try
		{// begin try (depth: 2)
			{
				goto IL_007d;
			}

IL_004b:
			{
				// foreach (var parameter in action.Parameters)
				ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_11;
				L_11 = Enumerator_get_Current_m87F29E35959022F67DC3CC1F98444ACE7BE5AC76_inline((Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m87F29E35959022F67DC3CC1F98444ACE7BE5AC76_RuntimeMethod_var);
				V_2 = L_11;
				// if (!parameterToRoleMap.ContainsKey(parameter.InternalName))
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = __this->get_parameterToRoleMap_4();
				ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline(L_13, /*hidden argument*/NULL);
				NullCheck(L_12);
				bool L_15;
				L_15 = Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8(L_12, L_14, /*hidden argument*/Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_007d;
				}
			}

IL_0066:
			{
				// parameterToRoleMap.Add(parameter.InternalName, parameter.QualifiedName);
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_16 = __this->get_parameterToRoleMap_4();
				ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_17 = V_2;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline(L_17, /*hidden argument*/NULL);
				ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_19 = V_2;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline(L_19, /*hidden argument*/NULL);
				NullCheck(L_16);
				Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87(L_16, L_18, L_20, /*hidden argument*/Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var);
			}

IL_007d:
			{
				// foreach (var parameter in action.Parameters)
				bool L_21;
				L_21 = Enumerator_MoveNext_m7E6932BC5F669571375829E10873EFB45CE9ABA0((Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m7E6932BC5F669571375829E10873EFB45CE9ABA0_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_004b;
				}
			}

IL_0086:
			{
				IL2CPP_LEAVE(0x96, FINALLY_0088);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0088;
		}

FINALLY_0088:
		{// begin finally (depth: 2)
			Enumerator_Dispose_m41A9B663873E1673E3A15CD39DD3E7F8674AB5F3((Enumerator_t844467F0912622AF55E4BAF7C1F570A204DA6056 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m41A9B663873E1673E3A15CD39DD3E7F8674AB5F3_RuntimeMethod_var);
			IL2CPP_END_FINALLY(136)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(136)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x96, IL_0096)
		}

IL_0096:
		{
			// foreach (var action in manifest.Actions)
			bool L_22;
			L_22 = Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0037;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * ConduitDispatcher_ResolveInvocationContexts_m5FBD5C931F742D8A515D78C612F7C21339B69A35 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, String_t* ___actionId0, float ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mA43C0FC123772B8E77327D09E7D787D71FFB37F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mC5283A7A1E9965247B6452B63E5F910AAFA68908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mC90ED13464332882EC8CB4F485EE30005C8D1FD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m37DE89F456D6FCB1050B5C9840713060219A2A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * L_0 = (U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m789BBC74D08321457B965AD2864A292341D5252C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * L_2 = V_0;
		float L_3 = ___confidence1;
		NullCheck(L_2);
		L_2->set_confidence_1(L_3);
		// var invocationContexts = manifest.GetInvocationContexts(actionId);
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_4 = __this->get_manifest_0();
		String_t* L_5 = ___actionId0;
		NullCheck(L_4);
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_6;
		L_6 = Manifest_GetInvocationContexts_mCF48F80A8B05E2CDF83A6C2D9290D2DA83DFC88C(L_4, L_5, /*hidden argument*/NULL);
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence)).ToList();
		U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * L_7 = V_0;
		Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 * L_8 = (Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154 *)il2cpp_codegen_object_new(Func_2_tD055A7EA2EEC4383B1F9B111DA326C1608478154_il2cpp_TypeInfo_var);
		Func_2__ctor_mC90ED13464332882EC8CB4F485EE30005C8D1FD4(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m37DE89F456D6FCB1050B5C9840713060219A2A13_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC90ED13464332882EC8CB4F485EE30005C8D1FD4_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mC5283A7A1E9965247B6452B63E5F910AAFA68908(L_6, L_8, /*hidden argument*/Enumerable_Where_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mC5283A7A1E9965247B6452B63E5F910AAFA68908_RuntimeMethod_var);
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_10;
		L_10 = Enumerable_ToList_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mA43C0FC123772B8E77327D09E7D787D71FFB37F2(L_9, /*hidden argument*/Enumerable_ToList_TisInvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_mA43C0FC123772B8E77327D09E7D787D71FFB37F2_RuntimeMethod_var);
		return L_10;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m7D075E0002B332048E710CBC4971871A91447B4D (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___invocationContext0, float ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m4DE145821DE3F8BFC09C301139871D6ABFC23F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mDDD3FB2B7D8A04F3394F9496E816741E951B9F15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		// var parameters = invocationContext.MethodInfo.GetParameters();
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		// if (invocationContext.MinConfidence > confidence || confidence > invocationContext.MaxConfidence)
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_3 = ___invocationContext0;
		NullCheck(L_3);
		float L_4;
		L_4 = InvocationContext_get_MinConfidence_m83FB43B20BCBEA5706CF500CC925BD4BD9A3BF8B_inline(L_3, /*hidden argument*/NULL);
		float L_5 = ___confidence1;
		if ((((float)L_4) > ((float)L_5)))
		{
			goto IL_001e;
		}
	}
	{
		float L_6 = ___confidence1;
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_7 = ___invocationContext0;
		NullCheck(L_7);
		float L_8;
		L_8 = InvocationContext_get_MaxConfidence_mB7143665F0187E435CBE8019F28C00903A693C91_inline(L_7, /*hidden argument*/NULL);
		if ((!(((float)L_6) > ((float)L_8))))
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter));
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_9 = V_0;
		Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * L_10 = (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *)il2cpp_codegen_object_new(Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var);
		Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97(L_10, __this, (intptr_t)((intptr_t)ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m4DE145821DE3F8BFC09C301139871D6ABFC23F49_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var);
		bool L_11;
		L_11 = Enumerable_All_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mDDD3FB2B7D8A04F3394F9496E816741E951B9F15((RuntimeObject*)(RuntimeObject*)L_9, L_10, /*hidden argument*/Enumerable_All_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mDDD3FB2B7D8A04F3394F9496E816741E951B9F15_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeAction(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeAction_mB3FA61939481C48F126A10630CE4846AB8FD97CA (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, String_t* ___actionId0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters1, float ___confidence2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mED40CE4566DE36BDF277CB7E4834D91A0B5FA00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m89C636FEAB8D62050C0DF0CF040AA66F40F58701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB70A4833E42AFA5DA0DC5EF7F0CD7B88A775F994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m65046630460C121433BF9F4B319A09A21FF0BEF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7750CA9B613003DB0F9F92DF1AA17F64CD75FEEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * V_0 = NULL;
	bool V_1 = false;
	Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// if (!manifest.ContainsAction(actionId))
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_0 = __this->get_manifest_0();
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Manifest_ContainsAction_m10C81562E54AA6D990AFCFDACE37639BA6583C71(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError($"Failed to find action ID: {actionId}");
		String_t* L_3 = ___actionId0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7750CA9B613003DB0F9F92DF1AA17F64CD75FEEE, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// this.parameterProvider.Populate(parameters, this.parameterToRoleMap);
		RuntimeObject* L_5 = __this->get_parameterProvider_3();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = ___parameters1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_7 = __this->get_parameterToRoleMap_4();
		NullCheck(L_5);
		InterfaceActionInvoker2< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(0 /* System.Void Meta.Conduit.IParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		// var invocationContexts = this.ResolveInvocationContexts(actionId, confidence);
		String_t* L_8 = ___actionId0;
		float L_9 = ___confidence2;
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_10;
		L_10 = ConduitDispatcher_ResolveInvocationContexts_m5FBD5C931F742D8A515D78C612F7C21339B69A35(__this, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (invocationContexts.Count < 1)
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_inline(L_11, /*hidden argument*/List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_RuntimeMethod_var);
		if ((((int32_t)L_12) >= ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		// Debug.Log($"Failed to find execution context for {actionId}. Parameters could not be matched");
		String_t* L_13 = ___actionId0;
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7, L_13, _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// var allSucceeded = true;
		V_1 = (bool)1;
		// foreach (var invocationContext in invocationContexts)
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_15 = V_0;
		NullCheck(L_15);
		Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D  L_16;
		L_16 = List_1_GetEnumerator_m65046630460C121433BF9F4B319A09A21FF0BEF6(L_15, /*hidden argument*/List_1_GetEnumerator_m65046630460C121433BF9F4B319A09A21FF0BEF6_RuntimeMethod_var);
		V_2 = L_16;
	}

IL_0064:
	try
	{// begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0066:
		{
			// foreach (var invocationContext in invocationContexts)
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_17;
			L_17 = Enumerator_get_Current_mB70A4833E42AFA5DA0DC5EF7F0CD7B88A775F994_inline((Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB70A4833E42AFA5DA0DC5EF7F0CD7B88A775F994_RuntimeMethod_var);
			V_3 = L_17;
		}

IL_006e:
		try
		{// begin try (depth: 2)
			{
				// if (!this.InvokeMethod(invocationContext))
				InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_18 = V_3;
				bool L_19;
				L_19 = ConduitDispatcher_InvokeMethod_mA25F0457F588BE62514C0CC5E34AFA1515CC3EE4(__this, L_18, /*hidden argument*/NULL);
				if (L_19)
				{
					goto IL_0079;
				}
			}

IL_0077:
			{
				// allSucceeded = false;
				V_1 = (bool)0;
			}

IL_0079:
			{
				// }
				goto IL_009d;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007b;
			}
			throw e;
		}

CATCH_007b:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"Failed to invoke {invocationContext.MethodInfo.Name}. {e}");
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_20 = V_3;
			NullCheck(L_20);
			MethodInfo_t * L_21;
			L_21 = InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
			Exception_t * L_23 = V_4;
			String_t* L_24;
			L_24 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53)), L_22, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_24, /*hidden argument*/NULL);
			// allSucceeded = false;
			V_1 = (bool)0;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009d;
		}// end catch (depth: 2)

IL_009d:
		{
			// foreach (var invocationContext in invocationContexts)
			bool L_25;
			L_25 = Enumerator_MoveNext_m89C636FEAB8D62050C0DF0CF040AA66F40F58701((Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m89C636FEAB8D62050C0DF0CF040AA66F40F58701_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0066;
			}
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xB6, FINALLY_00a8);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mED40CE4566DE36BDF277CB7E4834D91A0B5FA00B((Enumerator_t739DDA1856B88BEF2F49417833F7EE034FC4895D *)(&V_2), /*hidden argument*/Enumerator_Dispose_mED40CE4566DE36BDF277CB7E4834D91A0B5FA00B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(168)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
	}

IL_00b6:
	{
		// return allSucceeded;
		bool L_26 = V_1;
		return L_26;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_mA25F0457F588BE62514C0CC5E34AFA1515CC3EE4 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___invocationContext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceResolver_t6FD3BD9658C1AF016CA921F3640B1D8B5FADA184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC21706C0E8B5C17AB5CFD17A7F07E274C8C610);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2866152ABF66A7E9E457DC2C650C3FEFA90B90E);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	RuntimeObject * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// var method = invocationContext.MethodInfo;
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_0 = ___invocationContext0;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var formalParametersInfo = method.GetParameters();
		MethodInfo_t * L_2 = V_0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_1 = L_3;
		// var parameterObjects = new object[formalParametersInfo.Length];
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4 = V_1;
		NullCheck(L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = L_5;
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		V_3 = 0;
		goto IL_0064;
	}

IL_001b:
	{
		// if (!parameterProvider.ContainsParameter(formalParametersInfo[i]))
		RuntimeObject* L_6 = __this->get_parameterProvider_3();
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var, L_6, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"Failed to find parameter {formalParametersInfo[i].Name} while invoking {method.Name}");
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_15);
		MethodInfo_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0, L_16, _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// parameterObjects[i] = parameterProvider.GetParameterValue(formalParametersInfo[i]);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = V_2;
		int32_t L_21 = V_3;
		RuntimeObject* L_22 = __this->get_parameterProvider_3();
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_23 = V_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		RuntimeObject * L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject *, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(2 /* System.Object Meta.Conduit.IParameterProvider::GetParameterValue(System.Reflection.ParameterInfo) */, IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var, L_22, L_26);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_27);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject *)L_27);
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0064:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_29 = V_3;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// if (method.IsStatic)
		MethodInfo_t * L_31 = V_0;
		NullCheck(L_31);
		bool L_32;
		L_32 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ba;
		}
	}
	{
		// Debug.Log($"About to invoke {method.Name}");
		MethodInfo_t * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_33);
		String_t* L_35;
		L_35 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDAC21706C0E8B5C17AB5CFD17A7F07E274C8C610, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_35, /*hidden argument*/NULL);
	}

IL_0087:
	try
	{// begin try (depth: 1)
		// method.Invoke(null, parameterObjects.ToArray());
		MethodInfo_t * L_36 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38;
		L_38 = Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE((RuntimeObject*)(RuntimeObject*)L_37, /*hidden argument*/Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var);
		NullCheck(L_36);
		RuntimeObject * L_39;
		L_39 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_36, NULL, L_38, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError($"Failed to invoke static method {method.Name}. {e}");
		MethodInfo_t * L_40 = V_0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
		Exception_t * L_42 = V_4;
		String_t* L_43;
		L_43 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9)), L_41, L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_43, /*hidden argument*/NULL);
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_00b8:
	{
		// return true;
		return (bool)1;
	}

IL_00ba:
	{
		// Debug.Log($"About to invoke {method.Name} on all instances");
		MethodInfo_t * L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		String_t* L_46;
		L_46 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralDAC21706C0E8B5C17AB5CFD17A7F07E274C8C610, L_45, _stringLiteralF2866152ABF66A7E9E457DC2C650C3FEFA90B90E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_46, /*hidden argument*/NULL);
		// var allSucceeded = true;
		V_6 = (bool)1;
		// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
		RuntimeObject* L_47 = __this->get_instanceResolver_2();
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_48 = ___invocationContext0;
		NullCheck(L_48);
		Type_t * L_49;
		L_49 = InvocationContext_get_Type_m502B72A306E24A3C8A4F96B365D8A8F0272221A7_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<System.Object> Meta.Conduit.IInstanceResolver::GetObjectsOfType(System.Type) */, IInstanceResolver_t6FD3BD9658C1AF016CA921F3640B1D8B5FADA184_il2cpp_TypeInfo_var, L_47, L_49);
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_50);
		V_7 = L_51;
	}

IL_00ef:
	try
	{// begin try (depth: 1)
		{
			goto IL_012b;
		}

IL_00f1:
		{
			// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
			RuntimeObject* L_52 = V_7;
			NullCheck(L_52);
			RuntimeObject * L_53;
			L_53 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_52);
			V_8 = L_53;
		}

IL_00fa:
		try
		{// begin try (depth: 2)
			// method.Invoke(obj, parameterObjects.ToArray());
			MethodInfo_t * L_54 = V_0;
			RuntimeObject * L_55 = V_8;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_56 = V_2;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_57;
			L_57 = Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE((RuntimeObject*)(RuntimeObject*)L_56, /*hidden argument*/Enumerable_ToArray_TisRuntimeObject_mEB06425105813A21FC826C4144F8456EAE2304DE_RuntimeMethod_var);
			NullCheck(L_54);
			RuntimeObject * L_58;
			L_58 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_54, L_55, L_57, /*hidden argument*/NULL);
			// }
			goto IL_012b;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010b;
			}
			throw e;
		}

CATCH_010b:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_9 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"Failed to invoke method {method.Name}. {e} on {obj}");
			MethodInfo_t * L_59 = V_0;
			NullCheck(L_59);
			String_t* L_60;
			L_60 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_59);
			Exception_t * L_61 = V_9;
			RuntimeObject * L_62 = V_8;
			String_t* L_63;
			L_63 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC)), L_60, L_61, L_62, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_63, /*hidden argument*/NULL);
			// allSucceeded = false;
			V_6 = (bool)0;
			// continue;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_012b;
		}// end catch (depth: 2)

IL_012b:
		{
			// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
			RuntimeObject* L_64 = V_7;
			NullCheck(L_64);
			bool L_65;
			L_65 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_64);
			if (L_65)
			{
				goto IL_00f1;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0136);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_66 = V_7;
			if (!L_66)
			{
				goto IL_0141;
			}
		}

IL_013a:
		{
			RuntimeObject* L_67 = V_7;
			NullCheck(L_67);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_67);
		}

IL_0141:
		{
			IL2CPP_END_FINALLY(310)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x142, IL_0142)
	}

IL_0142:
	{
		// return allSucceeded;
		bool L_68 = V_6;
		return L_68;
	}

IL_0145:
	{
		// }
		bool L_69 = V_5;
		return L_69;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::<CompatibleInvocationContext>b__8_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m4DE145821DE3F8BFC09C301139871D6ABFC23F49 (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter));
		RuntimeObject* L_0 = __this->get_parameterProvider_3();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_1 = ___parameter0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void Meta.Conduit.ConduitDispatcherFactory::.ctor(Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcherFactory__ctor_mF491E195642827645436C11D7B363F942C3AEFA3 (ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98 * __this, RuntimeObject* ___instanceResolver0, RuntimeObject* ___parameterProvider1, const RuntimeMethod* method)
{
	{
		// public ConduitDispatcherFactory(IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_0 = ___instanceResolver0;
		__this->set_instanceResolver_1(L_0);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_1 = ___parameterProvider1;
		__this->set_parameterProvider_2(L_1);
		// }
		return;
	}
}
// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::GetDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConduitDispatcherFactory_GetDispatcher_mD605F84972FB23A732942D1D0514A85EFC5DE644 (ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return instance = instance ??
		//                   new ConduitDispatcher(new ManifestLoader(), this.instanceResolver,
		//                       this.parameterProvider);
		RuntimeObject* L_0 = ((ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_il2cpp_TypeInfo_var))->get_instance_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E * L_2 = (ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E *)il2cpp_codegen_object_new(ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E_il2cpp_TypeInfo_var);
		ManifestLoader__ctor_mC6A00B1776B15E82B73A84C112060FD5A7FB11FA(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = __this->get_instanceResolver_1();
		RuntimeObject* L_4 = __this->get_parameterProvider_2();
		ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * L_5 = (ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE *)il2cpp_codegen_object_new(ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE_il2cpp_TypeInfo_var);
		ConduitDispatcher__ctor_m89ED38F108FA3E941E861B959894113C038CA424(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject*)(L_5));
	}

IL_001f:
	{
		RuntimeObject* L_6 = G_B2_0;
		((ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCC3059B31B18950EBCA43E4F536122487E28CC98_il2cpp_TypeInfo_var))->set_instance_0(L_6);
		return L_6;
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
// System.Void Meta.Conduit.ConduitEntityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitEntityAttribute__ctor_mD15BB970A18B203C79D1D9E8A2AEC67A363D53B8 (ConduitEntityAttribute_tD97B2A5264AF0B4BF8F3CEFDB032383D6CA1F133 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m5404FE69A9F6C72C775F10FE179453F5E4E7AF94 (ConduitParameterAttribute_tB9B95E5573786DF0A04B9AD88F8323A9330FFB98 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___aliases0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1;
		L_1 = Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6((RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisString_t_mA306431F7DFB113DB1BC8E40CE586E3384BF5ED6_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_0(L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ConduitParameterAttribute_get_Aliases_m35D2D953F90645AFE159DBE81133D1A4E475E201 (ConduitParameterAttribute_tB9B95E5573786DF0A04B9AD88F8323A9330FFB98 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_0();
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
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m4543B19D63F39E5C81FC07422C53613D5A972031 (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnderscoreSplitter.Replace(input, "_$1");
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = ((ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var))->get_UnderscoreSplitter_0();
		String_t* L_1 = ___input0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F(L_0, L_1, _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__ctor_mD8B986E684D5A9B67B06C13F5A7E91C87FAC44D5 (ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__cctor_mF6D9EAFE03D836FC13741DC9E9DEF82A680FC17D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex UnderscoreSplitter = new Regex("(\\B[A-Z])", RegexOptions.Compiled);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_0, _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896, 8, /*hidden argument*/NULL);
		((ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var))->set_UnderscoreSplitter_0(L_0);
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
// System.Void Meta.Conduit.ConduitValueAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitValueAttribute__ctor_m11879A9176C4DB43485EBAA986E6F07A3895F769 (ConduitValueAttribute_t7DFCE0E1281FCFCEB88DF7372FCC517E20BF8ED7 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___aliases0, const RuntimeMethod* method)
{
	{
		// public ConduitValueAttribute(params string[] aliases)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// this.Aliases = aliases;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___aliases0;
		__this->set_U3CAliasesU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
// System.String[] Meta.Conduit.ConduitValueAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConduitValueAttribute_get_Aliases_m059059CC2D2EE5C5C40AA19B05C0435F8F046053 (ConduitValueAttribute_t7DFCE0E1281FCFCEB88DF7372FCC517E20BF8ED7 * __this, const RuntimeMethod* method)
{
	{
		// public string[] Aliases { get; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3CAliasesU3Ek__BackingField_0();
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
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m502B72A306E24A3C8A4F96B365D8A8F0272221A7 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m12257876BD547812A42618D8B0F0798142057A95 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = __this->get_U3CMethodInfoU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m1BE8E1E89CAFB664DE1D02B40E4FBFABFA95B4E9 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = ___value0;
		__this->set_U3CMethodInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m83FB43B20BCBEA5706CF500CC925BD4BD9A3BF8B (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m850248D376B32A8F7409E0D155E485EC0A33F264 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mB7143665F0187E435CBE8019F28C00903A693C91 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1B8475772FF0A3FD21DF84F157C61D58055D6CB5 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m6A2ADB40B11BD5A527D135C74B1791E223B1DE00 (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3((1.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.Manifest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__ctor_mC9E6E33D169E84C1B7878037A280815BBE5F5889 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92C217FBF67F341CB493674EDCA1A16DCF539483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m10A0ADA0FAEE02355B8577E88F7B12C25BF65517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m369E40828B8EF2E5E977E4949FB0458470164C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * L_0 = (List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E *)il2cpp_codegen_object_new(List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E_il2cpp_TypeInfo_var);
		List_1__ctor_m369E40828B8EF2E5E977E4949FB0458470164C20(L_0, /*hidden argument*/List_1__ctor_m369E40828B8EF2E5E977E4949FB0458470164C20_RuntimeMethod_var);
		__this->set_U3CEntitiesU3Ek__BackingField_3(L_0);
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_1 = (List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 *)il2cpp_codegen_object_new(List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603_il2cpp_TypeInfo_var);
		List_1__ctor_m10A0ADA0FAEE02355B8577E88F7B12C25BF65517(L_1, /*hidden argument*/List_1__ctor_m10A0ADA0FAEE02355B8577E88F7B12C25BF65517_RuntimeMethod_var);
		__this->set_U3CActionsU3Ek__BackingField_4(L_1);
		// private readonly Dictionary<string, List<InvocationContext>> methodLookup =
		//     new Dictionary<string, List<InvocationContext>>(StringComparer.OrdinalIgnoreCase);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_3 = (Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 *)il2cpp_codegen_object_new(Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m92C217FBF67F341CB493674EDCA1A16DCF539483(L_3, L_2, /*hidden argument*/Dictionary_2__ctor_m92C217FBF67F341CB493674EDCA1A16DCF539483_RuntimeMethod_var);
		__this->set_methodLookup_5(L_3);
		// public Manifest() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public Manifest() { }
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_ID_mE544A34549C2BDE6CD4E49086A279E60BB428134 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_ID_m507B22B02FA433F7DF5AC3A1C1D0693C11DB1AEE (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Version_mC8EFB703CAC9728921C4661F8EDAB8F9994B94FB (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public string Version { get; set; }
		String_t* L_0 = __this->get_U3CVersionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Version_m52DE964B6DEE28F0DCBF56187CA112937942FA98 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Version { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Domain_m14216A838C0B9D6657A14E86FB3C3187E7907715 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = __this->get_U3CDomainU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Domain_m46340C553D94A61A8555BE5B518AC19E0B1E3E67 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDomainU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * Manifest_get_Entities_m61BDA4A280174795953D2739BE6303C56EFBFF9D (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * L_0 = __this->get_U3CEntitiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Entities(System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Entities_m67CA799B998A9CC947680E3468E423F58D270AB5 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t95F2085EE071AA1FC77FCDBAB77D0830ED54995E * L_0 = ___value0;
		__this->set_U3CEntitiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * Manifest_get_Actions_m0E05FF96C6F8A893CFC6A5AB7E3984DC260964FF (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_0 = __this->get_U3CActionsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Actions(System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Actions_m5AD3ED93A5BBD89A4FA07D1498020E95414D9D1F (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_0 = ___value0;
		__this->set_U3CActionsU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m19D9A408EE3116B0EF722D94E298295D4FF305C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m941C0D6E8FAC02DB4FA8332BC4986FD6B6C86D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mC10D86926581ECB43F2D7E716C3E1C5AE910AA61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_m8EFEB6325E772D45AF533CB9F0C73FDEB09C06A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD3FAC4361FBE0BBA78143ADFBA648DF54585B912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF684AAB1B8AF0D44CE067DFF135B6BDDD01CE12D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAF80BEE1323201690D128D42576B0186A0A7ED2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFC69145134A5A5B6FCABC9EE790180167CC65C9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m5B5BB1B37DA548E1C064E2CB0A66E46498911FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7508E1894F23E13BC28A3BC4295855B3243ACCDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C231024DF54263FD3BC08CF93CCFCB4A3AFB326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_0_m2BBC68834131EE2892DAC4149C91B7BD99B2229D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE2C034ED583DC200AD1D03512AFBE23B9819B8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Type_t * V_6 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_7 = NULL;
	MethodInfo_t * V_8 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_9 = NULL;
	ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * V_10 = NULL;
	InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * V_11 = NULL;
	int32_t V_12 = 0;
	ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * V_13 = NULL;
	String_t* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * G_B21_0 = NULL;
	ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * G_B21_1 = NULL;
	Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * G_B20_0 = NULL;
	ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * G_B20_1 = NULL;
	Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * G_B25_0 = NULL;
	List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * G_B25_1 = NULL;
	Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * G_B24_0 = NULL;
	List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * G_B24_1 = NULL;
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.Actions)
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_0;
		L_0 = Manifest_get_Actions_m0E05FF96C6F8A893CFC6A5AB7E3984DC260964FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB  L_1;
		L_1 = List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B(L_0, /*hidden argument*/List_1_GetEnumerator_mE30BB3F7547277D6ADBEB2C291F02D4DE9AF681B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{// begin try (depth: 1)
		{
			goto IL_01ee;
		}

IL_0013:
		{
			// foreach (var action in this.Actions)
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_2;
			L_2 = Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_inline((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2699DEBF638D23A9B3167DB0D88F9BCA289EC5C1_RuntimeMethod_var);
			V_2 = L_2;
			// var lastPeriod = action.ID.LastIndexOf('.');
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_3 = V_2;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5;
			L_5 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_4, ((int32_t)46), /*hidden argument*/NULL);
			V_3 = L_5;
			// if (lastPeriod <= 0)
			int32_t L_6 = V_3;
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0049;
			}
		}

IL_002d:
		{
			// Debug.LogError($"Invalid Action ID: {action.ID}");
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(L_7, /*hidden argument*/NULL);
			String_t* L_9;
			L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_9, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_01ee;
		}

IL_0049:
		{
			// var typeName = action.ID.Substring(0, lastPeriod);
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11;
			L_11 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(L_10, /*hidden argument*/NULL);
			int32_t L_12 = V_3;
			NullCheck(L_11);
			String_t* L_13;
			L_13 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_11, 0, L_12, /*hidden argument*/NULL);
			// var qualifiedTypeName = $"{typeName},{action.Assembly}";
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_14 = V_2;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline(L_14, /*hidden argument*/NULL);
			String_t* L_16;
			L_16 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_13, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			// var method = action.ID.Substring(lastPeriod + 1);
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_17 = V_2;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(L_17, /*hidden argument*/NULL);
			int32_t L_19 = V_3;
			NullCheck(L_18);
			String_t* L_20;
			L_20 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
			V_5 = L_20;
			// var targetType = Type.GetType(qualifiedTypeName);
			String_t* L_21 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_22;
			L_22 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_21, Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E_RuntimeMethod_var);
			V_6 = L_22;
			// if (targetType == null)
			Type_t * L_23 = V_6;
			bool L_24;
			L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_008b:
		{
			// Debug.LogError($"Failed to resolve type: {qualifiedTypeName}");
			String_t* L_25 = V_4;
			String_t* L_26;
			L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_26, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_01ee;
		}

IL_00a3:
		{
			// var types = new Type[action.Parameters.Count];
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_27 = V_2;
			NullCheck(L_27);
			List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_28;
			L_28 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			int32_t L_29;
			L_29 = List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_inline(L_28, /*hidden argument*/List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_30 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)L_29);
			V_7 = L_30;
			// for (var i = 0; i < action.Parameters.Count; i++)
			V_12 = 0;
			goto IL_00f5;
		}

IL_00ba:
		{
			// var manifestParameter = action.Parameters[i];
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_31 = V_2;
			NullCheck(L_31);
			List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_32;
			L_32 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(L_31, /*hidden argument*/NULL);
			int32_t L_33 = V_12;
			NullCheck(L_32);
			ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_34;
			L_34 = List_1_get_Item_m8C231024DF54263FD3BC08CF93CCFCB4A3AFB326_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m8C231024DF54263FD3BC08CF93CCFCB4A3AFB326_RuntimeMethod_var);
			V_13 = L_34;
			// var fullTypeName = $"{manifestParameter.QualifiedTypeName},{manifestParameter.TypeAssembly}";
			ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_35 = V_13;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(L_35, /*hidden argument*/NULL);
			ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_37 = V_13;
			NullCheck(L_37);
			String_t* L_38;
			L_38 = ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline(L_37, /*hidden argument*/NULL);
			String_t* L_39;
			L_39 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_36, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_38, /*hidden argument*/NULL);
			V_14 = L_39;
			// types[i] = Type.GetType(fullTypeName);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_40 = V_7;
			int32_t L_41 = V_12;
			String_t* L_42 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_43;
			L_43 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_42, Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E_RuntimeMethod_var);
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, L_43);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Type_t *)L_43);
			// for (var i = 0; i < action.Parameters.Count; i++)
			int32_t L_44 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		}

IL_00f5:
		{
			// for (var i = 0; i < action.Parameters.Count; i++)
			int32_t L_45 = V_12;
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_46 = V_2;
			NullCheck(L_46);
			List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_47;
			L_47 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			int32_t L_48;
			L_48 = List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_inline(L_47, /*hidden argument*/List_1_get_Count_m436B1ECED991E799E63792CECAF345BD7C9EF1A7_RuntimeMethod_var);
			if ((((int32_t)L_45) < ((int32_t)L_48)))
			{
				goto IL_00ba;
			}
		}

IL_0104:
		{
			// var targetMethod = targetType.GetMethod(method,
			//     BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static, null, CallingConventions.Any,
			//     types, null);
			Type_t * L_49 = V_6;
			String_t* L_50 = V_5;
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_51 = V_7;
			NullCheck(L_49);
			MethodInfo_t * L_52;
			L_52 = Type_GetMethod_m029A213C09F61496D42B3101E8E770D1C66CB795(L_49, L_50, ((int32_t)28), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, 3, L_51, (ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)(ParameterModifierU5BU5D_tFF6F73F1CFE837331D6AAA11CC78CE5D9B5F0A2B*)NULL, /*hidden argument*/NULL);
			V_8 = L_52;
			// if (targetMethod == null)
			MethodInfo_t * L_53 = V_8;
			bool L_54;
			L_54 = MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2(L_53, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_013d;
			}
		}

IL_0120:
		{
			// Debug.LogError($"Failed to resolve method {method}.");
			String_t* L_55 = V_5;
			String_t* L_56;
			L_56 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB, L_55, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_56, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_01ee;
		}

IL_013d:
		{
			// var attributes = targetMethod.GetCustomAttributes(typeof(ConduitActionAttribute), false);
			MethodInfo_t * L_57 = V_8;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_58 = { reinterpret_cast<intptr_t> (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_59;
			L_59 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_58, /*hidden argument*/NULL);
			NullCheck(L_57);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60;
			L_60 = VirtualFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_57, L_59, (bool)0);
			V_9 = L_60;
			// if (attributes.Length == 0)
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = V_9;
			NullCheck(L_61);
			if ((((RuntimeArray*)L_61)->max_length))
			{
				goto IL_016e;
			}
		}

IL_0156:
		{
			// Debug.LogError($"{targetMethod} - Did not have expected Conduit attribute");
			MethodInfo_t * L_62 = V_8;
			String_t* L_63;
			L_63 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_62, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_63, /*hidden argument*/NULL);
			// resolvedAll = false;
			V_0 = (bool)0;
			// continue;
			goto IL_01ee;
		}

IL_016e:
		{
			// var actionAttribute = attributes.First() as ConduitActionAttribute;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_64 = V_9;
			RuntimeObject * L_65;
			L_65 = Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475((RuntimeObject*)(RuntimeObject*)L_64, /*hidden argument*/Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_RuntimeMethod_var);
			V_10 = ((ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA *)IsInstClass((RuntimeObject*)L_65, ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA_il2cpp_TypeInfo_var));
			// var invocationContext = new InvocationContext()
			// {
			//     Type = targetType,
			//     MethodInfo = targetMethod,
			//     MinConfidence = actionAttribute.MinConfidence,
			//     MaxConfidence = actionAttribute.MaxConfidence
			// };
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_66 = (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 *)il2cpp_codegen_object_new(InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24_il2cpp_TypeInfo_var);
			InvocationContext__ctor_m6A2ADB40B11BD5A527D135C74B1791E223B1DE00(L_66, /*hidden argument*/NULL);
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_67 = L_66;
			Type_t * L_68 = V_6;
			NullCheck(L_67);
			InvocationContext_set_Type_m12257876BD547812A42618D8B0F0798142057A95_inline(L_67, L_68, /*hidden argument*/NULL);
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_69 = L_67;
			MethodInfo_t * L_70 = V_8;
			NullCheck(L_69);
			InvocationContext_set_MethodInfo_m1BE8E1E89CAFB664DE1D02B40E4FBFABFA95B4E9_inline(L_69, L_70, /*hidden argument*/NULL);
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_71 = L_69;
			ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * L_72 = V_10;
			NullCheck(L_72);
			float L_73;
			L_73 = ConduitActionAttribute_get_MinConfidence_m2082AEF22B536905E53473AEBD9911982F70B5B7_inline(L_72, /*hidden argument*/NULL);
			NullCheck(L_71);
			InvocationContext_set_MinConfidence_m850248D376B32A8F7409E0D155E485EC0A33F264_inline(L_71, L_73, /*hidden argument*/NULL);
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_74 = L_71;
			ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * L_75 = V_10;
			NullCheck(L_75);
			float L_76;
			L_76 = ConduitActionAttribute_get_MaxConfidence_mD23F49DF55E0DF599B4D95D35C31B51AEB75C170_inline(L_75, /*hidden argument*/NULL);
			NullCheck(L_74);
			InvocationContext_set_MaxConfidence_m1B8475772FF0A3FD21DF84F157C61D58055D6CB5_inline(L_74, L_76, /*hidden argument*/NULL);
			V_11 = L_74;
			// if (!this.methodLookup.ContainsKey(action.Name))
			Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_77 = __this->get_methodLookup_5();
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_78 = V_2;
			NullCheck(L_78);
			String_t* L_79;
			L_79 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(L_78, /*hidden argument*/NULL);
			NullCheck(L_77);
			bool L_80;
			L_80 = Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B(L_77, L_79, /*hidden argument*/Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B_RuntimeMethod_var);
			if (L_80)
			{
				goto IL_01d6;
			}
		}

IL_01c0:
		{
			// this.methodLookup.Add(action.Name, new List<InvocationContext>());
			Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_81 = __this->get_methodLookup_5();
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_82 = V_2;
			NullCheck(L_82);
			String_t* L_83;
			L_83 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(L_82, /*hidden argument*/NULL);
			List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_84 = (List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 *)il2cpp_codegen_object_new(List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_il2cpp_TypeInfo_var);
			List_1__ctor_m7508E1894F23E13BC28A3BC4295855B3243ACCDA(L_84, /*hidden argument*/List_1__ctor_m7508E1894F23E13BC28A3BC4295855B3243ACCDA_RuntimeMethod_var);
			NullCheck(L_81);
			Dictionary_2_Add_m941C0D6E8FAC02DB4FA8332BC4986FD6B6C86D4C(L_81, L_83, L_84, /*hidden argument*/Dictionary_2_Add_m941C0D6E8FAC02DB4FA8332BC4986FD6B6C86D4C_RuntimeMethod_var);
		}

IL_01d6:
		{
			// this.methodLookup[action.Name].Add(invocationContext);
			Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_85 = __this->get_methodLookup_5();
			ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_86 = V_2;
			NullCheck(L_86);
			String_t* L_87;
			L_87 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(L_86, /*hidden argument*/NULL);
			NullCheck(L_85);
			List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_88;
			L_88 = Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB(L_85, L_87, /*hidden argument*/Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB_RuntimeMethod_var);
			InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_89 = V_11;
			NullCheck(L_88);
			List_1_Add_mFC69145134A5A5B6FCABC9EE790180167CC65C9C(L_88, L_89, /*hidden argument*/List_1_Add_mFC69145134A5A5B6FCABC9EE790180167CC65C9C_RuntimeMethod_var);
		}

IL_01ee:
		{
			// foreach (var action in this.Actions)
			bool L_90;
			L_90 = Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m559D3E6D15D78CFABBA66F1AA663A8F666E07D51_RuntimeMethod_var);
			if (L_90)
			{
				goto IL_0013;
			}
		}

IL_01fa:
		{
			IL2CPP_LEAVE(0x20A, FINALLY_01fc);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01fc;
	}

FINALLY_01fc:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70((Enumerator_t48F376CB7750C0E2E3A4A9D729869BC85E8EB0EB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m10AFBCE34D681BDCDD6A8FD1CB143AAA04362E70_RuntimeMethod_var);
		IL2CPP_END_FINALLY(508)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(508)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20A, IL_020a)
	}

IL_020a:
	{
		// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_91 = __this->get_methodLookup_5();
		NullCheck(L_91);
		ValueCollection_t34132857D5984D2E79F4CF66D00428BD090C8EC4 * L_92;
		L_92 = Dictionary_2_get_Values_mC10D86926581ECB43F2D7E716C3E1C5AE910AA61(L_91, /*hidden argument*/Dictionary_2_get_Values_mC10D86926581ECB43F2D7E716C3E1C5AE910AA61_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
		Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * L_93 = ((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->get_U3CU3E9__22_0_1();
		Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * L_94 = L_93;
		G_B20_0 = L_94;
		G_B20_1 = L_92;
		if (L_94)
		{
			G_B21_0 = L_94;
			G_B21_1 = L_92;
			goto IL_0234;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
		U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * L_95 = ((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * L_96 = (Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 *)il2cpp_codegen_object_new(Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156_il2cpp_TypeInfo_var);
		Func_2__ctor_mD3FAC4361FBE0BBA78143ADFBA648DF54585B912(L_96, L_95, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveActionsU3Eb__22_0_m2BBC68834131EE2892DAC4149C91B7BD99B2229D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD3FAC4361FBE0BBA78143ADFBA648DF54585B912_RuntimeMethod_var);
		Func_2_tDFD78C1CBBB29A56DD8E1E0AD00D7FA8E36FB156 * L_97 = L_96;
		((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->set_U3CU3E9__22_0_1(L_97);
		G_B21_0 = L_97;
		G_B21_1 = G_B20_1;
	}

IL_0234:
	{
		RuntimeObject* L_98;
		L_98 = Enumerable_Where_TisList_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_m8EFEB6325E772D45AF533CB9F0C73FDEB09C06A0(G_B21_1, G_B21_0, /*hidden argument*/Enumerable_Where_TisList_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4_m8EFEB6325E772D45AF533CB9F0C73FDEB09C06A0_RuntimeMethod_var);
		NullCheck(L_98);
		RuntimeObject* L_99;
		L_99 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_tF684AAB1B8AF0D44CE067DFF135B6BDDD01CE12D_il2cpp_TypeInfo_var, L_98);
		V_15 = L_99;
	}

IL_0240:
	try
	{// begin try (depth: 1)
		{
			goto IL_026d;
		}

IL_0242:
		{
			// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
			RuntimeObject* L_100 = V_15;
			NullCheck(L_100);
			List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_101;
			L_101 = InterfaceFuncInvoker0< List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_tAF80BEE1323201690D128D42576B0186A0A7ED2B_il2cpp_TypeInfo_var, L_100);
			// invocationContext.Sort((one, two) =>
			//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
			Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * L_102 = ((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->get_U3CU3E9__22_1_2();
			Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * L_103 = L_102;
			G_B24_0 = L_103;
			G_B24_1 = L_101;
			if (L_103)
			{
				G_B25_0 = L_103;
				G_B25_1 = L_101;
				goto IL_0268;
			}
		}

IL_0251:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
			U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * L_104 = ((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * L_105 = (Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 *)il2cpp_codegen_object_new(Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162_il2cpp_TypeInfo_var);
			Comparison_1__ctor_m19D9A408EE3116B0EF722D94E298295D4FF305C0(L_105, L_104, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE2C034ED583DC200AD1D03512AFBE23B9819B8E9_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m19D9A408EE3116B0EF722D94E298295D4FF305C0_RuntimeMethod_var);
			Comparison_1_t756952ECD711A79B1406CD2380CA206D790D2162 * L_106 = L_105;
			((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->set_U3CU3E9__22_1_2(L_106);
			G_B25_0 = L_106;
			G_B25_1 = G_B24_1;
		}

IL_0268:
		{
			NullCheck(G_B25_1);
			List_1_Sort_m5B5BB1B37DA548E1C064E2CB0A66E46498911FF5(G_B25_1, G_B25_0, /*hidden argument*/List_1_Sort_m5B5BB1B37DA548E1C064E2CB0A66E46498911FF5_RuntimeMethod_var);
		}

IL_026d:
		{
			// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
			RuntimeObject* L_107 = V_15;
			NullCheck(L_107);
			bool L_108;
			L_108 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_107);
			if (L_108)
			{
				goto IL_0242;
			}
		}

IL_0276:
		{
			IL2CPP_LEAVE(0x284, FINALLY_0278);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0278;
	}

FINALLY_0278:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_109 = V_15;
			if (!L_109)
			{
				goto IL_0283;
			}
		}

IL_027c:
		{
			RuntimeObject* L_110 = V_15;
			NullCheck(L_110);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_110);
		}

IL_0283:
		{
			IL2CPP_END_FINALLY(632)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(632)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x284, IL_0284)
	}

IL_0284:
	{
		// return resolvedAll;
		bool L_111 = V_0;
		return L_111;
	}
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_m10C81562E54AA6D990AFCFDACE37639BA6583C71 (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.methodLookup.ContainsKey(action);
		Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_0 = __this->get_methodLookup_5();
		String_t* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m833F536EE5315D8FA7B0A364FEE708107B44CE9B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * Manifest_GetInvocationContexts_mCF48F80A8B05E2CDF83A6C2D9290D2DA83DFC88C (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, String_t* ___actionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.methodLookup[actionId];
		Dictionary_2_t413C05B2BD2972B8DCFB0273EE296F3089B1F9B1 * L_0 = __this->get_methodLookup_5();
		String_t* L_1 = ___actionId0;
		NullCheck(L_0);
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_2;
		L_2 = Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m15556FBAB0D55A55BE1CE0749467AF7803A4C0AB_RuntimeMethod_var);
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
// System.Void Meta.Conduit.ManifestAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction__ctor_m71CCCD3F3DEB0D558277E6A8DFFA3508810D019F (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m860BE46453DA94FA2199F3AFB3ED338118BCB67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_0 = (List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E *)il2cpp_codegen_object_new(List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E_il2cpp_TypeInfo_var);
		List_1__ctor_m860BE46453DA94FA2199F3AFB3ED338118BCB67E(L_0, /*hidden argument*/List_1__ctor_m860BE46453DA94FA2199F3AFB3ED338118BCB67E_RuntimeMethod_var);
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_1, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_U3CAliasesU3Ek__BackingField_4(L_1);
		// public ManifestAction() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ManifestAction() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_ID_mA72CC8E2D3A675834A5C553508906B317CB0A4E2 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Assembly_mE3E2AC612CD82F8F6EF3F8BB4BD6DFB585602FCA (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAssemblyU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Name_mCC8A2C49FAC0A3931408CFE96D5CD30D5869F544 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Parameters_m2B54E912AEA4833DAF2C498DE4C4C672B0C4C539 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ___value0, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_DeclaringTypeName_m01DDBCD557DA929530A7CA455A0F8C4C87E3FDED (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_1, ((int32_t)46), /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Aliases_m12A5CE25A6B32198D55BB5AFD0C270AAA5929DFE (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m82F71BBDE395ED6817B372072E32AEEC88FDFAC6 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * V_0 = NULL;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F *)IsInstClass((RuntimeObject*)L_0, ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F_il2cpp_TypeInfo_var));
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_2 = V_0;
		bool L_3;
		L_3 = ManifestAction_Equals_m0B0CFEB2BD3F40D081B97B81E6BFE1EFD95F800C(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestAction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestAction_GetHashCode_m385228533111DC6CD7264FB5D8E688EAFE956CC6 (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Assembly.GetHashCode();
		String_t* L_2;
		L_2 = ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Parameters.GetHashCode();
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_6;
		L_6 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7)), (int32_t)((int32_t)31))), (int32_t)L_9));
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m0B0CFEB2BD3F40D081B97B81E6BFE1EFD95F800C (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_m683A1E689E41FCE4EBB17F1EF51667FBA9C0882D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) && this.Aliases.SequenceEqual(other.Aliases);
		String_t* L_0;
		L_0 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_12;
		L_12 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_13 = ___other0;
		NullCheck(L_13);
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_14;
		L_14 = ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_m683A1E689E41FCE4EBB17F1EF51667FBA9C0882D(L_12, L_14, /*hidden argument*/Enumerable_SequenceEqual_TisManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_m683A1E689E41FCE4EBB17F1EF51667FBA9C0882D_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16;
		L_16 = ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C_inline(__this, /*hidden argument*/NULL);
		ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * L_17 = ___other0;
		NullCheck(L_17);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18;
		L_18 = ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907(L_16, L_18, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		return L_19;
	}

IL_005e:
	{
		return (bool)0;
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
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_ID_mE86CFB06D5557FF89053E81B42B0FFB85863D8D5 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Type_m973D225E8384E9280293BDB15F7DC1C5EF0ABAB5 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Name_m2308DD1A9E9CBF5969600C09DAED52A187923F73 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CValuesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Values(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Values_m4B61196FC25A3CBE0C678459DBF00F0ABB8FC269 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CValuesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m54C290E6C9C16F328F46E9B93FC8805012C07D7C (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * V_0 = NULL;
	{
		// return obj is ManifestEntity other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 *)IsInstClass((RuntimeObject*)L_0, ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8_il2cpp_TypeInfo_var));
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_2 = V_0;
		bool L_3;
		L_3 = ManifestEntity_Equals_m257620A8CD4E44D04828F8D6EC1ED43018C46A19(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEntity_GetHashCode_mFE3AD08EAF88F429F434F82FE664536D90E3050A (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + ID.GetHashCode();
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + Type.GetHashCode();
		String_t* L_2;
		L_2 = ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + Name.GetHashCode();
		String_t* L_4;
		L_4 = ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + Values.GetHashCode();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6;
		L_6 = ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7));
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m257620A8CD4E44D04828F8D6EC1ED43018C46A19 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ID == other.ID && Type == other.Type && Name == other.Name &&
		//        this.Values.SequenceEqual(other.Values);
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12;
		L_12 = ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573_inline(__this, /*hidden argument*/NULL);
		ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * L_13 = ___other0;
		NullCheck(L_13);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14;
		L_14 = ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907(L_12, L_14, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity__ctor_m8658418EE067C10A095A0CF6077E49B0D9D3AF15 (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_U3CValuesU3Ek__BackingField_3(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * ManifestLoader_LoadManifest_mC849C58C91C1F1C98E18A5200827A5D398670C07 (ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E * __this, String_t* ___manifestLocalPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisManifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207_m8C17793A7ACA629A7ED5A6F5341FBB80646F61EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tBEB85D19704BAA5D7A13215C33D1D94B19F8BD47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m5313E11E04DEBB3C4FC6AA7A32FA37B13209055B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_1 = NULL;
	String_t* G_B3_0 = NULL;
	Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * G_B7_0 = NULL;
	Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * G_B6_0 = NULL;
	{
		// Debug.Log($"Loaded Conduit manifest from Resources/{manifestLocalPath}");
		String_t* L_0 = ___manifestLocalPath0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// int extIndex = manifestLocalPath.LastIndexOf('.');
		String_t* L_2 = ___manifestLocalPath0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_2, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_3;
		// string ignoreEnd = extIndex == -1 ? manifestLocalPath : manifestLocalPath.Substring(0, extIndex);
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = ___manifestLocalPath0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 0, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0028;
	}

IL_0027:
	{
		String_t* L_8 = ___manifestLocalPath0;
		G_B3_0 = L_8;
	}

IL_0028:
	{
		// TextAsset jsonFile = Resources.Load<TextAsset>(ignoreEnd);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_9;
		L_9 = Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m5313E11E04DEBB3C4FC6AA7A32FA37B13209055B(G_B3_0, /*hidden argument*/Resources_Load_TisTextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_m5313E11E04DEBB3C4FC6AA7A32FA37B13209055B_RuntimeMethod_var);
		V_1 = L_9;
		// if (jsonFile == null)
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.LogError($"Conduit Error - No Manifest found at Resources/{manifestLocalPath}");
		String_t* L_12 = ___manifestLocalPath0;
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_13, /*hidden argument*/NULL);
		// return null;
		return (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 *)NULL;
	}

IL_0049:
	{
		// string rawJson = jsonFile.text;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_14, /*hidden argument*/NULL);
		// var manifest = JsonMapper.ToObject<Manifest>(rawJson);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tBEB85D19704BAA5D7A13215C33D1D94B19F8BD47_il2cpp_TypeInfo_var);
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_16;
		L_16 = JsonMapper_ToObject_TisManifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207_m8C17793A7ACA629A7ED5A6F5341FBB80646F61EE(L_15, /*hidden argument*/JsonMapper_ToObject_TisManifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207_m8C17793A7ACA629A7ED5A6F5341FBB80646F61EE_RuntimeMethod_var);
		// if (manifest.ResolveActions())
		Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * L_17 = L_16;
		NullCheck(L_17);
		bool L_18;
		L_18 = Manifest_ResolveActions_m96D30ACBE6620A151E47EDE283A4F0714DA65A4E(L_17, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		if (!L_18)
		{
			G_B7_0 = L_17;
			goto IL_0067;
		}
	}
	{
		// Debug.Log($"Successfully Loaded Conduit manifest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF, /*hidden argument*/NULL);
		// }
		return G_B6_0;
	}

IL_0067:
	{
		// Debug.LogError($"Fail to resolve actions from Conduit manifest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B, /*hidden argument*/NULL);
		// return manifest;
		return G_B7_0;
	}
}
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mC6A00B1776B15E82B73A84C112060FD5A7FB11FA (ManifestLoader_tA20858A10C00AB6C6F113DB67F9394D8BFF1D43E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ManifestParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter__ctor_m57FA85106E27A34EA392D58BB31F6C590E8D0399 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public ManifestParameter() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ManifestParameter() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_Name_m6BAE7E70621588ED135448C84652EFE306A83FBF (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Name_m493DA6202904F2333609E48EBA93888D47969318 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => name = ConduitUtilities.DelimitWithUnderscores(value).ToLower();
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ConduitUtilities_t8F23AA6EBEE284C49EDD5A062B03910630DA5386_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_DelimitWithUnderscores_m4543B19D63F39E5C81FC07422C53613D5A972031(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_1, /*hidden argument*/NULL);
		__this->set_name_0(L_2);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->get_U3CInternalNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_InternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_InternalName_m7DB202841D9DEB8943D838E24C14C12BC7F237DC (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CInternalNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedName_m7F01BBC125D1F6E3DD6560E32ACA9A08A85F3390 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CQualifiedNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_m81AB8436743CCEF553389528707ED7E19DFB1CCD (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var lastPeriod = QualifiedTypeName.LastIndexOf('.');
		String_t* L_0;
		L_0 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_0, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (lastPeriod < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_3;
	}

IL_0018:
	{
		// var entityName = QualifiedTypeName.Substring(lastPeriod + 1);
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_6;
		// var lastPlus = entityName.LastIndexOf('+');
		String_t* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_7, ((int32_t)43), /*hidden argument*/NULL);
		V_2 = L_8;
		// if (lastPlus < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// return entityName;
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0036:
	{
		// return entityName.Substring(lastPlus + 1);
		String_t* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->get_U3CTypeAssemblyU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_TypeAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_TypeAssembly_mF299D0424760C92D409152D2C3E0D92370652359 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTypeAssemblyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedTypeNameU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedTypeName_m7410A1C0D2CFC12EC9D2926D35795FE5DE34A4E3 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CQualifiedTypeNameU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Aliases_m74BE7B3EDF9BD57E7846994B9CF3D94C1655A036 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CAliasesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m568B84AC580C63D4DF068F52ADAA45CAC3E562B7 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * V_0 = NULL;
	{
		// return obj is ManifestParameter other && this.Equals(other);
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 *)IsInstClass((RuntimeObject*)L_0, ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36_il2cpp_TypeInfo_var));
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_2 = V_0;
		bool L_3;
		L_3 = ManifestParameter_Equals_m96939A8FE95E2731BD6CFF7A56B83541D330017C(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Meta.Conduit.ManifestParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestParameter_GetHashCode_m9F52CC0EFF5611BFEDCA216FCF5C900ED5702051 (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// var hash = 17;
		// hash = hash * 31 + name.GetHashCode();
		String_t* L_0 = __this->get_name_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hash = hash * 31 + InternalName.GetHashCode();
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hash = hash * 31 + QualifiedName.GetHashCode();
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// hash = hash * 31 + TypeAssembly.GetHashCode();
		String_t* L_6;
		L_6 = ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		// hash = hash * 31 + QualifiedTypeName.GetHashCode();
		String_t* L_8;
		L_8 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		// hash = hash * 31 + Aliases.GetHashCode();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10;
		L_10 = ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)17), (int32_t)((int32_t)31))), (int32_t)L_1)), (int32_t)((int32_t)31))), (int32_t)L_3)), (int32_t)((int32_t)31))), (int32_t)L_5)), (int32_t)((int32_t)31))), (int32_t)L_7)), (int32_t)((int32_t)31))), (int32_t)L_9)), (int32_t)((int32_t)31))), (int32_t)L_11));
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m96939A8FE95E2731BD6CFF7A56B83541D330017C (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(this.InternalName, other.InternalName) && Equals(this.QualifiedName, other.QualifiedName) &&
		//        Equals(this.EntityType, other.EntityType) && this.Aliases.SequenceEqual(other.Aliases) &&
		//        Equals(this.TypeAssembly, other.TypeAssembly) &&
		//        Equals(this.QualifiedTypeName, other.QualifiedTypeName);
		String_t* L_0;
		L_0 = ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestParameter_get_EntityType_m81AB8436743CCEF553389528707ED7E19DFB1CCD(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_9 = ___other0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestParameter_get_EntityType_m81AB8436743CCEF553389528707ED7E19DFB1CCD(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12;
		L_12 = ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_13 = ___other0;
		NullCheck(L_13);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14;
		L_14 = ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907(L_12, L_14, /*hidden argument*/Enumerable_SequenceEqual_TisString_t_m73CCC76870B381F0CA539C048AED40CACB64A907_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_17 = ___other0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_20;
		L_20 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(__this, /*hidden argument*/NULL);
		ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * L_21 = ___other0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_20, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0071:
	{
		return (bool)0;
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
// System.Void Meta.Conduit.ParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_Populate_m6FB8B2EEAF14D46471531DB5C80D9DFFC40030DF (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___actualParameters0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___parameterToRoleMap1, const RuntimeMethod* method)
{
	{
		// this.ActualParameters = actualParameters;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___actualParameters0;
		__this->set_ActualParameters_0(L_0);
		// this.parameterToRoleMap = parameterToRoleMap;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___parameterToRoleMap1;
		__this->set_parameterToRoleMap_1(L_1);
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::ContainsParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_ContainsParameter_m0AF36AF4CBCA086865FC5F8A97581AF30BD453D6 (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (ActualParameters.ContainsKey(parameter.Name) &&
		//         this.parameterToRoleMap.ContainsKey(parameter.Name) &&
		//         ActualParameters[parameter.Name].GetType() == parameter.ParameterType) ||
		//        this.SupportedSpecializedParameter(parameter);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = __this->get_ActualParameters_0();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_1 = ___parameter0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = __this->get_parameterToRoleMap_1();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_5 = ___parameter0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8(L_4, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = __this->get_ActualParameters_0();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_9 = ___parameter0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_9);
		NullCheck(L_8);
		RuntimeObject * L_11;
		L_11 = Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D(L_8, L_10, /*hidden argument*/Dictionary_2_get_Item_mEC67A37ACAAB1DBAB504B54516BAD1808CB80D5D_RuntimeMethod_var);
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_11, /*hidden argument*/NULL);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = ___parameter0;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0051;
		}
	}

IL_0049:
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_16 = ___parameter0;
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_16);
		return L_17;
	}

IL_0051:
	{
		return (bool)1;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetParameterValue(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterProvider_GetParameterValue_m959C86C4975F94621DED8EB4F058D9A52FAE5632 (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD84CD5B05EE35122D0958E21D58C818797EC8189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// var formalParameterName = formalParameter.Name;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___formalParameter0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (!this.ActualParameters.ContainsKey(formalParameterName))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = __this->get_ActualParameters_0();
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m3C1B28325435E61FFAD431E314EABF915B79A55E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		// if (!this.parameterToRoleMap.ContainsKey(formalParameterName))
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = __this->get_parameterToRoleMap_1();
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m608577A5AF450760A657AA9EE6A096E5A59DA1B8_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError($"Parameter {formalParameterName} is missing");
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B, L_8, _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_9, /*hidden argument*/NULL);
		// return false;
		bool L_10 = ((bool)0);
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_003f:
	{
		// formalParameterName = this.parameterToRoleMap[formalParameterName];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_12 = __this->get_parameterToRoleMap_1();
		String_t* L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_004c:
	{
		// if (this.ActualParameters.TryGetValue(formalParameterName, out var parameterValue))
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = __this->get_ActualParameters_0();
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_mD84CD5B05EE35122D0958E21D58C818797EC8189(L_15, L_16, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mD84CD5B05EE35122D0958E21D58C818797EC8189_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00ee;
		}
	}
	{
		// if (formalParameter.ParameterType == typeof(string))
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_18 = ___formalParameter0;
		NullCheck(L_18);
		Type_t * L_19;
		L_19 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_18);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// return parameterValue;
		RuntimeObject * L_23 = V_1;
		return L_23;
	}

IL_0078:
	{
		// else if (formalParameter.ParameterType.IsEnum)
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_24 = ___formalParameter0;
		NullCheck(L_24);
		Type_t * L_25;
		L_25 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_24);
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(72 /* System.Boolean System.Type::get_IsEnum() */, L_25);
		if (!L_26)
		{
			goto IL_00bb;
		}
	}

IL_0085:
	try
	{// begin try (depth: 1)
		// return Enum.Parse(formalParameter.ParameterType, parameterValue.ToString(), true);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_27 = ___formalParameter0;
		NullCheck(L_27);
		Type_t * L_28;
		L_28 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_27);
		RuntimeObject * L_29 = V_1;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_31;
		L_31 = Enum_Parse_m42052064519239A11D605CD696EC0FD90A0FB039(L_28, L_30, (bool)1, /*hidden argument*/NULL);
		V_2 = L_31;
		goto IL_0106;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009a;
		}
		throw e;
	}

CATCH_009a:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// var error =
		//     $"Failed to cast {parameterValue} to enum of type {formalParameter.ParameterType}. {e}";
		RuntimeObject * L_32 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_33 = ___formalParameter0;
		NullCheck(L_33);
		Type_t * L_34;
		L_34 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		Exception_t * L_35 = V_3;
		String_t* L_36;
		L_36 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE)), L_32, L_34, L_35, /*hidden argument*/NULL);
		// Debug.LogError(error);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_36, /*hidden argument*/NULL);
		// return false;
		bool L_37 = ((bool)0);
		RuntimeObject * L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)), &L_37);
		V_2 = L_38;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00bb:
	{
	}

IL_00bc:
	try
	{// begin try (depth: 1)
		// return Convert.ChangeType(parameterValue, formalParameter.ParameterType);
		RuntimeObject * L_39 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_40 = ___formalParameter0;
		NullCheck(L_40);
		Type_t * L_41;
		L_41 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_40);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_42;
		L_42 = Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4(L_39, L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		goto IL_0106;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cb;
		}
		throw e;
	}

CATCH_00cb:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// var error = $"Failed to convert {parameterValue} to {formalParameter.ParameterType}. {e}";
		RuntimeObject * L_43 = V_1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_44 = ___formalParameter0;
		NullCheck(L_44);
		Type_t * L_45;
		L_45 = VirtualFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_44);
		Exception_t * L_46 = V_4;
		String_t* L_47;
		L_47 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral022184FDCAF79E398879AD81666844068AE208D4)), L_43, L_45, L_46, /*hidden argument*/NULL);
		// Debug.LogError(error);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_47, /*hidden argument*/NULL);
		// return false;
		bool L_48 = ((bool)0);
		RuntimeObject * L_49 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)), &L_48);
		V_2 = L_49;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	}// end catch (depth: 1)

IL_00ee:
	{
		// else if (SupportedSpecializedParameter(formalParameter))
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_50 = ___formalParameter0;
		bool L_51;
		L_51 = VirtualFuncInvoker1< bool, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_50);
		if (!L_51)
		{
			goto IL_00ff;
		}
	}
	{
		// return this.GetSpecializedParameter(formalParameter);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_52 = ___formalParameter0;
		RuntimeObject * L_53;
		L_53 = VirtualFuncInvoker1< RuntimeObject *, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * >::Invoke(8 /* System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_52);
		return L_53;
	}

IL_00ff:
	{
		// return false;
		bool L_54 = ((bool)0);
		RuntimeObject * L_55 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_54);
		return L_55;
	}

IL_0106:
	{
		// }
		RuntimeObject * L_56 = V_2;
		return L_56;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_SupportedSpecializedParameter_m2C4939D50A2E55057D231ECE4D3256E09A9A33DD (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterProvider_GetSpecializedParameter_m15B3A52779855EE595B93B67DE378FBA230FB173 (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___formalParameter0, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException();
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterProvider_GetSpecializedParameter_m15B3A52779855EE595B93B67DE378FBA230FB173_RuntimeMethod_var)));
	}
}
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_m211413BD994E78B317F2ED171979EF4F5A65DC34 (ParameterProvider_t348E5C3224800D0B24F33AAF3DD647137F7DF075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, object> ActualParameters = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		__this->set_ActualParameters_0(L_0);
		// private Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_parameterToRoleMap_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m789BBC74D08321457B965AD2864A292341D5252C (U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<ResolveInvocationContexts>b__0(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m37DE89F456D6FCB1050B5C9840713060219A2A13 (U3CU3Ec__DisplayClass7_0_t2AB28C613312013A1F749C11303C7F8E58C14083 * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___context0, const RuntimeMethod* method)
{
	{
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence)).ToList();
		ConduitDispatcher_tE77E707872ABD5B10E15927B12BCFF47806E1EBE * L_0 = __this->get_U3CU3E4__this_0();
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_1 = ___context0;
		float L_2 = __this->get_confidence_1();
		NullCheck(L_0);
		bool L_3;
		L_3 = ConduitDispatcher_CompatibleInvocationContext_m7D075E0002B332048E710CBC4971871A91447B4D(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Meta.Conduit.Manifest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3FC46E73E5F4BB043DE7B55532A076777A22D298 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * L_0 = (U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 *)il2cpp_codegen_object_new(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m22E740F3F6E74D906E417FF00CE54177E34775DF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22E740F3F6E74D906E417FF00CE54177E34775DF (U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveActionsU3Eb__22_0_m2BBC68834131EE2892DAC4149C91B7BD99B2229D (U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * __this, List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * ___invocationContext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t7FB3454CE4EE92E17D102985369C73442BFD35F4 * L_0 = ___invocationContext0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_inline(L_0, /*hidden argument*/List_1_get_Count_mC5CD316076D605DA918BEB9912CED89B8C434454_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE2C034ED583DC200AD1D03512AFBE23B9819B8E9 (U3CU3Ec_t561E7C0B5EC7A599570F2B3D34C546D0E77020F3 * __this, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___one0, InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * ___two1, const RuntimeMethod* method)
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_0 = ___two1;
		NullCheck(L_0);
		MethodInfo_t * L_1;
		L_1 = InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * L_3 = ___one0;
		NullCheck(L_3);
		MethodInfo_t * L_4;
		L_4 = InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m70B643A5059B62F9F9A73E4D45888A35AEB17B69_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Intent { get; protected set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m3E7F9D513614E47B402C40073590DFE94AB93572_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_m3A9C0CE57A55161A5482BDC079EE44BE2C309224_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set;}
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_AllowPartial_m0EBC171B81E7ED29CCB0F80168F628667D3B2874_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AllowPartial { get; protected set;}
		bool L_0 = ___value0;
		__this->set_U3CAllowPartialU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * Manifest_get_Actions_m0E05FF96C6F8A893CFC6A5AB7E3984DC260964FF_inline (Manifest_t227A0E7BEC3A5B54DB0F21CAA978073E72FFC207 * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_tA8E313D699FDCBC809FBAB756253892B3E8D2603 * L_0 = __this->get_U3CActionsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * ManifestAction_get_Parameters_m5F82EED68E04CA316D2F054600E99A66D6E79642_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tB3AB2CE7F2858123E10FFA38AE1A94F794DBD98E * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mFEADB057861621283ED61CF169A967621EF950C6_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->get_U3CInternalNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m6EA02B5BC2251F20CC6ECB799049E66E3A5D6B21_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t * InvocationContext_get_MethodInfo_mB549B7787A3807135EE4E28D505CD968DBD6DD67_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = __this->get_U3CMethodInfoU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m83FB43B20BCBEA5706CF500CC925BD4BD9A3BF8B_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mB7143665F0187E435CBE8019F28C00903A693C91_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * InvocationContext_get_Type_m502B72A306E24A3C8A4F96B365D8A8F0272221A7_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_m9440C6E51560991A44F8FE0EEB3AF507721EC0B9_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_m023483681C2095CD787ACE8C883EACD3873DE129_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->get_U3CAssemblyU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m5B0242461CE121F189C1F1305A1C52A8E32BFCD7_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->get_U3CQualifiedTypeNameU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_m0E2B37329F25B9FB5EB02A9F1428CEA20E6F1045_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->get_U3CTypeAssemblyU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m12257876BD547812A42618D8B0F0798142057A95_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type Type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m1BE8E1E89CAFB664DE1D02B40E4FBFABFA95B4E9_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, MethodInfo_t * ___value0, const RuntimeMethod* method)
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t * L_0 = ___value0;
		__this->set_U3CMethodInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_m2082AEF22B536905E53473AEBD9911982F70B5B7_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->get_U3CMinConfidenceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m850248D376B32A8F7409E0D155E485EC0A33F264_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___value0;
		__this->set_U3CMinConfidenceU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mD23F49DF55E0DF599B4D95D35C31B51AEB75C170_inline (ConduitActionAttribute_t82AE6D63651AC02BE1A6D0B12E717368F998A6BA * __this, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; protected set;}
		float L_0 = __this->get_U3CMaxConfidenceU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m1B8475772FF0A3FD21DF84F157C61D58055D6CB5_inline (InvocationContext_tFF8CC5DC637B7870E9F39F2FDE46E6487294AF24 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___value0;
		__this->set_U3CMaxConfidenceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_m57D766E5E31B0155E1A42B13C8D08EE908C76E54_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestAction_get_Aliases_m37FE2AC48FC77DEE0B95A9E6BAF610FCD3136B3C_inline (ManifestAction_tDCD781AC59AB9E8ACEDF12630E079301E009303F * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m3C0E254E7AC904FF3F4AE18EBAA67A591146282C_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mC69ABAA67592402723D205772980433078B09A1D_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m83029A85B8865F1F9062648E50211A35F6E74693_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestEntity_get_Values_m1CD90EF3AAB917147E440269BB2363464A7CF573_inline (ManifestEntity_t355A3738233EC1AEF805E6D28EF5206B0D4E4DC8 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CValuesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ManifestParameter_get_Aliases_m59C1F4BA1A65DC04EBBD020F41EE846814E226B1_inline (ManifestParameter_t28EC1BE15F50AFFE99DFC71BBD8E599E6FA9FF36 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> Aliases { get; set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CAliasesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
