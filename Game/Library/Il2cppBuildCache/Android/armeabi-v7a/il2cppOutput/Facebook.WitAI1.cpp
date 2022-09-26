#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2;
// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20;
// System.Func`2<Facebook.WitAi.WitRequest/QueryParam,System.String>
struct Func_2_t0F02659E6DFE9F0DAA5681DA8C8E7365FA9BF66F;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>
struct HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.WitRequest>
struct IEnumerable_1_t48AF4F06B8F55AD4419E0CB18D869DA795D513BE;
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>
struct IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5;
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>
struct IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t7527D4AFC49170E0807BE8D3DC2CD791288BB98E;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<Facebook.WitAi.WitRequest>
struct IEqualityComparer_1_tA4C826F4CE726803D31A6E33AB47A3F73B346F5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword>
struct List_1_tA12CE06EE01897BDBE418AE92C926A6B0310348F;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653;
// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A;
// System.Predicate`1<Facebook.WitAi.VoiceService>
struct Predicate_1_t5DC9A3394617676B0470B7D96240DD9EC6F65504;
// Facebook.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Action>
struct Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Facebook.WitAi.Lib.WitResponseNode>[]
struct EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Component>[]
struct SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<Facebook.WitAi.WitRequest>[]
struct SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider[]
struct IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107;
// Facebook.WitAi.Events.IWitByteDataReadyHandler[]
struct IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180;
// Facebook.WitAi.Events.IWitByteDataSentHandler[]
struct IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Facebook.WitAi.Lib.WitResponseNode[]
struct WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968;
// Facebook.WitAi.Data.Traits.WitTraitValue[]
struct WitTraitValueU5BU5D_t6645FC7117C18BAD9CDE2CFCF0FF28C0CC014D4A;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// Facebook.WitAi.WitRequest/QueryParam[]
struct QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Facebook.WitAi.Data.AudioBuffer
struct AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578;
// Facebook.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90;
// Facebook.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t448C959599E4AF04F244CB8123ED85B68ED0CA95;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Net.CookieContainer
struct CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Facebook.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Facebook.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_tB21B390B843413C04CF1B3C4771E1324FB4EC6F6;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_tE7C7DA85A6198E9AD827D8E63B458519DE172B5A;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t24D449BEAF4F53674904932471F6D910695EEBC1;
// Facebook.WitAi.IRequest
struct IRequest_t24B46254E38326238D6A127740FA8CCB413083A7;
// Facebook.WitAi.Interfaces.ITranscriptionProvider
struct ITranscriptionProvider_tC607BE81017791B4ED85025471847899CE24E30C;
// Facebook.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// Facebook.WitAi.IWitRuntimeConfigProvider
struct IWitRuntimeConfigProvider_tDCB7116C69FB4BA12B8EDBE3E51AAFB0F526BB65;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Facebook.WitAi.Lib.Mic
struct Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4;
// Facebook.WitAi.Lib.MicBase
struct MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D;
// Facebook.WitAi.VoiceService
struct VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;
// Facebook.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6;
// Facebook.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631;
// Facebook.WitAi.Configuration.WitConfigurationData
struct WitConfigurationData_t6FF393A3DA22F0BABBB357F9B680171B8283FE6C;
// Facebook.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5;
// Facebook.WitAi.Events.WitErrorEvent
struct WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571;
// Facebook.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B;
// Facebook.WitAi.WitRequest
struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622;
// Facebook.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82;
// Facebook.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F;
// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015;
// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55;
// Facebook.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4;
// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t1B7E91966437B0E0F68466556503966638A5F4CA;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F;
// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B;
// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24;
// Facebook.WitAi.WitService
struct WitService_t860537723698CF0607466342346F3B1FECA68DCB;
// Facebook.WitAi.Data.Traits.WitTrait
struct WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641;
// Facebook.WitAi.Data.Traits.WitTraitValue
struct WitTraitValue_t283B23609BB8093C8C7BE5A4215169213983A941;
// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E;
// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA;
// Facebook.WitAi.Data.WitValue
struct WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5;
// Facebook.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28
struct U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605;
// Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675;
// Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61
struct U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887;
// Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29
struct U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Facebook.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;
// Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t9301325AFDDACDF1034774CFDED70841ED9ECD9F;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t30E2DC0C9FA5944AD27B1015AA53AD4382860A48;
// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t895A64160C8D85FAA7F7D4D7B634DDD6B78E79ED;
// Facebook.WitAi.WitRequest/<>c
struct U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB;
// Facebook.WitAi.WitRequest/<>c__DisplayClass96_0
struct U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D;
// Facebook.WitAi.WitRequest/<>c__DisplayClass96_1
struct U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987;
// Facebook.WitAi.WitRequest/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7;
// Facebook.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C;
// Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109
struct U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B;
// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF;
// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0;
// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955;
// Facebook.WitAi.WitRequest/QueryParam
struct QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB;
// Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E;
// Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC;
// Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D;
// Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C;
// Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632;
// Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE;
// Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878;
// Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62
struct U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592;
// Facebook.WitAi.WitService/<PerformDequeue>d__70
struct U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E;
// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9
struct U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_tB21B390B843413C04CF1B3C4771E1324FB4EC6F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral81F9D4AEA3A13F621FBD64775208003684DE1CFF;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCACCB5BC27D400E7BBB07E7B7951DAAEC4DE633E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mE42C1DE41707C063A34DCDE668BF0285FB8F39BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisType_t_m42D7F7B4D651EFBDB26F9BDD0C313092C556F051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m465A72D24AB7AA5B873D3CE4FF153E2DA0DDF759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m58481EC50DA1855C2B8C35BC8F9F806B484D9208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9E3842108799453EADF7BACEEECEC96D781D9E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m8ADD700B3F1C4B9A2B6929529D435A47381CB66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m69AF7C76835F873B7C5558F1E23F2242AB01098B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mB32807A759142C03EDF74FB6A2FC1B4193A3D7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPerformMainThreadCallbacksU3Ed__109_System_Collections_IEnumerator_Reset_mA7090BCDB5EBFC128B781CC3172C5E1F288FCD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadRawAudioU3Ed__29_System_Collections_IEnumerator_Reset_m9FD28FE0BA0E1B47A3A3E4640EC3D3DD15560DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadRawAudioU3Ed__61_System_Collections_IEnumerator_Reset_mFDED59E5F076274A3592C9FD323419B3A84C44D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_m53D708E16AF43B7E4D3D8E5A3973E59939596C34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____tail_3)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__tail_3() const { return ____tail_3; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE, ____head_4)); }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * get__head_4() const { return ____head_4; }
	inline Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t962D3493F0AD0E669B038204244968DD5DBC7F44 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
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


// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* ___entries_1;
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
	KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___entries_1)); }
	inline EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8C8ADFB52E978C287B07F3D57452756F1E4F68DB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___keys_7)); }
	inline KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE4FB49928AF18F98422CE926AB5A601C2B50C342 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ___values_8)); }
	inline ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4435A3A10B7172241A24AE4ED8102D81102B2753 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____slots_8)); }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t88027C33AD2C5CAC7A203202CB3A22EB81EFFF9B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>
struct HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____slots_8)); }
	inline SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3E7B052D2F10FD52CAEEBED962CF816827F679F7* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____items_1)); }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* get__items_1() const { return ____items_1; }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653_StaticFields, ____emptyArray_5)); }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WitResponseNodeU5BU5D_t42E4097A09B7F711382FC005993E3F945A419968* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A  : public RuntimeObject
{
public:
	// System.Int64 Facebook.WitAi.Data.RingBuffer`1/Marker::bufferDataIndex
	int64_t ___bufferDataIndex_0;
	// System.Int32 Facebook.WitAi.Data.RingBuffer`1/Marker::index
	int32_t ___index_1;
	// Facebook.WitAi.Data.RingBuffer`1<T> Facebook.WitAi.Data.RingBuffer`1/Marker::ringBuffer
	RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * ___ringBuffer_2;

public:
	inline static int32_t get_offset_of_bufferDataIndex_0() { return static_cast<int32_t>(offsetof(Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A, ___bufferDataIndex_0)); }
	inline int64_t get_bufferDataIndex_0() const { return ___bufferDataIndex_0; }
	inline int64_t* get_address_of_bufferDataIndex_0() { return &___bufferDataIndex_0; }
	inline void set_bufferDataIndex_0(int64_t value)
	{
		___bufferDataIndex_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_ringBuffer_2() { return static_cast<int32_t>(offsetof(Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A, ___ringBuffer_2)); }
	inline RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * get_ringBuffer_2() const { return ___ringBuffer_2; }
	inline RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA ** get_address_of_ringBuffer_2() { return &___ringBuffer_2; }
	inline void set_ringBuffer_2(RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * value)
	{
		___ringBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringBuffer_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Facebook.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Data.AudioBufferConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_0;
	// System.Single Facebook.WitAi.Data.AudioBufferConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_1;

public:
	inline static int32_t get_offset_of_sampleLengthInMs_0() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90, ___sampleLengthInMs_0)); }
	inline int32_t get_sampleLengthInMs_0() const { return ___sampleLengthInMs_0; }
	inline int32_t* get_address_of_sampleLengthInMs_0() { return &___sampleLengthInMs_0; }
	inline void set_sampleLengthInMs_0(int32_t value)
	{
		___sampleLengthInMs_0 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_1() { return static_cast<int32_t>(offsetof(AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90, ___micBufferLengthInSeconds_1)); }
	inline float get_micBufferLengthInSeconds_1() const { return ___micBufferLengthInSeconds_1; }
	inline float* get_address_of_micBufferLengthInSeconds_1() { return &___micBufferLengthInSeconds_1; }
	inline void set_micBufferLengthInSeconds_1(float value)
	{
		___micBufferLengthInSeconds_1 = value;
	}
};


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_8;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_9;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_10;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_11;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_12;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * ____keys_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_14;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_15;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_16;

public:
	inline static int32_t get_offset_of__readOnly_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_8)); }
	inline bool get__readOnly_8() const { return ____readOnly_8; }
	inline bool* get_address_of__readOnly_8() { return &____readOnly_8; }
	inline void set__readOnly_8(bool value)
	{
		____readOnly_8 = value;
	}

	inline static int32_t get_offset_of__entriesArray_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_9)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_9() const { return ____entriesArray_9; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_9() { return &____entriesArray_9; }
	inline void set__entriesArray_9(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_9), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_10() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_10)); }
	inline RuntimeObject* get__keyComparer_10() const { return ____keyComparer_10; }
	inline RuntimeObject** get_address_of__keyComparer_10() { return &____keyComparer_10; }
	inline void set__keyComparer_10(RuntimeObject* value)
	{
		____keyComparer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_10), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_11() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_11)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_11() const { return ____entriesTable_11; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_11() { return &____entriesTable_11; }
	inline void set__entriesTable_11(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_11), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_12() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_12)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_12() const { return ____nullKeyEntry_12; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_12() { return &____nullKeyEntry_12; }
	inline void set__nullKeyEntry_12(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_12), (void*)value);
	}

	inline static int32_t get_offset_of__keys_13() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keys_13)); }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * get__keys_13() const { return ____keys_13; }
	inline KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 ** get_address_of__keys_13() { return &____keys_13; }
	inline void set__keys_13(KeysCollection_t60228730FB4ED80EC56C3582716F0195A5BDA869 * value)
	{
		____keys_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_13), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_14() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_14() const { return ____serializationInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_14() { return &____serializationInfo_14; }
	inline void set__serializationInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of__version_15() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_15)); }
	inline int32_t get__version_15() const { return ____version_15; }
	inline int32_t* get_address_of__version_15() { return &____version_15; }
	inline void set__version_15(int32_t value)
	{
		____version_15 = value;
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_17;

public:
	inline static int32_t get_offset_of_defaultComparer_17() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_17)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_17() const { return ___defaultComparer_17; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_17() { return &___defaultComparer_17; }
	inline void set_defaultComparer_17(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_17), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.UriBuilder
struct UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;

public:
	inline static int32_t get_offset_of__changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____changed_0)); }
	inline bool get__changed_0() const { return ____changed_0; }
	inline bool* get_address_of__changed_0() { return &____changed_0; }
	inline void set__changed_0(bool value)
	{
		____changed_0 = value;
	}

	inline static int32_t get_offset_of__fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____fragment_1)); }
	inline String_t* get__fragment_1() const { return ____fragment_1; }
	inline String_t** get_address_of__fragment_1() { return &____fragment_1; }
	inline void set__fragment_1(String_t* value)
	{
		____fragment_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragment_1), (void*)value);
	}

	inline static int32_t get_offset_of__host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____host_2)); }
	inline String_t* get__host_2() const { return ____host_2; }
	inline String_t** get_address_of__host_2() { return &____host_2; }
	inline void set__host_2(String_t* value)
	{
		____host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____host_2), (void*)value);
	}

	inline static int32_t get_offset_of__password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____password_3)); }
	inline String_t* get__password_3() const { return ____password_3; }
	inline String_t** get_address_of__password_3() { return &____password_3; }
	inline void set__password_3(String_t* value)
	{
		____password_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_3), (void*)value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_4), (void*)value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}

	inline static int32_t get_offset_of__query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____query_6)); }
	inline String_t* get__query_6() const { return ____query_6; }
	inline String_t** get_address_of__query_6() { return &____query_6; }
	inline void set__query_6(String_t* value)
	{
		____query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____query_6), (void*)value);
	}

	inline static int32_t get_offset_of__scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____scheme_7)); }
	inline String_t* get__scheme_7() const { return ____scheme_7; }
	inline String_t** get_address_of__scheme_7() { return &____scheme_7; }
	inline void set__scheme_7(String_t* value)
	{
		____scheme_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scheme_7), (void*)value);
	}

	inline static int32_t get_offset_of__schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____schemeDelimiter_8)); }
	inline String_t* get__schemeDelimiter_8() const { return ____schemeDelimiter_8; }
	inline String_t** get_address_of__schemeDelimiter_8() { return &____schemeDelimiter_8; }
	inline void set__schemeDelimiter_8(String_t* value)
	{
		____schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemeDelimiter_8), (void*)value);
	}

	inline static int32_t get_offset_of__uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____uri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_9() const { return ____uri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_9() { return &____uri_9; }
	inline void set__uri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_9), (void*)value);
	}

	inline static int32_t get_offset_of__username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42, ____username_10)); }
	inline String_t* get__username_10() const { return ____username_10; }
	inline String_t** get_address_of__username_10() { return &____username_10; }
	inline void set__username_10(String_t* value)
	{
		____username_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____username_10), (void*)value);
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

// Facebook.WitAi.Events.VoiceEvents
struct VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D  : public RuntimeObject
{
public:
	// Facebook.WitAi.Events.WitResponseEvent Facebook.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * ___OnResponse_0;
	// Facebook.WitAi.Events.WitErrorEvent Facebook.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * ___OnError_1;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborting_2;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnAborted_3;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnRequestCompleted_4;
	// Facebook.WitAi.Events.WitMicLevelChangedEvent Facebook.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * ___OnMicLevelChanged_5;
	// Facebook.WitAi.Events.WitRequestCreatedEvent Facebook.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * ___OnRequestCreated_6;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStartListening_7;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListening_8;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToInactivity_9;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToTimeout_10;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnStoppedListeningDueToDeactivation_11;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMicDataSent_12;
	// UnityEngine.Events.UnityEvent Facebook.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMinimumWakeThresholdHit_13;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * ___onPartialTranscription_14;
	// Facebook.WitAi.Events.WitTranscriptionEvent Facebook.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * ___onFullTranscription_15;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * ___OnByteDataReady_16;
	// Facebook.WitAi.Events.WitByteDataEvent Facebook.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * ___OnByteDataSent_17;

public:
	inline static int32_t get_offset_of_OnResponse_0() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnResponse_0)); }
	inline WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * get_OnResponse_0() const { return ___OnResponse_0; }
	inline WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 ** get_address_of_OnResponse_0() { return &___OnResponse_0; }
	inline void set_OnResponse_0(WitResponseEvent_tB6FF10625816530C0B3B946E94F9701FF0FAC6B4 * value)
	{
		___OnResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResponse_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_1() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnError_1)); }
	inline WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * get_OnError_1() const { return ___OnError_1; }
	inline WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 ** get_address_of_OnError_1() { return &___OnError_1; }
	inline void set_OnError_1(WitErrorEvent_t75A2B26145BEFDEC6A91E014BBA329E35862E571 * value)
	{
		___OnError_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborting_2() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnAborting_2)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborting_2() const { return ___OnAborting_2; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborting_2() { return &___OnAborting_2; }
	inline void set_OnAborting_2(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborting_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborting_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAborted_3() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnAborted_3)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnAborted_3() const { return ___OnAborted_3; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnAborted_3() { return &___OnAborted_3; }
	inline void set_OnAborted_3(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnAborted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAborted_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCompleted_4() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnRequestCompleted_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnRequestCompleted_4() const { return ___OnRequestCompleted_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnRequestCompleted_4() { return &___OnRequestCompleted_4; }
	inline void set_OnRequestCompleted_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnRequestCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicLevelChanged_5() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMicLevelChanged_5)); }
	inline WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * get_OnMicLevelChanged_5() const { return ___OnMicLevelChanged_5; }
	inline WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B ** get_address_of_OnMicLevelChanged_5() { return &___OnMicLevelChanged_5; }
	inline void set_OnMicLevelChanged_5(WitMicLevelChangedEvent_t8B4131C6B21D3887BC9192ABC8DE29B97197480B * value)
	{
		___OnMicLevelChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicLevelChanged_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnRequestCreated_6() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnRequestCreated_6)); }
	inline WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * get_OnRequestCreated_6() const { return ___OnRequestCreated_6; }
	inline WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 ** get_address_of_OnRequestCreated_6() { return &___OnRequestCreated_6; }
	inline void set_OnRequestCreated_6(WitRequestCreatedEvent_tC0FA819B0DDD5D9FBDB63FF11D5FEBC287C4BF82 * value)
	{
		___OnRequestCreated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRequestCreated_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartListening_7() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStartListening_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStartListening_7() const { return ___OnStartListening_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStartListening_7() { return &___OnStartListening_7; }
	inline void set_OnStartListening_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStartListening_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartListening_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListening_8() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListening_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListening_8() const { return ___OnStoppedListening_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListening_8() { return &___OnStoppedListening_8; }
	inline void set_OnStoppedListening_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListening_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListening_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToInactivity_9() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToInactivity_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToInactivity_9() const { return ___OnStoppedListeningDueToInactivity_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToInactivity_9() { return &___OnStoppedListeningDueToInactivity_9; }
	inline void set_OnStoppedListeningDueToInactivity_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToInactivity_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToInactivity_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToTimeout_10() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToTimeout_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToTimeout_10() const { return ___OnStoppedListeningDueToTimeout_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToTimeout_10() { return &___OnStoppedListeningDueToTimeout_10; }
	inline void set_OnStoppedListeningDueToTimeout_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToTimeout_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToTimeout_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedListeningDueToDeactivation_11() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnStoppedListeningDueToDeactivation_11)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnStoppedListeningDueToDeactivation_11() const { return ___OnStoppedListeningDueToDeactivation_11; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnStoppedListeningDueToDeactivation_11() { return &___OnStoppedListeningDueToDeactivation_11; }
	inline void set_OnStoppedListeningDueToDeactivation_11(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnStoppedListeningDueToDeactivation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedListeningDueToDeactivation_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnMicDataSent_12() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMicDataSent_12)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMicDataSent_12() const { return ___OnMicDataSent_12; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMicDataSent_12() { return &___OnMicDataSent_12; }
	inline void set_OnMicDataSent_12(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMicDataSent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMicDataSent_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnMinimumWakeThresholdHit_13() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnMinimumWakeThresholdHit_13)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMinimumWakeThresholdHit_13() const { return ___OnMinimumWakeThresholdHit_13; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMinimumWakeThresholdHit_13() { return &___OnMinimumWakeThresholdHit_13; }
	inline void set_OnMinimumWakeThresholdHit_13(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMinimumWakeThresholdHit_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMinimumWakeThresholdHit_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_14() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___onPartialTranscription_14)); }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * get_onPartialTranscription_14() const { return ___onPartialTranscription_14; }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E ** get_address_of_onPartialTranscription_14() { return &___onPartialTranscription_14; }
	inline void set_onPartialTranscription_14(WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * value)
	{
		___onPartialTranscription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_14), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_15() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___onFullTranscription_15)); }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * get_onFullTranscription_15() const { return ___onFullTranscription_15; }
	inline WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E ** get_address_of_onFullTranscription_15() { return &___onFullTranscription_15; }
	inline void set_onFullTranscription_15(WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * value)
	{
		___onFullTranscription_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataReady_16() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnByteDataReady_16)); }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * get_OnByteDataReady_16() const { return ___OnByteDataReady_16; }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 ** get_address_of_OnByteDataReady_16() { return &___OnByteDataReady_16; }
	inline void set_OnByteDataReady_16(WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * value)
	{
		___OnByteDataReady_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataReady_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnByteDataSent_17() { return static_cast<int32_t>(offsetof(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D, ___OnByteDataSent_17)); }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * get_OnByteDataSent_17() const { return ___OnByteDataSent_17; }
	inline WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 ** get_address_of_OnByteDataSent_17() { return &___OnByteDataSent_17; }
	inline void set_OnByteDataSent_17(WitByteDataEvent_tD413F19EC04F5167EE0767133C3770C049B0F7F6 * value)
	{
		___OnByteDataSent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnByteDataSent_17), (void*)value);
	}
};


// Facebook.WitAi.Configuration.WitConfigurationData
struct WitConfigurationData_t6FF393A3DA22F0BABBB357F9B680171B8283FE6C  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitConfigurationData::witConfiguration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ___witConfiguration_0;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitConfigurationData_t6FF393A3DA22F0BABBB357F9B680171B8283FE6C, ___witConfiguration_0)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Facebook.WitAi.Data.Entities.WitEntityKeyword> Facebook.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_tA12CE06EE01897BDBE418AE92C926A6B0310348F * ___keywords_1;

public:
	inline static int32_t get_offset_of_entity_0() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5, ___entity_0)); }
	inline String_t* get_entity_0() const { return ___entity_0; }
	inline String_t** get_address_of_entity_0() { return &___entity_0; }
	inline void set_entity_0(String_t* value)
	{
		___entity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_0), (void*)value);
	}

	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5, ___keywords_1)); }
	inline List_1_tA12CE06EE01897BDBE418AE92C926A6B0310348F * get_keywords_1() const { return ___keywords_1; }
	inline List_1_tA12CE06EE01897BDBE418AE92C926A6B0310348F ** get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(List_1_tA12CE06EE01897BDBE418AE92C926A6B0310348F * value)
	{
		___keywords_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keywords_1), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F  : public RuntimeObject
{
public:

public:
};


// Facebook.WitAi.WitResponseReference
struct WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B  : public RuntimeObject
{
public:
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResponseReference::child
	WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * ___child_0;
	// System.String Facebook.WitAi.WitResponseReference::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_child_0() { return static_cast<int32_t>(offsetof(WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B, ___child_0)); }
	inline WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * get_child_0() const { return ___child_0; }
	inline WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B ** get_address_of_child_0() { return &___child_0; }
	inline void set_child_0(WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * value)
	{
		___child_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// Facebook.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ___witConfiguration_0;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Facebook.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Facebook.WitAi.Interfaces.CustomTranscriptionProvider Facebook.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * ___customTranscriptionProvider_10;
	// System.Boolean Facebook.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Facebook.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;

public:
	inline static int32_t get_offset_of_witConfiguration_0() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___witConfiguration_0)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get_witConfiguration_0() const { return ___witConfiguration_0; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of_witConfiguration_0() { return &___witConfiguration_0; }
	inline void set_witConfiguration_0(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		___witConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___witConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_minKeepAliveVolume_1() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minKeepAliveVolume_1)); }
	inline float get_minKeepAliveVolume_1() const { return ___minKeepAliveVolume_1; }
	inline float* get_address_of_minKeepAliveVolume_1() { return &___minKeepAliveVolume_1; }
	inline void set_minKeepAliveVolume_1(float value)
	{
		___minKeepAliveVolume_1 = value;
	}

	inline static int32_t get_offset_of_minKeepAliveTimeInSeconds_2() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minKeepAliveTimeInSeconds_2)); }
	inline float get_minKeepAliveTimeInSeconds_2() const { return ___minKeepAliveTimeInSeconds_2; }
	inline float* get_address_of_minKeepAliveTimeInSeconds_2() { return &___minKeepAliveTimeInSeconds_2; }
	inline void set_minKeepAliveTimeInSeconds_2(float value)
	{
		___minKeepAliveTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_minTranscriptionKeepAliveTimeInSeconds_3() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___minTranscriptionKeepAliveTimeInSeconds_3)); }
	inline float get_minTranscriptionKeepAliveTimeInSeconds_3() const { return ___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline float* get_address_of_minTranscriptionKeepAliveTimeInSeconds_3() { return &___minTranscriptionKeepAliveTimeInSeconds_3; }
	inline void set_minTranscriptionKeepAliveTimeInSeconds_3(float value)
	{
		___minTranscriptionKeepAliveTimeInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_maxRecordingTime_4() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___maxRecordingTime_4)); }
	inline float get_maxRecordingTime_4() const { return ___maxRecordingTime_4; }
	inline float* get_address_of_maxRecordingTime_4() { return &___maxRecordingTime_4; }
	inline void set_maxRecordingTime_4(float value)
	{
		___maxRecordingTime_4 = value;
	}

	inline static int32_t get_offset_of_soundWakeThreshold_5() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___soundWakeThreshold_5)); }
	inline float get_soundWakeThreshold_5() const { return ___soundWakeThreshold_5; }
	inline float* get_address_of_soundWakeThreshold_5() { return &___soundWakeThreshold_5; }
	inline void set_soundWakeThreshold_5(float value)
	{
		___soundWakeThreshold_5 = value;
	}

	inline static int32_t get_offset_of_sampleLengthInMs_6() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___sampleLengthInMs_6)); }
	inline int32_t get_sampleLengthInMs_6() const { return ___sampleLengthInMs_6; }
	inline int32_t* get_address_of_sampleLengthInMs_6() { return &___sampleLengthInMs_6; }
	inline void set_sampleLengthInMs_6(int32_t value)
	{
		___sampleLengthInMs_6 = value;
	}

	inline static int32_t get_offset_of_micBufferLengthInSeconds_7() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___micBufferLengthInSeconds_7)); }
	inline float get_micBufferLengthInSeconds_7() const { return ___micBufferLengthInSeconds_7; }
	inline float* get_address_of_micBufferLengthInSeconds_7() { return &___micBufferLengthInSeconds_7; }
	inline void set_micBufferLengthInSeconds_7(float value)
	{
		___micBufferLengthInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_maxConcurrentRequests_8() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___maxConcurrentRequests_8)); }
	inline int32_t get_maxConcurrentRequests_8() const { return ___maxConcurrentRequests_8; }
	inline int32_t* get_address_of_maxConcurrentRequests_8() { return &___maxConcurrentRequests_8; }
	inline void set_maxConcurrentRequests_8(int32_t value)
	{
		___maxConcurrentRequests_8 = value;
	}

	inline static int32_t get_offset_of_sendAudioToWit_9() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___sendAudioToWit_9)); }
	inline bool get_sendAudioToWit_9() const { return ___sendAudioToWit_9; }
	inline bool* get_address_of_sendAudioToWit_9() { return &___sendAudioToWit_9; }
	inline void set_sendAudioToWit_9(bool value)
	{
		___sendAudioToWit_9 = value;
	}

	inline static int32_t get_offset_of_customTranscriptionProvider_10() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___customTranscriptionProvider_10)); }
	inline CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * get_customTranscriptionProvider_10() const { return ___customTranscriptionProvider_10; }
	inline CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 ** get_address_of_customTranscriptionProvider_10() { return &___customTranscriptionProvider_10; }
	inline void set_customTranscriptionProvider_10(CustomTranscriptionProvider_tF690178502A6AC2682EDE3E3DDC067B4574A5F82 * value)
	{
		___customTranscriptionProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customTranscriptionProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_alwaysRecord_11() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___alwaysRecord_11)); }
	inline bool get_alwaysRecord_11() const { return ___alwaysRecord_11; }
	inline bool* get_address_of_alwaysRecord_11() { return &___alwaysRecord_11; }
	inline void set_alwaysRecord_11(bool value)
	{
		___alwaysRecord_11 = value;
	}

	inline static int32_t get_offset_of_preferredActivationOffset_12() { return static_cast<int32_t>(offsetof(WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24, ___preferredActivationOffset_12)); }
	inline float get_preferredActivationOffset_12() const { return ___preferredActivationOffset_12; }
	inline float* get_address_of_preferredActivationOffset_12() { return &___preferredActivationOffset_12; }
	inline void set_preferredActivationOffset_12(float value)
	{
		___preferredActivationOffset_12 = value;
	}
};


// Facebook.WitAi.Data.Traits.WitTraitValue
struct WitTraitValue_t283B23609BB8093C8C7BE5A4215169213983A941  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.Data.Traits.WitTraitValue::id
	String_t* ___id_0;
	// System.String Facebook.WitAi.Data.Traits.WitTraitValue::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(WitTraitValue_t283B23609BB8093C8C7BE5A4215169213983A941, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(WitTraitValue_t283B23609BB8093C8C7BE5A4215169213983A941, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Facebook.WitAi.WrapHttpWebRequest
struct WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769  : public RuntimeObject
{
public:
	// System.Net.HttpWebRequest Facebook.WitAi.WrapHttpWebRequest::_httpWebRequest
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ____httpWebRequest_0;

public:
	inline static int32_t get_offset_of__httpWebRequest_0() { return static_cast<int32_t>(offsetof(WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769, ____httpWebRequest_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get__httpWebRequest_0() const { return ____httpWebRequest_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of__httpWebRequest_0() { return &____httpWebRequest_0; }
	inline void set__httpWebRequest_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		____httpWebRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____httpWebRequest_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28
struct U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Data.AudioBuffer Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::<>4__this
	AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * ___U3CU3E4__this_2;
	// UnityEngine.Component Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::component
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605, ___U3CU3E4__this_2)); }
	inline AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_component_3() { return static_cast<int32_t>(offsetof(U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605, ___component_3)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_component_3() const { return ___component_3; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_component_3() { return &___component_3; }
	inline void set_component_3(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___component_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___component_3), (void*)value);
	}
};


// Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61
struct U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Lib.Mic Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<>4__this
	Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * ___U3CU3E4__this_2;
	// System.Int32 Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<loops>5__2
	int32_t ___U3CloopsU3E5__2_3;
	// System.Int32 Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<readAbsPos>5__3
	int32_t ___U3CreadAbsPosU3E5__3_4;
	// System.Int32 Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<prevPos>5__4
	int32_t ___U3CprevPosU3E5__4_5;
	// System.Single[] Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::<temp>5__5
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CtempU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CU3E4__this_2)); }
	inline Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloopsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CloopsU3E5__2_3)); }
	inline int32_t get_U3CloopsU3E5__2_3() const { return ___U3CloopsU3E5__2_3; }
	inline int32_t* get_address_of_U3CloopsU3E5__2_3() { return &___U3CloopsU3E5__2_3; }
	inline void set_U3CloopsU3E5__2_3(int32_t value)
	{
		___U3CloopsU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CreadAbsPosU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CreadAbsPosU3E5__3_4)); }
	inline int32_t get_U3CreadAbsPosU3E5__3_4() const { return ___U3CreadAbsPosU3E5__3_4; }
	inline int32_t* get_address_of_U3CreadAbsPosU3E5__3_4() { return &___U3CreadAbsPosU3E5__3_4; }
	inline void set_U3CreadAbsPosU3E5__3_4(int32_t value)
	{
		___U3CreadAbsPosU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CprevPosU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CprevPosU3E5__4_5)); }
	inline int32_t get_U3CprevPosU3E5__4_5() const { return ___U3CprevPosU3E5__4_5; }
	inline int32_t* get_address_of_U3CprevPosU3E5__4_5() { return &___U3CprevPosU3E5__4_5; }
	inline void set_U3CprevPosU3E5__4_5(int32_t value)
	{
		___U3CprevPosU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CtempU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887, ___U3CtempU3E5__5_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CtempU3E5__5_6() const { return ___U3CtempU3E5__5_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CtempU3E5__5_6() { return &___U3CtempU3E5__5_6; }
	inline void set_U3CtempU3E5__5_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CtempU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempU3E5__5_6), (void*)value);
	}
};


// Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29
struct U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Lib.MicBase Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<>4__this
	MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * ___U3CU3E4__this_2;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::sampleDurationMS
	int32_t ___sampleDurationMS_3;
	// UnityEngine.AudioClip Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<micClip>5__2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CmicClipU3E5__2_4;
	// System.String Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<micDevice>5__3
	String_t* ___U3CmicDeviceU3E5__3_5;
	// System.Single[] Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<sample>5__4
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CsampleU3E5__4_6;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<loops>5__5
	int32_t ___U3CloopsU3E5__5_7;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<readAbsPos>5__6
	int32_t ___U3CreadAbsPosU3E5__6_8;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<prevPos>5__7
	int32_t ___U3CprevPosU3E5__7_9;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<micTempTotal>5__8
	int32_t ___U3CmicTempTotalU3E5__8_10;
	// System.Int32 Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<micDif>5__9
	int32_t ___U3CmicDifU3E5__9_11;
	// System.Single[] Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::<temp>5__10
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CtempU3E5__10_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CU3E4__this_2)); }
	inline MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sampleDurationMS_3() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___sampleDurationMS_3)); }
	inline int32_t get_sampleDurationMS_3() const { return ___sampleDurationMS_3; }
	inline int32_t* get_address_of_sampleDurationMS_3() { return &___sampleDurationMS_3; }
	inline void set_sampleDurationMS_3(int32_t value)
	{
		___sampleDurationMS_3 = value;
	}

	inline static int32_t get_offset_of_U3CmicClipU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CmicClipU3E5__2_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CmicClipU3E5__2_4() const { return ___U3CmicClipU3E5__2_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CmicClipU3E5__2_4() { return &___U3CmicClipU3E5__2_4; }
	inline void set_U3CmicClipU3E5__2_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CmicClipU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmicClipU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmicDeviceU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CmicDeviceU3E5__3_5)); }
	inline String_t* get_U3CmicDeviceU3E5__3_5() const { return ___U3CmicDeviceU3E5__3_5; }
	inline String_t** get_address_of_U3CmicDeviceU3E5__3_5() { return &___U3CmicDeviceU3E5__3_5; }
	inline void set_U3CmicDeviceU3E5__3_5(String_t* value)
	{
		___U3CmicDeviceU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmicDeviceU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsampleU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CsampleU3E5__4_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CsampleU3E5__4_6() const { return ___U3CsampleU3E5__4_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CsampleU3E5__4_6() { return &___U3CsampleU3E5__4_6; }
	inline void set_U3CsampleU3E5__4_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CsampleU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsampleU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloopsU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CloopsU3E5__5_7)); }
	inline int32_t get_U3CloopsU3E5__5_7() const { return ___U3CloopsU3E5__5_7; }
	inline int32_t* get_address_of_U3CloopsU3E5__5_7() { return &___U3CloopsU3E5__5_7; }
	inline void set_U3CloopsU3E5__5_7(int32_t value)
	{
		___U3CloopsU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CreadAbsPosU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CreadAbsPosU3E5__6_8)); }
	inline int32_t get_U3CreadAbsPosU3E5__6_8() const { return ___U3CreadAbsPosU3E5__6_8; }
	inline int32_t* get_address_of_U3CreadAbsPosU3E5__6_8() { return &___U3CreadAbsPosU3E5__6_8; }
	inline void set_U3CreadAbsPosU3E5__6_8(int32_t value)
	{
		___U3CreadAbsPosU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CprevPosU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CprevPosU3E5__7_9)); }
	inline int32_t get_U3CprevPosU3E5__7_9() const { return ___U3CprevPosU3E5__7_9; }
	inline int32_t* get_address_of_U3CprevPosU3E5__7_9() { return &___U3CprevPosU3E5__7_9; }
	inline void set_U3CprevPosU3E5__7_9(int32_t value)
	{
		___U3CprevPosU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CmicTempTotalU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CmicTempTotalU3E5__8_10)); }
	inline int32_t get_U3CmicTempTotalU3E5__8_10() const { return ___U3CmicTempTotalU3E5__8_10; }
	inline int32_t* get_address_of_U3CmicTempTotalU3E5__8_10() { return &___U3CmicTempTotalU3E5__8_10; }
	inline void set_U3CmicTempTotalU3E5__8_10(int32_t value)
	{
		___U3CmicTempTotalU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CmicDifU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CmicDifU3E5__9_11)); }
	inline int32_t get_U3CmicDifU3E5__9_11() const { return ___U3CmicDifU3E5__9_11; }
	inline int32_t* get_address_of_U3CmicDifU3E5__9_11() { return &___U3CmicDifU3E5__9_11; }
	inline void set_U3CmicDifU3E5__9_11(int32_t value)
	{
		___U3CmicDifU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CtempU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4, ___U3CtempU3E5__10_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CtempU3E5__10_12() const { return ___U3CtempU3E5__10_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CtempU3E5__10_12() { return &___U3CtempU3E5__10_12; }
	inline void set_U3CtempU3E5__10_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CtempU3E5__10_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtempU3E5__10_12), (void*)value);
	}
};


// Facebook.WitAi.Utilities.VoiceServiceReference/<>c
struct U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_StaticFields
{
public:
	// Facebook.WitAi.Utilities.VoiceServiceReference/<>c Facebook.WitAi.Utilities.VoiceServiceReference/<>c::<>9
	U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * ___U3CU3E9_0;
	// System.Predicate`1<Facebook.WitAi.VoiceService> Facebook.WitAi.Utilities.VoiceServiceReference/<>c::<>9__2_0
	Predicate_1_t5DC9A3394617676B0470B7D96240DD9EC6F65504 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Predicate_1_t5DC9A3394617676B0470B7D96240DD9EC6F65504 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Predicate_1_t5DC9A3394617676B0470B7D96240DD9EC6F65504 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Predicate_1_t5DC9A3394617676B0470B7D96240DD9EC6F65504 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider
struct DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9  : public RuntimeObject
{
public:

public:
};


// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t9301325AFDDACDF1034774CFDED70841ED9ECD9F  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Entities.WitDynamicEntity Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * ___dynamicEntity_0;

public:
	inline static int32_t get_offset_of_dynamicEntity_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t9301325AFDDACDF1034774CFDED70841ED9ECD9F, ___dynamicEntity_0)); }
	inline WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * get_dynamicEntity_0() const { return ___dynamicEntity_0; }
	inline WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 ** get_address_of_dynamicEntity_0() { return &___dynamicEntity_0; }
	inline void set_dynamicEntity_0(WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * value)
	{
		___dynamicEntity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicEntity_0), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t30E2DC0C9FA5944AD27B1015AA53AD4382860A48  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t30E2DC0C9FA5944AD27B1015AA53AD4382860A48, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t895A64160C8D85FAA7F7D4D7B634DDD6B78E79ED  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;

public:
	inline static int32_t get_offset_of_entityName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t895A64160C8D85FAA7F7D4D7B634DDD6B78E79ED, ___entityName_0)); }
	inline String_t* get_entityName_0() const { return ___entityName_0; }
	inline String_t** get_address_of_entityName_0() { return &___entityName_0; }
	inline void set_entityName_0(String_t* value)
	{
		___entityName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entityName_0), (void*)value);
	}
};


// Facebook.WitAi.Data.Entities.WitEntity/Fields
struct Fields_t4544A09FEE293281FC55D70385983F0A00AE2BAB  : public RuntimeObject
{
public:

public:
};


// Facebook.WitAi.Data.Intents.WitIntent/Fields
struct Fields_t627B89331E99F7781A5A5A246074A91ECB47B96C  : public RuntimeObject
{
public:

public:
};


// Facebook.WitAi.WitRequest/<>c
struct U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_StaticFields
{
public:
	// Facebook.WitAi.WitRequest/<>c Facebook.WitAi.WitRequest/<>c::<>9
	U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * ___U3CU3E9_0;
	// System.Func`2<Facebook.WitAi.WitRequest/QueryParam,System.String> Facebook.WitAi.WitRequest/<>c::<>9__83_0
	Func_2_t0F02659E6DFE9F0DAA5681DA8C8E7365FA9BF66F * ___U3CU3E9__83_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__83_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_StaticFields, ___U3CU3E9__83_0_1)); }
	inline Func_2_t0F02659E6DFE9F0DAA5681DA8C8E7365FA9BF66F * get_U3CU3E9__83_0_1() const { return ___U3CU3E9__83_0_1; }
	inline Func_2_t0F02659E6DFE9F0DAA5681DA8C8E7365FA9BF66F ** get_address_of_U3CU3E9__83_0_1() { return &___U3CU3E9__83_0_1; }
	inline void set_U3CU3E9__83_0_1(Func_2_t0F02659E6DFE9F0DAA5681DA8C8E7365FA9BF66F * value)
	{
		___U3CU3E9__83_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__83_0_1), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/<>c__DisplayClass96_0
struct U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D  : public RuntimeObject
{
public:
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::<>4__this
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___U3CU3E4__this_0;
	// System.String Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::stringResponse
	String_t* ___stringResponse_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D, ___U3CU3E4__this_0)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_stringResponse_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D, ___stringResponse_1)); }
	inline String_t* get_stringResponse_1() const { return ___stringResponse_1; }
	inline String_t** get_address_of_stringResponse_1() { return &___stringResponse_1; }
	inline void set_stringResponse_1(String_t* value)
	{
		___stringResponse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringResponse_1), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/<>c__DisplayClass96_1
struct U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.WitRequest/<>c__DisplayClass96_1::transcription
	String_t* ___transcription_0;
	// Facebook.WitAi.WitRequest/<>c__DisplayClass96_0 Facebook.WitAi.WitRequest/<>c__DisplayClass96_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_transcription_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987, ___transcription_0)); }
	inline String_t* get_transcription_0() const { return ___transcription_0; }
	inline String_t** get_address_of_transcription_0() { return &___transcription_0; }
	inline void set_transcription_0(String_t* value)
	{
		___transcription_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transcription_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.WitRequest/<>c__DisplayClass97_0::transcription
	String_t* ___transcription_0;
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitRequest/<>c__DisplayClass97_0::<>4__this
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_transcription_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7, ___transcription_0)); }
	inline String_t* get_transcription_0() const { return ___transcription_0; }
	inline String_t** get_address_of_transcription_0() { return &___transcription_0; }
	inline void set_transcription_0(String_t* value)
	{
		___transcription_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transcription_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7, ___U3CU3E4__this_1)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C  : public RuntimeObject
{
public:
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest/<>c__DisplayClass99_0::action
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___action_0;
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitRequest/<>c__DisplayClass99_0::<>4__this
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C, ___action_0)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_action_0() const { return ___action_0; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C, ___U3CU3E4__this_1)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109
struct U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::<>4__this
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B, ___U3CU3E4__this_2)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Facebook.WitAi.WitRequest/QueryParam
struct QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.WitRequest/QueryParam::key
	String_t* ___key_0;
	// System.String Facebook.WitAi.WitRequest/QueryParam::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D  : public RuntimeObject
{
public:
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::aNode
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D, ___aNode_0)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_aNode_0() const { return ___aNode_0; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aNode_0), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}
};


// Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19
struct U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>4__this
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E4__this_3)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878, ___U3CU3E7__wrap2_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}
};


// Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62
struct U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.WitService Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::<>4__this
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592, ___U3CU3E4__this_2)); }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t860537723698CF0607466342346F3B1FECA68DCB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Facebook.WitAi.WitService/<PerformDequeue>d__70
struct U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.WitService/<PerformDequeue>d__70::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.WitService Facebook.WitAi.WitService/<PerformDequeue>d__70::<>4__this
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E, ___U3CU3E4__this_2)); }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitService_t860537723698CF0607466342346F3B1FECA68DCB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitService_t860537723698CF0607466342346F3B1FECA68DCB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9
struct U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::<>4__this
	CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B, ___U3CU3E4__this_2)); }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>
struct Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___list_0)); }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * get_list_0() const { return ___list_0; }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE, ___current_3)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_current_3() const { return ___current_3; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE, ___value_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_value_1() const { return ___value_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Text.RegularExpressions.Group
struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883  : public Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____caps_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____capcoll_6)); }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t40C06BBACB56CDD5F84860FDC1B0C3D8F160DCF9 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883_StaticFields, ____emptygroup_3)); }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_18;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_19;

public:
	inline static int32_t get_offset_of__all_18() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_18() const { return ____all_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_18() { return &____all_18; }
	inline void set__all_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_18), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_19() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_19() const { return ____allKeys_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_19() { return &____allKeys_19; }
	inline void set__allKeys_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_19), (void*)value);
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Boolean System.Net.WebResponse::m_IsCacheFresh
	bool ___m_IsCacheFresh_1;
	// System.Boolean System.Net.WebResponse::m_IsFromCache
	bool ___m_IsFromCache_2;

public:
	inline static int32_t get_offset_of_m_IsCacheFresh_1() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsCacheFresh_1)); }
	inline bool get_m_IsCacheFresh_1() const { return ___m_IsCacheFresh_1; }
	inline bool* get_address_of_m_IsCacheFresh_1() { return &___m_IsCacheFresh_1; }
	inline void set_m_IsCacheFresh_1(bool value)
	{
		___m_IsCacheFresh_1 = value;
	}

	inline static int32_t get_offset_of_m_IsFromCache_2() { return static_cast<int32_t>(offsetof(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0, ___m_IsFromCache_2)); }
	inline bool get_m_IsFromCache_2() const { return ___m_IsFromCache_2; }
	inline bool* get_address_of_m_IsFromCache_2() { return &___m_IsFromCache_2; }
	inline void set_m_IsFromCache_2(bool value)
	{
		___m_IsFromCache_2 = value;
	}
};


// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015  : public WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F
{
public:
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015, ___m_List_0)); }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}
};


// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55  : public WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass::m_Dict
	Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * ___m_Dict_0;

public:
	inline static int32_t get_offset_of_m_Dict_0() { return static_cast<int32_t>(offsetof(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55, ___m_Dict_0)); }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * get_m_Dict_0() const { return ___m_Dict_0; }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B ** get_address_of_m_Dict_0() { return &___m_Dict_0; }
	inline void set_m_Dict_0(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * value)
	{
		___m_Dict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dict_0), (void*)value);
	}
};


// Facebook.WitAi.Data.Traits.WitTrait
struct WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641  : public WitConfigurationData_t6FF393A3DA22F0BABBB357F9B680171B8283FE6C
{
public:
	// System.String Facebook.WitAi.Data.Traits.WitTrait::id
	String_t* ___id_1;
	// System.String Facebook.WitAi.Data.Traits.WitTrait::name
	String_t* ___name_2;
	// Facebook.WitAi.Data.Traits.WitTraitValue[] Facebook.WitAi.Data.Traits.WitTrait::values
	WitTraitValueU5BU5D_t6645FC7117C18BAD9CDE2CFCF0FF28C0CC014D4A* ___values_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_values_3() { return static_cast<int32_t>(offsetof(WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641, ___values_3)); }
	inline WitTraitValueU5BU5D_t6645FC7117C18BAD9CDE2CFCF0FF28C0CC014D4A* get_values_3() const { return ___values_3; }
	inline WitTraitValueU5BU5D_t6645FC7117C18BAD9CDE2CFCF0FF28C0CC014D4A** get_address_of_values_3() { return &___values_3; }
	inline void set_values_3(WitTraitValueU5BU5D_t6645FC7117C18BAD9CDE2CFCF0FF28C0CC014D4A* value)
	{
		___values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___dictionary_0)); }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___current_3)); }
	inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Net.Security.AuthenticationLevel
struct AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Net.DecompressionMethods
struct DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC, ___value___2)); }
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

// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B  : public Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____groupcoll_9)); }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556 * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____regex_10)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_10() const { return ____regex_10; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____matchcount_16)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B_StaticFields, ____empty_8)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__empty_8() const { return ____empty_8; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
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


// Facebook.WitAi.Utilities.StringEvent
struct StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
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


// System.Security.Principal.TokenImpersonationLevel
struct TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Facebook.WitAi.WitRequest
struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622  : public RuntimeObject
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.WitRequest::configuration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ___configuration_19;
	// System.String Facebook.WitAi.WitRequest::command
	String_t* ___command_20;
	// System.String Facebook.WitAi.WitRequest::path
	String_t* ___path_21;
	// Facebook.WitAi.WitRequest/QueryParam[] Facebook.WitAi.WitRequest::queryParams
	QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* ___queryParams_22;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::_request
	RuntimeObject* ____request_23;
	// System.Net.HttpWebResponse Facebook.WitAi.WitRequest::response
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___response_24;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.WitRequest::responseData
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___responseData_25;
	// System.Boolean Facebook.WitAi.WitRequest::isActive
	bool ___isActive_26;
	// System.Boolean Facebook.WitAi.WitRequest::responseStarted
	bool ___responseStarted_27;
	// System.Byte[] Facebook.WitAi.WitRequest::postData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___postData_28;
	// System.String Facebook.WitAi.WitRequest::postContentType
	String_t* ___postContentType_29;
	// System.String Facebook.WitAi.WitRequest::requestId
	String_t* ___requestId_30;
	// System.Object Facebook.WitAi.WitRequest::streamLock
	RuntimeObject * ___streamLock_31;
	// System.Int32 Facebook.WitAi.WitRequest::bytesWritten
	int32_t ___bytesWritten_32;
	// System.Boolean Facebook.WitAi.WitRequest::requestRequiresBody
	bool ___requestRequiresBody_33;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onPartialResponse
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onPartialResponse_34;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onResponse
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onResponse_35;
	// System.Action`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitRequest::onInputStreamReady
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * ___onInputStreamReady_36;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onRawResponse
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onRawResponse_37;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onPartialTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onPartialTranscription_38;
	// System.Action`1<System.String> Facebook.WitAi.WitRequest::onFullTranscription
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onFullTranscription_39;
	// Facebook.WitAi.WitRequest/OnCustomizeUriEvent Facebook.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * ___onCustomizeUri_41;
	// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent Facebook.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * ___onProvideCustomHeaders_42;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.WitRequest::audioEncoding
	AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * ___audioEncoding_43;
	// System.Int32 Facebook.WitAi.WitRequest::statusCode
	int32_t ___statusCode_44;
	// System.String Facebook.WitAi.WitRequest::statusDescription
	String_t* ___statusDescription_45;
	// System.Boolean Facebook.WitAi.WitRequest::isRequestStreamActive
	bool ___isRequestStreamActive_46;
	// System.Boolean Facebook.WitAi.WitRequest::isServerAuthRequired
	bool ___isServerAuthRequired_47;
	// Facebook.WitAi.IRequest Facebook.WitAi.WitRequest::<RequestProvider>k__BackingField
	RuntimeObject* ___U3CRequestProviderU3Ek__BackingField_48;
	// System.Boolean Facebook.WitAi.WitRequest::configurationRequired
	bool ___configurationRequired_49;
	// System.String Facebook.WitAi.WitRequest::serverToken
	String_t* ___serverToken_50;
	// System.String Facebook.WitAi.WitRequest::callingStackTrace
	String_t* ___callingStackTrace_51;
	// System.DateTime Facebook.WitAi.WitRequest::requestStartTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___requestStartTime_52;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Facebook.WitAi.WitRequest::writeBuffer
	ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * ___writeBuffer_53;
	// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer Facebook.WitAi.WitRequest::_performer
	CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * ____performer_59;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Facebook.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * ____mainThreadCallbacks_60;
	// System.IO.Stream Facebook.WitAi.WitRequest::writeStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___writeStream_61;

public:
	inline static int32_t get_offset_of_configuration_19() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___configuration_19)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get_configuration_19() const { return ___configuration_19; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of_configuration_19() { return &___configuration_19; }
	inline void set_configuration_19(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		___configuration_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_19), (void*)value);
	}

	inline static int32_t get_offset_of_command_20() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___command_20)); }
	inline String_t* get_command_20() const { return ___command_20; }
	inline String_t** get_address_of_command_20() { return &___command_20; }
	inline void set_command_20(String_t* value)
	{
		___command_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___command_20), (void*)value);
	}

	inline static int32_t get_offset_of_path_21() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___path_21)); }
	inline String_t* get_path_21() const { return ___path_21; }
	inline String_t** get_address_of_path_21() { return &___path_21; }
	inline void set_path_21(String_t* value)
	{
		___path_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_21), (void*)value);
	}

	inline static int32_t get_offset_of_queryParams_22() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___queryParams_22)); }
	inline QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* get_queryParams_22() const { return ___queryParams_22; }
	inline QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B** get_address_of_queryParams_22() { return &___queryParams_22; }
	inline void set_queryParams_22(QueryParamU5BU5D_t599632D16DA1C62459C16B3C1A9206C89C61D61B* value)
	{
		___queryParams_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queryParams_22), (void*)value);
	}

	inline static int32_t get_offset_of__request_23() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____request_23)); }
	inline RuntimeObject* get__request_23() const { return ____request_23; }
	inline RuntimeObject** get_address_of__request_23() { return &____request_23; }
	inline void set__request_23(RuntimeObject* value)
	{
		____request_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_23), (void*)value);
	}

	inline static int32_t get_offset_of_response_24() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___response_24)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_response_24() const { return ___response_24; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_response_24() { return &___response_24; }
	inline void set_response_24(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___response_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_24), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_25() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___responseData_25)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_responseData_25() const { return ___responseData_25; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_responseData_25() { return &___responseData_25; }
	inline void set_responseData_25(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___responseData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_25), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_26() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isActive_26)); }
	inline bool get_isActive_26() const { return ___isActive_26; }
	inline bool* get_address_of_isActive_26() { return &___isActive_26; }
	inline void set_isActive_26(bool value)
	{
		___isActive_26 = value;
	}

	inline static int32_t get_offset_of_responseStarted_27() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___responseStarted_27)); }
	inline bool get_responseStarted_27() const { return ___responseStarted_27; }
	inline bool* get_address_of_responseStarted_27() { return &___responseStarted_27; }
	inline void set_responseStarted_27(bool value)
	{
		___responseStarted_27 = value;
	}

	inline static int32_t get_offset_of_postData_28() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___postData_28)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_postData_28() const { return ___postData_28; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_postData_28() { return &___postData_28; }
	inline void set_postData_28(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___postData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postData_28), (void*)value);
	}

	inline static int32_t get_offset_of_postContentType_29() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___postContentType_29)); }
	inline String_t* get_postContentType_29() const { return ___postContentType_29; }
	inline String_t** get_address_of_postContentType_29() { return &___postContentType_29; }
	inline void set_postContentType_29(String_t* value)
	{
		___postContentType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postContentType_29), (void*)value);
	}

	inline static int32_t get_offset_of_requestId_30() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___requestId_30)); }
	inline String_t* get_requestId_30() const { return ___requestId_30; }
	inline String_t** get_address_of_requestId_30() { return &___requestId_30; }
	inline void set_requestId_30(String_t* value)
	{
		___requestId_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestId_30), (void*)value);
	}

	inline static int32_t get_offset_of_streamLock_31() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___streamLock_31)); }
	inline RuntimeObject * get_streamLock_31() const { return ___streamLock_31; }
	inline RuntimeObject ** get_address_of_streamLock_31() { return &___streamLock_31; }
	inline void set_streamLock_31(RuntimeObject * value)
	{
		___streamLock_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamLock_31), (void*)value);
	}

	inline static int32_t get_offset_of_bytesWritten_32() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___bytesWritten_32)); }
	inline int32_t get_bytesWritten_32() const { return ___bytesWritten_32; }
	inline int32_t* get_address_of_bytesWritten_32() { return &___bytesWritten_32; }
	inline void set_bytesWritten_32(int32_t value)
	{
		___bytesWritten_32 = value;
	}

	inline static int32_t get_offset_of_requestRequiresBody_33() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___requestRequiresBody_33)); }
	inline bool get_requestRequiresBody_33() const { return ___requestRequiresBody_33; }
	inline bool* get_address_of_requestRequiresBody_33() { return &___requestRequiresBody_33; }
	inline void set_requestRequiresBody_33(bool value)
	{
		___requestRequiresBody_33 = value;
	}

	inline static int32_t get_offset_of_onPartialResponse_34() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onPartialResponse_34)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onPartialResponse_34() const { return ___onPartialResponse_34; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onPartialResponse_34() { return &___onPartialResponse_34; }
	inline void set_onPartialResponse_34(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onPartialResponse_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialResponse_34), (void*)value);
	}

	inline static int32_t get_offset_of_onResponse_35() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onResponse_35)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onResponse_35() const { return ___onResponse_35; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onResponse_35() { return &___onResponse_35; }
	inline void set_onResponse_35(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onResponse_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onResponse_35), (void*)value);
	}

	inline static int32_t get_offset_of_onInputStreamReady_36() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onInputStreamReady_36)); }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * get_onInputStreamReady_36() const { return ___onInputStreamReady_36; }
	inline Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 ** get_address_of_onInputStreamReady_36() { return &___onInputStreamReady_36; }
	inline void set_onInputStreamReady_36(Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * value)
	{
		___onInputStreamReady_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInputStreamReady_36), (void*)value);
	}

	inline static int32_t get_offset_of_onRawResponse_37() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onRawResponse_37)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onRawResponse_37() const { return ___onRawResponse_37; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onRawResponse_37() { return &___onRawResponse_37; }
	inline void set_onRawResponse_37(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onRawResponse_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRawResponse_37), (void*)value);
	}

	inline static int32_t get_offset_of_onPartialTranscription_38() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onPartialTranscription_38)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onPartialTranscription_38() const { return ___onPartialTranscription_38; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onPartialTranscription_38() { return &___onPartialTranscription_38; }
	inline void set_onPartialTranscription_38(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onPartialTranscription_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPartialTranscription_38), (void*)value);
	}

	inline static int32_t get_offset_of_onFullTranscription_39() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onFullTranscription_39)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onFullTranscription_39() const { return ___onFullTranscription_39; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onFullTranscription_39() { return &___onFullTranscription_39; }
	inline void set_onFullTranscription_39(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onFullTranscription_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFullTranscription_39), (void*)value);
	}

	inline static int32_t get_offset_of_onCustomizeUri_41() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onCustomizeUri_41)); }
	inline OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * get_onCustomizeUri_41() const { return ___onCustomizeUri_41; }
	inline OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF ** get_address_of_onCustomizeUri_41() { return &___onCustomizeUri_41; }
	inline void set_onCustomizeUri_41(OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * value)
	{
		___onCustomizeUri_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCustomizeUri_41), (void*)value);
	}

	inline static int32_t get_offset_of_onProvideCustomHeaders_42() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___onProvideCustomHeaders_42)); }
	inline OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * get_onProvideCustomHeaders_42() const { return ___onProvideCustomHeaders_42; }
	inline OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 ** get_address_of_onProvideCustomHeaders_42() { return &___onProvideCustomHeaders_42; }
	inline void set_onProvideCustomHeaders_42(OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * value)
	{
		___onProvideCustomHeaders_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onProvideCustomHeaders_42), (void*)value);
	}

	inline static int32_t get_offset_of_audioEncoding_43() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___audioEncoding_43)); }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * get_audioEncoding_43() const { return ___audioEncoding_43; }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 ** get_address_of_audioEncoding_43() { return &___audioEncoding_43; }
	inline void set_audioEncoding_43(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * value)
	{
		___audioEncoding_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioEncoding_43), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_44() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___statusCode_44)); }
	inline int32_t get_statusCode_44() const { return ___statusCode_44; }
	inline int32_t* get_address_of_statusCode_44() { return &___statusCode_44; }
	inline void set_statusCode_44(int32_t value)
	{
		___statusCode_44 = value;
	}

	inline static int32_t get_offset_of_statusDescription_45() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___statusDescription_45)); }
	inline String_t* get_statusDescription_45() const { return ___statusDescription_45; }
	inline String_t** get_address_of_statusDescription_45() { return &___statusDescription_45; }
	inline void set_statusDescription_45(String_t* value)
	{
		___statusDescription_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_45), (void*)value);
	}

	inline static int32_t get_offset_of_isRequestStreamActive_46() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isRequestStreamActive_46)); }
	inline bool get_isRequestStreamActive_46() const { return ___isRequestStreamActive_46; }
	inline bool* get_address_of_isRequestStreamActive_46() { return &___isRequestStreamActive_46; }
	inline void set_isRequestStreamActive_46(bool value)
	{
		___isRequestStreamActive_46 = value;
	}

	inline static int32_t get_offset_of_isServerAuthRequired_47() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___isServerAuthRequired_47)); }
	inline bool get_isServerAuthRequired_47() const { return ___isServerAuthRequired_47; }
	inline bool* get_address_of_isServerAuthRequired_47() { return &___isServerAuthRequired_47; }
	inline void set_isServerAuthRequired_47(bool value)
	{
		___isServerAuthRequired_47 = value;
	}

	inline static int32_t get_offset_of_U3CRequestProviderU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___U3CRequestProviderU3Ek__BackingField_48)); }
	inline RuntimeObject* get_U3CRequestProviderU3Ek__BackingField_48() const { return ___U3CRequestProviderU3Ek__BackingField_48; }
	inline RuntimeObject** get_address_of_U3CRequestProviderU3Ek__BackingField_48() { return &___U3CRequestProviderU3Ek__BackingField_48; }
	inline void set_U3CRequestProviderU3Ek__BackingField_48(RuntimeObject* value)
	{
		___U3CRequestProviderU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestProviderU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_configurationRequired_49() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___configurationRequired_49)); }
	inline bool get_configurationRequired_49() const { return ___configurationRequired_49; }
	inline bool* get_address_of_configurationRequired_49() { return &___configurationRequired_49; }
	inline void set_configurationRequired_49(bool value)
	{
		___configurationRequired_49 = value;
	}

	inline static int32_t get_offset_of_serverToken_50() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___serverToken_50)); }
	inline String_t* get_serverToken_50() const { return ___serverToken_50; }
	inline String_t** get_address_of_serverToken_50() { return &___serverToken_50; }
	inline void set_serverToken_50(String_t* value)
	{
		___serverToken_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverToken_50), (void*)value);
	}

	inline static int32_t get_offset_of_callingStackTrace_51() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___callingStackTrace_51)); }
	inline String_t* get_callingStackTrace_51() const { return ___callingStackTrace_51; }
	inline String_t** get_address_of_callingStackTrace_51() { return &___callingStackTrace_51; }
	inline void set_callingStackTrace_51(String_t* value)
	{
		___callingStackTrace_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callingStackTrace_51), (void*)value);
	}

	inline static int32_t get_offset_of_requestStartTime_52() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___requestStartTime_52)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_requestStartTime_52() const { return ___requestStartTime_52; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_requestStartTime_52() { return &___requestStartTime_52; }
	inline void set_requestStartTime_52(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___requestStartTime_52 = value;
	}

	inline static int32_t get_offset_of_writeBuffer_53() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___writeBuffer_53)); }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * get_writeBuffer_53() const { return ___writeBuffer_53; }
	inline ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 ** get_address_of_writeBuffer_53() { return &___writeBuffer_53; }
	inline void set_writeBuffer_53(ConcurrentQueue_1_tB28282707BE3B3A36759A443792B982678CC9571 * value)
	{
		___writeBuffer_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_53), (void*)value);
	}

	inline static int32_t get_offset_of__performer_59() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____performer_59)); }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * get__performer_59() const { return ____performer_59; }
	inline CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 ** get_address_of__performer_59() { return &____performer_59; }
	inline void set__performer_59(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * value)
	{
		____performer_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____performer_59), (void*)value);
	}

	inline static int32_t get_offset_of__mainThreadCallbacks_60() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ____mainThreadCallbacks_60)); }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * get__mainThreadCallbacks_60() const { return ____mainThreadCallbacks_60; }
	inline ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE ** get_address_of__mainThreadCallbacks_60() { return &____mainThreadCallbacks_60; }
	inline void set__mainThreadCallbacks_60(ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * value)
	{
		____mainThreadCallbacks_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainThreadCallbacks_60), (void*)value);
	}

	inline static int32_t get_offset_of_writeStream_61() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622, ___writeStream_61)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_writeStream_61() const { return ___writeStream_61; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_writeStream_61() { return &___writeStream_61; }
	inline void set_writeStream_61(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___writeStream_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_61), (void*)value);
	}
};

struct WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields
{
public:
	// Facebook.WitAi.WitRequest/PreSendRequestDelegate Facebook.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * ___onPreSendRequest_40;
	// System.String Facebook.WitAi.WitRequest::_operatingSystem
	String_t* ____operatingSystem_54;
	// System.String Facebook.WitAi.WitRequest::_deviceModel
	String_t* ____deviceModel_55;
	// System.String Facebook.WitAi.WitRequest::_appIdentifier
	String_t* ____appIdentifier_56;
	// System.String Facebook.WitAi.WitRequest::_unityVersion
	String_t* ____unityVersion_57;
	// System.Func`1<System.String> Facebook.WitAi.WitRequest::OnProvideCustomUserAgent
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___OnProvideCustomUserAgent_58;

public:
	inline static int32_t get_offset_of_onPreSendRequest_40() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ___onPreSendRequest_40)); }
	inline PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * get_onPreSendRequest_40() const { return ___onPreSendRequest_40; }
	inline PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 ** get_address_of_onPreSendRequest_40() { return &___onPreSendRequest_40; }
	inline void set_onPreSendRequest_40(PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * value)
	{
		___onPreSendRequest_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreSendRequest_40), (void*)value);
	}

	inline static int32_t get_offset_of__operatingSystem_54() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____operatingSystem_54)); }
	inline String_t* get__operatingSystem_54() const { return ____operatingSystem_54; }
	inline String_t** get_address_of__operatingSystem_54() { return &____operatingSystem_54; }
	inline void set__operatingSystem_54(String_t* value)
	{
		____operatingSystem_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____operatingSystem_54), (void*)value);
	}

	inline static int32_t get_offset_of__deviceModel_55() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____deviceModel_55)); }
	inline String_t* get__deviceModel_55() const { return ____deviceModel_55; }
	inline String_t** get_address_of__deviceModel_55() { return &____deviceModel_55; }
	inline void set__deviceModel_55(String_t* value)
	{
		____deviceModel_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deviceModel_55), (void*)value);
	}

	inline static int32_t get_offset_of__appIdentifier_56() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____appIdentifier_56)); }
	inline String_t* get__appIdentifier_56() const { return ____appIdentifier_56; }
	inline String_t** get_address_of__appIdentifier_56() { return &____appIdentifier_56; }
	inline void set__appIdentifier_56(String_t* value)
	{
		____appIdentifier_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____appIdentifier_56), (void*)value);
	}

	inline static int32_t get_offset_of__unityVersion_57() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ____unityVersion_57)); }
	inline String_t* get__unityVersion_57() const { return ____unityVersion_57; }
	inline String_t** get_address_of__unityVersion_57() { return &____unityVersion_57; }
	inline void set__unityVersion_57(String_t* value)
	{
		____unityVersion_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unityVersion_57), (void*)value);
	}

	inline static int32_t get_offset_of_OnProvideCustomUserAgent_58() { return static_cast<int32_t>(offsetof(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_StaticFields, ___OnProvideCustomUserAgent_58)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_OnProvideCustomUserAgent_58() const { return ___OnProvideCustomUserAgent_58; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_OnProvideCustomUserAgent_58() { return &___OnProvideCustomUserAgent_58; }
	inline void set_OnProvideCustomUserAgent_58(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___OnProvideCustomUserAgent_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProvideCustomUserAgent_58), (void*)value);
	}
};


// Facebook.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// Facebook.WitAi.Data.AudioEncoding/Endian
struct Endian_tE619DE6F7B1661D00DE941B0B7AC3A82A55A1021 
{
public:
	// System.Int32 Facebook.WitAi.Data.AudioEncoding/Endian::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Endian_tE619DE6F7B1661D00DE941B0B7AC3A82A55A1021, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpWebRequest/NtlmAuthState
struct NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>4__this
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>7__wrap1
	Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E, ___U3CU3E4__this_2)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};


// Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13
struct U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>4__this
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>7__wrap1
	Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E4__this_3)); }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___current_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// Facebook.WitAi.Data.AudioEncoding
struct AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516  : public RuntimeObject
{
public:
	// System.String Facebook.WitAi.Data.AudioEncoding::encoding
	String_t* ___encoding_0;
	// System.Int32 Facebook.WitAi.Data.AudioEncoding::bits
	int32_t ___bits_1;
	// System.Int32 Facebook.WitAi.Data.AudioEncoding::samplerate
	int32_t ___samplerate_2;
	// Facebook.WitAi.Data.AudioEncoding/Endian Facebook.WitAi.Data.AudioEncoding::endian
	int32_t ___endian_3;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_bits_1() { return static_cast<int32_t>(offsetof(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516, ___bits_1)); }
	inline int32_t get_bits_1() const { return ___bits_1; }
	inline int32_t* get_address_of_bits_1() { return &___bits_1; }
	inline void set_bits_1(int32_t value)
	{
		___bits_1 = value;
	}

	inline static int32_t get_offset_of_samplerate_2() { return static_cast<int32_t>(offsetof(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516, ___samplerate_2)); }
	inline int32_t get_samplerate_2() const { return ___samplerate_2; }
	inline int32_t* get_address_of_samplerate_2() { return &___samplerate_2; }
	inline void set_samplerate_2(int32_t value)
	{
		___samplerate_2 = value;
	}

	inline static int32_t get_offset_of_endian_3() { return static_cast<int32_t>(offsetof(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516, ___endian_3)); }
	inline int32_t get_endian_3() const { return ___endian_3; }
	inline int32_t* get_address_of_endian_3() { return &___endian_3; }
	inline void set_endian_3(int32_t value)
	{
		___endian_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_23;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_24;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_45;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_46;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_23() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_23() const { return ___m_CommonHeaders_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_23() { return &___m_CommonHeaders_23; }
	inline void set_m_CommonHeaders_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_24() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_24)); }
	inline int32_t get_m_NumCommonHeaders_24() const { return ___m_NumCommonHeaders_24; }
	inline int32_t* get_address_of_m_NumCommonHeaders_24() { return &___m_NumCommonHeaders_24; }
	inline void set_m_NumCommonHeaders_24(int32_t value)
	{
		___m_NumCommonHeaders_24 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_45() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_45)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_45() const { return ___m_InnerCollection_45; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_45() { return &___m_InnerCollection_45; }
	inline void set_m_InnerCollection_45(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_46() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_46)); }
	inline uint16_t get_m_Type_46() const { return ___m_Type_46; }
	inline uint16_t* get_address_of_m_Type_46() { return &___m_Type_46; }
	inline void set_m_Type_46(uint16_t value)
	{
		___m_Type_46 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_22;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_25;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_26;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_47;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_48;

public:
	inline static int32_t get_offset_of_HInfo_22() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_22)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_22() const { return ___HInfo_22; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_22() { return &___HInfo_22; }
	inline void set_HInfo_22(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_25() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_25() const { return ___s_CommonHeaderNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_25() { return &___s_CommonHeaderNames_25; }
	inline void set_s_CommonHeaderNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_26() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_26)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_26() const { return ___s_CommonHeaderHints_26; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_26() { return &___s_CommonHeaderHints_26; }
	inline void set_s_CommonHeaderHints_26(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_26), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_47() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_47)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_47() const { return ___HttpTrimCharacters_47; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_47() { return &___HttpTrimCharacters_47; }
	inline void set_HttpTrimCharacters_47(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_47), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_48() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_48)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_48() const { return ___RfcCharMap_48; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_48() { return &___RfcCharMap_48; }
	inline void set_RfcCharMap_48(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_48), (void*)value);
	}
};


// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_4() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_AuthenticationLevel_4)); }
	inline int32_t get_m_AuthenticationLevel_4() const { return ___m_AuthenticationLevel_4; }
	inline int32_t* get_address_of_m_AuthenticationLevel_4() { return &___m_AuthenticationLevel_4; }
	inline void set_m_AuthenticationLevel_4(int32_t value)
	{
		___m_AuthenticationLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_ImpersonationLevel_5)); }
	inline int32_t get_m_ImpersonationLevel_5() const { return ___m_ImpersonationLevel_5; }
	inline int32_t* get_address_of_m_ImpersonationLevel_5() { return &___m_ImpersonationLevel_5; }
	inline void set_m_ImpersonationLevel_5(int32_t value)
	{
		___m_ImpersonationLevel_5 = value;
	}
};

struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;

public:
	inline static int32_t get_offset_of_s_PrefixList_1() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_PrefixList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_s_PrefixList_1() const { return ___s_PrefixList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_s_PrefixList_1() { return &___s_PrefixList_1; }
	inline void set_s_PrefixList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___s_PrefixList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_2() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_InternalSyncObject_2)); }
	inline RuntimeObject * get_s_InternalSyncObject_2() const { return ___s_InternalSyncObject_2; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_2() { return &___s_InternalSyncObject_2; }
	inline void set_s_InternalSyncObject_2(RuntimeObject * value)
	{
		___s_InternalSyncObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_3() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultTimerQueue_3)); }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * get_s_DefaultTimerQueue_3() const { return ___s_DefaultTimerQueue_3; }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB ** get_address_of_s_DefaultTimerQueue_3() { return &___s_DefaultTimerQueue_3; }
	inline void set_s_DefaultTimerQueue_3(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * value)
	{
		___s_DefaultTimerQueue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_3), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_6() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___webRequestCreate_6)); }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * get_webRequestCreate_6() const { return ___webRequestCreate_6; }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A ** get_address_of_webRequestCreate_6() { return &___webRequestCreate_6; }
	inline void set_webRequestCreate_6(DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * value)
	{
		___webRequestCreate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_7() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxy_7)); }
	inline RuntimeObject* get_s_DefaultWebProxy_7() const { return ___s_DefaultWebProxy_7; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_7() { return &___s_DefaultWebProxy_7; }
	inline void set_s_DefaultWebProxy_7(RuntimeObject* value)
	{
		___s_DefaultWebProxy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_8() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxyInitialized_8)); }
	inline bool get_s_DefaultWebProxyInitialized_8() const { return ___s_DefaultWebProxyInitialized_8; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_8() { return &___s_DefaultWebProxyInitialized_8; }
	inline void set_s_DefaultWebProxyInitialized_8(bool value)
	{
		___s_DefaultWebProxyInitialized_8 = value;
	}
};


// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___request_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_pinvoke
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_com
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18
struct U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>4__this
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>7__wrap1
	Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E4__this_2)); }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17
struct U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632  : public RuntimeObject
{
public:
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>2__current
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___U3CU3E2__current_1;
	// System.Int32 Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>4__this
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>7__wrap1
	Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E2__current_1)); }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E4__this_3)); }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Facebook.WitAi.WitRequest>
struct Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A  : public WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___requestUri_9;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___actualUri_10;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_11;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_12;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_13;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates_14;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_15;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_16;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_17;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * ___continueDelegate_18;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ___cookieContainer_19;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_20;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_21;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_22;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___webHeaders_23;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_24;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_25;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_26;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_27;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_28;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_29;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_30;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_31;
	// System.Version System.Net.HttpWebRequest::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_32;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_33;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___actualVersion_34;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_35;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_36;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___servicePoint_37;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_38;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___writeStream_39;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___webResponse_40;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___responseTask_41;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_42;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_43;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_44;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_45;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_46;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_47;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_48;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_49;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_50;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_52;
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::tlsProvider
	MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * ___tlsProvider_53;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * ___tlsSettings_54;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * ___certValidationCallback_55;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___auth_state_56;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___proxy_auth_state_57;
	// System.String System.Net.HttpWebRequest::host
	String_t* ___host_58;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * ___ResendContentFactory_59;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_60;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_61;

public:
	inline static int32_t get_offset_of_requestUri_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestUri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_requestUri_9() const { return ___requestUri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_requestUri_9() { return &___requestUri_9; }
	inline void set_requestUri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___requestUri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestUri_9), (void*)value);
	}

	inline static int32_t get_offset_of_actualUri_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualUri_10)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_actualUri_10() const { return ___actualUri_10; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_actualUri_10() { return &___actualUri_10; }
	inline void set_actualUri_10(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___actualUri_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualUri_10), (void*)value);
	}

	inline static int32_t get_offset_of_hostChanged_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___hostChanged_11)); }
	inline bool get_hostChanged_11() const { return ___hostChanged_11; }
	inline bool* get_address_of_hostChanged_11() { return &___hostChanged_11; }
	inline void set_hostChanged_11(bool value)
	{
		___hostChanged_11 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowAutoRedirect_12)); }
	inline bool get_allowAutoRedirect_12() const { return ___allowAutoRedirect_12; }
	inline bool* get_address_of_allowAutoRedirect_12() { return &___allowAutoRedirect_12; }
	inline void set_allowAutoRedirect_12(bool value)
	{
		___allowAutoRedirect_12 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowBuffering_13)); }
	inline bool get_allowBuffering_13() const { return ___allowBuffering_13; }
	inline bool* get_address_of_allowBuffering_13() { return &___allowBuffering_13; }
	inline void set_allowBuffering_13(bool value)
	{
		___allowBuffering_13 = value;
	}

	inline static int32_t get_offset_of_certificates_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certificates_14)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get_certificates_14() const { return ___certificates_14; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of_certificates_14() { return &___certificates_14; }
	inline void set_certificates_14(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		___certificates_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificates_14), (void*)value);
	}

	inline static int32_t get_offset_of_connectionGroup_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___connectionGroup_15)); }
	inline String_t* get_connectionGroup_15() const { return ___connectionGroup_15; }
	inline String_t** get_address_of_connectionGroup_15() { return &___connectionGroup_15; }
	inline void set_connectionGroup_15(String_t* value)
	{
		___connectionGroup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionGroup_15), (void*)value);
	}

	inline static int32_t get_offset_of_haveContentLength_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveContentLength_16)); }
	inline bool get_haveContentLength_16() const { return ___haveContentLength_16; }
	inline bool* get_address_of_haveContentLength_16() { return &___haveContentLength_16; }
	inline void set_haveContentLength_16(bool value)
	{
		___haveContentLength_16 = value;
	}

	inline static int32_t get_offset_of_contentLength_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___contentLength_17)); }
	inline int64_t get_contentLength_17() const { return ___contentLength_17; }
	inline int64_t* get_address_of_contentLength_17() { return &___contentLength_17; }
	inline void set_contentLength_17(int64_t value)
	{
		___contentLength_17 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___continueDelegate_18)); }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * get_continueDelegate_18() const { return ___continueDelegate_18; }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F ** get_address_of_continueDelegate_18() { return &___continueDelegate_18; }
	inline void set_continueDelegate_18(HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * value)
	{
		___continueDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_cookieContainer_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___cookieContainer_19)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get_cookieContainer_19() const { return ___cookieContainer_19; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of_cookieContainer_19() { return &___cookieContainer_19; }
	inline void set_cookieContainer_19(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		___cookieContainer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieContainer_19), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___credentials_20)); }
	inline RuntimeObject* get_credentials_20() const { return ___credentials_20; }
	inline RuntimeObject** get_address_of_credentials_20() { return &___credentials_20; }
	inline void set_credentials_20(RuntimeObject* value)
	{
		___credentials_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_20), (void*)value);
	}

	inline static int32_t get_offset_of_haveResponse_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveResponse_21)); }
	inline bool get_haveResponse_21() const { return ___haveResponse_21; }
	inline bool* get_address_of_haveResponse_21() { return &___haveResponse_21; }
	inline void set_haveResponse_21(bool value)
	{
		___haveResponse_21 = value;
	}

	inline static int32_t get_offset_of_requestSent_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestSent_22)); }
	inline bool get_requestSent_22() const { return ___requestSent_22; }
	inline bool* get_address_of_requestSent_22() { return &___requestSent_22; }
	inline void set_requestSent_22(bool value)
	{
		___requestSent_22 = value;
	}

	inline static int32_t get_offset_of_webHeaders_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webHeaders_23)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_webHeaders_23() const { return ___webHeaders_23; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_webHeaders_23() { return &___webHeaders_23; }
	inline void set_webHeaders_23(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___webHeaders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webHeaders_23), (void*)value);
	}

	inline static int32_t get_offset_of_keepAlive_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___keepAlive_24)); }
	inline bool get_keepAlive_24() const { return ___keepAlive_24; }
	inline bool* get_address_of_keepAlive_24() { return &___keepAlive_24; }
	inline void set_keepAlive_24(bool value)
	{
		___keepAlive_24 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxAutoRedirect_25)); }
	inline int32_t get_maxAutoRedirect_25() const { return ___maxAutoRedirect_25; }
	inline int32_t* get_address_of_maxAutoRedirect_25() { return &___maxAutoRedirect_25; }
	inline void set_maxAutoRedirect_25(int32_t value)
	{
		___maxAutoRedirect_25 = value;
	}

	inline static int32_t get_offset_of_mediaType_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___mediaType_26)); }
	inline String_t* get_mediaType_26() const { return ___mediaType_26; }
	inline String_t** get_address_of_mediaType_26() { return &___mediaType_26; }
	inline void set_mediaType_26(String_t* value)
	{
		___mediaType_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaType_26), (void*)value);
	}

	inline static int32_t get_offset_of_method_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___method_27)); }
	inline String_t* get_method_27() const { return ___method_27; }
	inline String_t** get_address_of_method_27() { return &___method_27; }
	inline void set_method_27(String_t* value)
	{
		___method_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_27), (void*)value);
	}

	inline static int32_t get_offset_of_initialMethod_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___initialMethod_28)); }
	inline String_t* get_initialMethod_28() const { return ___initialMethod_28; }
	inline String_t** get_address_of_initialMethod_28() { return &___initialMethod_28; }
	inline void set_initialMethod_28(String_t* value)
	{
		___initialMethod_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialMethod_28), (void*)value);
	}

	inline static int32_t get_offset_of_pipelined_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___pipelined_29)); }
	inline bool get_pipelined_29() const { return ___pipelined_29; }
	inline bool* get_address_of_pipelined_29() { return &___pipelined_29; }
	inline void set_pipelined_29(bool value)
	{
		___pipelined_29 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___preAuthenticate_30)); }
	inline bool get_preAuthenticate_30() const { return ___preAuthenticate_30; }
	inline bool* get_address_of_preAuthenticate_30() { return &___preAuthenticate_30; }
	inline void set_preAuthenticate_30(bool value)
	{
		___preAuthenticate_30 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___usedPreAuth_31)); }
	inline bool get_usedPreAuth_31() const { return ___usedPreAuth_31; }
	inline bool* get_address_of_usedPreAuth_31() { return &___usedPreAuth_31; }
	inline void set_usedPreAuth_31(bool value)
	{
		___usedPreAuth_31 = value;
	}

	inline static int32_t get_offset_of_version_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___version_32)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_32() const { return ___version_32; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_32() { return &___version_32; }
	inline void set_version_32(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_32), (void*)value);
	}

	inline static int32_t get_offset_of_force_version_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___force_version_33)); }
	inline bool get_force_version_33() const { return ___force_version_33; }
	inline bool* get_address_of_force_version_33() { return &___force_version_33; }
	inline void set_force_version_33(bool value)
	{
		___force_version_33 = value;
	}

	inline static int32_t get_offset_of_actualVersion_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualVersion_34)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_actualVersion_34() const { return ___actualVersion_34; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_actualVersion_34() { return &___actualVersion_34; }
	inline void set_actualVersion_34(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___actualVersion_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualVersion_34), (void*)value);
	}

	inline static int32_t get_offset_of_proxy_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_35)); }
	inline RuntimeObject* get_proxy_35() const { return ___proxy_35; }
	inline RuntimeObject** get_address_of_proxy_35() { return &___proxy_35; }
	inline void set_proxy_35(RuntimeObject* value)
	{
		___proxy_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_35), (void*)value);
	}

	inline static int32_t get_offset_of_sendChunked_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___sendChunked_36)); }
	inline bool get_sendChunked_36() const { return ___sendChunked_36; }
	inline bool* get_address_of_sendChunked_36() { return &___sendChunked_36; }
	inline void set_sendChunked_36(bool value)
	{
		___sendChunked_36 = value;
	}

	inline static int32_t get_offset_of_servicePoint_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___servicePoint_37)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_servicePoint_37() const { return ___servicePoint_37; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_servicePoint_37() { return &___servicePoint_37; }
	inline void set_servicePoint_37(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___servicePoint_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servicePoint_37), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___timeout_38)); }
	inline int32_t get_timeout_38() const { return ___timeout_38; }
	inline int32_t* get_address_of_timeout_38() { return &___timeout_38; }
	inline void set_timeout_38(int32_t value)
	{
		___timeout_38 = value;
	}

	inline static int32_t get_offset_of_writeStream_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___writeStream_39)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_writeStream_39() const { return ___writeStream_39; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_writeStream_39() { return &___writeStream_39; }
	inline void set_writeStream_39(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___writeStream_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_39), (void*)value);
	}

	inline static int32_t get_offset_of_webResponse_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webResponse_40)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_webResponse_40() const { return ___webResponse_40; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_webResponse_40() { return &___webResponse_40; }
	inline void set_webResponse_40(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___webResponse_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webResponse_40), (void*)value);
	}

	inline static int32_t get_offset_of_responseTask_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___responseTask_41)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_responseTask_41() const { return ___responseTask_41; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_responseTask_41() { return &___responseTask_41; }
	inline void set_responseTask_41(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___responseTask_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseTask_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentOperation_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___currentOperation_42)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_42() const { return ___currentOperation_42; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_42() { return &___currentOperation_42; }
	inline void set_currentOperation_42(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_42), (void*)value);
	}

	inline static int32_t get_offset_of_aborted_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___aborted_43)); }
	inline int32_t get_aborted_43() const { return ___aborted_43; }
	inline int32_t* get_address_of_aborted_43() { return &___aborted_43; }
	inline void set_aborted_43(int32_t value)
	{
		___aborted_43 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___gotRequestStream_44)); }
	inline bool get_gotRequestStream_44() const { return ___gotRequestStream_44; }
	inline bool* get_address_of_gotRequestStream_44() { return &___gotRequestStream_44; }
	inline void set_gotRequestStream_44(bool value)
	{
		___gotRequestStream_44 = value;
	}

	inline static int32_t get_offset_of_redirects_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___redirects_45)); }
	inline int32_t get_redirects_45() const { return ___redirects_45; }
	inline int32_t* get_address_of_redirects_45() { return &___redirects_45; }
	inline void set_redirects_45(int32_t value)
	{
		___redirects_45 = value;
	}

	inline static int32_t get_offset_of_expectContinue_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___expectContinue_46)); }
	inline bool get_expectContinue_46() const { return ___expectContinue_46; }
	inline bool* get_address_of_expectContinue_46() { return &___expectContinue_46; }
	inline void set_expectContinue_46(bool value)
	{
		___expectContinue_46 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___getResponseCalled_47)); }
	inline bool get_getResponseCalled_47() const { return ___getResponseCalled_47; }
	inline bool* get_address_of_getResponseCalled_47() { return &___getResponseCalled_47; }
	inline void set_getResponseCalled_47(bool value)
	{
		___getResponseCalled_47 = value;
	}

	inline static int32_t get_offset_of_locker_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___locker_48)); }
	inline RuntimeObject * get_locker_48() const { return ___locker_48; }
	inline RuntimeObject ** get_address_of_locker_48() { return &___locker_48; }
	inline void set_locker_48(RuntimeObject * value)
	{
		___locker_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_48), (void*)value);
	}

	inline static int32_t get_offset_of_finished_reading_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___finished_reading_49)); }
	inline bool get_finished_reading_49() const { return ___finished_reading_49; }
	inline bool* get_address_of_finished_reading_49() { return &___finished_reading_49; }
	inline void set_finished_reading_49(bool value)
	{
		___finished_reading_49 = value;
	}

	inline static int32_t get_offset_of_auto_decomp_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auto_decomp_50)); }
	inline int32_t get_auto_decomp_50() const { return ___auto_decomp_50; }
	inline int32_t* get_address_of_auto_decomp_50() { return &___auto_decomp_50; }
	inline void set_auto_decomp_50(int32_t value)
	{
		___auto_decomp_50 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___readWriteTimeout_52)); }
	inline int32_t get_readWriteTimeout_52() const { return ___readWriteTimeout_52; }
	inline int32_t* get_address_of_readWriteTimeout_52() { return &___readWriteTimeout_52; }
	inline void set_readWriteTimeout_52(int32_t value)
	{
		___readWriteTimeout_52 = value;
	}

	inline static int32_t get_offset_of_tlsProvider_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsProvider_53)); }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * get_tlsProvider_53() const { return ___tlsProvider_53; }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 ** get_address_of_tlsProvider_53() { return &___tlsProvider_53; }
	inline void set_tlsProvider_53(MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * value)
	{
		___tlsProvider_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsProvider_53), (void*)value);
	}

	inline static int32_t get_offset_of_tlsSettings_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsSettings_54)); }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * get_tlsSettings_54() const { return ___tlsSettings_54; }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 ** get_address_of_tlsSettings_54() { return &___tlsSettings_54; }
	inline void set_tlsSettings_54(MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * value)
	{
		___tlsSettings_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsSettings_54), (void*)value);
	}

	inline static int32_t get_offset_of_certValidationCallback_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certValidationCallback_55)); }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * get_certValidationCallback_55() const { return ___certValidationCallback_55; }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA ** get_address_of_certValidationCallback_55() { return &___certValidationCallback_55; }
	inline void set_certValidationCallback_55(ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * value)
	{
		___certValidationCallback_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certValidationCallback_55), (void*)value);
	}

	inline static int32_t get_offset_of_auth_state_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auth_state_56)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_auth_state_56() const { return ___auth_state_56; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_auth_state_56() { return &___auth_state_56; }
	inline void set_auth_state_56(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___auth_state_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___auth_state_56))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_proxy_auth_state_57() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_auth_state_57)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_proxy_auth_state_57() const { return ___proxy_auth_state_57; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_proxy_auth_state_57() { return &___proxy_auth_state_57; }
	inline void set_proxy_auth_state_57(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___proxy_auth_state_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___proxy_auth_state_57))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_host_58() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___host_58)); }
	inline String_t* get_host_58() const { return ___host_58; }
	inline String_t** get_address_of_host_58() { return &___host_58; }
	inline void set_host_58(String_t* value)
	{
		___host_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_58), (void*)value);
	}

	inline static int32_t get_offset_of_ResendContentFactory_59() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ResendContentFactory_59)); }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * get_ResendContentFactory_59() const { return ___ResendContentFactory_59; }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 ** get_address_of_ResendContentFactory_59() { return &___ResendContentFactory_59; }
	inline void set_ResendContentFactory_59(Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * value)
	{
		___ResendContentFactory_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResendContentFactory_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CThrowOnErrorU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CThrowOnErrorU3Ek__BackingField_60)); }
	inline bool get_U3CThrowOnErrorU3Ek__BackingField_60() const { return ___U3CThrowOnErrorU3Ek__BackingField_60; }
	inline bool* get_address_of_U3CThrowOnErrorU3Ek__BackingField_60() { return &___U3CThrowOnErrorU3Ek__BackingField_60; }
	inline void set_U3CThrowOnErrorU3Ek__BackingField_60(bool value)
	{
		___U3CThrowOnErrorU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_61() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___unsafe_auth_blah_61)); }
	inline bool get_unsafe_auth_blah_61() const { return ___unsafe_auth_blah_61; }
	inline bool* get_address_of_unsafe_auth_blah_61() { return &___unsafe_auth_blah_61; }
	inline void set_unsafe_auth_blah_61(bool value)
	{
		___unsafe_auth_blah_61 = value;
	}
};

struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_51;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields, ___defaultMaxResponseHeadersLength_51)); }
	inline int32_t get_defaultMaxResponseHeadersLength_51() const { return ___defaultMaxResponseHeadersLength_51; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_51() { return &___defaultMaxResponseHeadersLength_51; }
	inline void set_defaultMaxResponseHeadersLength_51(int32_t value)
	{
		___defaultMaxResponseHeadersLength_51 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Facebook.WitAi.Data.WitValue
struct WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Facebook.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::reference
	WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * ___reference_5;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_4), (void*)value);
	}

	inline static int32_t get_offset_of_reference_5() { return static_cast<int32_t>(offsetof(WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5, ___reference_5)); }
	inline WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * get_reference_5() const { return ___reference_5; }
	inline WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B ** get_address_of_reference_5() { return &___reference_5; }
	inline void set_reference_5(WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * value)
	{
		___reference_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_5), (void*)value);
	}
};


// Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Facebook.WitAi.Data.AudioBuffer
struct AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Facebook.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_6;
	// Facebook.WitAi.Data.AudioBufferConfiguration Facebook.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90 * ___audioBufferConfiguration_7;
	// Facebook.WitAi.Events.AudioBufferEvents Facebook.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_t448C959599E4AF04F244CB8123ED85B68ED0CA95 * ___events_8;
	// Facebook.WitAi.Interfaces.IAudioInputSource Facebook.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_9;
	// Facebook.WitAi.Data.RingBuffer`1<System.Byte> Facebook.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * ____micDataBuffer_10;
	// System.Byte[] Facebook.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____byteDataBuffer_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Facebook.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * ____activeRecorders_12;

public:
	inline static int32_t get_offset_of_alwaysRecording_6() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ___alwaysRecording_6)); }
	inline bool get_alwaysRecording_6() const { return ___alwaysRecording_6; }
	inline bool* get_address_of_alwaysRecording_6() { return &___alwaysRecording_6; }
	inline void set_alwaysRecording_6(bool value)
	{
		___alwaysRecording_6 = value;
	}

	inline static int32_t get_offset_of_audioBufferConfiguration_7() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ___audioBufferConfiguration_7)); }
	inline AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90 * get_audioBufferConfiguration_7() const { return ___audioBufferConfiguration_7; }
	inline AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90 ** get_address_of_audioBufferConfiguration_7() { return &___audioBufferConfiguration_7; }
	inline void set_audioBufferConfiguration_7(AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90 * value)
	{
		___audioBufferConfiguration_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioBufferConfiguration_7), (void*)value);
	}

	inline static int32_t get_offset_of_events_8() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ___events_8)); }
	inline AudioBufferEvents_t448C959599E4AF04F244CB8123ED85B68ED0CA95 * get_events_8() const { return ___events_8; }
	inline AudioBufferEvents_t448C959599E4AF04F244CB8123ED85B68ED0CA95 ** get_address_of_events_8() { return &___events_8; }
	inline void set_events_8(AudioBufferEvents_t448C959599E4AF04F244CB8123ED85B68ED0CA95 * value)
	{
		___events_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_8), (void*)value);
	}

	inline static int32_t get_offset_of__micInput_9() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ____micInput_9)); }
	inline RuntimeObject* get__micInput_9() const { return ____micInput_9; }
	inline RuntimeObject** get_address_of__micInput_9() { return &____micInput_9; }
	inline void set__micInput_9(RuntimeObject* value)
	{
		____micInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micInput_9), (void*)value);
	}

	inline static int32_t get_offset_of__micDataBuffer_10() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ____micDataBuffer_10)); }
	inline RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * get__micDataBuffer_10() const { return ____micDataBuffer_10; }
	inline RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA ** get_address_of__micDataBuffer_10() { return &____micDataBuffer_10; }
	inline void set__micDataBuffer_10(RingBuffer_1_t6C44AB280EF01DC81948CC25214FC3307F8E3CDA * value)
	{
		____micDataBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____micDataBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of__byteDataBuffer_11() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ____byteDataBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__byteDataBuffer_11() const { return ____byteDataBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__byteDataBuffer_11() { return &____byteDataBuffer_11; }
	inline void set__byteDataBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____byteDataBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byteDataBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__activeRecorders_12() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578, ____activeRecorders_12)); }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * get__activeRecorders_12() const { return ____activeRecorders_12; }
	inline HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 ** get_address_of__activeRecorders_12() { return &____activeRecorders_12; }
	inline void set__activeRecorders_12(HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * value)
	{
		____activeRecorders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRecorders_12), (void*)value);
	}
};

struct AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578_StaticFields
{
public:
	// Facebook.WitAi.Data.AudioBuffer Facebook.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * ____instance_4;
	// System.Boolean Facebook.WitAi.Data.AudioBuffer::_instanceInit
	bool ____instanceInit_5;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578_StaticFields, ____instance_4)); }
	inline AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * get__instance_4() const { return ____instance_4; }
	inline AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__instanceInit_5() { return static_cast<int32_t>(offsetof(AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578_StaticFields, ____instanceInit_5)); }
	inline bool get__instanceInit_5() const { return ____instanceInit_5; }
	inline bool* get_address_of__instanceInit_5() { return &____instanceInit_5; }
	inline void set__instanceInit_5(bool value)
	{
		____instanceInit_5 = value;
	}
};


// Facebook.WitAi.Lib.Mic
struct Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Facebook.WitAi.Lib.Mic::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_4;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Lib.Mic::<AudioEncoding>k__BackingField
	AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * ___U3CAudioEncodingU3Ek__BackingField_5;
	// System.Single[] Facebook.WitAi.Lib.Mic::<Sample>k__BackingField
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CSampleU3Ek__BackingField_6;
	// System.Int32 Facebook.WitAi.Lib.Mic::<SampleDurationMS>k__BackingField
	int32_t ___U3CSampleDurationMSU3Ek__BackingField_7;
	// UnityEngine.AudioClip Facebook.WitAi.Lib.Mic::<AudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CAudioClipU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> Facebook.WitAi.Lib.Mic::_devices
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____devices_9;
	// System.Int32 Facebook.WitAi.Lib.Mic::<CurrentDeviceIndex>k__BackingField
	int32_t ___U3CCurrentDeviceIndexU3Ek__BackingField_10;
	// System.Int32 Facebook.WitAi.Lib.Mic::m_SampleCount
	int32_t ___m_SampleCount_11;
	// System.Action Facebook.WitAi.Lib.Mic::OnStartRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecording_12;
	// System.Action Facebook.WitAi.Lib.Mic::OnStartRecordingFailed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecordingFailed_13;
	// System.Action`3<System.Int32,System.Single[],System.Single> Facebook.WitAi.Lib.Mic::OnSampleReady
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___OnSampleReady_14;
	// System.Action Facebook.WitAi.Lib.Mic::OnStopRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStopRecording_15;

public:
	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CIsRecordingU3Ek__BackingField_4)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_4() const { return ___U3CIsRecordingU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_4() { return &___U3CIsRecordingU3Ek__BackingField_4; }
	inline void set_U3CIsRecordingU3Ek__BackingField_4(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CAudioEncodingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CAudioEncodingU3Ek__BackingField_5)); }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * get_U3CAudioEncodingU3Ek__BackingField_5() const { return ___U3CAudioEncodingU3Ek__BackingField_5; }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 ** get_address_of_U3CAudioEncodingU3Ek__BackingField_5() { return &___U3CAudioEncodingU3Ek__BackingField_5; }
	inline void set_U3CAudioEncodingU3Ek__BackingField_5(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * value)
	{
		___U3CAudioEncodingU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioEncodingU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSampleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CSampleU3Ek__BackingField_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CSampleU3Ek__BackingField_6() const { return ___U3CSampleU3Ek__BackingField_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CSampleU3Ek__BackingField_6() { return &___U3CSampleU3Ek__BackingField_6; }
	inline void set_U3CSampleU3Ek__BackingField_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CSampleU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSampleU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSampleDurationMSU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CSampleDurationMSU3Ek__BackingField_7)); }
	inline int32_t get_U3CSampleDurationMSU3Ek__BackingField_7() const { return ___U3CSampleDurationMSU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CSampleDurationMSU3Ek__BackingField_7() { return &___U3CSampleDurationMSU3Ek__BackingField_7; }
	inline void set_U3CSampleDurationMSU3Ek__BackingField_7(int32_t value)
	{
		___U3CSampleDurationMSU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CAudioClipU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CAudioClipU3Ek__BackingField_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CAudioClipU3Ek__BackingField_8() const { return ___U3CAudioClipU3Ek__BackingField_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CAudioClipU3Ek__BackingField_8() { return &___U3CAudioClipU3Ek__BackingField_8; }
	inline void set_U3CAudioClipU3Ek__BackingField_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CAudioClipU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioClipU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of__devices_9() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ____devices_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__devices_9() const { return ____devices_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__devices_9() { return &____devices_9; }
	inline void set__devices_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____devices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____devices_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentDeviceIndexU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___U3CCurrentDeviceIndexU3Ek__BackingField_10)); }
	inline int32_t get_U3CCurrentDeviceIndexU3Ek__BackingField_10() const { return ___U3CCurrentDeviceIndexU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCurrentDeviceIndexU3Ek__BackingField_10() { return &___U3CCurrentDeviceIndexU3Ek__BackingField_10; }
	inline void set_U3CCurrentDeviceIndexU3Ek__BackingField_10(int32_t value)
	{
		___U3CCurrentDeviceIndexU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_11() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___m_SampleCount_11)); }
	inline int32_t get_m_SampleCount_11() const { return ___m_SampleCount_11; }
	inline int32_t* get_address_of_m_SampleCount_11() { return &___m_SampleCount_11; }
	inline void set_m_SampleCount_11(int32_t value)
	{
		___m_SampleCount_11 = value;
	}

	inline static int32_t get_offset_of_OnStartRecording_12() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___OnStartRecording_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecording_12() const { return ___OnStartRecording_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecording_12() { return &___OnStartRecording_12; }
	inline void set_OnStartRecording_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecording_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecording_12), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecordingFailed_13() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___OnStartRecordingFailed_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecordingFailed_13() const { return ___OnStartRecordingFailed_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecordingFailed_13() { return &___OnStartRecordingFailed_13; }
	inline void set_OnStartRecordingFailed_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecordingFailed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecordingFailed_13), (void*)value);
	}

	inline static int32_t get_offset_of_OnSampleReady_14() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___OnSampleReady_14)); }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * get_OnSampleReady_14() const { return ___OnSampleReady_14; }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** get_address_of_OnSampleReady_14() { return &___OnSampleReady_14; }
	inline void set_OnSampleReady_14(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * value)
	{
		___OnSampleReady_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSampleReady_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopRecording_15() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4, ___OnStopRecording_15)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStopRecording_15() const { return ___OnStopRecording_15; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStopRecording_15() { return &___OnStopRecording_15; }
	inline void set_OnStopRecording_15(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStopRecording_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopRecording_15), (void*)value);
	}
};

struct Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4_StaticFields
{
public:
	// Facebook.WitAi.Lib.Mic Facebook.WitAi.Lib.Mic::m_Instance
	Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * ___m_Instance_16;

public:
	inline static int32_t get_offset_of_m_Instance_16() { return static_cast<int32_t>(offsetof(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4_StaticFields, ___m_Instance_16)); }
	inline Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * get_m_Instance_16() const { return ___m_Instance_16; }
	inline Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 ** get_address_of_m_Instance_16() { return &___m_Instance_16; }
	inline void set_m_Instance_16(Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * value)
	{
		___m_Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_16), (void*)value);
	}
};


// Facebook.WitAi.Lib.MicBase
struct MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action Facebook.WitAi.Lib.MicBase::OnStartRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecording_4;
	// System.Action Facebook.WitAi.Lib.MicBase::OnStartRecordingFailed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStartRecordingFailed_5;
	// System.Action Facebook.WitAi.Lib.MicBase::OnStopRecording
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStopRecording_6;
	// System.Action`3<System.Int32,System.Single[],System.Single> Facebook.WitAi.Lib.MicBase::OnSampleReady
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * ___OnSampleReady_7;
	// System.Boolean Facebook.WitAi.Lib.MicBase::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_8;
	// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Lib.MicBase::<AudioEncoding>k__BackingField
	AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * ___U3CAudioEncodingU3Ek__BackingField_9;
	// System.Int32 Facebook.WitAi.Lib.MicBase::_sampleCount
	int32_t ____sampleCount_10;
	// UnityEngine.Coroutine Facebook.WitAi.Lib.MicBase::_reader
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____reader_11;

public:
	inline static int32_t get_offset_of_OnStartRecording_4() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___OnStartRecording_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecording_4() const { return ___OnStartRecording_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecording_4() { return &___OnStartRecording_4; }
	inline void set_OnStartRecording_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecording_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecording_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartRecordingFailed_5() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___OnStartRecordingFailed_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStartRecordingFailed_5() const { return ___OnStartRecordingFailed_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStartRecordingFailed_5() { return &___OnStartRecordingFailed_5; }
	inline void set_OnStartRecordingFailed_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStartRecordingFailed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartRecordingFailed_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopRecording_6() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___OnStopRecording_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStopRecording_6() const { return ___OnStopRecording_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStopRecording_6() { return &___OnStopRecording_6; }
	inline void set_OnStopRecording_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStopRecording_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopRecording_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSampleReady_7() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___OnSampleReady_7)); }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * get_OnSampleReady_7() const { return ___OnSampleReady_7; }
	inline Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 ** get_address_of_OnSampleReady_7() { return &___OnSampleReady_7; }
	inline void set_OnSampleReady_7(Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * value)
	{
		___OnSampleReady_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSampleReady_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___U3CIsRecordingU3Ek__BackingField_8)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_8() const { return ___U3CIsRecordingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_8() { return &___U3CIsRecordingU3Ek__BackingField_8; }
	inline void set_U3CIsRecordingU3Ek__BackingField_8(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAudioEncodingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ___U3CAudioEncodingU3Ek__BackingField_9)); }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * get_U3CAudioEncodingU3Ek__BackingField_9() const { return ___U3CAudioEncodingU3Ek__BackingField_9; }
	inline AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 ** get_address_of_U3CAudioEncodingU3Ek__BackingField_9() { return &___U3CAudioEncodingU3Ek__BackingField_9; }
	inline void set_U3CAudioEncodingU3Ek__BackingField_9(AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * value)
	{
		___U3CAudioEncodingU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioEncodingU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of__sampleCount_10() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ____sampleCount_10)); }
	inline int32_t get__sampleCount_10() const { return ____sampleCount_10; }
	inline int32_t* get_address_of__sampleCount_10() { return &____sampleCount_10; }
	inline void set__sampleCount_10(int32_t value)
	{
		____sampleCount_10 = value;
	}

	inline static int32_t get_offset_of__reader_11() { return static_cast<int32_t>(offsetof(MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521, ____reader_11)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__reader_11() const { return ____reader_11; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__reader_11() { return &____reader_11; }
	inline void set__reader_11(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____reader_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_11), (void*)value);
	}
};


// Facebook.WitAi.VoiceService
struct VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.WitAi.Data.Configuration.WitConfiguration Facebook.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Facebook.WitAi.VoiceService::conduitParameterProvider
	RuntimeObject* ___conduitParameterProvider_5;
	// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.VoiceService::events
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * ___events_6;
	// Meta.Conduit.IConduitDispatcher Facebook.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__witConfiguration_4() { return static_cast<int32_t>(offsetof(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400, ____witConfiguration_4)); }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * get__witConfiguration_4() const { return ____witConfiguration_4; }
	inline WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 ** get_address_of__witConfiguration_4() { return &____witConfiguration_4; }
	inline void set__witConfiguration_4(WitConfiguration_t30A3D2BE9E62EF8F9ED3CC1658F401F6F2424631 * value)
	{
		____witConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____witConfiguration_4), (void*)value);
	}

	inline static int32_t get_offset_of_conduitParameterProvider_5() { return static_cast<int32_t>(offsetof(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400, ___conduitParameterProvider_5)); }
	inline RuntimeObject* get_conduitParameterProvider_5() const { return ___conduitParameterProvider_5; }
	inline RuntimeObject** get_address_of_conduitParameterProvider_5() { return &___conduitParameterProvider_5; }
	inline void set_conduitParameterProvider_5(RuntimeObject* value)
	{
		___conduitParameterProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conduitParameterProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_events_6() { return static_cast<int32_t>(offsetof(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400, ___events_6)); }
	inline VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * get_events_6() const { return ___events_6; }
	inline VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D ** get_address_of_events_6() { return &___events_6; }
	inline void set_events_6(VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * value)
	{
		___events_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConduitDispatcherU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400, ___U3CConduitDispatcherU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CConduitDispatcherU3Ek__BackingField_7() const { return ___U3CConduitDispatcherU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CConduitDispatcherU3Ek__BackingField_7() { return &___U3CConduitDispatcherU3Ek__BackingField_7; }
	inline void set_U3CConduitDispatcherU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CConduitDispatcherU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConduitDispatcherU3Ek__BackingField_7), (void*)value);
	}
};


// Facebook.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t1B7E91966437B0E0F68466556503966638A5F4CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.WitAi.VoiceService Facebook.WitAi.CallbackHandlers.WitResponseHandler::wit
	VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * ___wit_4;

public:
	inline static int32_t get_offset_of_wit_4() { return static_cast<int32_t>(offsetof(WitResponseHandler_t1B7E91966437B0E0F68466556503966638A5F4CA, ___wit_4)); }
	inline VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * get_wit_4() const { return ___wit_4; }
	inline VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 ** get_address_of_wit_4() { return &___wit_4; }
	inline void set_wit_4(VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * value)
	{
		___wit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wit_4), (void*)value);
	}
};


// Facebook.WitAi.WitService
struct WitService_t860537723698CF0607466342346F3B1FECA68DCB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Facebook.WitAi.Configuration.WitRequestOptions Facebook.WitAi.WitService::_currentRequestOptions
	WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * ____currentRequestOptions_4;
	// System.Single Facebook.WitAi.WitService::_lastMinVolumeLevelTime
	float ____lastMinVolumeLevelTime_5;
	// Facebook.WitAi.WitRequest Facebook.WitAi.WitService::_recordingRequest
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ____recordingRequest_6;
	// System.Boolean Facebook.WitAi.WitService::_isSoundWakeActive
	bool ____isSoundWakeActive_7;
	// Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte> Facebook.WitAi.WitService::_lastSampleMarker
	Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * ____lastSampleMarker_8;
	// System.Boolean Facebook.WitAi.WitService::_minKeepAliveWasHit
	bool ____minKeepAliveWasHit_9;
	// System.Boolean Facebook.WitAi.WitService::_isActive
	bool ____isActive_10;
	// System.Int64 Facebook.WitAi.WitService::_minSampleByteCount
	int64_t ____minSampleByteCount_11;
	// Facebook.WitAi.IVoiceEventProvider Facebook.WitAi.WitService::_voiceEventProvider
	RuntimeObject* ____voiceEventProvider_12;
	// Facebook.WitAi.IWitRuntimeConfigProvider Facebook.WitAi.WitService::_runtimeConfigProvider
	RuntimeObject* ____runtimeConfigProvider_13;
	// Facebook.WitAi.Interfaces.ITranscriptionProvider Facebook.WitAi.WitService::_activeTranscriptionProvider
	RuntimeObject* ____activeTranscriptionProvider_14;
	// UnityEngine.Coroutine Facebook.WitAi.WitService::_timeLimitCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____timeLimitCoroutine_15;
	// System.Boolean Facebook.WitAi.WitService::_receivedTranscription
	bool ____receivedTranscription_16;
	// System.Single Facebook.WitAi.WitService::_lastWordTime
	float ____lastWordTime_17;
	// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitService::_transmitRequests
	HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * ____transmitRequests_18;
	// System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest> Facebook.WitAi.WitService::_queuedRequests
	HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * ____queuedRequests_19;
	// UnityEngine.Coroutine Facebook.WitAi.WitService::_queueHandler
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____queueHandler_20;
	// Facebook.WitAi.Events.IWitByteDataReadyHandler[] Facebook.WitAi.WitService::_dataReadyHandlers
	IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* ____dataReadyHandlers_21;
	// Facebook.WitAi.Events.IWitByteDataSentHandler[] Facebook.WitAi.WitService::_dataSentHandlers
	IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* ____dataSentHandlers_22;
	// Facebook.WitAi.Interfaces.IDynamicEntitiesProvider[] Facebook.WitAi.WitService::_dynamicEntityProviders
	IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* ____dynamicEntityProviders_23;

public:
	inline static int32_t get_offset_of__currentRequestOptions_4() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____currentRequestOptions_4)); }
	inline WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * get__currentRequestOptions_4() const { return ____currentRequestOptions_4; }
	inline WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F ** get_address_of__currentRequestOptions_4() { return &____currentRequestOptions_4; }
	inline void set__currentRequestOptions_4(WitRequestOptions_tBFA76B798457A95DA736C6A3A913330739AF9F1F * value)
	{
		____currentRequestOptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentRequestOptions_4), (void*)value);
	}

	inline static int32_t get_offset_of__lastMinVolumeLevelTime_5() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastMinVolumeLevelTime_5)); }
	inline float get__lastMinVolumeLevelTime_5() const { return ____lastMinVolumeLevelTime_5; }
	inline float* get_address_of__lastMinVolumeLevelTime_5() { return &____lastMinVolumeLevelTime_5; }
	inline void set__lastMinVolumeLevelTime_5(float value)
	{
		____lastMinVolumeLevelTime_5 = value;
	}

	inline static int32_t get_offset_of__recordingRequest_6() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____recordingRequest_6)); }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * get__recordingRequest_6() const { return ____recordingRequest_6; }
	inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 ** get_address_of__recordingRequest_6() { return &____recordingRequest_6; }
	inline void set__recordingRequest_6(WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * value)
	{
		____recordingRequest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordingRequest_6), (void*)value);
	}

	inline static int32_t get_offset_of__isSoundWakeActive_7() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____isSoundWakeActive_7)); }
	inline bool get__isSoundWakeActive_7() const { return ____isSoundWakeActive_7; }
	inline bool* get_address_of__isSoundWakeActive_7() { return &____isSoundWakeActive_7; }
	inline void set__isSoundWakeActive_7(bool value)
	{
		____isSoundWakeActive_7 = value;
	}

	inline static int32_t get_offset_of__lastSampleMarker_8() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastSampleMarker_8)); }
	inline Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * get__lastSampleMarker_8() const { return ____lastSampleMarker_8; }
	inline Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A ** get_address_of__lastSampleMarker_8() { return &____lastSampleMarker_8; }
	inline void set__lastSampleMarker_8(Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * value)
	{
		____lastSampleMarker_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSampleMarker_8), (void*)value);
	}

	inline static int32_t get_offset_of__minKeepAliveWasHit_9() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____minKeepAliveWasHit_9)); }
	inline bool get__minKeepAliveWasHit_9() const { return ____minKeepAliveWasHit_9; }
	inline bool* get_address_of__minKeepAliveWasHit_9() { return &____minKeepAliveWasHit_9; }
	inline void set__minKeepAliveWasHit_9(bool value)
	{
		____minKeepAliveWasHit_9 = value;
	}

	inline static int32_t get_offset_of__isActive_10() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____isActive_10)); }
	inline bool get__isActive_10() const { return ____isActive_10; }
	inline bool* get_address_of__isActive_10() { return &____isActive_10; }
	inline void set__isActive_10(bool value)
	{
		____isActive_10 = value;
	}

	inline static int32_t get_offset_of__minSampleByteCount_11() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____minSampleByteCount_11)); }
	inline int64_t get__minSampleByteCount_11() const { return ____minSampleByteCount_11; }
	inline int64_t* get_address_of__minSampleByteCount_11() { return &____minSampleByteCount_11; }
	inline void set__minSampleByteCount_11(int64_t value)
	{
		____minSampleByteCount_11 = value;
	}

	inline static int32_t get_offset_of__voiceEventProvider_12() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____voiceEventProvider_12)); }
	inline RuntimeObject* get__voiceEventProvider_12() const { return ____voiceEventProvider_12; }
	inline RuntimeObject** get_address_of__voiceEventProvider_12() { return &____voiceEventProvider_12; }
	inline void set__voiceEventProvider_12(RuntimeObject* value)
	{
		____voiceEventProvider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voiceEventProvider_12), (void*)value);
	}

	inline static int32_t get_offset_of__runtimeConfigProvider_13() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____runtimeConfigProvider_13)); }
	inline RuntimeObject* get__runtimeConfigProvider_13() const { return ____runtimeConfigProvider_13; }
	inline RuntimeObject** get_address_of__runtimeConfigProvider_13() { return &____runtimeConfigProvider_13; }
	inline void set__runtimeConfigProvider_13(RuntimeObject* value)
	{
		____runtimeConfigProvider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runtimeConfigProvider_13), (void*)value);
	}

	inline static int32_t get_offset_of__activeTranscriptionProvider_14() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____activeTranscriptionProvider_14)); }
	inline RuntimeObject* get__activeTranscriptionProvider_14() const { return ____activeTranscriptionProvider_14; }
	inline RuntimeObject** get_address_of__activeTranscriptionProvider_14() { return &____activeTranscriptionProvider_14; }
	inline void set__activeTranscriptionProvider_14(RuntimeObject* value)
	{
		____activeTranscriptionProvider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTranscriptionProvider_14), (void*)value);
	}

	inline static int32_t get_offset_of__timeLimitCoroutine_15() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____timeLimitCoroutine_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__timeLimitCoroutine_15() const { return ____timeLimitCoroutine_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__timeLimitCoroutine_15() { return &____timeLimitCoroutine_15; }
	inline void set__timeLimitCoroutine_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____timeLimitCoroutine_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeLimitCoroutine_15), (void*)value);
	}

	inline static int32_t get_offset_of__receivedTranscription_16() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____receivedTranscription_16)); }
	inline bool get__receivedTranscription_16() const { return ____receivedTranscription_16; }
	inline bool* get_address_of__receivedTranscription_16() { return &____receivedTranscription_16; }
	inline void set__receivedTranscription_16(bool value)
	{
		____receivedTranscription_16 = value;
	}

	inline static int32_t get_offset_of__lastWordTime_17() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____lastWordTime_17)); }
	inline float get__lastWordTime_17() const { return ____lastWordTime_17; }
	inline float* get_address_of__lastWordTime_17() { return &____lastWordTime_17; }
	inline void set__lastWordTime_17(float value)
	{
		____lastWordTime_17 = value;
	}

	inline static int32_t get_offset_of__transmitRequests_18() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____transmitRequests_18)); }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * get__transmitRequests_18() const { return ____transmitRequests_18; }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC ** get_address_of__transmitRequests_18() { return &____transmitRequests_18; }
	inline void set__transmitRequests_18(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * value)
	{
		____transmitRequests_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transmitRequests_18), (void*)value);
	}

	inline static int32_t get_offset_of__queuedRequests_19() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____queuedRequests_19)); }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * get__queuedRequests_19() const { return ____queuedRequests_19; }
	inline HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC ** get_address_of__queuedRequests_19() { return &____queuedRequests_19; }
	inline void set__queuedRequests_19(HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * value)
	{
		____queuedRequests_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedRequests_19), (void*)value);
	}

	inline static int32_t get_offset_of__queueHandler_20() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____queueHandler_20)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__queueHandler_20() const { return ____queueHandler_20; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__queueHandler_20() { return &____queueHandler_20; }
	inline void set__queueHandler_20(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____queueHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queueHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of__dataReadyHandlers_21() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dataReadyHandlers_21)); }
	inline IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* get__dataReadyHandlers_21() const { return ____dataReadyHandlers_21; }
	inline IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180** get_address_of__dataReadyHandlers_21() { return &____dataReadyHandlers_21; }
	inline void set__dataReadyHandlers_21(IWitByteDataReadyHandlerU5BU5D_tDAF18FFFEDA7AD9375B6460D05A3F76B7B129180* value)
	{
		____dataReadyHandlers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataReadyHandlers_21), (void*)value);
	}

	inline static int32_t get_offset_of__dataSentHandlers_22() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dataSentHandlers_22)); }
	inline IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* get__dataSentHandlers_22() const { return ____dataSentHandlers_22; }
	inline IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804** get_address_of__dataSentHandlers_22() { return &____dataSentHandlers_22; }
	inline void set__dataSentHandlers_22(IWitByteDataSentHandlerU5BU5D_t50A06A7E11B774416F56D27DCF1E85671DA8D804* value)
	{
		____dataSentHandlers_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSentHandlers_22), (void*)value);
	}

	inline static int32_t get_offset_of__dynamicEntityProviders_23() { return static_cast<int32_t>(offsetof(WitService_t860537723698CF0607466342346F3B1FECA68DCB, ____dynamicEntityProviders_23)); }
	inline IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* get__dynamicEntityProviders_23() const { return ____dynamicEntityProviders_23; }
	inline IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107** get_address_of__dynamicEntityProviders_23() { return &____dynamicEntityProviders_23; }
	inline void set__dynamicEntityProviders_23(IDynamicEntitiesProviderU5BU5D_tDDBA52ABBE7FA2E95A314F6D72D3FB0FDFED2107* value)
	{
		____dynamicEntityProviders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicEntityProviders_23), (void*)value);
	}
};


// Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_4;
	// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_useUpdate
	bool ____useUpdate_5;
	// System.Collections.IEnumerator Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_method
	RuntimeObject* ____method_6;
	// UnityEngine.Coroutine Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::_coroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____coroutine_7;

public:
	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ___U3CIsRunningU3Ek__BackingField_4)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_4() const { return ___U3CIsRunningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_4() { return &___U3CIsRunningU3Ek__BackingField_4; }
	inline void set_U3CIsRunningU3Ek__BackingField_4(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__useUpdate_5() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ____useUpdate_5)); }
	inline bool get__useUpdate_5() const { return ____useUpdate_5; }
	inline bool* get_address_of__useUpdate_5() { return &____useUpdate_5; }
	inline void set__useUpdate_5(bool value)
	{
		____useUpdate_5 = value;
	}

	inline static int32_t get_offset_of__method_6() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ____method_6)); }
	inline RuntimeObject* get__method_6() const { return ____method_6; }
	inline RuntimeObject** get_address_of__method_6() { return &____method_6; }
	inline void set__method_6(RuntimeObject* value)
	{
		____method_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____method_6), (void*)value);
	}

	inline static int32_t get_offset_of__coroutine_7() { return static_cast<int32_t>(offsetof(CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675, ____coroutine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__coroutine_7() const { return ____coroutine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__coroutine_7() { return &____coroutine_7; }
	inline void set__coroutine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____coroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coroutine_7), (void*)value);
	}
};


// Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA  : public WitResponseHandler_t1B7E91966437B0E0F68466556503966638A5F4CA
{
public:
	// System.String Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_5;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_6;
	// System.Boolean Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_7;
	// Facebook.WitAi.Utilities.StringEvent Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * ___onUtteranceMatched_8;
	// System.Text.RegularExpressions.Regex Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex_9;

public:
	inline static int32_t get_offset_of_searchText_5() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA, ___searchText_5)); }
	inline String_t* get_searchText_5() const { return ___searchText_5; }
	inline String_t** get_address_of_searchText_5() { return &___searchText_5; }
	inline void set_searchText_5(String_t* value)
	{
		___searchText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchText_5), (void*)value);
	}

	inline static int32_t get_offset_of_exactMatch_6() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA, ___exactMatch_6)); }
	inline bool get_exactMatch_6() const { return ___exactMatch_6; }
	inline bool* get_address_of_exactMatch_6() { return &___exactMatch_6; }
	inline void set_exactMatch_6(bool value)
	{
		___exactMatch_6 = value;
	}

	inline static int32_t get_offset_of_useRegex_7() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA, ___useRegex_7)); }
	inline bool get_useRegex_7() const { return ___useRegex_7; }
	inline bool* get_address_of_useRegex_7() { return &___useRegex_7; }
	inline void set_useRegex_7(bool value)
	{
		___useRegex_7 = value;
	}

	inline static int32_t get_offset_of_onUtteranceMatched_8() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA, ___onUtteranceMatched_8)); }
	inline StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * get_onUtteranceMatched_8() const { return ___onUtteranceMatched_8; }
	inline StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 ** get_address_of_onUtteranceMatched_8() { return &___onUtteranceMatched_8; }
	inline void set_onUtteranceMatched_8(StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * value)
	{
		___onUtteranceMatched_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUtteranceMatched_8), (void*)value);
	}

	inline static int32_t get_offset_of_regex_9() { return static_cast<int32_t>(offsetof(WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA, ___regex_9)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_regex_9() const { return ___regex_9; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_regex_9() { return &___regex_9; }
	inline void set_regex_9(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___regex_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regex_9), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m8C81925EFA00A24807B72178004B3A1CDAF97EEF_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m8194125167FD7A887F1B39D342A71A0BD0C8BF5C_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_m729FB40D7A2B5627E4E77539A1D84D2A81E8BC22_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_mDDFFE1829E81052B622ED339690BABBD13DC32BA_gshared (Action_3_t305BA31151982EE25E9A627B2E60D3E0E964DC35 * __this, int32_t ___arg10, RuntimeObject * ___arg21, float ___arg32, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m8D633FD1D0EF70BD84D0D1C82EAC8B029D603E98_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mB2A3571B348E408BAC91D09A81DF97EAE11A1B02_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void Facebook.WitAi.Configuration.WitConfigurationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfigurationData__ctor_m8A89DCA13105F7511696C67CDE419CDA57C72764 (WitConfigurationData_t6FF393A3DA22F0BABBB357F9B680171B8283FE6C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * Regex_Match_m9BE3E10B8FBD9F612AC071CC3C68A974E898E233 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B (Group_t0B987F132503F2672BC66FCDD21EA8A6EB484883 * __this, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A (Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m8C81925EFA00A24807B72178004B3A1CDAF97EEF_gshared)(__this, ___arg00, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mDC9A5E98B66448DA362749220D14E9FB08DB2E2F (StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_m65D47FC6C5718A7F3C641F622375AED406F1AEB2 (WitResponseHandler_t1B7E91966437B0E0F68466556503966638A5F4CA * __this, const RuntimeMethod* method);
// Facebook.WitAi.WitResponseReference Facebook.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * WitResultUtilities_GetWitResponseReference_m03099035E498563B3A0BC2EA3F340CC9F781C528 (String_t* ___path0, const RuntimeMethod* method);
// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * WitValue_get_Reference_mA6AE08AF51B3CD8F6D3EC31A7727AF1354490B27 (WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Net.HttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method);
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17 (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Add(!0)
inline bool HashSet_1_Add_m58481EC50DA1855C2B8C35BC8F9F806B484D9208 (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 *, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))HashSet_1_Add_m8194125167FD7A887F1B39D342A71A0BD0C8BF5C_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CoroutinePerformer_get_IsRunning_mF15DD65AC7105398F420D195787FC4D93FFF4755_inline (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::set_IsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoroutinePerformer_set_IsRunning_m1B95A4F57E595B9A2D2E9886B4B252270D7B849A_inline (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isBatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB (const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineIterateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineIterateUpdate_m336EDCC7FB4B9AF6C64D52C90DDD7F5211876E99 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineIterateEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoroutinePerformer_CoroutineIterateEnumerator_mEB3BD7D1B47F4DF060E88C7C55F487298CB22587 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m498F570B92585A610C7E540903C3DCD8E5F5B991 (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineCancel_mAAC3205B43E28BB96B9FC0A12A1164FE90DB6C2C (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::MoveNext(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CoroutinePerformer_MoveNext_mA530294193E1BCE91DB0898D3319F09569D09B4C (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, RuntimeObject* ___method0, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisType_t_m42D7F7B4D651EFBDB26F9BDD0C313092C556F051 (RuntimeObject* ___source0, Type_t * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Type_t *, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_m729FB40D7A2B5627E4E77539A1D84D2A81E8BC22_gshared)(___source0, ___value1, method);
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineUnload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineUnload_m796E6DCC8F0F4452C40BB1DF9669DE0486BF8F49 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String Facebook.WitAi.Lib.Mic::get_CurrentDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Mic_get_CurrentDeviceName_m31AD2B29936D0273DADAFFA076AC9F241FF2E550 (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Single[] Facebook.WitAi.Lib.Mic::get_Sample()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Mic_get_Sample_mF43B7CF174CCD4DBDC28D8848E1BE90A2021D94F_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip Facebook.WitAi.Lib.Mic::get_AudioClip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.Mic::set_Sample(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mic_set_Sample_m21640A4DA5E5F52F567BD51E8F11D75E00C92C16_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0 (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * __this, int32_t ___arg10, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___arg21, float ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, float, const RuntimeMethod*))Action_3_Invoke_mDDFFE1829E81052B622ED339690BABBD13DC32BA_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.Lib.Mic::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mic_get_IsRecording_mC9CE897A6F309FF9BD9EDB89E931E22C59D39EFA_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// Facebook.WitAi.Data.AudioEncoding Facebook.WitAi.Lib.MicBase::get_AudioEncoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * MicBase_get_AudioEncoding_mFE8D0AF1F627F7711200DCB59252B251C4D440C4_inline (MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.Lib.MicBase::get_IsRecording()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicBase_get_IsRecording_m100E35AE7DADC7A0B1C444075D6AC537F3C6E989_inline (MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A6F88C226545A58E995D0C5872D14D7141DC68A (U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_mBE3AAEA3F1FD035429FAB6B27A991B733DEEFC1D (DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9 * __this, String_t* ___serverToken0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.WitRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m944D11CF7FEC422440F2B975C9D24689C18C1979 (U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Object System.Delegate::DynamicInvoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Delegate_DynamicInvoke_m53122A57C6068A5EE443D102801A0FB0E661F4BA (Delegate_t * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274 (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mCEF7590EF77B90BABE12519F1B63269909869CBA_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Action>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mE42C1DE41707C063A34DCDE668BF0285FB8F39BF (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m8D633FD1D0EF70BD84D0D1C82EAC8B029D603E98_gshared)(__this, ___result0, method);
}
// System.Boolean Facebook.WitAi.WitRequest::HasMainThreadCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitRequest_HasMainThreadCallbacks_m9DAEBC6BF747E08855503AD8571249F6B0B56098 (WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m807DD59E267A4308286883925F1026D4126C439A (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator()
inline Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E (List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  (*) (List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::get_Current()
inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_inline (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::MoveNext()
inline bool Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797 (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m368A1ACDB24BCCC355645549EF48C59C771D0E6E (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Facebook.WitAi.Lib.WitResponseNode>::Dispose()
inline void Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4 (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>::get_Value()
inline WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_inline (KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE * __this, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * (*) (KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline)(__this, method);
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode::op_Equality(Facebook.WitAi.Lib.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Equality_m8CBEED47147C074BA26494FA79BE910107DC182E (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator()
inline Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19 (Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  (*) (Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::get_Current()
inline KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_inline (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::MoveNext()
inline bool Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Facebook.WitAi.Lib.WitResponseNode>::Dispose()
inline void Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode::get_DeepChilds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitResponseNode_get_DeepChilds_mB9CCC1BAC46715F7CB089F7F486E3561807F4AA3 (WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method);
// Facebook.WitAi.Configuration.WitRuntimeConfiguration Facebook.WitAi.WitService::get_RuntimeConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18 (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean Facebook.WitAi.WitService::get_IsRequestActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitService_get_IsRequestActive_m7DCDC5C172F24DC0E04F70B72A877EF6B228368F (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.WitService::get_VoiceEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * WitService_get_VoiceEvents_m79574F0947BFED13FC4CB240E340164525F21AFA (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, const RuntimeMethod* method);
// System.Void Facebook.WitAi.WitService::DeactivateRequest(UnityEngine.Events.UnityEvent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitService_DeactivateRequest_m4CE7B86FE8975381332413857B324CE05955E7A7 (WitService_t860537723698CF0607466342346F3B1FECA68DCB * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onComplete0, bool ___abort1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::get_Count()
inline int32_t HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// !!0 System.Linq.Enumerable::First<Facebook.WitAi.WitRequest>(System.Collections.Generic.IEnumerable`1<!!0>)
inline WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m465A72D24AB7AA5B873D3CE4FF153E2DA0DDF759 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m5BF502E3C61085AD7B2A51CCEFC291A3025BC475_gshared)(___source0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::Remove(!0)
inline bool HashSet_1_Remove_m8ADD700B3F1C4B9A2B6929529D435A47381CB66C (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *, const RuntimeMethod*))HashSet_1_Remove_mB2A3571B348E408BAC91D09A81DF97EAE11A1B02_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Facebook.WitAi.WitRequest>::Add(!0)
inline bool HashSet_1_Add_m9E3842108799453EADF7BACEEECEC96D781D9E32 (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * __this, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC *, WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 *, const RuntimeMethod*))HashSet_1_Add_m8194125167FD7A887F1B39D342A71A0BD0C8BF5C_gshared)(__this, ___item0, method);
}
// System.Void Facebook.WitAi.WitRequest::Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequest_Request_m25DBB180B8EB2486AFAD4D2DBD9E8434CA756C53 (WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.Data.Traits.WitTrait::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTrait__ctor_mA57C41C569865E0697241EB5A2CB6C9A603D193B (WitTrait_t219381754C2CD3CA64828342929DDB47EF7A8641 * __this, const RuntimeMethod* method)
{
	{
		WitConfigurationData__ctor_m8A89DCA13105F7511696C67CDE419CDA57C72764(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Data.Traits.WitTraitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTraitValue__ctor_mA09CBAD543DAB2FA8DB792D8ED9F820D1FC96CEC (WitTraitValue_t283B23609BB8093C8C7BE5A4215169213983A941 * __this, const RuntimeMethod* method)
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
// System.Void Facebook.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m4C7714B0A4C8E8682E853DC56033152EC96A10F2 (WitTranscriptionEvent_t173FC642ECF9BBC8DC629B2978E5EE883F2BFC3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnHandleResponse_m0F60352A1DB6A95EE643F3063A9BEC6566A33075 (WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * V_1 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B8_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B7_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B11_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B10_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B16_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B15_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B20_0 = NULL;
	StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * G_B19_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F *, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (useRegex)
		bool L_3 = __this->get_useRegex_7();
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		// if (null == regex)
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_4 = __this->get_regex_9();
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_5 = __this->get_searchText_5();
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_6 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_6, L_5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_regex_9(L_6);
	}

IL_0034:
	{
		// var match = regex.Match(text);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_7 = __this->get_regex_9();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_9;
		L_9 = Regex_Match_m9BE3E10B8FBD9F612AC071CC3C68A974E898E233(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (match.Success)
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = Group_get_Success_m917CA7077102642C3C24106F13B9F5F5D5130C1B(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00e1;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_12 = __this->get_exactMatch_6();
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Capture_get_Value_mC5CAABA66AC24C90CE1A6FE7EE93AD4A926E4D5A(L_13, /*hidden argument*/NULL);
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_17 = __this->get_onUtteranceMatched_8();
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_18 = L_17;
		G_B7_0 = L_18;
		if (L_18)
		{
			G_B8_0 = L_18;
			goto IL_006d;
		}
	}
	{
		return;
	}

IL_006d:
	{
		String_t* L_19 = V_0;
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A(G_B8_0, L_19, /*hidden argument*/UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var);
		// }
		return;
	}

IL_0074:
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_20 = __this->get_onUtteranceMatched_8();
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_21 = L_20;
		G_B10_0 = L_21;
		if (L_21)
		{
			G_B11_0 = L_21;
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_22 = V_0;
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A(G_B11_0, L_22, /*hidden argument*/UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var);
		// }
		return;
	}

IL_0086:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_23 = __this->get_exactMatch_6();
		if (!L_23)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_24, /*hidden argument*/NULL);
		String_t* L_26 = __this->get_searchText_5();
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_29 = __this->get_onUtteranceMatched_8();
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_30 = L_29;
		G_B15_0 = L_30;
		if (L_30)
		{
			G_B16_0 = L_30;
			goto IL_00b1;
		}
	}
	{
		return;
	}

IL_00b1:
	{
		String_t* L_31 = V_0;
		NullCheck(G_B16_0);
		UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A(G_B16_0, L_31, /*hidden argument*/UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var);
		// }
		return;
	}

IL_00b8:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_32, /*hidden argument*/NULL);
		String_t* L_34 = __this->get_searchText_5();
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_36;
		L_36 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_33, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00e1;
		}
	}
	{
		// onUtteranceMatched?.Invoke(text);
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_37 = __this->get_onUtteranceMatched_8();
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_38 = L_37;
		G_B19_0 = L_38;
		if (L_38)
		{
			G_B20_0 = L_38;
			goto IL_00db;
		}
	}
	{
		return;
	}

IL_00db:
	{
		String_t* L_39 = V_0;
		NullCheck(G_B20_0);
		UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A(G_B20_0, L_39, /*hidden argument*/UnityEvent_1_Invoke_mB8C4A550F249D886071CD3EA734CB7F22A0C6D8A_RuntimeMethod_var);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m960DED8F36CA16671BFAC1A909FCAE6F0F66FA24 (WitUtteranceMatcher_tD839EDFF1EDFCF086AA8CC2A10C0211D40E1E9AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->set_exactMatch_6((bool)1);
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 * L_0 = (StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5 *)il2cpp_codegen_object_new(StringEvent_t475346432FAA62251EA58EFCF4BF17E780EC4DB5_il2cpp_TypeInfo_var);
		StringEvent__ctor_mDC9A5E98B66448DA362749220D14E9FB08DB2E2F(L_0, /*hidden argument*/NULL);
		__this->set_onUtteranceMatched_8(L_0);
		WitResponseHandler__ctor_m65D47FC6C5718A7F3C641F622375AED406F1AEB2(__this, /*hidden argument*/NULL);
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
// Facebook.WitAi.WitResponseReference Facebook.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * WitValue_get_Reference_mA6AE08AF51B3CD8F6D3EC31A7727AF1354490B27 (WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5 * __this, const RuntimeMethod* method)
{
	{
		// if (null == reference)
		WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * L_0 = __this->get_reference_5();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_1 = __this->get_path_4();
		WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * L_2;
		L_2 = WitResultUtilities_GetWitResponseReference_m03099035E498563B3A0BC2EA3F340CC9F781C528(L_1, /*hidden argument*/NULL);
		__this->set_reference_5(L_2);
	}

IL_0019:
	{
		// return reference;
		WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * L_3 = __this->get_reference_5();
		return L_3;
	}
}
// System.String Facebook.WitAi.Data.WitValue::ToString(Facebook.WitAi.Lib.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_m0365CFEF12E54DB32817D671F6B3317336984FEE (WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5 * __this, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * ___response0, const RuntimeMethod* method)
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t1EED39D03ABD247927A1309B3CBCF921B346FD8B * L_0;
		L_0 = WitValue_get_Reference_mA6AE08AF51B3CD8F6D3EC31A7727AF1354490B27(__this, /*hidden argument*/NULL);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(4 /* System.String Facebook.WitAi.WitResponseReference::GetStringValue(Facebook.WitAi.Lib.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Facebook.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_mB8C2BA9D42EDA223135F741CF083D2D32EA99333 (WitValue_t41439DDE06BBAFCEE3E91530ABFF142128C2ADB5 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.WrapHttpWebRequest::.ctor(System.Net.HttpWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest__ctor_mF43E7B632ACBDE9335E1456954BAACD60BB3933A (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___httpWebRequest0, const RuntimeMethod* method)
{
	{
		// public WrapHttpWebRequest(HttpWebRequest httpWebRequest)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _httpWebRequest = httpWebRequest;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = ___httpWebRequest0;
		__this->set__httpWebRequest_0(L_0);
		// }
		return;
	}
}
// System.Net.WebHeaderCollection Facebook.WitAi.WrapHttpWebRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * WrapHttpWebRequest_get_Headers_mECD2AEE818CA6D1987842538FB3ED676F840E3B8 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1;
		L_1 = VirtualFuncInvoker0< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Headers_m61CF27AB87A29028D6C65AB4E2EC8CD6D8658CB8 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___value0, const RuntimeMethod* method)
{
	{
		// public WebHeaderCollection Headers { get => _httpWebRequest.Headers; set => _httpWebRequest.Headers = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(12 /* System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection) */, L_0, L_1);
		return;
	}
}
// System.String Facebook.WitAi.WrapHttpWebRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_Method_m59754C1D87D5DFED9E49003500B871237322576E (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Net.WebRequest::get_Method() */, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_Method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Method_mA12BA1C944BAFA828145D3E97D3A53D9678EFF91 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Method { get => _httpWebRequest.Method; set => _httpWebRequest.Method = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_0, L_1);
		return;
	}
}
// System.String Facebook.WitAi.WrapHttpWebRequest::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_ContentType_mAFA66FC3937733377488B6E09158B5EA92647836 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Net.WebRequest::get_ContentType() */, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentType_m2764A2D37DE7BDEF90F79AD29A233A467B295B04 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ContentType { get => _httpWebRequest.ContentType; set => _httpWebRequest.ContentType = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_0, L_1);
		return;
	}
}
// System.Int64 Facebook.WitAi.WrapHttpWebRequest::get_ContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WrapHttpWebRequest_get_ContentLength_mA91D7F2C847D1772079640D53060897B37B93932 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(13 /* System.Int64 System.Net.WebRequest::get_ContentLength() */, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_ContentLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_ContentLength_m632476B510B08D9B271EF2E0762F0DC7391EB3AC (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public long ContentLength { get => _httpWebRequest.ContentLength; set => _httpWebRequest.ContentLength = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Boolean Facebook.WitAi.WrapHttpWebRequest::get_SendChunked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WrapHttpWebRequest_get_SendChunked_mE63AF30839C2DC7E77C32E04D12B2C4197CD8DDD (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_SendChunked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_SendChunked_mA4FC317887DA8D9E21119337A9DC6FA947AC1A0F (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SendChunked { get => _httpWebRequest.SendChunked; set => _httpWebRequest.SendChunked = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		bool L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_SendChunked_m35DA1E613FF532A49DFF667B8B9DB1F468A8E060(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.WitAi.WrapHttpWebRequest::get_UserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WrapHttpWebRequest_get_UserAgent_m9FB60D35384A70577B88F736BF2626A06596548D (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = HttpWebRequest_get_UserAgent_m7A9652C7730CE09A602F7E8411F1CA6273357F7C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_UserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_UserAgent_m3F5E6074ADF889C9B84CDD41412B21AF8766D79D (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserAgent { get => _httpWebRequest.UserAgent; set => _httpWebRequest.UserAgent = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		HttpWebRequest_set_UserAgent_m65BC4B6DB21940A86896691156D440026410FE17(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Facebook.WitAi.WrapHttpWebRequest::get_Timeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrapHttpWebRequest_get_Timeout_m1A16158D890C018AFCBA69A6B84E6E2F3D97FAA6 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Net.WebRequest::get_Timeout() */, L_0);
		return L_1;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::set_Timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_set_Timeout_m7094DAA2F9B46804E6080C44FD7ECAF3989316FF (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Timeout { get => _httpWebRequest.Timeout; set => _httpWebRequest.Timeout = value; }
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Net.WebRequest::set_Timeout(System.Int32) */, L_0, L_1);
		return;
	}
}
// System.Void Facebook.WitAi.WrapHttpWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapHttpWebRequest_Abort_mA972DA282B4E1EFF66360F08634A7A18BFCC932D (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, const RuntimeMethod* method)
{
	{
		// _httpWebRequest.Abort();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(29 /* System.Void System.Net.WebRequest::Abort() */, L_0);
		// }
		return;
	}
}
// System.IAsyncResult Facebook.WitAi.WrapHttpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetRequestStream_m33E77227F7CD5F390A2539D1B47C8C701E6B262B (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetRequestStream(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(26 /* System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IAsyncResult Facebook.WitAi.WrapHttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapHttpWebRequest_BeginGetResponse_mF7E8BA9F093F45DE4EF663D32B5436C984FF2931 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.BeginGetResponse(callback, state);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___callback0;
		RuntimeObject * L_2 = ___state1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(24 /* System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.IO.Stream Facebook.WitAi.WrapHttpWebRequest::EndGetRequestStream(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WrapHttpWebRequest_EndGetRequestStream_m3840CA338E18347602F029B13C2E9456DA4F5034 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return _httpWebRequest.EndGetRequestStream(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2;
		L_2 = VirtualFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject* >::Invoke(27 /* System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult) */, L_0, L_1);
		return L_2;
	}
}
// System.Net.WebResponse Facebook.WitAi.WrapHttpWebRequest::EndGetResponse(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * WrapHttpWebRequest_EndGetResponse_m9920B8BD5EE1265D0A0A3925BC89A722BDADC559 (WrapHttpWebRequest_tCE6CB00CC4FB6F5A9D25DD6C23D3D5E7CB87B769 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	{
		// return (_httpWebRequest).EndGetResponse(asyncResult);
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_0 = __this->get__httpWebRequest_0();
		RuntimeObject* L_1 = ___asyncResult0;
		NullCheck(L_0);
		WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * L_2;
		L_2 = VirtualFuncInvoker1< WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 *, RuntimeObject* >::Invoke(25 /* System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult) */, L_0, L_1);
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
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28__ctor_mF74F3F5DC6797FDE0627A2782D708CD235B8B629 (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28_System_IDisposable_Dispose_m743807658AF587DCE6D55A2954AB0B84430DBF9F (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForMicToStartU3Ed__28_MoveNext_m0738D6DB9902D215E9F5CDACD2DD6E0423F41988 (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCACCB5BC27D400E7BBB07E7B7951DAAEC4DE633E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m58481EC50DA1855C2B8C35BC8F9F806B484D9208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_tB21B390B843413C04CF1B3C4771E1324FB4EC6F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B9_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitUntil(() => null != _micInput);
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_4 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_5 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_5, L_4, (intptr_t)((intptr_t)AudioBuffer_U3CWaitForMicToStartU3Eb__28_0_mCACCB5BC27D400E7BBB07E7B7951DAAEC4DE633E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_6 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _activeRecorders.Add(component);
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_7 = V_1;
		NullCheck(L_7);
		HashSet_1_t1D70DAFBC9AD98331757B3CF6CB28F3A2D3A0495 * L_8 = L_7->get__activeRecorders_12();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_9 = __this->get_component_3();
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Add_m58481EC50DA1855C2B8C35BC8F9F806B484D9208(L_8, L_9, /*hidden argument*/HashSet_1_Add_m58481EC50DA1855C2B8C35BC8F9F806B484D9208_RuntimeMethod_var);
		// if (!_micInput.IsRecording)
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get__micInput_9();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Facebook.WitAi.Interfaces.IAudioInputSource::get_IsRecording() */, IAudioInputSource_tB21B390B843413C04CF1B3C4771E1324FB4EC6F6_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_007a;
		}
	}
	{
		// _micInput.StartRecording(audioBufferConfiguration.sampleLengthInMs);
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->get__micInput_9();
		AudioBuffer_t5603A8251A6D7B712D941266A01DD982E4B61578 * L_16 = V_1;
		NullCheck(L_16);
		AudioBufferConfiguration_tBDAFC5A20801BBE12C52AFCA0036273E72E8BE90 * L_17 = L_16->get_audioBufferConfiguration_7();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_sampleLengthInMs_0();
		NullCheck(L_15);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Facebook.WitAi.Interfaces.IAudioInputSource::StartRecording(System.Int32) */, IAudioInputSource_tB21B390B843413C04CF1B3C4771E1324FB4EC6F6_il2cpp_TypeInfo_var, L_15, L_18);
	}

IL_007a:
	{
		// if (component is IVoiceEventProvider v)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_19 = __this->get_component_3();
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536_il2cpp_TypeInfo_var));
		RuntimeObject* L_20 = V_2;
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		// v.VoiceEvents.OnStartListening?.Invoke();
		RuntimeObject* L_21 = V_2;
		NullCheck(L_21);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_22;
		L_22 = InterfaceFuncInvoker0< VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * >::Invoke(0 /* Facebook.WitAi.Events.VoiceEvents Facebook.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t6B278DE031A329588899A64447D6030B6369A536_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_23 = L_22->get_OnStartListening_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_24 = L_23;
		G_B8_0 = L_24;
		if (L_24)
		{
			G_B9_0 = L_24;
			goto IL_009a;
		}
	}
	{
		goto IL_009f;
	}

IL_009a:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B9_0, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08C9CC00850DB55BDDBD80834DFDDCB01030D0DF (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_m53D708E16AF43B7E4D3D8E5A3973E59939596C34 (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_Reset_m53D708E16AF43B7E4D3D8E5A3973E59939596C34_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForMicToStartU3Ed__28_System_Collections_IEnumerator_get_Current_m2967870C5D9303660DFD33D08F075E9F862999B7 (U3CWaitForMicToStartU3Ed__28_t0C5AA28E16299FBDEB08C664BB9D49A804424605 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent__ctor_m5B9D5788137A8EBCA69299B8C6C1B01C0CE10A20 (OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_mBA464349DB13276254B1815FCE0D1EC252D9D2A4 (OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261 * __this, Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
					else
						GenericVirtualActionInvoker1< float >::Invoke(targetMethod, ___marker0, ___levelMax1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___marker0, ___levelMax1);
					else
						VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___marker0, ___levelMax1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___marker0, ___levelMax1, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A *, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___marker0, ___levelMax1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::BeginInvoke(Facebook.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSampleReadyEvent_BeginInvoke_mE5368C32C0F8DA81F47725B77D141A9F6355C834 (OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261 * __this, Marker_tA491115B38EBB1FED9D61541569F1A7254D5E42A * ___marker0, float ___levelMax1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___marker0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___levelMax1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Facebook.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_EndInvoke_mFD2B57D80AA6539368E34720D60B472188A1A0CB (OnSampleReadyEvent_t20C37E89EB8554FC1540D909C31453AA9C232261 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CoroutinePerformer_get_IsRunning_mF15DD65AC7105398F420D195787FC4D93FFF4755 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->get_U3CIsRunningU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::set_IsRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_set_IsRunning_m1B95A4F57E595B9A2D2E9886B4B252270D7B849A (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRunningU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_Awake_mE3F9BF1D994379D8A85A6C36595F874120AA3AB8 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineBegin(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineBegin_m608151E1773AA4456199AE258AF175879342C422 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, RuntimeObject* ___asyncMethod0, bool ___useUpdate1, const RuntimeMethod* method)
{
	{
		// if (IsRunning)
		bool L_0;
		L_0 = CoroutinePerformer_get_IsRunning_mF15DD65AC7105398F420D195787FC4D93FFF4755_inline(__this, /*hidden argument*/NULL);
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
		// IsRunning = true;
		CoroutinePerformer_set_IsRunning_m1B95A4F57E595B9A2D2E9886B4B252270D7B849A_inline(__this, (bool)1, /*hidden argument*/NULL);
		// if (Application.isBatchMode)
		bool L_1;
		L_1 = Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// useUpdate = true;
		___useUpdate1 = (bool)1;
	}

IL_001a:
	{
		// _useUpdate = useUpdate;
		bool L_2 = ___useUpdate1;
		__this->set__useUpdate_5(L_2);
		// _method = asyncMethod;
		RuntimeObject* L_3 = ___asyncMethod0;
		__this->set__method_6(L_3);
		// if (_useUpdate)
		bool L_4 = __this->get__useUpdate_5();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// CoroutineIterateUpdate();
		CoroutinePerformer_CoroutineIterateUpdate_m336EDCC7FB4B9AF6C64D52C90DDD7F5211876E99(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// _coroutine = StartCoroutine(CoroutineIterateEnumerator());
		RuntimeObject* L_5;
		L_5 = CoroutinePerformer_CoroutineIterateEnumerator_mEB3BD7D1B47F4DF060E88C7C55F487298CB22587(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		__this->set__coroutine_7(L_6);
		// }
		return;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineIterateEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoroutinePerformer_CoroutineIterateEnumerator_mEB3BD7D1B47F4DF060E88C7C55F487298CB22587 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * L_0 = (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B *)il2cpp_codegen_object_new(U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B_il2cpp_TypeInfo_var);
		U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m498F570B92585A610C7E540903C3DCD8E5F5B991(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_Update_mDDB8A6E917185FB54DE3C7258AB6DEC6317A3D99 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// if (_useUpdate)
		bool L_0 = __this->get__useUpdate_5();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// CoroutineIterateUpdate();
		CoroutinePerformer_CoroutineIterateUpdate_m336EDCC7FB4B9AF6C64D52C90DDD7F5211876E99(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineIterateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineIterateUpdate_m336EDCC7FB4B9AF6C64D52C90DDD7F5211876E99 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this == null || _method == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(__this, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__method_6();
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		// CoroutineCancel();
		CoroutinePerformer_CoroutineCancel_mAAC3205B43E28BB96B9FC0A12A1164FE90DB6C2C(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// else if (!MoveNext(_method))
		RuntimeObject* L_2 = __this->get__method_6();
		bool L_3;
		L_3 = CoroutinePerformer_MoveNext_mA530294193E1BCE91DB0898D3319F09569D09B4C(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// CoroutineComplete();
		CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::MoveNext(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CoroutinePerformer_MoveNext_mA530294193E1BCE91DB0898D3319F09569D09B4C (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, RuntimeObject* ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisType_t_m42D7F7B4D651EFBDB26F9BDD0C313092C556F051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// object current = method.Current;
		RuntimeObject* L_0 = ___method0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// if (current != null && current.GetType().GetInterfaces().Contains(typeof(IEnumerator)))
		RuntimeObject * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5;
		L_5 = VirtualFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_4);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Enumerable_Contains_TisType_t_m42D7F7B4D651EFBDB26F9BDD0C313092C556F051((RuntimeObject*)(RuntimeObject*)L_5, L_7, /*hidden argument*/Enumerable_Contains_TisType_t_m42D7F7B4D651EFBDB26F9BDD0C313092C556F051_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// if (MoveNext(current as IEnumerator))
		RuntimeObject * L_9 = V_0;
		bool L_10;
		L_10 = CoroutinePerformer_MoveNext_mA530294193E1BCE91DB0898D3319F09569D09B4C(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// return method.MoveNext();
		RuntimeObject* L_11 = ___method0;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
		return L_12;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_OnDestroy_m714ABE8C59FC9FE99A0F1FD48EDD1ECE7A7D651C (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// CoroutineUnload();
		CoroutinePerformer_CoroutineUnload_m796E6DCC8F0F4452C40BB1DF9669DE0486BF8F49(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineCancel_mAAC3205B43E28BB96B9FC0A12A1164FE90DB6C2C (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// CoroutineComplete();
		CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsRunning)
		bool L_0;
		L_0 = CoroutinePerformer_get_IsRunning_mF15DD65AC7105398F420D195787FC4D93FFF4755_inline(__this, /*hidden argument*/NULL);
		if (L_0)
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
		// CoroutineUnload();
		CoroutinePerformer_CoroutineUnload_m796E6DCC8F0F4452C40BB1DF9669DE0486BF8F49(__this, /*hidden argument*/NULL);
		// if (this != null && gameObject != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(__this, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// DestroyImmediate(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::CoroutineUnload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer_CoroutineUnload_m796E6DCC8F0F4452C40BB1DF9669DE0486BF8F49 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// IsRunning = false;
		CoroutinePerformer_set_IsRunning_m1B95A4F57E595B9A2D2E9886B4B252270D7B849A_inline(__this, (bool)0, /*hidden argument*/NULL);
		// if (_method != null)
		RuntimeObject* L_0 = __this->get__method_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// _method = null;
		__this->set__method_6((RuntimeObject*)NULL);
	}

IL_0016:
	{
		// if (_coroutine != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1 = __this->get__coroutine_7();
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// StopCoroutine(_coroutine);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2 = __this->get__coroutine_7();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_2, /*hidden argument*/NULL);
		// _coroutine = null;
		__this->set__coroutine_7((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutinePerformer__ctor_m7BF912AEFF95B88E7B7E541F5000D4991A324FD3 (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__61__ctor_m03C0F7CB95CC6859DF52671455E74C66C9D6C6A2 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__61_System_IDisposable_Dispose_m92693942AFBFFAEBAA41FAC8F962F306C2268DB3 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadRawAudioU3Ed__61_MoveNext_m0280A2F8020DCEC4F915E616A1CD5B31D6AB9CD0 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B15_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_018d;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int loops = 0;
		__this->set_U3CloopsU3E5__2_3(0);
		// int readAbsPos = Microphone.GetPosition(CurrentDeviceName);
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Mic_get_CurrentDeviceName_m31AD2B29936D0273DADAFFA076AC9F241FF2E550(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_5, /*hidden argument*/NULL);
		__this->set_U3CreadAbsPosU3E5__3_4(L_6);
		// int prevPos = readAbsPos;
		int32_t L_7 = __this->get_U3CreadAbsPosU3E5__3_4();
		__this->set_U3CprevPosU3E5__4_5(L_7);
		// float[] temp = new float[Sample.Length];
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_8 = V_1;
		NullCheck(L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9;
		L_9 = Mic_get_Sample_mF43B7CF174CCD4DBDC28D8848E1BE90A2021D94F_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		__this->set_U3CtempU3E5__5_6(L_10);
		goto IL_0194;
	}

IL_005d:
	{
		// bool isNewDataAvailable = true;
		V_2 = (bool)1;
		goto IL_016a;
	}

IL_0064:
	{
		// int currPos = Microphone.GetPosition(CurrentDeviceName);
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Mic_get_CurrentDeviceName_m31AD2B29936D0273DADAFFA076AC9F241FF2E550(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// if (currPos < prevPos)
		int32_t L_14 = V_3;
		int32_t L_15 = __this->get_U3CprevPosU3E5__4_5();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_008b;
		}
	}
	{
		// loops++;
		int32_t L_16 = __this->get_U3CloopsU3E5__2_3();
		V_7 = L_16;
		int32_t L_17 = V_7;
		__this->set_U3CloopsU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_008b:
	{
		// prevPos = currPos;
		int32_t L_18 = V_3;
		__this->set_U3CprevPosU3E5__4_5(L_18);
		// var currAbsPos = loops * AudioClip.samples + currPos;
		int32_t L_19 = __this->get_U3CloopsU3E5__2_3();
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_20 = V_1;
		NullCheck(L_20);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21;
		L_21 = Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_22)), (int32_t)L_23));
		// var nextReadAbsPos = readAbsPos + temp.Length;
		int32_t L_24 = __this->get_U3CreadAbsPosU3E5__3_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = __this->get_U3CtempU3E5__5_6();
		NullCheck(L_25);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))));
		// float levelMax = 0;
		V_6 = (0.0f);
		// if (nextReadAbsPos < currAbsPos)
		int32_t L_26 = V_5;
		int32_t L_27 = V_4;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0168;
		}
	}
	{
		// AudioClip.GetData(temp, readAbsPos % AudioClip.samples);
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_28 = V_1;
		NullCheck(L_28);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_29;
		L_29 = Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline(L_28, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_30 = __this->get_U3CtempU3E5__5_6();
		int32_t L_31 = __this->get_U3CreadAbsPosU3E5__3_4();
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_32 = V_1;
		NullCheck(L_32);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_33;
		L_33 = Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_33, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_35;
		L_35 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_29, L_30, ((int32_t)((int32_t)L_31%(int32_t)L_34)), /*hidden argument*/NULL);
		// for (int i = 0; i < temp.Length; i++)
		V_8 = 0;
		goto IL_0117;
	}

IL_00f2:
	{
		// float wavePeak = temp[i] * temp[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_36 = __this->get_U3CtempU3E5__5_6();
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = __this->get_U3CtempU3E5__5_6();
		int32_t L_41 = V_8;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = ((float)il2cpp_codegen_multiply((float)L_39, (float)L_43));
		// if (levelMax < wavePeak)
		float L_44 = V_6;
		float L_45 = V_9;
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_0111;
		}
	}
	{
		// levelMax = wavePeak;
		float L_46 = V_9;
		V_6 = L_46;
	}

IL_0111:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_47 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0117:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_48 = V_8;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_49 = __this->get_U3CtempU3E5__5_6();
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))))
		{
			goto IL_00f2;
		}
	}
	{
		// Sample = temp;
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_50 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = __this->get_U3CtempU3E5__5_6();
		NullCheck(L_50);
		Mic_set_Sample_m21640A4DA5E5F52F567BD51E8F11D75E00C92C16_inline(L_50, L_51, /*hidden argument*/NULL);
		// m_SampleCount++;
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_52 = V_1;
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_m_SampleCount_11();
		NullCheck(L_52);
		L_52->set_m_SampleCount_11(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
		// OnSampleReady?.Invoke(m_SampleCount, Sample, levelMax);
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_55 = V_1;
		NullCheck(L_55);
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_56 = L_55->get_OnSampleReady_14();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_57 = L_56;
		G_B14_0 = L_57;
		if (L_57)
		{
			G_B15_0 = L_57;
			goto IL_0149;
		}
	}
	{
		goto IL_015c;
	}

IL_0149:
	{
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_m_SampleCount_11();
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_60 = V_1;
		NullCheck(L_60);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_61;
		L_61 = Mic_get_Sample_mF43B7CF174CCD4DBDC28D8848E1BE90A2021D94F_inline(L_60, /*hidden argument*/NULL);
		float L_62 = V_6;
		NullCheck(G_B15_0);
		Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0(G_B15_0, L_59, L_61, L_62, /*hidden argument*/Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0_RuntimeMethod_var);
	}

IL_015c:
	{
		// readAbsPos = nextReadAbsPos;
		int32_t L_63 = V_5;
		__this->set_U3CreadAbsPosU3E5__3_4(L_63);
		// isNewDataAvailable = true;
		V_2 = (bool)1;
		// }
		goto IL_016a;
	}

IL_0168:
	{
		// isNewDataAvailable = false;
		V_2 = (bool)0;
	}

IL_016a:
	{
		// while (isNewDataAvailable && AudioClip)
		bool L_64 = V_2;
		if (!L_64)
		{
			goto IL_017d;
		}
	}
	{
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_65 = V_1;
		NullCheck(L_65);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_66;
		L_66 = Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_66, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_0064;
		}
	}

IL_017d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_018d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0194:
	{
		// while (AudioClip != null && Microphone.IsRecording(CurrentDeviceName) && IsRecording)
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_68 = V_1;
		NullCheck(L_68);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_69;
		L_69 = Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline(L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_69, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_01ba;
		}
	}
	{
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_71 = V_1;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Mic_get_CurrentDeviceName_m31AD2B29936D0273DADAFFA076AC9F241FF2E550(L_71, /*hidden argument*/NULL);
		bool L_73;
		L_73 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01ba;
		}
	}
	{
		Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * L_74 = V_1;
		NullCheck(L_74);
		bool L_75;
		L_75 = Mic_get_IsRecording_mC9CE897A6F309FF9BD9EDB89E931E22C59D39EFA_inline(L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_005d;
		}
	}

IL_01ba:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__61_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF50AD71FF2F93C87187564F4AE9FB35E0CDC6D44 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__61_System_Collections_IEnumerator_Reset_mFDED59E5F076274A3592C9FD323419B3A84C44D1 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadRawAudioU3Ed__61_System_Collections_IEnumerator_Reset_mFDED59E5F076274A3592C9FD323419B3A84C44D1_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.Mic/<ReadRawAudio>d__61::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__61_System_Collections_IEnumerator_get_Current_mFB119EBD397C5A915C5FBE28E2E4B7BDB66682E7 (U3CReadRawAudioU3Ed__61_t61941BE50F772F99801E298B54EF253128E9B887 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__29__ctor_m3558CEB813570A1B01CFDC6CA2D2D208B4B46CEC (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__29_System_IDisposable_Dispose_m0176CD8EDEF7DE17B724AFF45EFF73ADE5E25644 (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadRawAudioU3Ed__29_MoveNext_m6536FE9AC4774F905FFE870B03373B2C1EA97767 (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F9D4AEA3A13F621FBD64775208003684DE1CFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B21_0 = NULL;
	Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_024e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Mic Ref - Start Recording");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral81F9D4AEA3A13F621FBD64775208003684DE1CFF, /*hidden argument*/NULL);
		// OnStartRecording?.Invoke();
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_4 = V_1;
		NullCheck(L_4);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4->get_OnStartRecording_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0037;
		}
	}
	{
		goto IL_003c;
	}

IL_0037:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B5_0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// AudioClip micClip = GetMicClip();
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = VirtualFuncInvoker0< AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * >::Invoke(20 /* UnityEngine.AudioClip Facebook.WitAi.Lib.MicBase::GetMicClip() */, L_7);
		__this->set_U3CmicClipU3E5__2_4(L_8);
		// string micDevice = GetMicName();
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(18 /* System.String Facebook.WitAi.Lib.MicBase::GetMicName() */, L_9);
		__this->set_U3CmicDeviceU3E5__3_5(L_10);
		// int micSampleRate = GetMicSampleRate();
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 Facebook.WitAi.Lib.MicBase::GetMicSampleRate() */, L_11);
		V_2 = L_12;
		// int sampleTotal = AudioEncoding.samplerate / 1000 * sampleDurationMS * micClip.channels;
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_13 = V_1;
		NullCheck(L_13);
		AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * L_14;
		L_14 = MicBase_get_AudioEncoding_mFE8D0AF1F627F7711200DCB59252B251C4D440C4_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_samplerate_2();
		int32_t L_16 = __this->get_sampleDurationMS_3();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_17, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_15/(int32_t)((int32_t)1000))), (int32_t)L_16)), (int32_t)L_18));
		// float[] sample = new float[sampleTotal];
		int32_t L_19 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_19);
		__this->set_U3CsampleU3E5__4_6(L_20);
		// int loops = 0;
		__this->set_U3CloopsU3E5__5_7(0);
		// int readAbsPos = Microphone.GetPosition(micDevice);
		String_t* L_21 = __this->get_U3CmicDeviceU3E5__3_5();
		int32_t L_22;
		L_22 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_21, /*hidden argument*/NULL);
		__this->set_U3CreadAbsPosU3E5__6_8(L_22);
		// int prevPos = readAbsPos;
		int32_t L_23 = __this->get_U3CreadAbsPosU3E5__6_8();
		__this->set_U3CprevPosU3E5__7_9(L_23);
		// int micTempTotal = micSampleRate / 1000 * sampleDurationMS * micClip.channels;
		int32_t L_24 = V_2;
		int32_t L_25 = __this->get_sampleDurationMS_3();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_26, /*hidden argument*/NULL);
		__this->set_U3CmicTempTotalU3E5__8_10(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_24/(int32_t)((int32_t)1000))), (int32_t)L_25)), (int32_t)L_27)));
		// int micDif = micTempTotal / sampleTotal;
		int32_t L_28 = __this->get_U3CmicTempTotalU3E5__8_10();
		int32_t L_29 = V_3;
		__this->set_U3CmicDifU3E5__9_11(((int32_t)((int32_t)L_28/(int32_t)L_29)));
		// float[] temp = new float[micTempTotal];
		int32_t L_30 = __this->get_U3CmicTempTotalU3E5__8_10();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_30);
		__this->set_U3CtempU3E5__10_12(L_31);
		goto IL_0255;
	}

IL_00f4:
	{
		// bool isNewDataAvailable = true;
		V_4 = (bool)1;
		goto IL_0229;
	}

IL_00fc:
	{
		// int currPos = Microphone.GetPosition(micDevice);
		String_t* L_32 = __this->get_U3CmicDeviceU3E5__3_5();
		int32_t L_33;
		L_33 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		// if (currPos < prevPos)
		int32_t L_34 = V_5;
		int32_t L_35 = __this->get_U3CprevPosU3E5__7_9();
		if ((((int32_t)L_34) >= ((int32_t)L_35)))
		{
			goto IL_0125;
		}
	}
	{
		// loops++;
		int32_t L_36 = __this->get_U3CloopsU3E5__5_7();
		V_8 = L_36;
		int32_t L_37 = V_8;
		__this->set_U3CloopsU3E5__5_7(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_0125:
	{
		// prevPos = currPos;
		int32_t L_38 = V_5;
		__this->set_U3CprevPosU3E5__7_9(L_38);
		// var currAbsPos = loops * micClip.samples + currPos;
		int32_t L_39 = __this->get_U3CloopsU3E5__5_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_40, /*hidden argument*/NULL);
		int32_t L_42 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)L_41)), (int32_t)L_42));
		// var nextReadAbsPos = readAbsPos + micTempTotal;
		int32_t L_43 = __this->get_U3CreadAbsPosU3E5__6_8();
		int32_t L_44 = __this->get_U3CmicTempTotalU3E5__8_10();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		// if (nextReadAbsPos < currAbsPos)
		int32_t L_45 = V_7;
		int32_t L_46 = V_6;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_0226;
		}
	}
	{
		// micClip.GetData(temp, readAbsPos % micClip.samples);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_47 = __this->get_U3CmicClipU3E5__2_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = __this->get_U3CtempU3E5__10_12();
		int32_t L_49 = __this->get_U3CreadAbsPosU3E5__6_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_50 = __this->get_U3CmicClipU3E5__2_4();
		NullCheck(L_50);
		int32_t L_51;
		L_51 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_52;
		L_52 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_47, L_48, ((int32_t)((int32_t)L_49%(int32_t)L_51)), /*hidden argument*/NULL);
		// float levelMax = 0;
		V_9 = (0.0f);
		// int sampleIndex = 0;
		V_10 = 0;
		// for (int i = 0; i < temp.Length; i++)
		V_11 = 0;
		goto IL_01e3;
	}

IL_018f:
	{
		// float wavePeak = temp[i] * temp[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = __this->get_U3CtempU3E5__10_12();
		int32_t L_54 = V_11;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_57 = __this->get_U3CtempU3E5__10_12();
		int32_t L_58 = V_11;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		float L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_12 = ((float)il2cpp_codegen_multiply((float)L_56, (float)L_60));
		// if (levelMax < wavePeak)
		float L_61 = V_9;
		float L_62 = V_12;
		if ((!(((float)L_61) < ((float)L_62))))
		{
			goto IL_01ae;
		}
	}
	{
		// levelMax = wavePeak;
		float L_63 = V_12;
		V_9 = L_63;
	}

IL_01ae:
	{
		// if (i % micDif == 0 && sampleIndex < sample.Length)
		int32_t L_64 = V_11;
		int32_t L_65 = __this->get_U3CmicDifU3E5__9_11();
		if (((int32_t)((int32_t)L_64%(int32_t)L_65)))
		{
			goto IL_01dd;
		}
	}
	{
		int32_t L_66 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_67 = __this->get_U3CsampleU3E5__4_6();
		NullCheck(L_67);
		if ((((int32_t)L_66) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length))))))
		{
			goto IL_01dd;
		}
	}
	{
		// sample[sampleIndex] = temp[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_68 = __this->get_U3CsampleU3E5__4_6();
		int32_t L_69 = V_10;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = __this->get_U3CtempU3E5__10_12();
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		float L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (float)L_73);
		// sampleIndex++;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01dd:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_75 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01e3:
	{
		// for (int i = 0; i < temp.Length; i++)
		int32_t L_76 = V_11;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_77 = __this->get_U3CtempU3E5__10_12();
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))
		{
			goto IL_018f;
		}
	}
	{
		// _sampleCount++;
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_78 = V_1;
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_79 = V_1;
		NullCheck(L_79);
		int32_t L_80 = L_79->get__sampleCount_10();
		NullCheck(L_78);
		L_78->set__sampleCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1)));
		// OnSampleReady?.Invoke(_sampleCount, sample, levelMax);
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_81 = V_1;
		NullCheck(L_81);
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_82 = L_81->get_OnSampleReady_7();
		Action_3_tCBF98E2F668417474B5D8FA8B3C3F6EC63FB8C18 * L_83 = L_82;
		G_B20_0 = L_83;
		if (L_83)
		{
			G_B21_0 = L_83;
			goto IL_0209;
		}
	}
	{
		goto IL_021c;
	}

IL_0209:
	{
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_84 = V_1;
		NullCheck(L_84);
		int32_t L_85 = L_84->get__sampleCount_10();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_86 = __this->get_U3CsampleU3E5__4_6();
		float L_87 = V_9;
		NullCheck(G_B21_0);
		Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0(G_B21_0, L_85, L_86, L_87, /*hidden argument*/Action_3_Invoke_mCCEEF48E232407BEFC83ABA63E9D593A42AB28F0_RuntimeMethod_var);
	}

IL_021c:
	{
		// readAbsPos = nextReadAbsPos;
		int32_t L_88 = V_7;
		__this->set_U3CreadAbsPosU3E5__6_8(L_88);
		// }
		goto IL_0229;
	}

IL_0226:
	{
		// isNewDataAvailable = false;
		V_4 = (bool)0;
	}

IL_0229:
	{
		// while (isNewDataAvailable && micClip != null)
		bool L_89 = V_4;
		if (!L_89)
		{
			goto IL_023e;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_90 = __this->get_U3CmicClipU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_90, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_00fc;
		}
	}

IL_023e:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_024e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0255:
	{
		// while (micClip != null && Microphone.IsRecording(micDevice) && IsRecording)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_92 = __this->get_U3CmicClipU3E5__2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_92, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_027b;
		}
	}
	{
		String_t* L_94 = __this->get_U3CmicDeviceU3E5__3_5();
		bool L_95;
		L_95 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_94, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_027b;
		}
	}
	{
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_96 = V_1;
		NullCheck(L_96);
		bool L_97;
		L_97 = MicBase_get_IsRecording_m100E35AE7DADC7A0B1C444075D6AC537F3C6E989_inline(L_96, /*hidden argument*/NULL);
		if (L_97)
		{
			goto IL_00f4;
		}
	}

IL_027b:
	{
		// if (IsRecording)
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_98 = V_1;
		NullCheck(L_98);
		bool L_99;
		L_99 = MicBase_get_IsRecording_m100E35AE7DADC7A0B1C444075D6AC537F3C6E989_inline(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_0289;
		}
	}
	{
		// StopRecording();
		MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * L_100 = V_1;
		NullCheck(L_100);
		VirtualActionInvoker0::Invoke(24 /* System.Void Facebook.WitAi.Lib.MicBase::StopRecording() */, L_100);
	}

IL_0289:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m165701B7AF4CAE061412E0EE079FF14C883804B9 (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadRawAudioU3Ed__29_System_Collections_IEnumerator_Reset_m9FD28FE0BA0E1B47A3A3E4640EC3D3DD15560DD1 (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadRawAudioU3Ed__29_System_Collections_IEnumerator_Reset_m9FD28FE0BA0E1B47A3A3E4640EC3D3DD15560DD1_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.MicBase/<ReadRawAudio>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReadRawAudioU3Ed__29_System_Collections_IEnumerator_get_Current_mD68FBC60CBD1473E821FF396BF20F4D62441D97E (U3CReadRawAudioU3Ed__29_t575E1CA7C36F1D8694B11A4FD0B997A66A8AE5C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Utilities.VoiceServiceReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBDA552FB36D58968EFB7D48ADA9E365D83C425DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * L_0 = (U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 *)il2cpp_codegen_object_new(U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9A6F88C226545A58E995D0C5872D14D7141DC68A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.VoiceServiceReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A6F88C226545A58E995D0C5872D14D7141DC68A (U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Utilities.VoiceServiceReference/<>c::<get_VoiceService>b__2_0(Facebook.WitAi.VoiceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_VoiceServiceU3Eb__2_0_m504AF19D63FD84218F77A50DC580E7ACE603DB02 (U3CU3Ec_t0BADAB854CA2C7D147739DC9E71D64A651248571 * __this, VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * ___o0, const RuntimeMethod* method)
{
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// voiceService = Array.Find(services, (o) => o.gameObject.scene.rootCount != 0);
		VoiceService_t2A6345E70AC7B0298BFDB6CE48D0DF8E01D83400 * L_0 = ___o0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = GameObject_get_scene_m7EBF95ABB5037FEE6811928F2E83C769C53F86C2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_rootCount_mB2EDA66F8662B93761648F5E88D9D6B74542E2A8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
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
// System.Boolean Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsTokenValid(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsTokenValid_m7DDC88CED5E0359F4E43785A99D00F2DEF339F0A (DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9 * __this, String_t* ___appId0, String_t* ___token1, const RuntimeMethod* method)
{
	{
		// return IsServerTokenValid(token);
		String_t* L_0 = ___token1;
		bool L_1;
		L_1 = DefaultTokenValidatorProvider_IsServerTokenValid_mBE3AAEA3F1FD035429FAB6B27A991B733DEEFC1D(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::IsServerTokenValid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTokenValidatorProvider_IsServerTokenValid_mBE3AAEA3F1FD035429FAB6B27A991B733DEEFC1D (DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9 * __this, String_t* ___serverToken0, const RuntimeMethod* method)
{
	{
		// return null != serverToken && serverToken.Length == 32;
		String_t* L_0 = ___serverToken0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___serverToken0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)32)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
// System.Void Facebook.WitAi.WitAuthUtility/DefaultTokenValidatorProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTokenValidatorProvider__ctor_m53689F16558D2F54B6D543E59804A8C7A38F98D0 (DefaultTokenValidatorProvider_t1A4B54F226D464D7435285FFDE5521AEA24EEED9 * __this, const RuntimeMethod* method)
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m840EF4296B68EEFDA93E2FA5CF705E55BB88D63F (U3CU3Ec__DisplayClass12_0_t9301325AFDDACDF1034774CFDED70841ED9ECD9F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_m79E167195696EB54BBF92A6D9AFA2FB92F4EF4F5 (U3CU3Ec__DisplayClass12_0_t9301325AFDDACDF1034774CFDED70841ED9ECD9F * __this, WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * L_2 = __this->get_dynamicEntity_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_entity_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB56B1CC92DAAAEC32B042E1BC12BB9CD07B18889 (U3CU3Ec__DisplayClass14_0_t30E2DC0C9FA5944AD27B1015AA53AD4382860A48 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mD440427109017337ED311A73B9049B021E434FF2 (U3CU3Ec__DisplayClass14_0_t30E2DC0C9FA5944AD27B1015AA53AD4382860A48 * __this, WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * ___e0, const RuntimeMethod* method)
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->get_entityName_0();
		WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_entity_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m98E943CDC57BD2369560DE3D50E66B374A3EBC53 (U3CU3Ec__DisplayClass15_0_t895A64160C8D85FAA7F7D4D7B634DDD6B78E79ED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Facebook.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_m4ED6F1913C0285C8B3EC2EE04DFCE55E710AD3F7 (U3CU3Ec__DisplayClass15_0_t895A64160C8D85FAA7F7D4D7B634DDD6B78E79ED * __this, WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * ___e0, const RuntimeMethod* method)
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_t3402D4119F6B5B19D840E8EA2775B47C5957F4A5 * L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_entity_0();
		String_t* L_2 = __this->get_entityName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.WitRequest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEADDAD3B71CA8087BCDC250B2C119907EBC36F00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * L_0 = (U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB *)il2cpp_codegen_object_new(U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m944D11CF7FEC422440F2B975C9D24689C18C1979(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m944D11CF7FEC422440F2B975C9D24689C18C1979 (U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.WitAi.WitRequest/<>c::<Request>b__83_0(Facebook.WitAi.WitRequest/QueryParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRequestU3Eb__83_0_m0C854BBB1325C95292BBAD3FB2C4E8D9E25A29D3 (U3CU3Ec_tAE255D5559555402B77FB49B884752AD00472AEB * __this, QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB * ___par0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// $"{par.key}={Uri.EscapeDataString(par.value)}");
		QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB * L_0 = ___par0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB * L_2 = ___par0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0__ctor_m4A4CA8F093824BD107496C62835329F1418FF294 (U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::<HandleResponse>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0_U3CHandleResponseU3Eb__0_mB369F5301539619D4D2A82C83B596485822B0CCB (U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onRawResponse?.Invoke(stringResponse));
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onRawResponse_37();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_stringResponse_1();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::<HandleResponse>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0_U3CHandleResponseU3Eb__1_m718628A799D5371B92737D48ED89AD4704B87A33 (U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onRawResponse?.Invoke(stringResponse));
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onRawResponse_37();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_stringResponse_1();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_0::<HandleResponse>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_0_U3CHandleResponseU3Eb__2_m6790A43C22697A457748EA4B0CFA6DE149A6A666 (U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onRawResponse?.Invoke(stringResponse));
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onRawResponse_37();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_stringResponse_1();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_1__ctor_m8B5828563E231904456B95CC729EE689ED709965 (U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass96_1::<HandleResponse>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass96_1_U3CHandleResponseU3Eb__3_m624451CDE62ACF20447F3D0FDC2CBB12667BB3C6 (U3CU3Ec__DisplayClass96_1_tB1368EDE5593457E349248C5EB45F70AEB023987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onFullTranscription?.Invoke(transcription));
		U3CU3Ec__DisplayClass96_0_t2C17DCA46E6B734849247CAF18383C8993944D4D * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_1 = L_0->get_U3CU3E4__this_0();
		NullCheck(L_1);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1->get_onFullTranscription_39();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		String_t* L_4 = __this->get_transcription_0();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_4, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass97_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0__ctor_m4F37AA256B211E1F24D74538CA2B4E89E0E81497 (U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass97_0::<ProcessStringResponse>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0_U3CProcessStringResponseU3Eb__2_m67ED6A5EF2F10D917F7B9B03611001ED0206B9EA (U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onPartialTranscription?.Invoke(transcription));
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onPartialTranscription_38();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_transcription_0();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass97_0::<ProcessStringResponse>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0_U3CProcessStringResponseU3Eb__3_mE80F6E9B5EA75B63562CB3DEE4E7EF484FFDB48F (U3CU3Ec__DisplayClass97_0_t5BBA32A25F195F4055CBF658A192DEF7C14899A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// MainThreadCallback(() => onFullTranscription?.Invoke(transcription));
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0->get_onFullTranscription_39();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		String_t* L_3 = __this->get_transcription_0();
		NullCheck(G_B2_0);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(G_B2_0, L_3, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
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
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_mA8F22B104121B4172F4F6A2DA58EACCF23D50EC9 (U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<>c__DisplayClass99_0::<SafeInvoke>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CSafeInvokeU3Eb__0_m5D7F85C20770578E026D0D52CF4B719611E74FF7 (U3CU3Ec__DisplayClass99_0_tC643122BF95B3D68A6C4AECF24B467059CF43A0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* V_0 = NULL;
	int32_t V_1 = 0;
	Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (Action<WitRequest> responseDelegate in action.GetInvocationList())
		Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * L_0 = __this->get_action_0();
		NullCheck(L_0);
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_1;
		L_1 = VirtualFuncInvoker0< DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* >::Invoke(10 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_0010:
	{
		// foreach (Action<WitRequest> responseDelegate in action.GetInvocationList())
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Delegate_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = ((Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 *)CastclassSealed((RuntimeObject*)L_5, Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2_il2cpp_TypeInfo_var));
	}

IL_0019:
	try
	{// begin try (depth: 1)
		// responseDelegate.DynamicInvoke(this);
		Action_1_tBD372F2A676F67640ED3AC034AD7895629387ED2 * L_6 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_9 = __this->get_U3CU3E4__this_1();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		NullCheck(L_6);
		RuntimeObject * L_10;
		L_10 = Delegate_DynamicInvoke_m53122A57C6068A5EE443D102801A0FB0E661F4BA(L_6, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{// begin catch(System.Exception)
		// Debug.LogError(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0038;
	}// end catch (depth: 1)

IL_0038:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// foreach (Action<WitRequest> responseDelegate in action.GetInvocationList())
		int32_t L_12 = V_1;
		DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// });
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
// System.Void Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__109__ctor_m95B7E2A0CFA8E6B3303A0BA0FB58502971B4CF93 (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__109_System_IDisposable_Dispose_mBF00CD3DDFCD977103734CB5DE67997AED89ED8F (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformMainThreadCallbacksU3Ed__109_MoveNext_mE110F74EAD64E95040800958B172BD62F1D76755 (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mE42C1DE41707C063A34DCDE668BF0285FB8F39BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0092;
	}

IL_002b:
	{
		// if (Application.isPlaying && !Application.isBatchMode)
		bool L_3;
		L_3 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isBatchMode_m215E452DEF633146433A61A538F52B84ACA15CBB(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_5 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (_mainThreadCallbacks.Count > 0 && _mainThreadCallbacks.TryDequeue(out var result))
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_6 = V_1;
		NullCheck(L_6);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_7 = L_6->get__mainThreadCallbacks_60();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274(L_7, /*hidden argument*/ConcurrentQueue_1_get_Count_mEC3CA3DB7161FE82FA0B49C44B2F802FFDAFE274_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_9 = V_1;
		NullCheck(L_9);
		ConcurrentQueue_1_tA29C1E7102CD564F57064BA3A2560608053994FE * L_10 = L_9->get__mainThreadCallbacks_60();
		NullCheck(L_10);
		bool L_11;
		L_11 = ConcurrentQueue_1_TryDequeue_mE42C1DE41707C063A34DCDE668BF0285FB8F39BF(L_10, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(&V_2), /*hidden argument*/ConcurrentQueue_1_TryDequeue_mE42C1DE41707C063A34DCDE668BF0285FB8F39BF_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// result();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = V_2;
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		// }
		goto IL_006d;
	}

IL_0092:
	{
		// while (HasMainThreadCallbacks())
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = WitRequest_HasMainThreadCallbacks_m9DAEBC6BF747E08855503AD8571249F6B0B56098(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		// _performer = null;
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_15 = V_1;
		NullCheck(L_15);
		L_15->set__performer_59((CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__109_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0083ABA2B8D25CF3C968FACF4EB00D2A5D5B573 (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformMainThreadCallbacksU3Ed__109_System_Collections_IEnumerator_Reset_mA7090BCDB5EBFC128B781CC3172C5E1F288FCD51 (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformMainThreadCallbacksU3Ed__109_System_Collections_IEnumerator_Reset_mA7090BCDB5EBFC128B781CC3172C5E1F288FCD51_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.WitRequest/<PerformMainThreadCallbacks>d__109::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformMainThreadCallbacksU3Ed__109_System_Collections_IEnumerator_get_Current_m1F6CE374155C04469B280E9C671495F1311405AA (U3CPerformMainThreadCallbacksU3Ed__109_tDFACE82842CA94B8ADD830B11399D49B687E270B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.WitRequest/OnCustomizeUriEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCustomizeUriEvent__ctor_mC6E92B77AD6D0DA75B24A850B7E6C60BD74B553F (OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Uri Facebook.WitAi.WitRequest/OnCustomizeUriEvent::Invoke(System.UriBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_Invoke_mFA7764C8618C3E749FED489CE1C3D8EE00B50823 (OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, const RuntimeMethod* method)
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
			}
			else
			{
				// closed
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
					else
						result = GenericVirtualFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(targetMethod, ___uriBuilder0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___uriBuilder0);
					else
						result = VirtualFuncInvoker0< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___uriBuilder0);
				}
			}
			else
			{
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___uriBuilder0, targetMethod);
			}
			else
			{
				typedef Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*FunctionPointerType) (void*, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___uriBuilder0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Facebook.WitAi.WitRequest/OnCustomizeUriEvent::BeginInvoke(System.UriBuilder,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCustomizeUriEvent_BeginInvoke_mBAFC44F96853374DE65A5672F4A90B831D8BF205 (OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * __this, UriBuilder_t6FF22E0E019C73564385054BE4AF98E6C5EE0F42 * ___uriBuilder0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___uriBuilder0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Uri Facebook.WitAi.WitRequest/OnCustomizeUriEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * OnCustomizeUriEvent_EndInvoke_m3D09BD7AA2B69E0F47ED798732638BAC77F3F5DE (OnCustomizeUriEvent_t9D13E53AB8681A345A39DAA3B800A45F146199FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProvideCustomHeadersEvent__ctor_m320FC1FC0157D2684CC724E4219B050DE65EF734 (OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_Invoke_m2BE1C3B5C60707E0732261EE027E874F38770623 (OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * __this, const RuntimeMethod* method)
{
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*FunctionPointerType) (void*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProvideCustomHeadersEvent_BeginInvoke_m04E8C30DE31F7803E46B0D9E78AF41C1FB4CD731 (OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.WitAi.WitRequest/OnProvideCustomHeadersEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * OnProvideCustomHeadersEvent_EndInvoke_mCC8FE86BFDC90056B69975061AC89BE4233366C0 (OnProvideCustomHeadersEvent_tFB4F29CECA9500A91331B43CEBADB0F51DDEC4D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.WitRequest/PreSendRequestDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate__ctor_m443D30E9ECA788878C319EABEA29BCDFD60A84CF (PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Facebook.WitAi.WitRequest/PreSendRequestDelegate::Invoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_Invoke_mE742C12D5599879D140C38079EF4B7374AA5F5FB (PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!currentDelegate->get_method_is_virtual_10())
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src_uri0, ___headers1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				il2cpp_codegen_raise_execution_engine_exception(method);
				il2cpp_codegen_no_return();
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 **, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src_uri0, ___headers1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Facebook.WitAi.WitRequest/PreSendRequestDelegate::BeginInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PreSendRequestDelegate_BeginInvoke_mF0E90971A64BF23C46290E8800C8491FDB3E714F (PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___src_uri0;
	__d_args[1] = *___headers1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Facebook.WitAi.WitRequest/PreSendRequestDelegate::EndInvoke(System.Uri&,System.Collections.Generic.Dictionary`2<System.String,System.String>&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreSendRequestDelegate_EndInvoke_mD056A4E24FDA5DABAE73645263AE0B1F144E1961 (PreSendRequestDelegate_t59C335BC80A012FB63121965FD64BB1A8F937955 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___src_uri0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** ___headers1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___src_uri0,
	___headers1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.WitAi.WitRequest/QueryParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryParam__ctor_m7D0FE8C7BD2BC55C8CFCE1964DC765D30C1FE9BE (QueryParam_t8716738EDD6BDF4EBF14F749611794010BBBA9AB * __this, const RuntimeMethod* method)
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
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_mAC65D19CB98C50B37FD90F3B724F529C0BCA3BE7 (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m368A1ACDB24BCCC355645549EF48C59C771D0E6E (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m807DD59E267A4308286883925F1026D4126C439A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_mFABBEC8C5ED92D376B5E7CB20236CE602E1598D4 (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * V_2 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (WitResponseNode N in m_List)
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * L_5 = L_4->get_m_List_0();
			NullCheck(L_5);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  L_6;
			L_6 = List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E(L_5, /*hidden argument*/List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
			L_8 = Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_inline((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_7, /*hidden argument*/Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_10 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_11;
			L_11 = Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_10, /*hidden argument*/Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m807DD59E267A4308286883925F1026D4126C439A(__this, /*hidden argument*/NULL);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE ));
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{// begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m368A1ACDB24BCCC355645549EF48C59C771D0E6E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	}// end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_m807DD59E267A4308286883925F1026D4126C439A (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_0, /*hidden argument*/Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		return;
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m608E976DA36C9F09A97C048604B90E8BFDAA4E35 (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mB32807A759142C03EDF74FB6A2FC1B4193A3D7E7 (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_mB32807A759142C03EDF74FB6A2FC1B4193A3D7E7_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m7C6D8188CB4BDEA49794125B993C364A77AA110A (U3CGetEnumeratorU3Ed__14_tD0F0FD42CA0DED32C4131E482D5B61CCF0E0E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__13_MoveNext_m7853226F5C3A688F653CA058D786BBF5FFB15AA4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * V_2 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (WitResponseNode N in m_List)
			WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t8C97B5A6E6975ACAC192D3323A48A246E2E6B653 * L_5 = L_4->get_m_List_0();
			NullCheck(L_5);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE  L_6;
			L_6 = List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E(L_5, /*hidden argument*/List_1_GetEnumerator_m415F1CF72078AC0CCA5FB25E880B09AD551EDD2E_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
			L_8 = Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_inline((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_7, /*hidden argument*/Enumerator_get_Current_m6712AA1448D35EE2D17A1068DEED173E6A782A97_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			// foreach (WitResponseNode N in m_List)
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_10, /*hidden argument*/Enumerator_MoveNext_mD4749DB40FB468135C8EE322D67004EFC83CA797_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840(__this, /*hidden argument*/NULL);
			Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE ));
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{// begin fault (depth: 1)
		U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m58A6DA9982776E1105CF6EAD536EF24E1A2A429B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	}// end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mE7537D5E9D76893675E683D68A3A84BB51AEF840 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4((Enumerator_tBAC7424596B3A4B289D70D7D0C92A0F0048C04BE *)L_0, /*hidden argument*/Enumerator_Dispose_m9EA9258A012DBCBC28E4D055694FABFE67AC12D4_RuntimeMethod_var);
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mCB79E8E62D327928558A00CF27ECFA66371FBB76 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m6F355B941A11C8C9F89D80EA1FDF9DABC80F64E0_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m12609D5E1200617B4F4E06A244E177A616BB30CB (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4 (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_3 = (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__13__ctor_m26C53E7D92FFF9CF2107D32127F5A80F77D7F2D2(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_4 = V_0;
		WitResponseArray_tDF343B5C27A2DB09C780F7AA1F481AFB54DB5015 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m045D035637145E4A6C9F11998D426AE67500C7DB (U3Cget_ChildsU3Ed__13_t7678579448A1DC5D4C8A3076F6018F1F3F8297CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m4FB5EBF1039718A5CC8719972E07EA6D79E411A4(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mF311B9141E7A963BC72C3C84E5379054BB8E19E9 (U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<>c__DisplayClass15_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mCAE819F57B899CC5ECC5541D00D4D74033A4B964 (U3CU3Ec__DisplayClass15_0_tFD1C9FF91A1538E15ED009962EBFC16BF2AA738D * __this, KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0;
		L_0 = KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_inline((KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_RuntimeMethod_var);
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = __this->get_aNode_0();
		bool L_2;
		L_2 = WitResponseNode_op_Equality_m8CBEED47147C074BA26494FA79BE910107DC182E(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18__ctor_m77964991F5191F7307A8CDF617BD8F0EBA6F860D (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__18_MoveNext_mAC5728BC08351CD9D77BEC016422345320A0CB93 (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * V_2 = NULL;
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005e;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0090;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * L_5 = L_4->get_m_Dict_0();
			NullCheck(L_5);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  L_6;
			L_6 = Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0066;
		}

IL_003b:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_8;
			L_8 = Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_inline((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_7, /*hidden argument*/Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_9 = V_3;
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_10 = L_9;
			RuntimeObject * L_11 = Box(KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE_il2cpp_TypeInfo_var, &L_10);
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0090;
		}

IL_005e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0066:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_13;
			L_13 = Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_12, /*hidden argument*/Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003b;
			}
		}

IL_0073:
		{
			U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A(__this, /*hidden argument*/NULL);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_14 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 ));
			// }
			V_0 = (bool)0;
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0089;
	}

FAULT_0089:
	{// begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_mDAA57C2657D4D4BBC1ECA723F0E59A3F0AA5504E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(137)
	}// end fault
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_mC1CDBA1E86F9CD16D2A538AC5FD840302B74686A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_0, /*hidden argument*/Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		return;
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5FD1DB50FB449A1BBA8DBAE27EE76887847578DD (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340 (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_mD822AD4F252921AD7B65BAFFD1C3304E8AE3F340_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m73C16EB8E0DA8FC6A0A68FE9C3A5EF436D1A1D6A (U3CGetEnumeratorU3Ed__18_tF9BEBCBAFE7102ACF0B5A2E3B42A984D265F497C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__17_MoveNext_m9CE2336D74A38FFA524D8D9C14CA3E2324545D76 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * V_2 = NULL;
	KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0091;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t95E0014B8DE433A5F2BB62A9ED533415AE84044B * L_5 = L_4->get_m_Dict_0();
			NullCheck(L_5);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4  L_6;
			L_6 = Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m3E96B4F6B378946F5ED3DC6A796D1F929DBBFB19_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE  L_8;
			L_8 = Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_inline((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_7, /*hidden argument*/Enumerator_get_Current_mCD97107B5E8553DD239655BC08B8C40D368ED9D1_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N.Value;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9;
			L_9 = KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_inline((KeyValuePair_2_t7ADA5D238C697BC1921D350F622C88A512BCB8AE *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mDE983F3E2864C4550DF10F6F86D7A9BA4B5292E4_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0091;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			// foreach (KeyValuePair<string, WitResponseNode> N in m_Dict)
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_10, /*hidden argument*/Enumerator_MoveNext_mB2B0EDE205F16235A4B8232D09E17663DEA41C5E_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD(__this, /*hidden argument*/NULL);
			Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 ));
			// }
			V_0 = (bool)0;
			goto IL_0091;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008a;
	}

FAULT_008a:
	{// begin fault (depth: 1)
		U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m99A0F7D36B993AA3FB54203627839C7E51456897(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	}// end fault
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_mF054CE126CC37E4B8CC938B8820506E90CB0DECD (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E((Enumerator_t8BBC5D798AE836F92657314FB26AE535FC91A6C4 *)L_0, /*hidden argument*/Enumerator_Dispose_m96E070C8159309DEF2D500ECEF6D8746E93FA53E_RuntimeMethod_var);
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_m2A8794A1E9C1BDD868DDDDC05769C00867382191 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mB7D3280C87D90DEA758EC29D5944688A10116DBB_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m7A532B989B74A6005B53D3CFD00D2E208F45F32D (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643 (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_3 = (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__17__ctor_m62B7DA6027D36CFDB5E0335FE8CBFF0B18923EF7(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_4 = V_0;
		WitResponseClass_t173E6CBEE6498B4C9612E5ACE0BDEB6E54440E55 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m5BF1C9E933B9E3C0937D4E0CDCB3F0675E34094C (U3Cget_ChildsU3Ed__17_t6F8C956366CCACFDEE6D2834CBC4EFCD146C7632 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m0C771F1E5C0EEA7A5D7E8CD354F4910BEE333643(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6BB0F941BA833F605AE134BBAEE1686CCC3DAED9 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildsU3Ed__17_MoveNext_m942458CCEE96AC408D2CBC846840346FF1E52E75 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
		__this->set_U3CU3E1__state_0((-1));
		// get { yield break; }
		return (bool)0;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mE4AFE5026872F3DEBA000FA9F1D4ACAF46B62228 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_m90DC6E2B2F6665945CF3B7F0B4A0C578CFDFE507_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m1D975A65E5CF89770F93FD8775E36BDED7929B23 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * L_3 = (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE *)il2cpp_codegen_object_new(U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE_il2cpp_TypeInfo_var);
		U3Cget_ChildsU3Ed__17__ctor_mCEAC81EF7E63226983D8CA71D3A18E390347A96D(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m3A14AC3112023AED69A66929A2D4FAA0C2482C54 (U3Cget_ChildsU3Ed__17_t9B289D68DBA2F2B935F6C1A423B2DDF4DCEACEDE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_m10A241A389AB2DBABCA9BFCC455C7658F355E8A3(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
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

IL_0013:
	try
	{// begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{// begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{// begin finally (depth: 2)
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{// begin finally (depth: 1)
		U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildsU3Ed__19_MoveNext_m1FFE91056E778838EC2911B5BEE4EB658F4FBED8 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_2 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_3 = NULL;
	WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0085;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00cc;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var C in Childs)
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode::get_Childs() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a7;
		}

IL_003e:
		{
			// foreach (var C in Childs)
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_7);
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_8;
			L_8 = InterfaceFuncInvoker0< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>::get_Current() */, IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			// foreach (var D in C.DeepChilds)
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = WitResponseNode_get_DeepChilds_mB9CCC1BAC46715F7CB089F7F486E3561807F4AA3(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Facebook.WitAi.Lib.WitResponseNode>::GetEnumerator() */, IEnumerable_1_t664AF55B30D40ED13AC2A4F7EC61037AD36405D5_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_5(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_008d;
		}

IL_0065:
		{
			// foreach (var D in C.DeepChilds)
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_12);
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_13;
			L_13 = InterfaceFuncInvoker0< WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode>::get_Current() */, IEnumerator_1_tCD28F113D39C58FA892063CF522C739FA02AB8FD_il2cpp_TypeInfo_var, L_12);
			V_4 = L_13;
			// yield return D;
			WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_14 = V_4;
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00cc;
		}

IL_0085:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_008d:
		{
			// foreach (var D in C.DeepChilds)
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0065;
			}
		}

IL_009a:
		{
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_5((RuntimeObject*)NULL);
		}

IL_00a7:
		{
			// foreach (var C in Childs)
			RuntimeObject* L_17 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00b4:
		{
			U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00cc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c5;
	}

FAULT_00c5:
	{// begin fault (depth: 1)
		U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_mBB2790BED727AAAC4A36E52CD311FA1A07DBB071(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(197)
	}// end fault
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_mFF85E034D76A01A459C7E6DCB024E9209B95DE4E (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m49B6D5F34AA921ADAA12B2EB51B2D3D9FA67E9B0 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<Facebook.WitAi.Lib.WitResponseNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CFacebook_WitAi_Lib_WitResponseNodeU3E_get_Current_mF56DAEDAF2B39D7C8E0CAE7AF57495AC74FE9C2C (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_m4532B1D8A9A8015578CEE29790100608FCC01933_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_mF5E2731DDA765FA2F2730FFFF68E28467CD6BBE3 (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Facebook.WitAi.Lib.WitResponseNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_3 = (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 *)il2cpp_codegen_object_new(U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878_il2cpp_TypeInfo_var);
		U3Cget_DeepChildsU3Ed__19__ctor_m1592F385AC0949E2F4CAA96808E0A4B9B6DE7C28(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_4 = V_0;
		WitResponseNode_t3F7BEAA45DD487A20B08AAF12B931617C67F3A7F * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Facebook.WitAi.Lib.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_m4E58E75818945A988C004FAF760E9EC5778CA6EC (U3Cget_DeepChildsU3Ed__19_t2BB7D62307C3AA0E17E1B41A64268FC41F52F878 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CFacebook_WitAi_Lib_WitResponseNodeU3E_GetEnumerator_mE2E32DF281BCB8A1322C0025F649BA0B9CB8F4AB(__this, /*hidden argument*/NULL);
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
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62__ctor_m0284F5629801DAC8E0068CF5B5EE7555FDA9860D (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62_System_IDisposable_Dispose_mE76AEB9E44EC3DDEFAFDCC6F4994461F8B2C60DD (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateDueToTimeLimitU3Ed__62_MoveNext_m3F12BDEBAB1AC67E6DC305B7471E6BC80261B73B (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * V_1 = NULL;
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * G_B7_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B7_1 = NULL;
	VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * G_B6_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B6_1 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * G_B8_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(RuntimeConfiguration.maxRecordingTime);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_4 = V_1;
		NullCheck(L_4);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_5;
		L_5 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		float L_6 = L_5->get_maxRecordingTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (IsRequestActive)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = WitService_get_IsRequestActive_m7DCDC5C172F24DC0E04F70B72A877EF6B228368F(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// Debug.Log($"Deactivated input due to timeout.\nMax Record Time: {RuntimeConfiguration.maxRecordingTime}");
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_10 = V_1;
		NullCheck(L_10);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_11;
		L_11 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12 = L_11->get_maxRecordingTime_4();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF6CDEB7B5373DAB5ECC8942A7DC008C2E60F0AFA, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// DeactivateRequest(VoiceEvents?.OnStoppedListeningDueToTimeout, false);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_16 = V_1;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_17 = V_1;
		NullCheck(L_17);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_18;
		L_18 = WitService_get_VoiceEvents_m79574F0947BFED13FC4CB240E340164525F21AFA(L_17, /*hidden argument*/NULL);
		VoiceEvents_t10F33F3A5E105E946E0684F5F546D6940B7C8B3D * L_19 = L_18;
		G_B6_0 = L_19;
		G_B6_1 = L_16;
		if (L_19)
		{
			G_B7_0 = L_19;
			G_B7_1 = L_16;
			goto IL_0079;
		}
	}
	{
		G_B8_0 = ((UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)(NULL));
		G_B8_1 = G_B6_1;
		goto IL_007e;
	}

IL_0079:
	{
		NullCheck(G_B7_0);
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_20 = G_B7_0->get_OnStoppedListeningDueToTimeout_10();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
	}

IL_007e:
	{
		NullCheck(G_B8_1);
		WitService_DeactivateRequest_m4CE7B86FE8975381332413857B324CE05955E7A7(G_B8_1, G_B8_0, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5474D1EB0919F0971A476ADBB19070BB0B0E57A7 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_Reset_m04D0E4F24C7FD5CA15F6F711FA9420842AAED2D1_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.WitService/<DeactivateDueToTimeLimit>d__62::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDeactivateDueToTimeLimitU3Ed__62_System_Collections_IEnumerator_get_Current_mEE18144E7EDB55983DF7D08F51BC4B90D499B185 (U3CDeactivateDueToTimeLimitU3Ed__62_t023D703EF0F128576C26D9C887A7647A6C1FE592 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70__ctor_mF636EC1943D0E83071594B5E8D6EE2ABDF77862B (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70_System_IDisposable_Dispose_m7823E075DDE49944B1A3AA9A67FCC35B2185AF76 (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.WitService/<PerformDequeue>d__70::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPerformDequeueU3Ed__70_MoveNext_mE6F3FC264767166E0CD953272A387F584C60CD5C (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m465A72D24AB7AA5B873D3CE4FF153E2DA0DDF759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9E3842108799453EADF7BACEEECEC96D781D9E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m8ADD700B3F1C4B9A2B6929529D435A47381CB66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WitService_t860537723698CF0607466342346F3B1FECA68DCB * V_1 = NULL;
	WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_007f;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_transmitRequests.Count < RuntimeConfiguration.maxConcurrentRequests)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_5 = V_1;
		NullCheck(L_5);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_6 = L_5->get__transmitRequests_18();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline(L_6, /*hidden argument*/HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_8 = V_1;
		NullCheck(L_8);
		WitRuntimeConfiguration_t0073DA9BCF73DE8F9571FC2BFDDED5B6A686DA24 * L_9;
		L_9 = WitService_get_RuntimeConfiguration_mB827ACB3886D063B202BDB1A6AEDF850B4E2EB18(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = L_9->get_maxConcurrentRequests_8();
		if ((((int32_t)L_7) >= ((int32_t)L_10)))
		{
			goto IL_007f;
		}
	}
	{
		// WitRequest request = _queuedRequests.First();
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_11 = V_1;
		NullCheck(L_11);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_12 = L_11->get__queuedRequests_19();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_13;
		L_13 = Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m465A72D24AB7AA5B873D3CE4FF153E2DA0DDF759(L_12, /*hidden argument*/Enumerable_First_TisWitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622_m465A72D24AB7AA5B873D3CE4FF153E2DA0DDF759_RuntimeMethod_var);
		V_2 = L_13;
		// _queuedRequests.Remove(request);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_14 = V_1;
		NullCheck(L_14);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_15 = L_14->get__queuedRequests_19();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = HashSet_1_Remove_m8ADD700B3F1C4B9A2B6929529D435A47381CB66C(L_15, L_16, /*hidden argument*/HashSet_1_Remove_m8ADD700B3F1C4B9A2B6929529D435A47381CB66C_RuntimeMethod_var);
		// _transmitRequests.Add(request);
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_18 = V_1;
		NullCheck(L_18);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_19 = L_18->get__transmitRequests_18();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_20 = V_2;
		NullCheck(L_19);
		bool L_21;
		L_21 = HashSet_1_Add_m9E3842108799453EADF7BACEEECEC96D781D9E32(L_19, L_20, /*hidden argument*/HashSet_1_Add_m9E3842108799453EADF7BACEEECEC96D781D9E32_RuntimeMethod_var);
		// request.Request();
		WitRequest_t63CAB069D8F10A056F9B4EA23FC2542CCF2B4622 * L_22 = V_2;
		NullCheck(L_22);
		WitRequest_Request_m25DBB180B8EB2486AFAD4D2DBD9E8434CA756C53(L_22, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// while (_queuedRequests.Count > 0)
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_23 = V_1;
		NullCheck(L_23);
		HashSet_1_tFF3E55D5960B4D36FA35D840BD86C262E153D8BC * L_24 = L_23->get__queuedRequests_19();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_inline(L_24, /*hidden argument*/HashSet_1_get_Count_mE31B0F89DB0BD81E83F184E982B2FEBAE7B91644_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// _queueHandler = null;
		WitService_t860537723698CF0607466342346F3B1FECA68DCB * L_26 = V_1;
		NullCheck(L_26);
		L_26->set__queueHandler_20((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformDequeueU3Ed__70_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA5310810280BE9CC4F56E4A7B23C10A6ADE1DE9 (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_Reset_mD4766C852E5FADEB8B0C73421974CB35363AC5FF_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.WitService/<PerformDequeue>d__70::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPerformDequeueU3Ed__70_System_Collections_IEnumerator_get_Current_mE4F8800E547195DBDC9A3371579D4BCA04853F7A (U3CPerformDequeueU3Ed__70_tE6530FFD73C77357A4B4E31A71437F4F1C69E78E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m498F570B92585A610C7E540903C3DCD8E5F5B991 (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_m745363D45FB022833E76F5A91F3635DF1AC1D48D (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m9E09D5ACB356499965682C7E68BFC9D7DC336CFC (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return _method;
		CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get__method_6();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CoroutineComplete();
		CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * L_6 = V_1;
		NullCheck(L_6);
		CoroutinePerformer_CoroutineComplete_m5264AE014748A7B8E1140332AEF09E7F7FEDB283(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m656B41E9C86674FCC494D723E145610344C6EAF5 (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m69AF7C76835F873B7C5558F1E23F2242AB01098B (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_m69AF7C76835F873B7C5558F1E23F2242AB01098B_RuntimeMethod_var)));
	}
}
// System.Object Facebook.WitAi.Utilities.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_m0D8820D618447F1E4D6D0DDC86ADC94E3B5E0C37 (U3CCoroutineIterateEnumeratorU3Ed__9_t07F27D059570A6147DE8DEBF67E3D9F9ABC2AC6B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpWebRequest_get_SendChunked_m8E640766CDE7A99AA19F42DD4F1A0A4A19074776_inline (HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_sendChunked_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CoroutinePerformer_get_IsRunning_mF15DD65AC7105398F420D195787FC4D93FFF4755_inline (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->get_U3CIsRunningU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoroutinePerformer_set_IsRunning_m1B95A4F57E595B9A2D2E9886B4B252270D7B849A_inline (CoroutinePerformer_tC5FB63434AAC929928A28F47AA557336E361C675 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRunningU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Mic_get_Sample_mF43B7CF174CCD4DBDC28D8848E1BE90A2021D94F_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method)
{
	{
		// public float[] Sample { get; private set; }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_U3CSampleU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Mic_get_AudioClip_mBE735CC6E9F6896B447DCF9FB7DBDFDC7B51BAD3_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method)
{
	{
		// public AudioClip AudioClip { get; private set; }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_U3CAudioClipU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mic_set_Sample_m21640A4DA5E5F52F567BD51E8F11D75E00C92C16_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value0, const RuntimeMethod* method)
{
	{
		// public float[] Sample { get; private set; }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___value0;
		__this->set_U3CSampleU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mic_get_IsRecording_mC9CE897A6F309FF9BD9EDB89E931E22C59D39EFA_inline (Mic_tDA2F1DDD8EB072297F5FD0D90BC754FF7722BAE4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * MicBase_get_AudioEncoding_mFE8D0AF1F627F7711200DCB59252B251C4D440C4_inline (MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * __this, const RuntimeMethod* method)
{
	{
		// public AudioEncoding AudioEncoding { get; set; } = new AudioEncoding();
		AudioEncoding_tFFD240C59D2334B46F80D43E8E486019CACD2516 * L_0 = __this->get_U3CAudioEncodingU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MicBase_get_IsRecording_m100E35AE7DADC7A0B1C444075D6AC537F3C6E989_inline (MicBase_tF40F0F8E22578BC5C4E14553C0AB3104EEC0A521 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRecording { get; private set; }
		bool L_0 = __this->get_U3CIsRecordingU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
