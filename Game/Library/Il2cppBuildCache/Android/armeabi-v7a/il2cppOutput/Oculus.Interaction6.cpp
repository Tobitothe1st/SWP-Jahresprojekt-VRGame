#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>>
struct Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Oculus.Interaction.IInteractorView>
struct Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F;
// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs>
struct Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699;
// System.Action`1<Oculus.Interaction.PointerEvent>
struct Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0;
// System.Action`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC;
// System.Action`2<Oculus.Interaction.IInteractable,UnityEngine.Rigidbody>
struct Action_2_t296684896FB231A516A6241604E4849D2DED0917;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916;
// System.Converter`2<Oculus.Interaction.IInteractable,UnityEngine.MonoBehaviour>
struct Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A;
// System.Converter`2<Oculus.Interaction.IInteractor,UnityEngine.MonoBehaviour>
struct Converter_2_t9F7B0E5CAB01CE7A3E89DD6C293A62691096A4AE;
// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.IInteractable>
struct Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5;
// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.IInteractor>
struct Converter_2_t206D4E336A481AC3D32C463059A376F868E08038;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.IPointableCanvas,System.Action`1<Oculus.Interaction.PointerEvent>>
struct Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableCanvasModule/Pointer>
struct Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>
struct FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.Input.HandJointId>
struct FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>
struct FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F;
// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>
struct FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103;
// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466;
// System.Func`1<System.Single>
struct Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740;
// System.Func`2<System.Single[],UnityEngine.Quaternion>
struct Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59;
// System.Func`2<System.Single[],UnityEngine.Vector2>
struct Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E;
// System.Func`2<System.Single[],UnityEngine.Vector3>
struct Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D;
// System.Func`2<System.Single[],UnityEngine.Vector4>
struct Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231;
// System.Func`2<Oculus.Interaction.IInteractable,System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView>>
struct Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B;
// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion>
struct Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8;
// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Nullable`1<System.Single>>
struct Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655;
// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Int32>
struct Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4;
// System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single>
struct Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C;
// System.Func`3<UnityEngine.Vector2,System.Int32,System.Single>
struct Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F;
// System.Func`3<UnityEngine.Vector3,System.Int32,System.Single>
struct Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF;
// System.Func`3<UnityEngine.Vector4,System.Int32,System.Single>
struct Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.RayInteractor>
struct HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2;
// System.Collections.Generic.IDictionary`2<Oculus.Interaction.Input.HandFinger,Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]>
struct IDictionary_2_t63A2B8ABB8B4DBCDC13DF81DCAD58C08EFD7E54B;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView>
struct IEnumerable_1_tF7B27A8E9089F482A15F6A010E54FE3AC69E7928;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>>
struct IEnumerator_1_t5EF0C1AF9CB863B48EE66DFE0E99B6E1883F3902;
// Oculus.Interaction.PoseDetection.IFeatureThresholds`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct IFeatureThresholds_2_tD2B692B859606DE987EB912E30ACEBF4D839E79A;
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription>
struct IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38;
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct IReadOnlyList_1_t1C2F6B3EF30FCAB9A5333B2031E0D697CF33A5E6;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.SnapInteractor,Oculus.Interaction.SnapInteractable>
struct Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter>
struct List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427;
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig>
struct List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C;
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>
struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE;
// System.Collections.Generic.List`1<Oculus.Interaction.PointableCanvasModule/Pointer>
struct List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5;
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.RayInteractor>
struct MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.SnapInteractable>
struct MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44;
// System.Predicate`1<UnityEngine.Rigidbody>
struct Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD;
// System.Predicate`1<Oculus.Interaction.Tween/TweenCurve>
struct Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7;
// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_tA65827F9AE88A72AC257552036FEEC3B135F7C12;
// Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<Oculus.Interaction.PoseDetection.TransformFeature,System.String>[]
struct FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1;
// Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>[]
struct IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Oculus.Interaction.PoseDetection.FeatureStateDescription[]
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440;
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
// Oculus.Interaction.Throw.ReleaseVelocityInformation[]
struct ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Oculus.Interaction.PoseDetection.TransformFeature[]
struct TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8;
// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig[]
struct JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig[]
struct JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]
struct FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Oculus.Interaction.PoseDetection.FeatureDescription
struct FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D;
// Oculus.Interaction.PoseDetection.FeatureStateDescription
struct FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1;
// Oculus.Interaction.FloatConstraint
struct FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Oculus.Interaction.HandGrab.Visuals.HandJointMap
struct HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF;
// Oculus.Interaction.IActiveState
struct IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Oculus.Interaction.IInteractable
struct IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E;
// Oculus.Interaction.IInteractor
struct IInteractor_tBD7FBCCA8820FFD3B1C31C1EE4571CF1FF6600D5;
// Oculus.Interaction.IInteractorView
struct IInteractorView_t0B6DF422BCA31C38CD8864087B287D34945A3128;
// Oculus.Interaction.IMovement
struct IMovement_t5419F13B414B0340AF7BA2DAD330917909A6250D;
// Oculus.Interaction.IMovementProvider
struct IMovementProvider_t27BD4945FC620329E5B814FB5CF1D97616510E24;
// Oculus.Interaction.IPointableCanvas
struct IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918;
// Oculus.Interaction.IPointableElement
struct IPointableElement_t842C048A71D3ECDAA023437399BE8654657B3C7D;
// Oculus.Interaction.Surfaces.IPointableSurface
struct IPointableSurface_tD9C9CC900BD96162A4F5EFB4F939A9C3FAC1F08D;
// Oculus.Interaction.ISelector
struct ISelector_t17D1DAB7B3CC700454D32262AD849DBEBF416F63;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Oculus.Interaction.PointableCanvasModule
struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277;
// Oculus.Interaction.PointableElement
struct PointableElement_tCD9ACD6737F7ECBD499E1F099D90A9081A8CC94C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A;
// Oculus.Interaction.ProgressCurve
struct ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4;
// Oculus.Interaction.RayInteractable
struct RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175;
// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Interaction.PoseDetection.ShapeRecognizer
struct ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6;
// Oculus.Interaction.SnapInteractable
struct SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC;
// Oculus.Interaction.SnapInteractor
struct SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Oculus.Interaction.PoseDetection.TransformConfig
struct TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505;
// Oculus.Interaction.PoseDetection.TransformFeatureConfig
struct TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8;
// Oculus.Interaction.PoseDetection.TransformFeatureStateThresholds
struct TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1;
// Oculus.Interaction.PoseDetection.TransformJointData
struct TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Oculus.Interaction.Input.HandSkeleton/<>c
struct U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD;
// Oculus.Interaction.HandVisual/<>c
struct U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB;
// Oculus.Interaction.Input.Hmd/<>c
struct U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C;
// Oculus.Interaction.IndexPinchSelector/<>c
struct U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226;
// Oculus.Interaction.InteractableColorVisual/ColorState
struct ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818;
// Oculus.Interaction.InteractableGroup/<>c
struct U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92;
// Oculus.Interaction.InteractableGroupView/<>c
struct U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921;
// Oculus.Interaction.InteractableTriggerBroadcaster/<>c
struct U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C;
// Oculus.Interaction.InteractionOVRCameraRig/<>c
struct U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D;
// Oculus.Interaction.InteractorGroup/<>c
struct U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448;
// Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA0DFCD54E44EDFC00316ABB7D51CF1E6576D2038;
// Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData
struct PoseData_t6D8A00589F1E5BF7E1BBD480A76EF3365AE2BB8E;
// Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c
struct U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C;
// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig
struct JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0;
// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList
struct JointRotationFeatureConfigList_tA9DE9DAD8761F3C21667560006E996445EA656C1;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c
struct U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig
struct JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622;
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList
struct JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB;
// Oculus.Interaction.Input.OVRCameraRigRef/<>c
struct U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97;
// Oculus.Interaction.Input.OneEuroFilter/<>c
struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878;
// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter
struct LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38;
// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c
struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB;
// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints
struct OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A;
// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints
struct OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355;
// Oculus.Interaction.PhysicsGrabbable/<>c
struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B;
// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82;
// Oculus.Interaction.PointableCanvasModule/Pointer
struct Pointer_t8F177D393665020358C0C4520193ACBBC99BF489;
// Oculus.Interaction.PointableDebugGizmos/PointData
struct PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90;
// Oculus.Interaction.PointableElement/<>c
struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// Oculus.Interaction.PokeInteractable/PositionPinningConfig
struct PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA;
// Oculus.Interaction.RayInteractor/RayCandidate
struct RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E;
// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5;
// Oculus.Interaction.PoseDetection.Sequence/<>c
struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D;
// Oculus.Interaction.PoseDetection.Sequence/ActivationStep
struct ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54;
// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21
struct U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig
struct FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4;
// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList
struct FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF;
// Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator
struct PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A;
// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c
struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C;
// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams
struct BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C;
// Oculus.Interaction.Input.SyntheticHand/<>c
struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367;
// Oculus.Interaction.TouchHandGrabInteractor/<>c
struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4;
// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus
struct FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C;
// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c
struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B;
// Oculus.Interaction.TouchShadowHand/GrabTouchInfo
struct GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585;
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c
struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7;
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder
struct TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c
struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F;
// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo
struct TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9;
// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c
struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4;
// Oculus.Interaction.Tween/<>c
struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04;
// Oculus.Interaction.Tween/TweenCurve
struct TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135;
// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40;
// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints
struct TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A;
// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints
struct TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01;
// Oculus.Interaction.VirtualPointable/<>c
struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F;
// Oculus.Interaction.VirtualSelector/<>c
struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInteractor_tBD7FBCCA8820FFD3B1C31C1EE4571CF1FF6600D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_Identifier_m29EA36392357580A51A1CA938618AC67E6080809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mD68652C1B02AC891C26AFA755BAC43C6B9D638F6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440;
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>
struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FeatureStateProvider`2::<LastUpdatedFrameId>k__BackingField
	int32_t ___U3CLastUpdatedFrameIdU3Ek__BackingField_0;
	// Oculus.Interaction.PoseDetection.FeatureStateProvider`2/FeatureStateSnapshot<TFeature,TFeatureState>[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToCurrentState
	FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* ____featureToCurrentState_1;
	// Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToThresholds
	IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* ____featureToThresholds_2;
	// System.Func`2<TFeature,System.Nullable`1<System.Single>> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_valueReader
	Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * ____valueReader_3;
	// System.Func`2<TFeature,System.Int32> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureToInt
	Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * ____featureToInt_4;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_timeProvider
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ____timeProvider_5;
	// Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState> Oculus.Interaction.PoseDetection.FeatureStateProvider`2::_featureThresholds
	RuntimeObject* ____featureThresholds_7;

public:
	inline static int32_t get_offset_of_U3CLastUpdatedFrameIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ___U3CLastUpdatedFrameIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CLastUpdatedFrameIdU3Ek__BackingField_0() const { return ___U3CLastUpdatedFrameIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLastUpdatedFrameIdU3Ek__BackingField_0() { return &___U3CLastUpdatedFrameIdU3Ek__BackingField_0; }
	inline void set_U3CLastUpdatedFrameIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CLastUpdatedFrameIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__featureToCurrentState_1() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToCurrentState_1)); }
	inline FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* get__featureToCurrentState_1() const { return ____featureToCurrentState_1; }
	inline FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1** get_address_of__featureToCurrentState_1() { return &____featureToCurrentState_1; }
	inline void set__featureToCurrentState_1(FeatureStateSnapshotU5BU5D_t22A3F927E1B15D09DF3D2E31841FFCDC935C63B1* value)
	{
		____featureToCurrentState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToCurrentState_1), (void*)value);
	}

	inline static int32_t get_offset_of__featureToThresholds_2() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToThresholds_2)); }
	inline IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* get__featureToThresholds_2() const { return ____featureToThresholds_2; }
	inline IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366** get_address_of__featureToThresholds_2() { return &____featureToThresholds_2; }
	inline void set__featureToThresholds_2(IFeatureStateThresholds_2U5BU5D_tFB004BE0CE22D2BD1A1B34B3D35A7A8569316366* value)
	{
		____featureToThresholds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToThresholds_2), (void*)value);
	}

	inline static int32_t get_offset_of__valueReader_3() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____valueReader_3)); }
	inline Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * get__valueReader_3() const { return ____valueReader_3; }
	inline Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 ** get_address_of__valueReader_3() { return &____valueReader_3; }
	inline void set__valueReader_3(Func_2_t03FCCC847443E18A1796B819DAE7A99F66190655 * value)
	{
		____valueReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valueReader_3), (void*)value);
	}

	inline static int32_t get_offset_of__featureToInt_4() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureToInt_4)); }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * get__featureToInt_4() const { return ____featureToInt_4; }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 ** get_address_of__featureToInt_4() { return &____featureToInt_4; }
	inline void set__featureToInt_4(Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * value)
	{
		____featureToInt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureToInt_4), (void*)value);
	}

	inline static int32_t get_offset_of__timeProvider_5() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____timeProvider_5)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get__timeProvider_5() const { return ____timeProvider_5; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of__timeProvider_5() { return &____timeProvider_5; }
	inline void set__timeProvider_5(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		____timeProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of__featureThresholds_7() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466, ____featureThresholds_7)); }
	inline RuntimeObject* get__featureThresholds_7() const { return ____featureThresholds_7; }
	inline RuntimeObject** get_address_of__featureThresholds_7() { return &____featureThresholds_7; }
	inline void set__featureThresholds_7(RuntimeObject* value)
	{
		____featureThresholds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____featureThresholds_7), (void*)value);
	}
};

struct FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466_StaticFields
{
public:
	// TFeature[] Oculus.Interaction.PoseDetection.FeatureStateProvider`2::FeatureEnumValues
	TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* ___FeatureEnumValues_6;

public:
	inline static int32_t get_offset_of_FeatureEnumValues_6() { return static_cast<int32_t>(offsetof(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466_StaticFields, ___FeatureEnumValues_6)); }
	inline TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* get_FeatureEnumValues_6() const { return ___FeatureEnumValues_6; }
	inline TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8** get_address_of_FeatureEnumValues_6() { return &___FeatureEnumValues_6; }
	inline void set_FeatureEnumValues_6(TransformFeatureU5BU5D_t7D7CAA3240F68111C77DC85290193E069DD1A4B8* value)
	{
		___FeatureEnumValues_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeatureEnumValues_6), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>
struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____items_1)); }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* get__items_1() const { return ____items_1; }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427_StaticFields, ____emptyArray_5)); }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ReleaseVelocityInformationU5BU5D_t82C83B28B87720863F5E4CAF291ED321A913FD1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig>
struct List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C, ____items_1)); }
	inline JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* get__items_1() const { return ____items_1; }
	inline JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C_StaticFields, ____emptyArray_5)); }
	inline JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointRotationFeatureConfigU5BU5D_tF25B0EA80AFCD1587C3E1DE3BB80E44F53F43ECD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig>
struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____items_1)); }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* get__items_1() const { return ____items_1; }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE_StaticFields, ____emptyArray_5)); }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointVelocityFeatureConfigU5BU5D_t58513A0439080B672B721E273F86A96E3EC643A7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>
struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____items_1)); }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* get__items_1() const { return ____items_1; }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105_StaticFields, ____emptyArray_5)); }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FingerFeatureConfigU5BU5D_t0C3FDDFCC780166CC2FB738BA2CC695F83D1037C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Oculus.Interaction.PoseDetection.FeatureDescription
struct FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D  : public RuntimeObject
{
public:
	// System.String Oculus.Interaction.PoseDetection.FeatureDescription::<ShortDescription>k__BackingField
	String_t* ___U3CShortDescriptionU3Ek__BackingField_0;
	// System.String Oculus.Interaction.PoseDetection.FeatureDescription::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.PoseDetection.FeatureDescription::<MinValueHint>k__BackingField
	float ___U3CMinValueHintU3Ek__BackingField_2;
	// System.Single Oculus.Interaction.PoseDetection.FeatureDescription::<MaxValueHint>k__BackingField
	float ___U3CMaxValueHintU3Ek__BackingField_3;
	// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.FeatureDescription::<FeatureStates>k__BackingField
	FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* ___U3CFeatureStatesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CShortDescriptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CShortDescriptionU3Ek__BackingField_0)); }
	inline String_t* get_U3CShortDescriptionU3Ek__BackingField_0() const { return ___U3CShortDescriptionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CShortDescriptionU3Ek__BackingField_0() { return &___U3CShortDescriptionU3Ek__BackingField_0; }
	inline void set_U3CShortDescriptionU3Ek__BackingField_0(String_t* value)
	{
		___U3CShortDescriptionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShortDescriptionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CDescriptionU3Ek__BackingField_1)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_1() const { return ___U3CDescriptionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_1() { return &___U3CDescriptionU3Ek__BackingField_1; }
	inline void set_U3CDescriptionU3Ek__BackingField_1(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMinValueHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CMinValueHintU3Ek__BackingField_2)); }
	inline float get_U3CMinValueHintU3Ek__BackingField_2() const { return ___U3CMinValueHintU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMinValueHintU3Ek__BackingField_2() { return &___U3CMinValueHintU3Ek__BackingField_2; }
	inline void set_U3CMinValueHintU3Ek__BackingField_2(float value)
	{
		___U3CMinValueHintU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxValueHintU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CMaxValueHintU3Ek__BackingField_3)); }
	inline float get_U3CMaxValueHintU3Ek__BackingField_3() const { return ___U3CMaxValueHintU3Ek__BackingField_3; }
	inline float* get_address_of_U3CMaxValueHintU3Ek__BackingField_3() { return &___U3CMaxValueHintU3Ek__BackingField_3; }
	inline void set_U3CMaxValueHintU3Ek__BackingField_3(float value)
	{
		___U3CMaxValueHintU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFeatureStatesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D, ___U3CFeatureStatesU3Ek__BackingField_4)); }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* get_U3CFeatureStatesU3Ek__BackingField_4() const { return ___U3CFeatureStatesU3Ek__BackingField_4; }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440** get_address_of_U3CFeatureStatesU3Ek__BackingField_4() { return &___U3CFeatureStatesU3Ek__BackingField_4; }
	inline void set_U3CFeatureStatesU3Ek__BackingField_4(FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* value)
	{
		___U3CFeatureStatesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFeatureStatesU3Ek__BackingField_4), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureStateDescription
struct FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1  : public RuntimeObject
{
public:
	// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}
};


// Oculus.Interaction.Input.ReadOnlyHandJointPoses
struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822  : public RuntimeObject
{
public:
	// UnityEngine.Pose[] Oculus.Interaction.Input.ReadOnlyHandJointPoses::_poses
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____poses_0;

public:
	inline static int32_t get_offset_of__poses_0() { return static_cast<int32_t>(offsetof(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822, ____poses_0)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__poses_0() const { return ____poses_0; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__poses_0() { return &____poses_0; }
	inline void set__poses_0(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____poses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____poses_0), (void*)value);
	}
};

struct ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822_StaticFields
{
public:
	// Oculus.Interaction.Input.ReadOnlyHandJointPoses Oculus.Interaction.Input.ReadOnlyHandJointPoses::<Empty>k__BackingField
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * ___U3CEmptyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CEmptyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822_StaticFields, ___U3CEmptyU3Ek__BackingField_1)); }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * get_U3CEmptyU3Ek__BackingField_1() const { return ___U3CEmptyU3Ek__BackingField_1; }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 ** get_address_of_U3CEmptyU3Ek__BackingField_1() { return &___U3CEmptyU3Ek__BackingField_1; }
	inline void set_U3CEmptyU3Ek__BackingField_1(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * value)
	{
		___U3CEmptyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmptyU3Ek__BackingField_1), (void*)value);
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


// Oculus.Interaction.PoseDetection.TransformFeatureProperties
struct TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA  : public RuntimeObject
{
public:

public:
};

struct TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription> Oculus.Interaction.PoseDetection.TransformFeatureProperties::<FeatureDescriptions>k__BackingField
	RuntimeObject* ___U3CFeatureDescriptionsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CFeatureDescriptionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields, ___U3CFeatureDescriptionsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CFeatureDescriptionsU3Ek__BackingField_0() const { return ___U3CFeatureDescriptionsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CFeatureDescriptionsU3Ek__BackingField_0() { return &___U3CFeatureDescriptionsU3Ek__BackingField_0; }
	inline void set_U3CFeatureDescriptionsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CFeatureDescriptionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFeatureDescriptionsU3Ek__BackingField_0), (void*)value);
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

// Oculus.Interaction.Input.HandSkeleton/<>c
struct U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_StaticFields
{
public:
	// Oculus.Interaction.Input.HandSkeleton/<>c Oculus.Interaction.Input.HandSkeleton/<>c::<>9
	U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Oculus.Interaction.HandVisual/<>c
struct U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_StaticFields
{
public:
	// Oculus.Interaction.HandVisual/<>c Oculus.Interaction.HandVisual/<>c::<>9
	U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.HandVisual/<>c::<>9__34_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// Oculus.Interaction.Input.Hmd/<>c
struct U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_StaticFields
{
public:
	// Oculus.Interaction.Input.Hmd/<>c Oculus.Interaction.Input.Hmd/<>c::<>9
	U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Input.Hmd/<>c::<>9__8_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// Oculus.Interaction.IndexPinchSelector/<>c
struct U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_StaticFields
{
public:
	// Oculus.Interaction.IndexPinchSelector/<>c Oculus.Interaction.IndexPinchSelector/<>c::<>9
	U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.IndexPinchSelector/<>c::<>9__20_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__20_0_1;
	// System.Action Oculus.Interaction.IndexPinchSelector/<>c::<>9__20_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__20_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_StaticFields, ___U3CU3E9__20_1_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__20_1_2() const { return ___U3CU3E9__20_1_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__20_1_2() { return &___U3CU3E9__20_1_2; }
	inline void set_U3CU3E9__20_1_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__20_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_1_2), (void*)value);
	}
};


// Oculus.Interaction.InteractableGroup/<>c
struct U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_StaticFields
{
public:
	// Oculus.Interaction.InteractableGroup/<>c Oculus.Interaction.InteractableGroup/<>c::<>9
	U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.IInteractable> Oculus.Interaction.InteractableGroup/<>c::<>9__9_0
	Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * ___U3CU3E9__9_0_1;
	// System.Converter`2<Oculus.Interaction.IInteractable,UnityEngine.MonoBehaviour> Oculus.Interaction.InteractableGroup/<>c::<>9__22_0
	Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * ___U3CU3E9__22_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_StaticFields, ___U3CU3E9__22_0_2)); }
	inline Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * get_U3CU3E9__22_0_2() const { return ___U3CU3E9__22_0_2; }
	inline Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A ** get_address_of_U3CU3E9__22_0_2() { return &___U3CU3E9__22_0_2; }
	inline void set_U3CU3E9__22_0_2(Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * value)
	{
		___U3CU3E9__22_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_2), (void*)value);
	}
};


// Oculus.Interaction.InteractableGroupView/<>c
struct U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields
{
public:
	// Oculus.Interaction.InteractableGroupView/<>c Oculus.Interaction.InteractableGroupView/<>c::<>9
	U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * ___U3CU3E9_0;
	// System.Func`2<Oculus.Interaction.IInteractable,System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView>> Oculus.Interaction.InteractableGroupView/<>c::<>9__7_0
	Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * ___U3CU3E9__7_0_1;
	// System.Func`2<Oculus.Interaction.IInteractable,System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView>> Oculus.Interaction.InteractableGroupView/<>c::<>9__9_0
	Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * ___U3CU3E9__9_0_2;
	// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.IInteractable> Oculus.Interaction.InteractableGroupView/<>c::<>9__34_0
	Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * ___U3CU3E9__34_0_3;
	// System.Converter`2<Oculus.Interaction.IInteractable,UnityEngine.MonoBehaviour> Oculus.Interaction.InteractableGroupView/<>c::<>9__41_0
	Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * ___U3CU3E9__41_0_4;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<>9__42_0
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___U3CU3E9__42_0_5;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<>9__42_1
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___U3CU3E9__42_1_6;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<>9__42_2
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___U3CU3E9__42_2_7;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<>9__42_3
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___U3CU3E9__42_3_8;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.InteractableGroupView/<>c::<>9__42_4
	Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * ___U3CU3E9__42_4_9;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__9_0_2)); }
	inline Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * get_U3CU3E9__9_0_2() const { return ___U3CU3E9__9_0_2; }
	inline Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B ** get_address_of_U3CU3E9__9_0_2() { return &___U3CU3E9__9_0_2; }
	inline void set_U3CU3E9__9_0_2(Func_2_t0928ECC87AA9663C32B8E5096993BBC14C10505B * value)
	{
		___U3CU3E9__9_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__34_0_3)); }
	inline Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * get_U3CU3E9__34_0_3() const { return ___U3CU3E9__34_0_3; }
	inline Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 ** get_address_of_U3CU3E9__34_0_3() { return &___U3CU3E9__34_0_3; }
	inline void set_U3CU3E9__34_0_3(Converter_2_t20E8846316C03337BE456A33E20B70CDCCE549D5 * value)
	{
		___U3CU3E9__34_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__41_0_4)); }
	inline Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * get_U3CU3E9__41_0_4() const { return ___U3CU3E9__41_0_4; }
	inline Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A ** get_address_of_U3CU3E9__41_0_4() { return &___U3CU3E9__41_0_4; }
	inline void set_U3CU3E9__41_0_4(Converter_2_t9E4C03A9020ED5A407E7497F25C4E58BFDE6A21A * value)
	{
		___U3CU3E9__41_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__42_0_5)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_U3CU3E9__42_0_5() const { return ___U3CU3E9__42_0_5; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_U3CU3E9__42_0_5() { return &___U3CU3E9__42_0_5; }
	inline void set_U3CU3E9__42_0_5(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___U3CU3E9__42_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__42_1_6)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_U3CU3E9__42_1_6() const { return ___U3CU3E9__42_1_6; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_U3CU3E9__42_1_6() { return &___U3CU3E9__42_1_6; }
	inline void set_U3CU3E9__42_1_6(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___U3CU3E9__42_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_2_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__42_2_7)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_U3CU3E9__42_2_7() const { return ___U3CU3E9__42_2_7; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_U3CU3E9__42_2_7() { return &___U3CU3E9__42_2_7; }
	inline void set_U3CU3E9__42_2_7(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___U3CU3E9__42_2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_3_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__42_3_8)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_U3CU3E9__42_3_8() const { return ___U3CU3E9__42_3_8; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_U3CU3E9__42_3_8() { return &___U3CU3E9__42_3_8; }
	inline void set_U3CU3E9__42_3_8(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___U3CU3E9__42_3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_4_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields, ___U3CU3E9__42_4_9)); }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * get_U3CU3E9__42_4_9() const { return ___U3CU3E9__42_4_9; }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 ** get_address_of_U3CU3E9__42_4_9() { return &___U3CU3E9__42_4_9; }
	inline void set_U3CU3E9__42_4_9(Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * value)
	{
		___U3CU3E9__42_4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_4_9), (void*)value);
	}
};


// Oculus.Interaction.InteractableTriggerBroadcaster/<>c
struct U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_StaticFields
{
public:
	// Oculus.Interaction.InteractableTriggerBroadcaster/<>c Oculus.Interaction.InteractableTriggerBroadcaster/<>c::<>9
	U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * ___U3CU3E9_0;
	// System.Action`2<Oculus.Interaction.IInteractable,UnityEngine.Rigidbody> Oculus.Interaction.InteractableTriggerBroadcaster/<>c::<>9__16_0
	Action_2_t296684896FB231A516A6241604E4849D2DED0917 * ___U3CU3E9__16_0_1;
	// System.Action`2<Oculus.Interaction.IInteractable,UnityEngine.Rigidbody> Oculus.Interaction.InteractableTriggerBroadcaster/<>c::<>9__16_1
	Action_2_t296684896FB231A516A6241604E4849D2DED0917 * ___U3CU3E9__16_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Action_2_t296684896FB231A516A6241604E4849D2DED0917 * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Action_2_t296684896FB231A516A6241604E4849D2DED0917 ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Action_2_t296684896FB231A516A6241604E4849D2DED0917 * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_StaticFields, ___U3CU3E9__16_1_2)); }
	inline Action_2_t296684896FB231A516A6241604E4849D2DED0917 * get_U3CU3E9__16_1_2() const { return ___U3CU3E9__16_1_2; }
	inline Action_2_t296684896FB231A516A6241604E4849D2DED0917 ** get_address_of_U3CU3E9__16_1_2() { return &___U3CU3E9__16_1_2; }
	inline void set_U3CU3E9__16_1_2(Action_2_t296684896FB231A516A6241604E4849D2DED0917 * value)
	{
		___U3CU3E9__16_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_1_2), (void*)value);
	}
};


// Oculus.Interaction.InteractionOVRCameraRig/<>c
struct U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_StaticFields
{
public:
	// Oculus.Interaction.InteractionOVRCameraRig/<>c Oculus.Interaction.InteractionOVRCameraRig/<>c::<>9
	U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * ___U3CU3E9_0;
	// System.Action`1<System.Boolean> Oculus.Interaction.InteractionOVRCameraRig/<>c::<>9__6_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Oculus.Interaction.InteractorGroup/<>c
struct U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields
{
public:
	// Oculus.Interaction.InteractorGroup/<>c Oculus.Interaction.InteractorGroup/<>c::<>9
	U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.MonoBehaviour,Oculus.Interaction.IInteractor> Oculus.Interaction.InteractorGroup/<>c::<>9__23_0
	Converter_2_t206D4E336A481AC3D32C463059A376F868E08038 * ___U3CU3E9__23_0_1;
	// System.Converter`2<Oculus.Interaction.IInteractor,UnityEngine.MonoBehaviour> Oculus.Interaction.InteractorGroup/<>c::<>9__63_0
	Converter_2_t9F7B0E5CAB01CE7A3E89DD6C293A62691096A4AE * ___U3CU3E9__63_0_2;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.InteractorGroup/<>c::<>9__65_0
	Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * ___U3CU3E9__65_0_3;
	// System.Action Oculus.Interaction.InteractorGroup/<>c::<>9__65_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__65_1_4;
	// System.Action Oculus.Interaction.InteractorGroup/<>c::<>9__65_2
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__65_2_5;
	// System.Action Oculus.Interaction.InteractorGroup/<>c::<>9__65_3
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__65_3_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Converter_2_t206D4E336A481AC3D32C463059A376F868E08038 * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Converter_2_t206D4E336A481AC3D32C463059A376F868E08038 ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Converter_2_t206D4E336A481AC3D32C463059A376F868E08038 * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__63_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__63_0_2)); }
	inline Converter_2_t9F7B0E5CAB01CE7A3E89DD6C293A62691096A4AE * get_U3CU3E9__63_0_2() const { return ___U3CU3E9__63_0_2; }
	inline Converter_2_t9F7B0E5CAB01CE7A3E89DD6C293A62691096A4AE ** get_address_of_U3CU3E9__63_0_2() { return &___U3CU3E9__63_0_2; }
	inline void set_U3CU3E9__63_0_2(Converter_2_t9F7B0E5CAB01CE7A3E89DD6C293A62691096A4AE * value)
	{
		___U3CU3E9__63_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__63_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__65_0_3)); }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * get_U3CU3E9__65_0_3() const { return ___U3CU3E9__65_0_3; }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F ** get_address_of_U3CU3E9__65_0_3() { return &___U3CU3E9__65_0_3; }
	inline void set_U3CU3E9__65_0_3(Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * value)
	{
		___U3CU3E9__65_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__65_1_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__65_1_4() const { return ___U3CU3E9__65_1_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__65_1_4() { return &___U3CU3E9__65_1_4; }
	inline void set_U3CU3E9__65_1_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__65_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_2_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__65_2_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__65_2_5() const { return ___U3CU3E9__65_2_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__65_2_5() { return &___U3CU3E9__65_2_5; }
	inline void set_U3CU3E9__65_2_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__65_2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_3_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields, ___U3CU3E9__65_3_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__65_3_6() const { return ___U3CU3E9__65_3_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__65_3_6() { return &___U3CU3E9__65_3_6; }
	inline void set_U3CU3E9__65_3_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__65_3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_3_6), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c
struct U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::<>9
	U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::<>9__34_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList
struct JointRotationFeatureConfigList_tA9DE9DAD8761F3C21667560006E996445EA656C1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig> Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList::_values
	List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C * ____values_0;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(JointRotationFeatureConfigList_tA9DE9DAD8761F3C21667560006E996445EA656C1, ____values_0)); }
	inline List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C * get__values_0() const { return ____values_0; }
	inline List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C ** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C * value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c
struct U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::<>9
	U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::<>9__40_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__40_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_StaticFields, ___U3CU3E9__40_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__40_0_1() const { return ___U3CU3E9__40_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__40_0_1() { return &___U3CU3E9__40_0_1; }
	inline void set_U3CU3E9__40_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__40_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList
struct JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig> Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::_values
	List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * ____values_0;

public:
	inline static int32_t get_offset_of__values_0() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB, ____values_0)); }
	inline List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * get__values_0() const { return ____values_0; }
	inline List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE ** get_address_of__values_0() { return &____values_0; }
	inline void set__values_0(List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * value)
	{
		____values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_0), (void*)value);
	}
};


// Oculus.Interaction.Input.OVRCameraRigRef/<>c
struct U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_StaticFields
{
public:
	// Oculus.Interaction.Input.OVRCameraRigRef/<>c Oculus.Interaction.Input.OVRCameraRigRef/<>c::<>9
	U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * ___U3CU3E9_0;
	// System.Action`1<System.Boolean> Oculus.Interaction.Input.OVRCameraRigRef/<>c::<>9__26_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__26_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_StaticFields, ___U3CU3E9__26_0_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__26_0_1() const { return ___U3CU3E9__26_0_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__26_0_1() { return &___U3CU3E9__26_0_1; }
	inline void set_U3CU3E9__26_0_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__26_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_1), (void*)value);
	}
};


// Oculus.Interaction.Input.OneEuroFilter/<>c
struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields
{
public:
	// Oculus.Interaction.Input.OneEuroFilter/<>c Oculus.Interaction.Input.OneEuroFilter/<>c::<>9
	U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * ___U3CU3E9_0;
	// System.Func`2<System.Single[],UnityEngine.Vector2> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__16_0
	Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * ___U3CU3E9__16_0_1;
	// System.Func`3<UnityEngine.Vector2,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__16_1
	Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * ___U3CU3E9__16_1_2;
	// System.Func`2<System.Single[],UnityEngine.Vector3> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__17_0
	Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * ___U3CU3E9__17_0_3;
	// System.Func`3<UnityEngine.Vector3,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__17_1
	Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * ___U3CU3E9__17_1_4;
	// System.Func`2<System.Single[],UnityEngine.Vector4> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__18_0
	Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * ___U3CU3E9__18_0_5;
	// System.Func`3<UnityEngine.Vector4,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__18_1
	Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * ___U3CU3E9__18_1_6;
	// System.Func`2<System.Single[],UnityEngine.Quaternion> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__19_0
	Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * ___U3CU3E9__19_0_7;
	// System.Func`3<UnityEngine.Quaternion,System.Int32,System.Single> Oculus.Interaction.Input.OneEuroFilter/<>c::<>9__19_1
	Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * ___U3CU3E9__19_1_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Func_2_t1E1C19619C06978AD532E24146AC97D6F9741E9E * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__16_1_2)); }
	inline Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * get_U3CU3E9__16_1_2() const { return ___U3CU3E9__16_1_2; }
	inline Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F ** get_address_of_U3CU3E9__16_1_2() { return &___U3CU3E9__16_1_2; }
	inline void set_U3CU3E9__16_1_2(Func_3_tB895ECB6B5F025F96A8A45B7C3299E724AC0AA1F * value)
	{
		___U3CU3E9__16_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__17_0_3)); }
	inline Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * get_U3CU3E9__17_0_3() const { return ___U3CU3E9__17_0_3; }
	inline Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D ** get_address_of_U3CU3E9__17_0_3() { return &___U3CU3E9__17_0_3; }
	inline void set_U3CU3E9__17_0_3(Func_2_t27E61E025FC269500C207D9FFE2861FC94125C6D * value)
	{
		___U3CU3E9__17_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__17_1_4)); }
	inline Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * get_U3CU3E9__17_1_4() const { return ___U3CU3E9__17_1_4; }
	inline Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF ** get_address_of_U3CU3E9__17_1_4() { return &___U3CU3E9__17_1_4; }
	inline void set_U3CU3E9__17_1_4(Func_3_t176D387C7DB5ADFB66A4B8A89AC617F411CC80AF * value)
	{
		___U3CU3E9__17_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__18_0_5)); }
	inline Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * get_U3CU3E9__18_0_5() const { return ___U3CU3E9__18_0_5; }
	inline Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 ** get_address_of_U3CU3E9__18_0_5() { return &___U3CU3E9__18_0_5; }
	inline void set_U3CU3E9__18_0_5(Func_2_t83BC64A4408D24E2C1358AF4F52ADB02D558B231 * value)
	{
		___U3CU3E9__18_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__18_1_6)); }
	inline Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * get_U3CU3E9__18_1_6() const { return ___U3CU3E9__18_1_6; }
	inline Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 ** get_address_of_U3CU3E9__18_1_6() { return &___U3CU3E9__18_1_6; }
	inline void set_U3CU3E9__18_1_6(Func_3_tAAF90224F854019D37F3E78FDAF46586B173AFD0 * value)
	{
		___U3CU3E9__18_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__19_0_7)); }
	inline Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * get_U3CU3E9__19_0_7() const { return ___U3CU3E9__19_0_7; }
	inline Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 ** get_address_of_U3CU3E9__19_0_7() { return &___U3CU3E9__19_0_7; }
	inline void set_U3CU3E9__19_0_7(Func_2_t257DDCD53F57DB844AC8EB515D86BB9E27BDCD59 * value)
	{
		___U3CU3E9__19_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields, ___U3CU3E9__19_1_8)); }
	inline Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * get_U3CU3E9__19_1_8() const { return ___U3CU3E9__19_1_8; }
	inline Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C ** get_address_of_U3CU3E9__19_1_8() { return &___U3CU3E9__19_1_8; }
	inline void set_U3CU3E9__19_1_8(Func_3_tA4625BA44BC9F01D52CD58E5E6C55847E307B10C * value)
	{
		___U3CU3E9__19_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_1_8), (void*)value);
	}
};


// Oculus.Interaction.Input.OneEuroFilter/LowPassFilter
struct LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_isFirstUpdate
	bool ____isFirstUpdate_0;
	// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_hatx
	float ____hatx_1;
	// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::_hatxprev
	float ____hatxprev_2;

public:
	inline static int32_t get_offset_of__isFirstUpdate_0() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____isFirstUpdate_0)); }
	inline bool get__isFirstUpdate_0() const { return ____isFirstUpdate_0; }
	inline bool* get_address_of__isFirstUpdate_0() { return &____isFirstUpdate_0; }
	inline void set__isFirstUpdate_0(bool value)
	{
		____isFirstUpdate_0 = value;
	}

	inline static int32_t get_offset_of__hatx_1() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____hatx_1)); }
	inline float get__hatx_1() const { return ____hatx_1; }
	inline float* get_address_of__hatx_1() { return &____hatx_1; }
	inline void set__hatx_1(float value)
	{
		____hatx_1 = value;
	}

	inline static int32_t get_offset_of__hatxprev_2() { return static_cast<int32_t>(offsetof(LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38, ____hatxprev_2)); }
	inline float get__hatxprev_2() const { return ____hatxprev_2; }
	inline float* get_address_of__hatxprev_2() { return &____hatxprev_2; }
	inline void set__hatxprev_2(float value)
	{
		____hatxprev_2 = value;
	}
};


// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c
struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields
{
public:
	// Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<>9
	U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Rigidbody> Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<>9__19_0
	Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Predicate_1_t69F22CFAC649CECB573BAB71401CE1B742C968CD * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints
struct OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::MinAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinAngle_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::MaxAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxAngle_1;

public:
	inline static int32_t get_offset_of_MinAngle_0() { return static_cast<int32_t>(offsetof(OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A, ___MinAngle_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinAngle_0() const { return ___MinAngle_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinAngle_0() { return &___MinAngle_0; }
	inline void set_MinAngle_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinAngle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinAngle_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxAngle_1() { return static_cast<int32_t>(offsetof(OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A, ___MaxAngle_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxAngle_1() const { return ___MaxAngle_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxAngle_1() { return &___MaxAngle_1; }
	inline void set_MaxAngle_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxAngle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxAngle_1), (void*)value);
	}
};


// Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints
struct OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::ConstraintsAreRelative
	bool ___ConstraintsAreRelative_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinX
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinX_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxX
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxX_2;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinY_3;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxY_4;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MinZ
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinZ_5;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::MaxZ
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxZ_6;

public:
	inline static int32_t get_offset_of_ConstraintsAreRelative_0() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___ConstraintsAreRelative_0)); }
	inline bool get_ConstraintsAreRelative_0() const { return ___ConstraintsAreRelative_0; }
	inline bool* get_address_of_ConstraintsAreRelative_0() { return &___ConstraintsAreRelative_0; }
	inline void set_ConstraintsAreRelative_0(bool value)
	{
		___ConstraintsAreRelative_0 = value;
	}

	inline static int32_t get_offset_of_MinX_1() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinX_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinX_1() const { return ___MinX_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinX_1() { return &___MinX_1; }
	inline void set_MinX_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinX_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinX_1), (void*)value);
	}

	inline static int32_t get_offset_of_MaxX_2() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxX_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxX_2() const { return ___MaxX_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxX_2() { return &___MaxX_2; }
	inline void set_MaxX_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxX_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxX_2), (void*)value);
	}

	inline static int32_t get_offset_of_MinY_3() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinY_3)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinY_3() const { return ___MinY_3; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinY_3() { return &___MinY_3; }
	inline void set_MinY_3(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinY_3), (void*)value);
	}

	inline static int32_t get_offset_of_MaxY_4() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxY_4)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxY_4() const { return ___MaxY_4; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxY_4() { return &___MaxY_4; }
	inline void set_MaxY_4(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxY_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxY_4), (void*)value);
	}

	inline static int32_t get_offset_of_MinZ_5() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MinZ_5)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinZ_5() const { return ___MinZ_5; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinZ_5() { return &___MinZ_5; }
	inline void set_MinZ_5(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinZ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinZ_5), (void*)value);
	}

	inline static int32_t get_offset_of_MaxZ_6() { return static_cast<int32_t>(offsetof(OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355, ___MaxZ_6)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxZ_6() const { return ___MaxZ_6; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxZ_6() { return &___MaxZ_6; }
	inline void set_MaxZ_6(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxZ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxZ_6), (void*)value);
	}
};


// Oculus.Interaction.PhysicsGrabbable/<>c
struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields
{
public:
	// Oculus.Interaction.PhysicsGrabbable/<>c Oculus.Interaction.PhysicsGrabbable/<>c::<>9
	U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * ___U3CU3E9_0;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> Oculus.Interaction.PhysicsGrabbable/<>c::<>9__27_0
	Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields, ___U3CU3E9__27_0_1)); }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(Action_2_t5E26140FB91988BB3F49D09CE92042907A19A916 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_0_1), (void*)value);
	}
};


// Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82  : public RuntimeObject
{
public:
	// Oculus.Interaction.PointableCanvasModule Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0::<>4__this
	PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * ___U3CU3E4__this_0;
	// Oculus.Interaction.IPointableCanvas Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0::pointerCanvas
	RuntimeObject* ___pointerCanvas_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82, ___U3CU3E4__this_0)); }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_pointerCanvas_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82, ___pointerCanvas_1)); }
	inline RuntimeObject* get_pointerCanvas_1() const { return ___pointerCanvas_1; }
	inline RuntimeObject** get_address_of_pointerCanvas_1() { return &___pointerCanvas_1; }
	inline void set_pointerCanvas_1(RuntimeObject* value)
	{
		___pointerCanvas_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerCanvas_1), (void*)value);
	}
};


// Oculus.Interaction.PointableElement/<>c
struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields
{
public:
	// Oculus.Interaction.PointableElement/<>c Oculus.Interaction.PointableElement/<>c::<>9
	U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointableElement/<>c::<>9__43_0
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___U3CU3E9__43_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields, ___U3CU3E9__43_0_1)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_U3CU3E9__43_0_1() const { return ___U3CU3E9__43_0_1; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_U3CU3E9__43_0_1() { return &___U3CU3E9__43_0_1; }
	inline void set_U3CU3E9__43_0_1(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___U3CU3E9__43_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_0_1), (void*)value);
	}
};


// Oculus.Interaction.PokeInteractable/PositionPinningConfig
struct PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PokeInteractable/PositionPinningConfig::Enabled
	bool ___Enabled_0;
	// System.Single Oculus.Interaction.PokeInteractable/PositionPinningConfig::MaxPinDistance
	float ___MaxPinDistance_1;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_MaxPinDistance_1() { return static_cast<int32_t>(offsetof(PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA, ___MaxPinDistance_1)); }
	inline float get_MaxPinDistance_1() const { return ___MaxPinDistance_1; }
	inline float* get_address_of_MaxPinDistance_1() { return &___MaxPinDistance_1; }
	inline void set_MaxPinDistance_1(float value)
	{
		___MaxPinDistance_1 = value;
	}
};


// Oculus.Interaction.PoseDetection.Sequence/<>c
struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.Sequence/<>c Oculus.Interaction.PoseDetection.Sequence/<>c::<>9
	U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.Sequence/<>c::<>9__19_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.Sequence/ActivationStep
struct ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_activeState
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____activeState_0;
	// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::<ActiveState>k__BackingField
	RuntimeObject* ___U3CActiveStateU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_minActiveTime
	float ____minActiveTime_2;
	// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::_maxStepTime
	float ____maxStepTime_3;

public:
	inline static int32_t get_offset_of__activeState_0() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____activeState_0)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__activeState_0() const { return ____activeState_0; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__activeState_0() { return &____activeState_0; }
	inline void set__activeState_0(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____activeState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActiveStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ___U3CActiveStateU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CActiveStateU3Ek__BackingField_1() const { return ___U3CActiveStateU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CActiveStateU3Ek__BackingField_1() { return &___U3CActiveStateU3Ek__BackingField_1; }
	inline void set_U3CActiveStateU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CActiveStateU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveStateU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__minActiveTime_2() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____minActiveTime_2)); }
	inline float get__minActiveTime_2() const { return ____minActiveTime_2; }
	inline float* get_address_of__minActiveTime_2() { return &____minActiveTime_2; }
	inline void set__minActiveTime_2(float value)
	{
		____minActiveTime_2 = value;
	}

	inline static int32_t get_offset_of__maxStepTime_3() { return static_cast<int32_t>(offsetof(ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54, ____maxStepTime_3)); }
	inline float get__maxStepTime_3() const { return ____maxStepTime_3; }
	inline float* get_address_of__maxStepTime_3() { return &____maxStepTime_3; }
	inline void set__maxStepTime_3(float value)
	{
		____maxStepTime_3 = value;
	}
};


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF  : public RuntimeObject
{
public:
	// Oculus.Interaction.SnapInteractor Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::interactor
	SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3 * ___interactor_0;

public:
	inline static int32_t get_offset_of_interactor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF, ___interactor_0)); }
	inline SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3 * get_interactor_0() const { return ___interactor_0; }
	inline SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3 ** get_address_of_interactor_0() { return &___interactor_0; }
	inline void set_interactor_0(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3 * value)
	{
		___interactor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactor_0), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList
struct FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::_value
	List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF, ____value_0)); }
	inline List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * get__value_0() const { return ____value_0; }
	inline List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};


// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c
struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields
{
public:
	// Oculus.Interaction.Throw.StandardVelocityCalculator/<>c Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9
	U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * ___U3CU3E9_0;
	// System.Action`1<System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>> Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9__113_0
	Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * ___U3CU3E9__113_0_1;
	// System.Action`1<Oculus.Interaction.Throw.ReleaseVelocityInformation> Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<>9__113_1
	Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * ___U3CU3E9__113_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__113_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9__113_0_1)); }
	inline Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * get_U3CU3E9__113_0_1() const { return ___U3CU3E9__113_0_1; }
	inline Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C ** get_address_of_U3CU3E9__113_0_1() { return &___U3CU3E9__113_0_1; }
	inline void set_U3CU3E9__113_0_1(Action_1_t6F703603AAE373314E2F1CC83DD745E0EBB56B8C * value)
	{
		___U3CU3E9__113_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__113_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__113_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields, ___U3CU3E9__113_1_2)); }
	inline Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * get_U3CU3E9__113_1_2() const { return ___U3CU3E9__113_1_2; }
	inline Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC ** get_address_of_U3CU3E9__113_1_2() { return &___U3CU3E9__113_1_2; }
	inline void set_U3CU3E9__113_1_2(Action_1_tB6437DE6260AF4F060DC76D016B1BABB23F5CCEC * value)
	{
		___U3CU3E9__113_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__113_1_2), (void*)value);
	}
};


// Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams
struct BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C  : public RuntimeObject
{
public:
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::BufferLengthSeconds
	float ___BufferLengthSeconds_0;
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::SampleFrequency
	float ___SampleFrequency_1;

public:
	inline static int32_t get_offset_of_BufferLengthSeconds_0() { return static_cast<int32_t>(offsetof(BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C, ___BufferLengthSeconds_0)); }
	inline float get_BufferLengthSeconds_0() const { return ___BufferLengthSeconds_0; }
	inline float* get_address_of_BufferLengthSeconds_0() { return &___BufferLengthSeconds_0; }
	inline void set_BufferLengthSeconds_0(float value)
	{
		___BufferLengthSeconds_0 = value;
	}

	inline static int32_t get_offset_of_SampleFrequency_1() { return static_cast<int32_t>(offsetof(BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C, ___SampleFrequency_1)); }
	inline float get_SampleFrequency_1() const { return ___SampleFrequency_1; }
	inline float* get_address_of_SampleFrequency_1() { return &___SampleFrequency_1; }
	inline void set_SampleFrequency_1(float value)
	{
		___SampleFrequency_1 = value;
	}
};


// Oculus.Interaction.Input.SyntheticHand/<>c
struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields
{
public:
	// Oculus.Interaction.Input.SyntheticHand/<>c Oculus.Interaction.Input.SyntheticHand/<>c::<>9
	U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Input.SyntheticHand/<>c::<>9__55_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// Oculus.Interaction.TouchHandGrabInteractor/<>c
struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields
{
public:
	// Oculus.Interaction.TouchHandGrabInteractor/<>c Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9
	U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9__37_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__37_0_1;
	// System.Action Oculus.Interaction.TouchHandGrabInteractor/<>c::<>9__66_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__66_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9__37_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__37_0_1() const { return ___U3CU3E9__37_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__37_0_1() { return &___U3CU3E9__37_0_1; }
	inline void set_U3CU3E9__37_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__37_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__66_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields, ___U3CU3E9__66_0_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__66_0_2() const { return ___U3CU3E9__66_0_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__66_0_2() { return &___U3CU3E9__66_0_2; }
	inline void set_U3CU3E9__66_0_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__66_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__66_0_2), (void*)value);
	}
};


// Oculus.Interaction.TouchHandGrabInteractor/FingerStatus
struct FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Locked
	bool ___Locked_0;
	// System.Boolean Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Selecting
	bool ___Selecting_1;
	// Oculus.Interaction.Input.HandJointId[] Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Joints
	HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* ___Joints_2;
	// UnityEngine.Pose[] Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::LocalJoints
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___LocalJoints_3;
	// System.Single Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::CurlValueAtLock
	float ___CurlValueAtLock_4;
	// System.Single Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::Timer
	float ___Timer_5;

public:
	inline static int32_t get_offset_of_Locked_0() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Locked_0)); }
	inline bool get_Locked_0() const { return ___Locked_0; }
	inline bool* get_address_of_Locked_0() { return &___Locked_0; }
	inline void set_Locked_0(bool value)
	{
		___Locked_0 = value;
	}

	inline static int32_t get_offset_of_Selecting_1() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Selecting_1)); }
	inline bool get_Selecting_1() const { return ___Selecting_1; }
	inline bool* get_address_of_Selecting_1() { return &___Selecting_1; }
	inline void set_Selecting_1(bool value)
	{
		___Selecting_1 = value;
	}

	inline static int32_t get_offset_of_Joints_2() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Joints_2)); }
	inline HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* get_Joints_2() const { return ___Joints_2; }
	inline HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565** get_address_of_Joints_2() { return &___Joints_2; }
	inline void set_Joints_2(HandJointIdU5BU5D_tD9EAC8A5FD414956B093E196AA2C09704A023565* value)
	{
		___Joints_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_2), (void*)value);
	}

	inline static int32_t get_offset_of_LocalJoints_3() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___LocalJoints_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_LocalJoints_3() const { return ___LocalJoints_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_LocalJoints_3() { return &___LocalJoints_3; }
	inline void set_LocalJoints_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___LocalJoints_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalJoints_3), (void*)value);
	}

	inline static int32_t get_offset_of_CurlValueAtLock_4() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___CurlValueAtLock_4)); }
	inline float get_CurlValueAtLock_4() const { return ___CurlValueAtLock_4; }
	inline float* get_address_of_CurlValueAtLock_4() { return &___CurlValueAtLock_4; }
	inline void set_CurlValueAtLock_4(float value)
	{
		___CurlValueAtLock_4 = value;
	}

	inline static int32_t get_offset_of_Timer_5() { return static_cast<int32_t>(offsetof(FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C, ___Timer_5)); }
	inline float get_Timer_5() const { return ___Timer_5; }
	inline float* get_address_of_Timer_5() { return &___Timer_5; }
	inline void set_Timer_5(float value)
	{
		___Timer_5 = value;
	}
};


// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c
struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields
{
public:
	// Oculus.Interaction.TouchHandGrabInteractorVisual/<>c Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<>9
	U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Pose,UnityEngine.Quaternion> Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<>9__6_0
	Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t6170D516A1F6F9B6BE1BDC5379D0A5CC320AF0F8 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c
struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<>9
	U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c
struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<>9
	U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * ___U3CU3E9_0;
	// System.Func`2<Oculus.Interaction.PoseDetection.TransformFeature,System.Int32> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<>9__2_1
	Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * ___U3CU3E9__2_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields, ___U3CU3E9__2_1_1)); }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * get_U3CU3E9__2_1_1() const { return ___U3CU3E9__2_1_1; }
	inline Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 ** get_address_of_U3CU3E9__2_1_1() { return &___U3CU3E9__2_1_1; }
	inline void set_U3CU3E9__2_1_1(Func_2_tB1C6521DF353237A1DE37F05D336DF6D3DD128B4 * value)
	{
		___U3CU3E9__2_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.TransformJointData Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::jointData
	TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * ___jointData_0;
	// Oculus.Interaction.PoseDetection.TransformConfig Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::transformConfig
	TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig_1;

public:
	inline static int32_t get_offset_of_jointData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F, ___jointData_0)); }
	inline TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * get_jointData_0() const { return ___jointData_0; }
	inline TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 ** get_address_of_jointData_0() { return &___jointData_0; }
	inline void set_jointData_0(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * value)
	{
		___jointData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointData_0), (void*)value);
	}

	inline static int32_t get_offset_of_transformConfig_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F, ___transformConfig_1)); }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * get_transformConfig_1() const { return ___transformConfig_1; }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 ** get_address_of_transformConfig_1() { return &___transformConfig_1; }
	inline void set_transformConfig_1(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * value)
	{
		___transformConfig_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformConfig_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo
struct TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.TransformConfig Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::Config
	TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___Config_0;
	// Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::StateProvider
	FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * ___StateProvider_1;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9, ___Config_0)); }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * get_Config_0() const { return ___Config_0; }
	inline TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateProvider_1() { return static_cast<int32_t>(offsetof(TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9, ___StateProvider_1)); }
	inline FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * get_StateProvider_1() const { return ___StateProvider_1; }
	inline FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 ** get_address_of_StateProvider_1() { return &___StateProvider_1; }
	inline void set_StateProvider_1(FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * value)
	{
		___StateProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateProvider_1), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c
struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields
{
public:
	// Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<>9
	U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<>9__15_0
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__15_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_1), (void*)value);
	}
};


// Oculus.Interaction.Tween/<>c
struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields
{
public:
	// Oculus.Interaction.Tween/<>c Oculus.Interaction.Tween/<>c::<>9
	U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * ___U3CU3E9_0;
	// System.Predicate`1<Oculus.Interaction.Tween/TweenCurve> Oculus.Interaction.Tween/<>c::<>9__11_0
	Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * ___U3CU3E9__11_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Predicate_1_tAEFDB9DA181D6E72E455167543DDA0C496A59DA7 * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}
};


// Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
struct TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::ConstraintsAreRelative
	bool ___ConstraintsAreRelative_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::MinScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinScale_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::MaxScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxScale_2;

public:
	inline static int32_t get_offset_of_ConstraintsAreRelative_0() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___ConstraintsAreRelative_0)); }
	inline bool get_ConstraintsAreRelative_0() const { return ___ConstraintsAreRelative_0; }
	inline bool* get_address_of_ConstraintsAreRelative_0() { return &___ConstraintsAreRelative_0; }
	inline void set_ConstraintsAreRelative_0(bool value)
	{
		___ConstraintsAreRelative_0 = value;
	}

	inline static int32_t get_offset_of_MinScale_1() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___MinScale_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinScale_1() const { return ___MinScale_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinScale_1() { return &___MinScale_1; }
	inline void set_MinScale_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinScale_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinScale_1), (void*)value);
	}

	inline static int32_t get_offset_of_MaxScale_2() { return static_cast<int32_t>(offsetof(TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40, ___MaxScale_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxScale_2() const { return ___MaxScale_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxScale_2() { return &___MaxScale_2; }
	inline void set_MaxScale_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxScale_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxScale_2), (void*)value);
	}
};


// Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints
struct TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MinScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinScale_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MaxScale
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxScale_1;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MinY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinY_2;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::MaxY
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxY_3;

public:
	inline static int32_t get_offset_of_MinScale_0() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MinScale_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinScale_0() const { return ___MinScale_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinScale_0() { return &___MinScale_0; }
	inline void set_MinScale_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinScale_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinScale_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxScale_1() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MaxScale_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxScale_1() const { return ___MaxScale_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxScale_1() { return &___MaxScale_1; }
	inline void set_MaxScale_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxScale_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxScale_1), (void*)value);
	}

	inline static int32_t get_offset_of_MinY_2() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MinY_2)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinY_2() const { return ___MinY_2; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinY_2() { return &___MinY_2; }
	inline void set_MinY_2(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinY_2), (void*)value);
	}

	inline static int32_t get_offset_of_MaxY_3() { return static_cast<int32_t>(offsetof(TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A, ___MaxY_3)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxY_3() const { return ___MaxY_3; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxY_3() { return &___MaxY_3; }
	inline void set_MaxY_3(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxY_3), (void*)value);
	}
};


// Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints
struct TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01  : public RuntimeObject
{
public:
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::MinAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MinAngle_0;
	// Oculus.Interaction.FloatConstraint Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::MaxAngle
	FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * ___MaxAngle_1;

public:
	inline static int32_t get_offset_of_MinAngle_0() { return static_cast<int32_t>(offsetof(TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01, ___MinAngle_0)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MinAngle_0() const { return ___MinAngle_0; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MinAngle_0() { return &___MinAngle_0; }
	inline void set_MinAngle_0(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MinAngle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinAngle_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxAngle_1() { return static_cast<int32_t>(offsetof(TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01, ___MaxAngle_1)); }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * get_MaxAngle_1() const { return ___MaxAngle_1; }
	inline FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 ** get_address_of_MaxAngle_1() { return &___MaxAngle_1; }
	inline void set_MaxAngle_1(FloatConstraint_tFFDB01CBBEEE6BBDCCB1CFFBBEDD6D4451966B26 * value)
	{
		___MaxAngle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxAngle_1), (void*)value);
	}
};


// Oculus.Interaction.VirtualPointable/<>c
struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields
{
public:
	// Oculus.Interaction.VirtualPointable/<>c Oculus.Interaction.VirtualPointable/<>c::<>9
	U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.VirtualPointable/<>c::<>9__10_0
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Oculus.Interaction.VirtualSelector/<>c
struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields
{
public:
	// Oculus.Interaction.VirtualSelector/<>c Oculus.Interaction.VirtualSelector/<>c::<>9
	U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * ___U3CU3E9_0;
	// System.Action Oculus.Interaction.VirtualSelector/<>c::<>9__12_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_0_1;
	// System.Action Oculus.Interaction.VirtualSelector/<>c::<>9__12_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields, ___U3CU3E9__12_1_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_1_2() const { return ___U3CU3E9__12_1_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_1_2() { return &___U3CU3E9__12_1_2; }
	inline void set_U3CU3E9__12_1_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_2), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Oculus.Interaction.InteractableGroup/InteractableLimits
struct InteractableLimits_t27E5457A54091B4EB269B03171E0CB37EEACC2D5 
{
public:
	// System.Int32 Oculus.Interaction.InteractableGroup/InteractableLimits::MaxInteractors
	int32_t ___MaxInteractors_0;
	// System.Int32 Oculus.Interaction.InteractableGroup/InteractableLimits::MaxSelectingInteractors
	int32_t ___MaxSelectingInteractors_1;

public:
	inline static int32_t get_offset_of_MaxInteractors_0() { return static_cast<int32_t>(offsetof(InteractableLimits_t27E5457A54091B4EB269B03171E0CB37EEACC2D5, ___MaxInteractors_0)); }
	inline int32_t get_MaxInteractors_0() const { return ___MaxInteractors_0; }
	inline int32_t* get_address_of_MaxInteractors_0() { return &___MaxInteractors_0; }
	inline void set_MaxInteractors_0(int32_t value)
	{
		___MaxInteractors_0 = value;
	}

	inline static int32_t get_offset_of_MaxSelectingInteractors_1() { return static_cast<int32_t>(offsetof(InteractableLimits_t27E5457A54091B4EB269B03171E0CB37EEACC2D5, ___MaxSelectingInteractors_1)); }
	inline int32_t get_MaxSelectingInteractors_1() const { return ___MaxSelectingInteractors_1; }
	inline int32_t* get_address_of_MaxSelectingInteractors_1() { return &___MaxSelectingInteractors_1; }
	inline void set_MaxSelectingInteractors_1(int32_t value)
	{
		___MaxSelectingInteractors_1 = value;
	}
};


// Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t1D07E0BE79730E98B98862A6ACA03CAF8E883CAD 
{
public:
	// System.Boolean Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass14_0::forwardDirection
	bool ___forwardDirection_0;

public:
	inline static int32_t get_offset_of_forwardDirection_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t1D07E0BE79730E98B98862A6ACA03CAF8E883CAD, ___forwardDirection_0)); }
	inline bool get_forwardDirection_0() const { return ___forwardDirection_0; }
	inline bool* get_address_of_forwardDirection_0() { return &___forwardDirection_0; }
	inline void set_forwardDirection_0(bool value)
	{
		___forwardDirection_0 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t02A343DCDAB4C249B9ECB35EB6A39C8A34C53BD2 
{
public:
	// System.Collections.Generic.IDictionary`2<Oculus.Interaction.Input.HandFinger,Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig[]> Oculus.Interaction.PoseDetection.ShapeRecognizer/<>c__DisplayClass22_0::fingerFeatureConfigs
	RuntimeObject* ___fingerFeatureConfigs_0;

public:
	inline static int32_t get_offset_of_fingerFeatureConfigs_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t02A343DCDAB4C249B9ECB35EB6A39C8A34C53BD2, ___fingerFeatureConfigs_0)); }
	inline RuntimeObject* get_fingerFeatureConfigs_0() const { return ___fingerFeatureConfigs_0; }
	inline RuntimeObject** get_address_of_fingerFeatureConfigs_0() { return &___fingerFeatureConfigs_0; }
	inline void set_fingerFeatureConfigs_0(RuntimeObject* value)
	{
		___fingerFeatureConfigs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerFeatureConfigs_0), (void*)value);
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Oculus.Interaction.PoseDetection.FeatureStateActiveMode
struct FeatureStateActiveMode_tD5B42DE65F6F5A1A3BB4BCE64BB01789A1E990E8 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FeatureStateActiveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureStateActiveMode_tD5B42DE65F6F5A1A3BB4BCE64BB01789A1E990E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.FingerFeature
struct FingerFeature_tA7B4DA2BB61902F57A009E4CC443C6F6D1E2AE68 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.FingerFeature::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FingerFeature_tA7B4DA2BB61902F57A009E4CC443C6F6D1E2AE68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.HandFinger
struct HandFinger_t4015F4AA497AE22648530B80D96ACE6C2BCC0773 
{
public:
	// System.Int32 Oculus.Interaction.Input.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_t4015F4AA497AE22648530B80D96ACE6C2BCC0773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.HandJointId
struct HandJointId_tEA5DFD3B2CDDDCE14443E69342A573215776A840 
{
public:
	// System.Int32 Oculus.Interaction.Input.HandJointId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJointId_tEA5DFD3B2CDDDCE14443E69342A573215776A840, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Input.Handedness
struct Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786 
{
public:
	// System.Int32 Oculus.Interaction.Input.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tEB0C4A1C9050B998705E7134F47D2368BD692786, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.InteractableState
struct InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C 
{
public:
	// System.Int32 Oculus.Interaction.InteractableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractableState_tA9B703B04AA3473E94B51A1EE56DD821D239E75C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.InteractorState
struct InteractorState_t8A238DB833AC007D1ECFBE81CBC5D89FDEAD13F6 
{
public:
	// System.Int32 Oculus.Interaction.InteractorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractorState_t8A238DB833AC007D1ECFBE81CBC5D89FDEAD13F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Oculus.Interaction.PointerEventType
struct PointerEventType_t4E31B567AE7DAA712AC31390A4B91A5112AAC018 
{
public:
	// System.Int32 Oculus.Interaction.PointerEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerEventType_t4E31B567AE7DAA712AC31390A4B91A5112AAC018, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::LinearVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.ReleaseVelocityInformation::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	// System.Boolean Oculus.Interaction.Throw.ReleaseVelocityInformation::IsSelectedVelocity
	bool ___IsSelectedVelocity_3;

public:
	inline static int32_t get_offset_of_LinearVelocity_0() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___LinearVelocity_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LinearVelocity_0() const { return ___LinearVelocity_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LinearVelocity_0() { return &___LinearVelocity_0; }
	inline void set_LinearVelocity_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LinearVelocity_0 = value;
	}

	inline static int32_t get_offset_of_AngularVelocity_1() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___AngularVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AngularVelocity_1() const { return ___AngularVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AngularVelocity_1() { return &___AngularVelocity_1; }
	inline void set_AngularVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AngularVelocity_1 = value;
	}

	inline static int32_t get_offset_of_Origin_2() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___Origin_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_2() const { return ___Origin_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_2() { return &___Origin_2; }
	inline void set_Origin_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_2 = value;
	}

	inline static int32_t get_offset_of_IsSelectedVelocity_3() { return static_cast<int32_t>(offsetof(ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7, ___IsSelectedVelocity_3)); }
	inline bool get_IsSelectedVelocity_3() const { return ___IsSelectedVelocity_3; }
	inline bool* get_address_of_IsSelectedVelocity_3() { return &___IsSelectedVelocity_3; }
	inline void set_IsSelectedVelocity_3(bool value)
	{
		___IsSelectedVelocity_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};
// Native definition for COM marshalling of Oculus.Interaction.Throw.ReleaseVelocityInformation
struct ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	int32_t ___IsSelectedVelocity_3;
};

// Oculus.Interaction.PoseDetection.TransformFeature
struct TransformFeature_t3BB470292C781360CBF9CBDDA8505BD9BF162D56 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.TransformFeature::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformFeature_t3BB470292C781360CBF9CBDDA8505BD9BF162D56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.UpVectorType
struct UpVectorType_t3D58DF60C808CB797F6EB99BCB0827633DCBF897 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.UpVectorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpVectorType_t3D58DF60C808CB797F6EB99BCB0827633DCBF897, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.InteractableColorVisual/ColorState
struct ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818  : public RuntimeObject
{
public:
	// UnityEngine.Color Oculus.Interaction.InteractableColorVisual/ColorState::Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_0;
	// UnityEngine.AnimationCurve Oculus.Interaction.InteractableColorVisual/ColorState::ColorCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___ColorCurve_1;
	// System.Single Oculus.Interaction.InteractableColorVisual/ColorState::ColorTime
	float ___ColorTime_2;

public:
	inline static int32_t get_offset_of_Color_0() { return static_cast<int32_t>(offsetof(ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818, ___Color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Color_0() const { return ___Color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Color_0() { return &___Color_0; }
	inline void set_Color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Color_0 = value;
	}

	inline static int32_t get_offset_of_ColorCurve_1() { return static_cast<int32_t>(offsetof(ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818, ___ColorCurve_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_ColorCurve_1() const { return ___ColorCurve_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_ColorCurve_1() { return &___ColorCurve_1; }
	inline void set_ColorCurve_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___ColorCurve_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorCurve_1), (void*)value);
	}

	inline static int32_t get_offset_of_ColorTime_2() { return static_cast<int32_t>(offsetof(ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818, ___ColorTime_2)); }
	inline float get_ColorTime_2() const { return ___ColorTime_2; }
	inline float* get_address_of_ColorTime_2() { return &___ColorTime_2; }
	inline void set_ColorTime_2(float value)
	{
		___ColorTime_2 = value;
	}
};


// Oculus.Interaction.InteractorActiveState/InteractorProperty
struct InteractorProperty_tAAB55FF1067C6826EB10F818467CE0D3E07F9F7D 
{
public:
	// System.Int32 Oculus.Interaction.InteractorActiveState/InteractorProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractorProperty_tAAB55FF1067C6826EB10F818467CE0D3E07F9F7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis
struct HandAxis_tAEE724CD46F28D5FE9E724E996D4886E618D1A67 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandAxis_tAEE724CD46F28D5FE9E724E996D4886E618D1A67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState
struct JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::TargetAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TargetAxis_0;
	// System.Single Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::Amount
	float ___Amount_1;

public:
	inline static int32_t get_offset_of_TargetAxis_0() { return static_cast<int32_t>(offsetof(JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597, ___TargetAxis_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TargetAxis_0() const { return ___TargetAxis_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TargetAxis_0() { return &___TargetAxis_0; }
	inline void set_TargetAxis_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TargetAxis_0 = value;
	}

	inline static int32_t get_offset_of_Amount_1() { return static_cast<int32_t>(offsetof(JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597, ___Amount_1)); }
	inline float get_Amount_1() const { return ___Amount_1; }
	inline float* get_address_of_Amount_1() { return &___Amount_1; }
	inline void set_Amount_1(float value)
	{
		___Amount_1 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo
struct RelativeTo_t69A8DD5FEBB00DC32CC178521BB7F0FDE36447C1 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RelativeTo_t69A8DD5FEBB00DC32CC178521BB7F0FDE36447C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis
struct WorldAxis_t5B86D4D9AC6A1FB51793DA3CA9F324621CCBBCD9 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldAxis_t5B86D4D9AC6A1FB51793DA3CA9F324621CCBBCD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HandAxis
struct HandAxis_t3AA59CF6EC630A7C5492C3E0A722B9F9BA93D5C3 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/HandAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandAxis_t3AA59CF6EC630A7C5492C3E0A722B9F9BA93D5C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HeadAxis
struct HeadAxis_t0D16C264A394A50E729D8475A99FF0FEDA533EC3 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/HeadAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadAxis_t0D16C264A394A50E729D8475A99FF0FEDA533EC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState
struct JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::TargetVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TargetVector_0;
	// System.Single Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::Amount
	float ___Amount_1;

public:
	inline static int32_t get_offset_of_TargetVector_0() { return static_cast<int32_t>(offsetof(JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14, ___TargetVector_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TargetVector_0() const { return ___TargetVector_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TargetVector_0() { return &___TargetVector_0; }
	inline void set_TargetVector_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TargetVector_0 = value;
	}

	inline static int32_t get_offset_of_Amount_1() { return static_cast<int32_t>(offsetof(JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14, ___Amount_1)); }
	inline float get_Amount_1() const { return ___Amount_1; }
	inline float* get_address_of_Amount_1() { return &___Amount_1; }
	inline void set_Amount_1(float value)
	{
		___Amount_1 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo
struct RelativeTo_t1C555C78C625EAB034F3F59F45592FC08D9C8ECA 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RelativeTo_t1C555C78C625EAB034F3F59F45592FC08D9C8ECA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis
struct WorldAxis_t0FF86FDD7F2698F6BCEC7B100D023B58089A0B6D 
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldAxis_t0FF86FDD7F2698F6BCEC7B100D023B58089A0B6D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.OneGrabRotateTransformer/Axis
struct Axis_t4AED6E002422C7AF45A6AA36EC5C4C8CAC80D1F2 
{
public:
	// System.Int32 Oculus.Interaction.OneGrabRotateTransformer/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t4AED6E002422C7AF45A6AA36EC5C4C8CAC80D1F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PointableCanvasModule/Pointer
struct Pointer_t8F177D393665020358C0C4520193ACBBC99BF489  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData Oculus.Interaction.PointableCanvasModule/Pointer::<PointerEventData>k__BackingField
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___U3CPointerEventDataU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::<MarkedForDeletion>k__BackingField
	bool ___U3CMarkedForDeletionU3Ek__BackingField_1;
	// UnityEngine.Canvas Oculus.Interaction.PointableCanvasModule/Pointer::_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ____canvas_2;
	// UnityEngine.Vector3 Oculus.Interaction.PointableCanvasModule/Pointer::_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____position_3;
	// UnityEngine.GameObject Oculus.Interaction.PointableCanvasModule/Pointer::_hoveredSelectable
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____hoveredSelectable_4;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_pressing
	bool ____pressing_5;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_pressed
	bool ____pressed_6;
	// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::_released
	bool ____released_7;

public:
	inline static int32_t get_offset_of_U3CPointerEventDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ___U3CPointerEventDataU3Ek__BackingField_0)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_U3CPointerEventDataU3Ek__BackingField_0() const { return ___U3CPointerEventDataU3Ek__BackingField_0; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_U3CPointerEventDataU3Ek__BackingField_0() { return &___U3CPointerEventDataU3Ek__BackingField_0; }
	inline void set_U3CPointerEventDataU3Ek__BackingField_0(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___U3CPointerEventDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerEventDataU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMarkedForDeletionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ___U3CMarkedForDeletionU3Ek__BackingField_1)); }
	inline bool get_U3CMarkedForDeletionU3Ek__BackingField_1() const { return ___U3CMarkedForDeletionU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CMarkedForDeletionU3Ek__BackingField_1() { return &___U3CMarkedForDeletionU3Ek__BackingField_1; }
	inline void set_U3CMarkedForDeletionU3Ek__BackingField_1(bool value)
	{
		___U3CMarkedForDeletionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__canvas_2() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____canvas_2)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get__canvas_2() const { return ____canvas_2; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of__canvas_2() { return &____canvas_2; }
	inline void set__canvas_2(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		____canvas_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvas_2), (void*)value);
	}

	inline static int32_t get_offset_of__position_3() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__position_3() const { return ____position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__position_3() { return &____position_3; }
	inline void set__position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____position_3 = value;
	}

	inline static int32_t get_offset_of__hoveredSelectable_4() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____hoveredSelectable_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__hoveredSelectable_4() const { return ____hoveredSelectable_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__hoveredSelectable_4() { return &____hoveredSelectable_4; }
	inline void set__hoveredSelectable_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____hoveredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoveredSelectable_4), (void*)value);
	}

	inline static int32_t get_offset_of__pressing_5() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____pressing_5)); }
	inline bool get__pressing_5() const { return ____pressing_5; }
	inline bool* get_address_of__pressing_5() { return &____pressing_5; }
	inline void set__pressing_5(bool value)
	{
		____pressing_5 = value;
	}

	inline static int32_t get_offset_of__pressed_6() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____pressed_6)); }
	inline bool get__pressed_6() const { return ____pressed_6; }
	inline bool* get_address_of__pressed_6() { return &____pressed_6; }
	inline void set__pressed_6(bool value)
	{
		____pressed_6 = value;
	}

	inline static int32_t get_offset_of__released_7() { return static_cast<int32_t>(offsetof(Pointer_t8F177D393665020358C0C4520193ACBBC99BF489, ____released_7)); }
	inline bool get__released_7() const { return ____released_7; }
	inline bool* get_address_of__released_7() { return &____released_7; }
	inline void set__released_7(bool value)
	{
		____released_7 = value;
	}
};


// Oculus.Interaction.Surfaces.PointableCylinder/NormalFacing
struct NormalFacing_t1E0CDDC8120ED549317FA71527A3DDE9DD9B8613 
{
public:
	// System.Int32 Oculus.Interaction.Surfaces.PointableCylinder/NormalFacing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalFacing_t1E0CDDC8120ED549317FA71527A3DDE9DD9B8613, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.Surfaces.PointablePlane/NormalFacing
struct NormalFacing_tEB3929C4701D905B915632809D997FC957F0D2A3 
{
public:
	// System.Int32 Oculus.Interaction.Surfaces.PointablePlane/NormalFacing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalFacing_tEB3929C4701D905B915632809D997FC957F0D2A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.RayInteractor/RayCandidate
struct RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E  : public RuntimeObject
{
public:
	// Oculus.Interaction.RayInteractable Oculus.Interaction.RayInteractor/RayCandidate::<ClosestInteractable>k__BackingField
	RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * ___U3CClosestInteractableU3Ek__BackingField_0;
	// UnityEngine.Vector3 Oculus.Interaction.RayInteractor/RayCandidate::<CandidatePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCandidatePositionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClosestInteractableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E, ___U3CClosestInteractableU3Ek__BackingField_0)); }
	inline RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * get_U3CClosestInteractableU3Ek__BackingField_0() const { return ___U3CClosestInteractableU3Ek__BackingField_0; }
	inline RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 ** get_address_of_U3CClosestInteractableU3Ek__BackingField_0() { return &___U3CClosestInteractableU3Ek__BackingField_0; }
	inline void set_U3CClosestInteractableU3Ek__BackingField_0(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * value)
	{
		___U3CClosestInteractableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClosestInteractableU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCandidatePositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E, ___U3CCandidatePositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CCandidatePositionU3Ek__BackingField_1() const { return ___U3CCandidatePositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CCandidatePositionU3Ek__BackingField_1() { return &___U3CCandidatePositionU3Ek__BackingField_1; }
	inline void set_U3CCandidatePositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CCandidatePositionU3Ek__BackingField_1 = value;
	}
};


// Oculus.Interaction.Input.SyntheticHand/WristLockMode
struct WristLockMode_t656E1FE2DB41A68470666A826AB438C826B63A1E 
{
public:
	// System.Int32 Oculus.Interaction.Input.SyntheticHand/WristLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WristLockMode_t656E1FE2DB41A68470666A826AB438C826B63A1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.TouchShadowHand/GrabTouchInfo
struct GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.TouchShadowHand/GrabTouchInfo::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_0;
	// System.Boolean Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabbing
	bool ___grabbing_1;
	// System.Boolean[] Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabbingFingers
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___grabbingFingers_2;
	// System.Single Oculus.Interaction.TouchShadowHand/GrabTouchInfo::grabT
	float ___grabT_3;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___offset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_0() const { return ___offset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_grabbing_1() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabbing_1)); }
	inline bool get_grabbing_1() const { return ___grabbing_1; }
	inline bool* get_address_of_grabbing_1() { return &___grabbing_1; }
	inline void set_grabbing_1(bool value)
	{
		___grabbing_1 = value;
	}

	inline static int32_t get_offset_of_grabbingFingers_2() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabbingFingers_2)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_grabbingFingers_2() const { return ___grabbingFingers_2; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_grabbingFingers_2() { return &___grabbingFingers_2; }
	inline void set_grabbingFingers_2(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___grabbingFingers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbingFingers_2), (void*)value);
	}

	inline static int32_t get_offset_of_grabT_3() { return static_cast<int32_t>(offsetof(GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585, ___grabT_3)); }
	inline float get_grabT_3() const { return ___grabT_3; }
	inline float* get_address_of_grabT_3() { return &___grabT_3; }
	inline void set_grabT_3(float value)
	{
		___grabT_3 = value;
	}
};


// Oculus.Interaction.TwoGrabRotateTransformer/Axis
struct Axis_t47D7BA126BC7D35FFB56479392176209E424C955 
{
public:
	// System.Int32 Oculus.Interaction.TwoGrabRotateTransformer/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t47D7BA126BC7D35FFB56479392176209E424C955, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>
struct FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.Input.HandJointId>
struct FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>
struct FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>
struct FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_mode
	int32_t ____mode_0;
	// TFeature Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_feature
	int32_t ____feature_1;
	// System.String Oculus.Interaction.PoseDetection.FeatureConfigBase`1::_state
	String_t* ____state_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__feature_1() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____feature_1)); }
	inline int32_t get__feature_1() const { return ____feature_1; }
	inline int32_t* get_address_of__feature_1() { return &____feature_1; }
	inline void set__feature_1(int32_t value)
	{
		____feature_1 = value;
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103, ____state_2)); }
	inline String_t* get__state_2() const { return ____state_2; }
	inline String_t** get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(String_t* value)
	{
		____state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_2), (void*)value);
	}
};


// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>
struct ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54, ___Item2_1)); }
	inline RuntimeObject* get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32Enum,System.Object>
struct ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
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


// Oculus.Interaction.HandGrab.Visuals.HandJointMap
struct HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF  : public RuntimeObject
{
public:
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandGrab.Visuals.HandJointMap::id
	int32_t ___id_0;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.Visuals.HandJointMap::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_1;
	// UnityEngine.Vector3 Oculus.Interaction.HandGrab.Visuals.HandJointMap::rotationOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationOffset_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF, ___transform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_1() const { return ___transform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_1), (void*)value);
	}

	inline static int32_t get_offset_of_rotationOffset_2() { return static_cast<int32_t>(offsetof(HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF, ___rotationOffset_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationOffset_2() const { return ___rotationOffset_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationOffset_2() { return &___rotationOffset_2; }
	inline void set_rotationOffset_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationOffset_2 = value;
	}
};


// Oculus.Interaction.Input.HandSkeletonJoint
struct HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 
{
public:
	// System.Int32 Oculus.Interaction.Input.HandSkeletonJoint::parent
	int32_t ___parent_0;
	// UnityEngine.Pose Oculus.Interaction.Input.HandSkeletonJoint::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3, ___parent_0)); }
	inline int32_t get_parent_0() const { return ___parent_0; }
	inline int32_t* get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(int32_t value)
	{
		___parent_0 = value;
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3, ___pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_1() const { return ___pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_1 = value;
	}
};


// Oculus.Interaction.InteractableStateChangeArgs
struct InteractableStateChangeArgs_tE1264F91C25015A5A8BB55A93FE918F69024A513 
{
public:
	// Oculus.Interaction.InteractableState Oculus.Interaction.InteractableStateChangeArgs::PreviousState
	int32_t ___PreviousState_0;
	// Oculus.Interaction.InteractableState Oculus.Interaction.InteractableStateChangeArgs::NewState
	int32_t ___NewState_1;

public:
	inline static int32_t get_offset_of_PreviousState_0() { return static_cast<int32_t>(offsetof(InteractableStateChangeArgs_tE1264F91C25015A5A8BB55A93FE918F69024A513, ___PreviousState_0)); }
	inline int32_t get_PreviousState_0() const { return ___PreviousState_0; }
	inline int32_t* get_address_of_PreviousState_0() { return &___PreviousState_0; }
	inline void set_PreviousState_0(int32_t value)
	{
		___PreviousState_0 = value;
	}

	inline static int32_t get_offset_of_NewState_1() { return static_cast<int32_t>(offsetof(InteractableStateChangeArgs_tE1264F91C25015A5A8BB55A93FE918F69024A513, ___NewState_1)); }
	inline int32_t get_NewState_1() const { return ___NewState_1; }
	inline int32_t* get_address_of_NewState_1() { return &___NewState_1; }
	inline void set_NewState_1(int32_t value)
	{
		___NewState_1 = value;
	}
};


// Oculus.Interaction.InteractorStateChangeArgs
struct InteractorStateChangeArgs_t2EF1A26467D23866AAB5D899060FD654065BE062 
{
public:
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::PreviousState
	int32_t ___PreviousState_0;
	// Oculus.Interaction.InteractorState Oculus.Interaction.InteractorStateChangeArgs::NewState
	int32_t ___NewState_1;

public:
	inline static int32_t get_offset_of_PreviousState_0() { return static_cast<int32_t>(offsetof(InteractorStateChangeArgs_t2EF1A26467D23866AAB5D899060FD654065BE062, ___PreviousState_0)); }
	inline int32_t get_PreviousState_0() const { return ___PreviousState_0; }
	inline int32_t* get_address_of_PreviousState_0() { return &___PreviousState_0; }
	inline void set_PreviousState_0(int32_t value)
	{
		___PreviousState_0 = value;
	}

	inline static int32_t get_offset_of_NewState_1() { return static_cast<int32_t>(offsetof(InteractorStateChangeArgs_t2EF1A26467D23866AAB5D899060FD654065BE062, ___NewState_1)); }
	inline int32_t get_NewState_1() const { return ___NewState_1; }
	inline int32_t* get_address_of_NewState_1() { return &___NewState_1; }
	inline void set_NewState_1(int32_t value)
	{
		___NewState_1 = value;
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

// Oculus.Interaction.PointerEvent
struct PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B 
{
public:
	// System.Int32 Oculus.Interaction.PointerEvent::<Identifier>k__BackingField
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	// Oculus.Interaction.PointerEventType Oculus.Interaction.PointerEvent::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.PointerEvent::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CIdentifierU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdentifierU3Ek__BackingField_0() const { return ___U3CIdentifierU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdentifierU3Ek__BackingField_0() { return &___U3CIdentifierU3Ek__BackingField_0; }
	inline void set_U3CIdentifierU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdentifierU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B, ___U3CPoseU3Ek__BackingField_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_2() const { return ___U3CPoseU3Ek__BackingField_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_2() { return &___U3CPoseU3Ek__BackingField_2; }
	inline void set_U3CPoseU3Ek__BackingField_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CradiusVarianceU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressureU3Ek__BackingField_24)); }
	inline float get_U3CpressureU3Ek__BackingField_24() const { return ___U3CpressureU3Ek__BackingField_24; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_24() { return &___U3CpressureU3Ek__BackingField_24; }
	inline void set_U3CpressureU3Ek__BackingField_24(float value)
	{
		___U3CpressureU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtangentialPressureU3Ek__BackingField_25)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_25() const { return ___U3CtangentialPressureU3Ek__BackingField_25; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_25() { return &___U3CtangentialPressureU3Ek__BackingField_25; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_25(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CaltitudeAngleU3Ek__BackingField_26)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_26() const { return ___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_26() { return &___U3CaltitudeAngleU3Ek__BackingField_26; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_26(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CazimuthAngleU3Ek__BackingField_27)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_27() const { return ___U3CazimuthAngleU3Ek__BackingField_27; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_27() { return &___U3CazimuthAngleU3Ek__BackingField_27; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_27(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CtwistU3Ek__BackingField_28)); }
	inline float get_U3CtwistU3Ek__BackingField_28() const { return ___U3CtwistU3Ek__BackingField_28; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_28() { return &___U3CtwistU3Ek__BackingField_28; }
	inline void set_U3CtwistU3Ek__BackingField_28(float value)
	{
		___U3CtwistU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusU3Ek__BackingField_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusU3Ek__BackingField_29() const { return ___U3CradiusU3Ek__BackingField_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusU3Ek__BackingField_29() { return &___U3CradiusU3Ek__BackingField_29; }
	inline void set_U3CradiusU3Ek__BackingField_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CradiusVarianceU3Ek__BackingField_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CradiusVarianceU3Ek__BackingField_30() const { return ___U3CradiusVarianceU3Ek__BackingField_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CradiusVarianceU3Ek__BackingField_30() { return &___U3CradiusVarianceU3Ek__BackingField_30; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_30 = value;
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


// Oculus.Interaction.PoseDetection.TransformConfig
struct TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformConfig::PositionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionOffset_0;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformConfig::RotationOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RotationOffset_1;
	// Oculus.Interaction.PoseDetection.UpVectorType Oculus.Interaction.PoseDetection.TransformConfig::UpVectorType
	int32_t ___UpVectorType_2;
	// Oculus.Interaction.PoseDetection.TransformFeatureStateThresholds Oculus.Interaction.PoseDetection.TransformConfig::FeatureThresholds
	TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * ___FeatureThresholds_3;
	// System.Int32 Oculus.Interaction.PoseDetection.TransformConfig::<InstanceId>k__BackingField
	int32_t ___U3CInstanceIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_PositionOffset_0() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___PositionOffset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_PositionOffset_0() const { return ___PositionOffset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_PositionOffset_0() { return &___PositionOffset_0; }
	inline void set_PositionOffset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___PositionOffset_0 = value;
	}

	inline static int32_t get_offset_of_RotationOffset_1() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___RotationOffset_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RotationOffset_1() const { return ___RotationOffset_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RotationOffset_1() { return &___RotationOffset_1; }
	inline void set_RotationOffset_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RotationOffset_1 = value;
	}

	inline static int32_t get_offset_of_UpVectorType_2() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___UpVectorType_2)); }
	inline int32_t get_UpVectorType_2() const { return ___UpVectorType_2; }
	inline int32_t* get_address_of_UpVectorType_2() { return &___UpVectorType_2; }
	inline void set_UpVectorType_2(int32_t value)
	{
		___UpVectorType_2 = value;
	}

	inline static int32_t get_offset_of_FeatureThresholds_3() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___FeatureThresholds_3)); }
	inline TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * get_FeatureThresholds_3() const { return ___FeatureThresholds_3; }
	inline TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 ** get_address_of_FeatureThresholds_3() { return &___FeatureThresholds_3; }
	inline void set_FeatureThresholds_3(TransformFeatureStateThresholds_t44140C532FC4285C287DF2770BE850803DEFF8B1 * value)
	{
		___FeatureThresholds_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FeatureThresholds_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505, ___U3CInstanceIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CInstanceIdU3Ek__BackingField_4() const { return ___U3CInstanceIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CInstanceIdU3Ek__BackingField_4() { return &___U3CInstanceIdU3Ek__BackingField_4; }
	inline void set_U3CInstanceIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CInstanceIdU3Ek__BackingField_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.TransformJointData
struct TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PoseDetection.TransformJointData::IsValid
	bool ___IsValid_0;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.PoseDetection.TransformJointData::Handedness
	int32_t ___Handedness_1;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformJointData::CenterEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___CenterEyePose_2;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformJointData::WristPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___WristPose_3;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformJointData::TrackingSystemUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemUp_4;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformJointData::TrackingSystemForward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemForward_5;

public:
	inline static int32_t get_offset_of_IsValid_0() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___IsValid_0)); }
	inline bool get_IsValid_0() const { return ___IsValid_0; }
	inline bool* get_address_of_IsValid_0() { return &___IsValid_0; }
	inline void set_IsValid_0(bool value)
	{
		___IsValid_0 = value;
	}

	inline static int32_t get_offset_of_Handedness_1() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___Handedness_1)); }
	inline int32_t get_Handedness_1() const { return ___Handedness_1; }
	inline int32_t* get_address_of_Handedness_1() { return &___Handedness_1; }
	inline void set_Handedness_1(int32_t value)
	{
		___Handedness_1 = value;
	}

	inline static int32_t get_offset_of_CenterEyePose_2() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___CenterEyePose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_CenterEyePose_2() const { return ___CenterEyePose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_CenterEyePose_2() { return &___CenterEyePose_2; }
	inline void set_CenterEyePose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___CenterEyePose_2 = value;
	}

	inline static int32_t get_offset_of_WristPose_3() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___WristPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_WristPose_3() const { return ___WristPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_WristPose_3() { return &___WristPose_3; }
	inline void set_WristPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___WristPose_3 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemUp_4() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___TrackingSystemUp_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemUp_4() const { return ___TrackingSystemUp_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemUp_4() { return &___TrackingSystemUp_4; }
	inline void set_TrackingSystemUp_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemUp_4 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemForward_5() { return static_cast<int32_t>(offsetof(TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34, ___TrackingSystemForward_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemForward_5() const { return ___TrackingSystemForward_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemForward_5() { return &___TrackingSystemForward_5; }
	inline void set_TrackingSystemForward_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemForward_5 = value;
	}
};


// Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA0DFCD54E44EDFC00316ABB7D51CF1E6576D2038  : public RuntimeObject
{
public:
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::boneId
	int32_t ___boneId_0;

public:
	inline static int32_t get_offset_of_boneId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA0DFCD54E44EDFC00316ABB7D51CF1E6576D2038, ___boneId_0)); }
	inline int32_t get_boneId_0() const { return ___boneId_0; }
	inline int32_t* get_address_of_boneId_0() { return &___boneId_0; }
	inline void set_boneId_0(int32_t value)
	{
		___boneId_0 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData
struct PoseData_t6D8A00589F1E5BF7E1BBD480A76EF3365AE2BB8E  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData::IsValid
	bool ___IsValid_0;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData::Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___Pose_1;

public:
	inline static int32_t get_offset_of_IsValid_0() { return static_cast<int32_t>(offsetof(PoseData_t6D8A00589F1E5BF7E1BBD480A76EF3365AE2BB8E, ___IsValid_0)); }
	inline bool get_IsValid_0() const { return ___IsValid_0; }
	inline bool* get_address_of_IsValid_0() { return &___IsValid_0; }
	inline void set_IsValid_0(bool value)
	{
		___IsValid_0 = value;
	}

	inline static int32_t get_offset_of_Pose_1() { return static_cast<int32_t>(offsetof(PoseData_t6D8A00589F1E5BF7E1BBD480A76EF3365AE2BB8E, ___Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_Pose_1() const { return ___Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_Pose_1() { return &___Pose_1; }
	inline void set_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___Pose_1 = value;
	}
};


// Oculus.Interaction.PointableDebugGizmos/PointData
struct PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90  : public RuntimeObject
{
public:
	// UnityEngine.Pose Oculus.Interaction.PointableDebugGizmos/PointData::<Pose>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPoseU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.PointableDebugGizmos/PointData::<Selecting>k__BackingField
	bool ___U3CSelectingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90, ___U3CPoseU3Ek__BackingField_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPoseU3Ek__BackingField_0() const { return ___U3CPoseU3Ek__BackingField_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPoseU3Ek__BackingField_0() { return &___U3CPoseU3Ek__BackingField_0; }
	inline void set_U3CPoseU3Ek__BackingField_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPoseU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSelectingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90, ___U3CSelectingU3Ek__BackingField_1)); }
	inline bool get_U3CSelectingU3Ek__BackingField_1() const { return ___U3CSelectingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSelectingU3Ek__BackingField_1() { return &___U3CSelectingU3Ek__BackingField_1; }
	inline void set_U3CSelectingU3Ek__BackingField_1(bool value)
	{
		___U3CSelectingU3Ek__BackingField_1 = value;
	}
};


// Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CU3E2__current_1;
	// Oculus.Interaction.Input.ReadOnlyHandJointPoses Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>7__wrap1
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ___U3CU3E7__wrap1_3;
	// System.Int32 Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E2__current_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E4__this_2)); }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E7__wrap1_3)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D 
{
public:
	// Oculus.Interaction.Input.HandFinger Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage::handFinger
	int32_t ___handFinger_0;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage::config
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;

public:
	inline static int32_t get_offset_of_handFinger_0() { return static_cast<int32_t>(offsetof(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D, ___handFinger_0)); }
	inline int32_t get_handFinger_0() const { return ___handFinger_0; }
	inline int32_t* get_address_of_handFinger_0() { return &___handFinger_0; }
	inline void set_handFinger_0(int32_t value)
	{
		___handFinger_0 = value;
	}

	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D, ___config_1)); }
	inline FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * get_config_1() const { return ___config_1; }
	inline FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke
{
	int32_t ___handFinger_0;
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;
};
// Native definition for COM marshalling of Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
struct FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com
{
	int32_t ___handFinger_0;
	FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * ___config_1;
};

// Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData
struct SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 
{
public:
	// UnityEngine.Pose Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::TransformPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___TransformPose_0;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::LinearVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LinearVelocity_1;
	// UnityEngine.Vector3 Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AngularVelocity_2;
	// System.Single Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::Time
	float ___Time_3;

public:
	inline static int32_t get_offset_of_TransformPose_0() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___TransformPose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_TransformPose_0() const { return ___TransformPose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_TransformPose_0() { return &___TransformPose_0; }
	inline void set_TransformPose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___TransformPose_0 = value;
	}

	inline static int32_t get_offset_of_LinearVelocity_1() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___LinearVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LinearVelocity_1() const { return ___LinearVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LinearVelocity_1() { return &___LinearVelocity_1; }
	inline void set_LinearVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LinearVelocity_1 = value;
	}

	inline static int32_t get_offset_of_AngularVelocity_2() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___AngularVelocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AngularVelocity_2() const { return ___AngularVelocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AngularVelocity_2() { return &___AngularVelocity_2; }
	inline void set_AngularVelocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_Time_3() { return static_cast<int32_t>(offsetof(SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81, ___Time_3)); }
	inline float get_Time_3() const { return ___Time_3; }
	inline float* get_address_of_Time_3() { return &___Time_3; }
	inline void set_Time_3(float value)
	{
		___Time_3 = value;
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder
struct TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D  : public RuntimeObject
{
public:
	// Oculus.Interaction.PoseDetection.FeatureStateActiveMode Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_mode
	int32_t ____mode_0;
	// Oculus.Interaction.PoseDetection.TransformFeature Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_transformFeature
	int32_t ____transformFeature_1;
	// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::_states
	FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* ____states_2;

public:
	inline static int32_t get_offset_of__mode_0() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____mode_0)); }
	inline int32_t get__mode_0() const { return ____mode_0; }
	inline int32_t* get_address_of__mode_0() { return &____mode_0; }
	inline void set__mode_0(int32_t value)
	{
		____mode_0 = value;
	}

	inline static int32_t get_offset_of__transformFeature_1() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____transformFeature_1)); }
	inline int32_t get__transformFeature_1() const { return ____transformFeature_1; }
	inline int32_t* get_address_of__transformFeature_1() { return &____transformFeature_1; }
	inline void set__transformFeature_1(int32_t value)
	{
		____transformFeature_1 = value;
	}

	inline static int32_t get_offset_of__states_2() { return static_cast<int32_t>(offsetof(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D, ____states_2)); }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* get__states_2() const { return ____states_2; }
	inline FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440** get_address_of__states_2() { return &____states_2; }
	inline void set__states_2(FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* value)
	{
		____states_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____states_2), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties
struct TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 
{
public:
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::CenterEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___CenterEyePose_0;
	// UnityEngine.Pose Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::WristPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___WristPose_1;
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::Handedness
	int32_t ___Handedness_2;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::TrackingSystemUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemUp_3;
	// UnityEngine.Vector3 Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::TrackingSystemForward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TrackingSystemForward_4;

public:
	inline static int32_t get_offset_of_CenterEyePose_0() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___CenterEyePose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_CenterEyePose_0() const { return ___CenterEyePose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_CenterEyePose_0() { return &___CenterEyePose_0; }
	inline void set_CenterEyePose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___CenterEyePose_0 = value;
	}

	inline static int32_t get_offset_of_WristPose_1() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___WristPose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_WristPose_1() const { return ___WristPose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_WristPose_1() { return &___WristPose_1; }
	inline void set_WristPose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___WristPose_1 = value;
	}

	inline static int32_t get_offset_of_Handedness_2() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___Handedness_2)); }
	inline int32_t get_Handedness_2() const { return ___Handedness_2; }
	inline int32_t* get_address_of_Handedness_2() { return &___Handedness_2; }
	inline void set_Handedness_2(int32_t value)
	{
		___Handedness_2 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemUp_3() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___TrackingSystemUp_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemUp_3() const { return ___TrackingSystemUp_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemUp_3() { return &___TrackingSystemUp_3; }
	inline void set_TrackingSystemUp_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemUp_3 = value;
	}

	inline static int32_t get_offset_of_TrackingSystemForward_4() { return static_cast<int32_t>(offsetof(TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1, ___TrackingSystemForward_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TrackingSystemForward_4() const { return ___TrackingSystemForward_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TrackingSystemForward_4() { return &___TrackingSystemForward_4; }
	inline void set_TrackingSystemForward_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TrackingSystemForward_4 = value;
	}
};


// Oculus.Interaction.Tween/TweenCurve
struct TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135  : public RuntimeObject
{
public:
	// Oculus.Interaction.ProgressCurve Oculus.Interaction.Tween/TweenCurve::Curve
	ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * ___Curve_0;
	// System.Single Oculus.Interaction.Tween/TweenCurve::PrevProgress
	float ___PrevProgress_1;
	// UnityEngine.Pose Oculus.Interaction.Tween/TweenCurve::Current
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___Current_2;
	// UnityEngine.Pose Oculus.Interaction.Tween/TweenCurve::Target
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___Target_3;

public:
	inline static int32_t get_offset_of_Curve_0() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Curve_0)); }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * get_Curve_0() const { return ___Curve_0; }
	inline ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 ** get_address_of_Curve_0() { return &___Curve_0; }
	inline void set_Curve_0(ProgressCurve_tDBB305EC6A08F1ABBB34C1EAF32AC789C2D8F2E4 * value)
	{
		___Curve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Curve_0), (void*)value);
	}

	inline static int32_t get_offset_of_PrevProgress_1() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___PrevProgress_1)); }
	inline float get_PrevProgress_1() const { return ___PrevProgress_1; }
	inline float* get_address_of_PrevProgress_1() { return &___PrevProgress_1; }
	inline void set_PrevProgress_1(float value)
	{
		___PrevProgress_1 = value;
	}

	inline static int32_t get_offset_of_Current_2() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Current_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_Current_2() const { return ___Current_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_Current_2() { return &___Current_2; }
	inline void set_Current_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___Current_2 = value;
	}

	inline static int32_t get_offset_of_Target_3() { return static_cast<int32_t>(offsetof(TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135, ___Target_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_Target_3() const { return ___Target_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_Target_3() { return &___Target_3; }
	inline void set_Target_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___Target_3 = value;
	}
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer
struct ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Oculus.Interaction.PoseDetection.ShapeRecognizer::_shapeName
	String_t* ____shapeName_4;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_thumbFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____thumbFeatureConfigs_5;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_indexFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____indexFeatureConfigs_6;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_middleFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____middleFeatureConfigs_7;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_ringFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____ringFeatureConfigs_8;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList Oculus.Interaction.PoseDetection.ShapeRecognizer::_pinkyFeatureConfigs
	FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * ____pinkyFeatureConfigs_9;

public:
	inline static int32_t get_offset_of__shapeName_4() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____shapeName_4)); }
	inline String_t* get__shapeName_4() const { return ____shapeName_4; }
	inline String_t** get_address_of__shapeName_4() { return &____shapeName_4; }
	inline void set__shapeName_4(String_t* value)
	{
		____shapeName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shapeName_4), (void*)value);
	}

	inline static int32_t get_offset_of__thumbFeatureConfigs_5() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____thumbFeatureConfigs_5)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__thumbFeatureConfigs_5() const { return ____thumbFeatureConfigs_5; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__thumbFeatureConfigs_5() { return &____thumbFeatureConfigs_5; }
	inline void set__thumbFeatureConfigs_5(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____thumbFeatureConfigs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thumbFeatureConfigs_5), (void*)value);
	}

	inline static int32_t get_offset_of__indexFeatureConfigs_6() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____indexFeatureConfigs_6)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__indexFeatureConfigs_6() const { return ____indexFeatureConfigs_6; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__indexFeatureConfigs_6() { return &____indexFeatureConfigs_6; }
	inline void set__indexFeatureConfigs_6(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____indexFeatureConfigs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexFeatureConfigs_6), (void*)value);
	}

	inline static int32_t get_offset_of__middleFeatureConfigs_7() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____middleFeatureConfigs_7)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__middleFeatureConfigs_7() const { return ____middleFeatureConfigs_7; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__middleFeatureConfigs_7() { return &____middleFeatureConfigs_7; }
	inline void set__middleFeatureConfigs_7(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____middleFeatureConfigs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____middleFeatureConfigs_7), (void*)value);
	}

	inline static int32_t get_offset_of__ringFeatureConfigs_8() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____ringFeatureConfigs_8)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__ringFeatureConfigs_8() const { return ____ringFeatureConfigs_8; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__ringFeatureConfigs_8() { return &____ringFeatureConfigs_8; }
	inline void set__ringFeatureConfigs_8(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____ringFeatureConfigs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ringFeatureConfigs_8), (void*)value);
	}

	inline static int32_t get_offset_of__pinkyFeatureConfigs_9() { return static_cast<int32_t>(offsetof(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6, ____pinkyFeatureConfigs_9)); }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * get__pinkyFeatureConfigs_9() const { return ____pinkyFeatureConfigs_9; }
	inline FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF ** get_address_of__pinkyFeatureConfigs_9() { return &____pinkyFeatureConfigs_9; }
	inline void set__pinkyFeatureConfigs_9(FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * value)
	{
		____pinkyFeatureConfigs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinkyFeatureConfigs_9), (void*)value);
	}
};


// Oculus.Interaction.PoseDetection.TransformFeatureConfig
struct TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8  : public FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103
{
public:

public:
};


// Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig
struct JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0  : public FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72
{
public:
	// Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::_relativeTo
	int32_t ____relativeTo_3;
	// Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::_worldAxis
	int32_t ____worldAxis_4;
	// Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::_handAxis
	int32_t ____handAxis_5;

public:
	inline static int32_t get_offset_of__relativeTo_3() { return static_cast<int32_t>(offsetof(JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0, ____relativeTo_3)); }
	inline int32_t get__relativeTo_3() const { return ____relativeTo_3; }
	inline int32_t* get_address_of__relativeTo_3() { return &____relativeTo_3; }
	inline void set__relativeTo_3(int32_t value)
	{
		____relativeTo_3 = value;
	}

	inline static int32_t get_offset_of__worldAxis_4() { return static_cast<int32_t>(offsetof(JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0, ____worldAxis_4)); }
	inline int32_t get__worldAxis_4() const { return ____worldAxis_4; }
	inline int32_t* get_address_of__worldAxis_4() { return &____worldAxis_4; }
	inline void set__worldAxis_4(int32_t value)
	{
		____worldAxis_4 = value;
	}

	inline static int32_t get_offset_of__handAxis_5() { return static_cast<int32_t>(offsetof(JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0, ____handAxis_5)); }
	inline int32_t get__handAxis_5() const { return ____handAxis_5; }
	inline int32_t* get_address_of__handAxis_5() { return &____handAxis_5; }
	inline void set__handAxis_5(int32_t value)
	{
		____handAxis_5 = value;
	}
};


// Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig
struct JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622  : public FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72
{
public:
	// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::_relativeTo
	int32_t ____relativeTo_3;
	// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::_worldAxis
	int32_t ____worldAxis_4;
	// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HandAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::_handAxis
	int32_t ____handAxis_5;
	// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HeadAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::_headAxis
	int32_t ____headAxis_6;

public:
	inline static int32_t get_offset_of__relativeTo_3() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622, ____relativeTo_3)); }
	inline int32_t get__relativeTo_3() const { return ____relativeTo_3; }
	inline int32_t* get_address_of__relativeTo_3() { return &____relativeTo_3; }
	inline void set__relativeTo_3(int32_t value)
	{
		____relativeTo_3 = value;
	}

	inline static int32_t get_offset_of__worldAxis_4() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622, ____worldAxis_4)); }
	inline int32_t get__worldAxis_4() const { return ____worldAxis_4; }
	inline int32_t* get_address_of__worldAxis_4() { return &____worldAxis_4; }
	inline void set__worldAxis_4(int32_t value)
	{
		____worldAxis_4 = value;
	}

	inline static int32_t get_offset_of__handAxis_5() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622, ____handAxis_5)); }
	inline int32_t get__handAxis_5() const { return ____handAxis_5; }
	inline int32_t* get_address_of__handAxis_5() { return &____handAxis_5; }
	inline void set__handAxis_5(int32_t value)
	{
		____handAxis_5 = value;
	}

	inline static int32_t get_offset_of__headAxis_6() { return static_cast<int32_t>(offsetof(JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622, ____headAxis_6)); }
	inline int32_t get__headAxis_6() const { return ____headAxis_6; }
	inline int32_t* get_address_of__headAxis_6() { return &____headAxis_6; }
	inline void set__headAxis_6(int32_t value)
	{
		____headAxis_6 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21
struct U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>2__current
	ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  ___U3CU3E2__current_1;
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Oculus.Interaction.PoseDetection.ShapeRecognizer Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<>4__this
	ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * ___U3CU3E4__this_3;
	// System.Int32 Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::<fingerIdx>5__2
	int32_t ___U3CfingerIdxU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CU3E4__this_3)); }
	inline ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfingerIdxU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3, ___U3CfingerIdxU3E5__2_4)); }
	inline int32_t get_U3CfingerIdxU3E5__2_4() const { return ___U3CfingerIdxU3E5__2_4; }
	inline int32_t* get_address_of_U3CfingerIdxU3E5__2_4() { return &___U3CfingerIdxU3E5__2_4; }
	inline void set_U3CfingerIdxU3E5__2_4(int32_t value)
	{
		___U3CfingerIdxU3E5__2_4 = value;
	}
};


// Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig
struct FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4  : public FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C
{
public:

public:
};


// Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator
struct PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() const { return ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CexternBeginRenderOverlaysU3Ek__BackingField_6() { return &___U3CexternBeginRenderOverlaysU3Ek__BackingField_6; }
	inline void set_U3CexternBeginRenderOverlaysU3Ek__BackingField_6(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CexternBeginRenderOverlaysU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternBeginRenderOverlaysU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7)); }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * get_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() const { return ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7; }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 ** get_address_of_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7() { return &___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7; }
	inline void set_U3CexternRenderOverlaysBeforeU3Ek__BackingField_7(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * value)
	{
		___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexternEndRenderOverlaysU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___U3CexternEndRenderOverlaysU3Ek__BackingField_8)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CexternEndRenderOverlaysU3Ek__BackingField_8() const { return ___U3CexternEndRenderOverlaysU3Ek__BackingField_8; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CexternEndRenderOverlaysU3Ek__BackingField_8() { return &___U3CexternEndRenderOverlaysU3Ek__BackingField_8; }
	inline void set_U3CexternEndRenderOverlaysU3Ek__BackingField_8(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CexternEndRenderOverlaysU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexternEndRenderOverlaysU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Oculus.Interaction.Interactable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * ____interactors_8;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * ____selectingInteractors_9;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_10;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * ___WhenStateChanged_11;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewAdded_12;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenInteractorViewRemoved_13;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewAdded_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * ___WhenSelectingInteractorViewRemoved_15;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenInteractorAdded_16;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenInteractorRemoved_17;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenSelectingInteractorAdded_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * ____whenSelectingInteractorRemoved_19;

public:
	inline static int32_t get_offset_of__interactorFilters_4() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____interactorFilters_4)); }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * get__interactorFilters_4() const { return ____interactorFilters_4; }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 ** get_address_of__interactorFilters_4() { return &____interactorFilters_4; }
	inline void set__interactorFilters_4(List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * value)
	{
		____interactorFilters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactorFilters_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractorFilters_5() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___InteractorFilters_5)); }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * get_InteractorFilters_5() const { return ___InteractorFilters_5; }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 ** get_address_of_InteractorFilters_5() { return &___InteractorFilters_5; }
	inline void set_InteractorFilters_5(List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * value)
	{
		___InteractorFilters_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractorFilters_5), (void*)value);
	}

	inline static int32_t get_offset_of__maxInteractors_6() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____maxInteractors_6)); }
	inline int32_t get__maxInteractors_6() const { return ____maxInteractors_6; }
	inline int32_t* get_address_of__maxInteractors_6() { return &____maxInteractors_6; }
	inline void set__maxInteractors_6(int32_t value)
	{
		____maxInteractors_6 = value;
	}

	inline static int32_t get_offset_of__maxSelectingInteractors_7() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____maxSelectingInteractors_7)); }
	inline int32_t get__maxSelectingInteractors_7() const { return ____maxSelectingInteractors_7; }
	inline int32_t* get_address_of__maxSelectingInteractors_7() { return &____maxSelectingInteractors_7; }
	inline void set__maxSelectingInteractors_7(int32_t value)
	{
		____maxSelectingInteractors_7 = value;
	}

	inline static int32_t get_offset_of__interactors_8() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____interactors_8)); }
	inline HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * get__interactors_8() const { return ____interactors_8; }
	inline HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 ** get_address_of__interactors_8() { return &____interactors_8; }
	inline void set__interactors_8(HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * value)
	{
		____interactors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactors_8), (void*)value);
	}

	inline static int32_t get_offset_of__selectingInteractors_9() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____selectingInteractors_9)); }
	inline HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * get__selectingInteractors_9() const { return ____selectingInteractors_9; }
	inline HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 ** get_address_of__selectingInteractors_9() { return &____selectingInteractors_9; }
	inline void set__selectingInteractors_9(HashSet_1_tCBB84976CB76FFEA782EF847A1E24ECB90ED8BA2 * value)
	{
		____selectingInteractors_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingInteractors_9), (void*)value);
	}

	inline static int32_t get_offset_of__state_10() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____state_10)); }
	inline int32_t get__state_10() const { return ____state_10; }
	inline int32_t* get_address_of__state_10() { return &____state_10; }
	inline void set__state_10(int32_t value)
	{
		____state_10 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_11() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenStateChanged_11)); }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * get_WhenStateChanged_11() const { return ___WhenStateChanged_11; }
	inline Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 ** get_address_of_WhenStateChanged_11() { return &___WhenStateChanged_11; }
	inline void set_WhenStateChanged_11(Action_1_tD1FACC57890C3F97507C66A0BD334276B729D681 * value)
	{
		___WhenStateChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewAdded_12() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenInteractorViewAdded_12)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewAdded_12() const { return ___WhenInteractorViewAdded_12; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewAdded_12() { return &___WhenInteractorViewAdded_12; }
	inline void set_WhenInteractorViewAdded_12(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewAdded_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewAdded_12), (void*)value);
	}

	inline static int32_t get_offset_of_WhenInteractorViewRemoved_13() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenInteractorViewRemoved_13)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenInteractorViewRemoved_13() const { return ___WhenInteractorViewRemoved_13; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenInteractorViewRemoved_13() { return &___WhenInteractorViewRemoved_13; }
	inline void set_WhenInteractorViewRemoved_13(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenInteractorViewRemoved_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenInteractorViewRemoved_13), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewAdded_14() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenSelectingInteractorViewAdded_14)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewAdded_14() const { return ___WhenSelectingInteractorViewAdded_14; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewAdded_14() { return &___WhenSelectingInteractorViewAdded_14; }
	inline void set_WhenSelectingInteractorViewAdded_14(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewAdded_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewAdded_14), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectingInteractorViewRemoved_15() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ___WhenSelectingInteractorViewRemoved_15)); }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * get_WhenSelectingInteractorViewRemoved_15() const { return ___WhenSelectingInteractorViewRemoved_15; }
	inline Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB ** get_address_of_WhenSelectingInteractorViewRemoved_15() { return &___WhenSelectingInteractorViewRemoved_15; }
	inline void set_WhenSelectingInteractorViewRemoved_15(Action_1_tA59EF5983D58BD29DAA06A5167D70F7B81B960AB * value)
	{
		___WhenSelectingInteractorViewRemoved_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectingInteractorViewRemoved_15), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorAdded_16() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenInteractorAdded_16)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenInteractorAdded_16() const { return ____whenInteractorAdded_16; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenInteractorAdded_16() { return &____whenInteractorAdded_16; }
	inline void set__whenInteractorAdded_16(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenInteractorAdded_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorAdded_16), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractorRemoved_17() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenInteractorRemoved_17)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenInteractorRemoved_17() const { return ____whenInteractorRemoved_17; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenInteractorRemoved_17() { return &____whenInteractorRemoved_17; }
	inline void set__whenInteractorRemoved_17(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenInteractorRemoved_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractorRemoved_17), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorAdded_18() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenSelectingInteractorAdded_18)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenSelectingInteractorAdded_18() const { return ____whenSelectingInteractorAdded_18; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenSelectingInteractorAdded_18() { return &____whenSelectingInteractorAdded_18; }
	inline void set__whenSelectingInteractorAdded_18(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenSelectingInteractorAdded_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorAdded_18), (void*)value);
	}

	inline static int32_t get_offset_of__whenSelectingInteractorRemoved_19() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C, ____whenSelectingInteractorRemoved_19)); }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * get__whenSelectingInteractorRemoved_19() const { return ____whenSelectingInteractorRemoved_19; }
	inline MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA ** get_address_of__whenSelectingInteractorRemoved_19() { return &____whenSelectingInteractorRemoved_19; }
	inline void set__whenSelectingInteractorRemoved_19(MultiAction_1_tDE2C4D5BFB40D11AE6EF0C4A19D15B7EB52998DA * value)
	{
		____whenSelectingInteractorRemoved_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenSelectingInteractorRemoved_19), (void*)value);
	}
};

struct Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C_StaticFields
{
public:
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * ____registry_20;

public:
	inline static int32_t get_offset_of__registry_20() { return static_cast<int32_t>(offsetof(Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C_StaticFields, ____registry_20)); }
	inline InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * get__registry_20() const { return ____registry_20; }
	inline InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC ** get_address_of__registry_20() { return &____registry_20; }
	inline void set__registry_20(InteractableRegistry_2_tEF13E80CE71D39F66997549E594CAE93B54CD1DC * value)
	{
		____registry_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registry_20), (void*)value);
	}
};


// Oculus.Interaction.Interactor`2<Oculus.Interaction.SnapInteractor,Oculus.Interaction.SnapInteractable>
struct Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * ___InteractableFilters_7;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_8;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * ___WhenStateChanged_9;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenPreprocessed_10;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenProcessed_11;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___WhenPostprocessed_12;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_13;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_14;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_tA65827F9AE88A72AC257552036FEEC3B135F7C12 * ____selectorQueue_15;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * ____candidate_16;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * ____interactable_17;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * ____selectedInteractable_18;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * ____whenInteractableSet_19;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * ____whenInteractableUnset_20;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * ____whenInteractableSelected_21;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * ____whenInteractableUnselected_22;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * ____identifier_23;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_24;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of__activeState_4() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____activeState_4)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__activeState_4() const { return ____activeState_4; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__activeState_4() { return &____activeState_4; }
	inline void set__activeState_4(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____activeState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeState_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveState_5() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___ActiveState_5)); }
	inline RuntimeObject* get_ActiveState_5() const { return ___ActiveState_5; }
	inline RuntimeObject** get_address_of_ActiveState_5() { return &___ActiveState_5; }
	inline void set_ActiveState_5(RuntimeObject* value)
	{
		___ActiveState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveState_5), (void*)value);
	}

	inline static int32_t get_offset_of__interactableFilters_6() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____interactableFilters_6)); }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * get__interactableFilters_6() const { return ____interactableFilters_6; }
	inline List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 ** get_address_of__interactableFilters_6() { return &____interactableFilters_6; }
	inline void set__interactableFilters_6(List_1_t5D9BA5285B790623DA8EEFFB341186B3DFB9A2F2 * value)
	{
		____interactableFilters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactableFilters_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractableFilters_7() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___InteractableFilters_7)); }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * get_InteractableFilters_7() const { return ___InteractableFilters_7; }
	inline List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 ** get_address_of_InteractableFilters_7() { return &___InteractableFilters_7; }
	inline void set_InteractableFilters_7(List_1_tC94FE7DAD25833F758FFCFED70ED0F975736D3D0 * value)
	{
		___InteractableFilters_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractableFilters_7), (void*)value);
	}

	inline static int32_t get_offset_of__state_8() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____state_8)); }
	inline int32_t get__state_8() const { return ____state_8; }
	inline int32_t* get_address_of__state_8() { return &____state_8; }
	inline void set__state_8(int32_t value)
	{
		____state_8 = value;
	}

	inline static int32_t get_offset_of_WhenStateChanged_9() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___WhenStateChanged_9)); }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * get_WhenStateChanged_9() const { return ___WhenStateChanged_9; }
	inline Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F ** get_address_of_WhenStateChanged_9() { return &___WhenStateChanged_9; }
	inline void set_WhenStateChanged_9(Action_1_t0A3F609812F44FBC6D0100C3B0D45CB6EA87E86F * value)
	{
		___WhenStateChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenStateChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPreprocessed_10() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___WhenPreprocessed_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenPreprocessed_10() const { return ___WhenPreprocessed_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenPreprocessed_10() { return &___WhenPreprocessed_10; }
	inline void set_WhenPreprocessed_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenPreprocessed_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPreprocessed_10), (void*)value);
	}

	inline static int32_t get_offset_of_WhenProcessed_11() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___WhenProcessed_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenProcessed_11() const { return ___WhenProcessed_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenProcessed_11() { return &___WhenProcessed_11; }
	inline void set_WhenProcessed_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenProcessed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenProcessed_11), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPostprocessed_12() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___WhenPostprocessed_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_WhenPostprocessed_12() const { return ___WhenPostprocessed_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_WhenPostprocessed_12() { return &___WhenPostprocessed_12; }
	inline void set_WhenPostprocessed_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___WhenPostprocessed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPostprocessed_12), (void*)value);
	}

	inline static int32_t get_offset_of__selector_13() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____selector_13)); }
	inline RuntimeObject* get__selector_13() const { return ____selector_13; }
	inline RuntimeObject** get_address_of__selector_13() { return &____selector_13; }
	inline void set__selector_13(RuntimeObject* value)
	{
		____selector_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selector_13), (void*)value);
	}

	inline static int32_t get_offset_of__maxIterationsPerFrame_14() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____maxIterationsPerFrame_14)); }
	inline int32_t get__maxIterationsPerFrame_14() const { return ____maxIterationsPerFrame_14; }
	inline int32_t* get_address_of__maxIterationsPerFrame_14() { return &____maxIterationsPerFrame_14; }
	inline void set__maxIterationsPerFrame_14(int32_t value)
	{
		____maxIterationsPerFrame_14 = value;
	}

	inline static int32_t get_offset_of__selectorQueue_15() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____selectorQueue_15)); }
	inline Queue_1_tA65827F9AE88A72AC257552036FEEC3B135F7C12 * get__selectorQueue_15() const { return ____selectorQueue_15; }
	inline Queue_1_tA65827F9AE88A72AC257552036FEEC3B135F7C12 ** get_address_of__selectorQueue_15() { return &____selectorQueue_15; }
	inline void set__selectorQueue_15(Queue_1_tA65827F9AE88A72AC257552036FEEC3B135F7C12 * value)
	{
		____selectorQueue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectorQueue_15), (void*)value);
	}

	inline static int32_t get_offset_of__candidate_16() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____candidate_16)); }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * get__candidate_16() const { return ____candidate_16; }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC ** get_address_of__candidate_16() { return &____candidate_16; }
	inline void set__candidate_16(SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * value)
	{
		____candidate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____candidate_16), (void*)value);
	}

	inline static int32_t get_offset_of__interactable_17() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____interactable_17)); }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * get__interactable_17() const { return ____interactable_17; }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC ** get_address_of__interactable_17() { return &____interactable_17; }
	inline void set__interactable_17(SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * value)
	{
		____interactable_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interactable_17), (void*)value);
	}

	inline static int32_t get_offset_of__selectedInteractable_18() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____selectedInteractable_18)); }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * get__selectedInteractable_18() const { return ____selectedInteractable_18; }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC ** get_address_of__selectedInteractable_18() { return &____selectedInteractable_18; }
	inline void set__selectedInteractable_18(SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * value)
	{
		____selectedInteractable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedInteractable_18), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSet_19() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____whenInteractableSet_19)); }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * get__whenInteractableSet_19() const { return ____whenInteractableSet_19; }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 ** get_address_of__whenInteractableSet_19() { return &____whenInteractableSet_19; }
	inline void set__whenInteractableSet_19(MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * value)
	{
		____whenInteractableSet_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSet_19), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnset_20() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____whenInteractableUnset_20)); }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * get__whenInteractableUnset_20() const { return ____whenInteractableUnset_20; }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 ** get_address_of__whenInteractableUnset_20() { return &____whenInteractableUnset_20; }
	inline void set__whenInteractableUnset_20(MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * value)
	{
		____whenInteractableUnset_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnset_20), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableSelected_21() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____whenInteractableSelected_21)); }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * get__whenInteractableSelected_21() const { return ____whenInteractableSelected_21; }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 ** get_address_of__whenInteractableSelected_21() { return &____whenInteractableSelected_21; }
	inline void set__whenInteractableSelected_21(MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * value)
	{
		____whenInteractableSelected_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableSelected_21), (void*)value);
	}

	inline static int32_t get_offset_of__whenInteractableUnselected_22() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____whenInteractableUnselected_22)); }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * get__whenInteractableUnselected_22() const { return ____whenInteractableUnselected_22; }
	inline MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 ** get_address_of__whenInteractableUnselected_22() { return &____whenInteractableUnselected_22; }
	inline void set__whenInteractableUnselected_22(MultiAction_1_t1B2DF2E6CF69722EE8EC70F4F6E8A6E561B75B44 * value)
	{
		____whenInteractableUnselected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____whenInteractableUnselected_22), (void*)value);
	}

	inline static int32_t get_offset_of__identifier_23() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____identifier_23)); }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * get__identifier_23() const { return ____identifier_23; }
	inline UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A ** get_address_of__identifier_23() { return &____identifier_23; }
	inline void set__identifier_23(UniqueIdentifier_t6B285BB7F8B76C663C4349D6959DB637E621A42A * value)
	{
		____identifier_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identifier_23), (void*)value);
	}

	inline static int32_t get_offset_of__started_24() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ____started_24)); }
	inline bool get__started_24() const { return ____started_24; }
	inline bool* get_address_of__started_24() { return &____started_24; }
	inline void set__started_24(bool value)
	{
		____started_24 = value;
	}

	inline static int32_t get_offset_of_U3CIsRootDriverU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111, ___U3CIsRootDriverU3Ek__BackingField_25)); }
	inline bool get_U3CIsRootDriverU3Ek__BackingField_25() const { return ___U3CIsRootDriverU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsRootDriverU3Ek__BackingField_25() { return &___U3CIsRootDriverU3Ek__BackingField_25; }
	inline void set_U3CIsRootDriverU3Ek__BackingField_25(bool value)
	{
		___U3CIsRootDriverU3Ek__BackingField_25 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.RayInteractor,Oculus.Interaction.RayInteractable>
struct PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A  : public Interactable_2_t3718A8F3C25A636B7CA6F81CB4E643035FEDF40C
{
public:
	// UnityEngine.MonoBehaviour Oculus.Interaction.PointerInteractable`2::_pointableElement
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____pointableElement_21;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_22;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * ___WhenPointerEventRaised_23;
	// System.Boolean Oculus.Interaction.PointerInteractable`2::_started
	bool ____started_24;

public:
	inline static int32_t get_offset_of__pointableElement_21() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ____pointableElement_21)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__pointableElement_21() const { return ____pointableElement_21; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__pointableElement_21() { return &____pointableElement_21; }
	inline void set__pointableElement_21(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____pointableElement_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointableElement_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointableElementU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ___U3CPointableElementU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CPointableElementU3Ek__BackingField_22() const { return ___U3CPointableElementU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CPointableElementU3Ek__BackingField_22() { return &___U3CPointableElementU3Ek__BackingField_22; }
	inline void set_U3CPointableElementU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CPointableElementU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointableElementU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_WhenPointerEventRaised_23() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ___WhenPointerEventRaised_23)); }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * get_WhenPointerEventRaised_23() const { return ___WhenPointerEventRaised_23; }
	inline Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 ** get_address_of_WhenPointerEventRaised_23() { return &___WhenPointerEventRaised_23; }
	inline void set_WhenPointerEventRaised_23(Action_1_tC9AFF8167FA4224E2E0C1E2B3B18C0646682F6E0 * value)
	{
		___WhenPointerEventRaised_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenPointerEventRaised_23), (void*)value);
	}

	inline static int32_t get_offset_of__started_24() { return static_cast<int32_t>(offsetof(PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A, ____started_24)); }
	inline bool get__started_24() const { return ____started_24; }
	inline bool* get_address_of__started_24() { return &____started_24; }
	inline void set__started_24(bool value)
	{
		____started_24 = value;
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// Oculus.Interaction.SnapInteractor
struct SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3  : public Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111
{
public:
	// Oculus.Interaction.PointableElement Oculus.Interaction.SnapInteractor::_pointableElement
	PointableElement_tCD9ACD6737F7ECBD499E1F099D90A9081A8CC94C * ____pointableElement_26;
	// UnityEngine.Rigidbody Oculus.Interaction.SnapInteractor::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_27;
	// UnityEngine.Transform Oculus.Interaction.SnapInteractor::_snapPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____snapPoint_28;
	// Oculus.Interaction.SnapInteractable Oculus.Interaction.SnapInteractor::_timeOutInteractable
	SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * ____timeOutInteractable_29;
	// System.Single Oculus.Interaction.SnapInteractor::_timeOut
	float ____timeOut_30;
	// System.Single Oculus.Interaction.SnapInteractor::_idleStarted
	float ____idleStarted_31;
	// Oculus.Interaction.IMovement Oculus.Interaction.SnapInteractor::_movement
	RuntimeObject* ____movement_32;
	// System.Boolean Oculus.Interaction.SnapInteractor::_shouldUnselect
	bool ____shouldUnselect_33;

public:
	inline static int32_t get_offset_of__pointableElement_26() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____pointableElement_26)); }
	inline PointableElement_tCD9ACD6737F7ECBD499E1F099D90A9081A8CC94C * get__pointableElement_26() const { return ____pointableElement_26; }
	inline PointableElement_tCD9ACD6737F7ECBD499E1F099D90A9081A8CC94C ** get_address_of__pointableElement_26() { return &____pointableElement_26; }
	inline void set__pointableElement_26(PointableElement_tCD9ACD6737F7ECBD499E1F099D90A9081A8CC94C * value)
	{
		____pointableElement_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointableElement_26), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody_27() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____rigidbody_27)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_27() const { return ____rigidbody_27; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_27() { return &____rigidbody_27; }
	inline void set__rigidbody_27(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_27), (void*)value);
	}

	inline static int32_t get_offset_of__snapPoint_28() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____snapPoint_28)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__snapPoint_28() const { return ____snapPoint_28; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__snapPoint_28() { return &____snapPoint_28; }
	inline void set__snapPoint_28(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____snapPoint_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____snapPoint_28), (void*)value);
	}

	inline static int32_t get_offset_of__timeOutInteractable_29() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____timeOutInteractable_29)); }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * get__timeOutInteractable_29() const { return ____timeOutInteractable_29; }
	inline SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC ** get_address_of__timeOutInteractable_29() { return &____timeOutInteractable_29; }
	inline void set__timeOutInteractable_29(SnapInteractable_tA3C0D937851C2DD0C70FFEE6EDFE7C61EC882FBC * value)
	{
		____timeOutInteractable_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____timeOutInteractable_29), (void*)value);
	}

	inline static int32_t get_offset_of__timeOut_30() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____timeOut_30)); }
	inline float get__timeOut_30() const { return ____timeOut_30; }
	inline float* get_address_of__timeOut_30() { return &____timeOut_30; }
	inline void set__timeOut_30(float value)
	{
		____timeOut_30 = value;
	}

	inline static int32_t get_offset_of__idleStarted_31() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____idleStarted_31)); }
	inline float get__idleStarted_31() const { return ____idleStarted_31; }
	inline float* get_address_of__idleStarted_31() { return &____idleStarted_31; }
	inline void set__idleStarted_31(float value)
	{
		____idleStarted_31 = value;
	}

	inline static int32_t get_offset_of__movement_32() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____movement_32)); }
	inline RuntimeObject* get__movement_32() const { return ____movement_32; }
	inline RuntimeObject** get_address_of__movement_32() { return &____movement_32; }
	inline void set__movement_32(RuntimeObject* value)
	{
		____movement_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movement_32), (void*)value);
	}

	inline static int32_t get_offset_of__shouldUnselect_33() { return static_cast<int32_t>(offsetof(SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3, ____shouldUnselect_33)); }
	inline bool get__shouldUnselect_33() const { return ____shouldUnselect_33; }
	inline bool* get_address_of__shouldUnselect_33() { return &____shouldUnselect_33; }
	inline void set__shouldUnselect_33(bool value)
	{
		____shouldUnselect_33 = value;
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// Oculus.Interaction.RayInteractable
struct RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175  : public PointerInteractable_2_t01FB48B70B3D2277F212E27556AAC8D20E857F9A
{
public:
	// UnityEngine.Collider Oculus.Interaction.RayInteractable::_collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____collider_25;
	// UnityEngine.MonoBehaviour Oculus.Interaction.RayInteractable::_surface
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____surface_26;
	// UnityEngine.MonoBehaviour Oculus.Interaction.RayInteractable::_movementProvider
	MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ____movementProvider_27;
	// Oculus.Interaction.IMovementProvider Oculus.Interaction.RayInteractable::<MovementProvider>k__BackingField
	RuntimeObject* ___U3CMovementProviderU3Ek__BackingField_28;
	// Oculus.Interaction.Surfaces.IPointableSurface Oculus.Interaction.RayInteractable::Surface
	RuntimeObject* ___Surface_29;

public:
	inline static int32_t get_offset_of__collider_25() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____collider_25)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__collider_25() const { return ____collider_25; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__collider_25() { return &____collider_25; }
	inline void set__collider_25(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____collider_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_25), (void*)value);
	}

	inline static int32_t get_offset_of__surface_26() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____surface_26)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__surface_26() const { return ____surface_26; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__surface_26() { return &____surface_26; }
	inline void set__surface_26(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____surface_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____surface_26), (void*)value);
	}

	inline static int32_t get_offset_of__movementProvider_27() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ____movementProvider_27)); }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * get__movementProvider_27() const { return ____movementProvider_27; }
	inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A ** get_address_of__movementProvider_27() { return &____movementProvider_27; }
	inline void set__movementProvider_27(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * value)
	{
		____movementProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____movementProvider_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMovementProviderU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ___U3CMovementProviderU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CMovementProviderU3Ek__BackingField_28() const { return ___U3CMovementProviderU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CMovementProviderU3Ek__BackingField_28() { return &___U3CMovementProviderU3Ek__BackingField_28; }
	inline void set_U3CMovementProviderU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CMovementProviderU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMovementProviderU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_Surface_29() { return static_cast<int32_t>(offsetof(RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175, ___Surface_29)); }
	inline RuntimeObject* get_Surface_29() const { return ___Surface_29; }
	inline RuntimeObject** get_address_of_Surface_29() { return &___Surface_29; }
	inline void set_Surface_29(RuntimeObject* value)
	{
		___Surface_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Surface_29), (void*)value);
	}
};


// Oculus.Interaction.PointableCanvasModule
struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Boolean Oculus.Interaction.PointableCanvasModule::_useInitialPressPositionForDrag
	bool ____useInitialPressPositionForDrag_20;
	// UnityEngine.Camera Oculus.Interaction.PointableCanvasModule::_pointerEventCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____pointerEventCamera_21;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableCanvasModule/Pointer> Oculus.Interaction.PointableCanvasModule::_pointerMap
	Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * ____pointerMap_23;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Oculus.Interaction.PointableCanvasModule::_raycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ____raycastResultCache_24;
	// System.Collections.Generic.List`1<Oculus.Interaction.PointableCanvasModule/Pointer> Oculus.Interaction.PointableCanvasModule::_pointersForDeletion
	List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * ____pointersForDeletion_25;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.IPointableCanvas,System.Action`1<Oculus.Interaction.PointerEvent>> Oculus.Interaction.PointableCanvasModule::_pointerCanvasActionMap
	Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * ____pointerCanvasActionMap_26;
	// System.Boolean Oculus.Interaction.PointableCanvasModule::_started
	bool ____started_27;

public:
	inline static int32_t get_offset_of__useInitialPressPositionForDrag_20() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____useInitialPressPositionForDrag_20)); }
	inline bool get__useInitialPressPositionForDrag_20() const { return ____useInitialPressPositionForDrag_20; }
	inline bool* get_address_of__useInitialPressPositionForDrag_20() { return &____useInitialPressPositionForDrag_20; }
	inline void set__useInitialPressPositionForDrag_20(bool value)
	{
		____useInitialPressPositionForDrag_20 = value;
	}

	inline static int32_t get_offset_of__pointerEventCamera_21() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerEventCamera_21)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__pointerEventCamera_21() const { return ____pointerEventCamera_21; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__pointerEventCamera_21() { return &____pointerEventCamera_21; }
	inline void set__pointerEventCamera_21(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____pointerEventCamera_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerEventCamera_21), (void*)value);
	}

	inline static int32_t get_offset_of__pointerMap_23() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerMap_23)); }
	inline Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * get__pointerMap_23() const { return ____pointerMap_23; }
	inline Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 ** get_address_of__pointerMap_23() { return &____pointerMap_23; }
	inline void set__pointerMap_23(Dictionary_2_tF0C515F5CCAE4936CDCFFE4E62868996FA1DA055 * value)
	{
		____pointerMap_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerMap_23), (void*)value);
	}

	inline static int32_t get_offset_of__raycastResultCache_24() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____raycastResultCache_24)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get__raycastResultCache_24() const { return ____raycastResultCache_24; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of__raycastResultCache_24() { return &____raycastResultCache_24; }
	inline void set__raycastResultCache_24(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		____raycastResultCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastResultCache_24), (void*)value);
	}

	inline static int32_t get_offset_of__pointersForDeletion_25() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointersForDeletion_25)); }
	inline List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * get__pointersForDeletion_25() const { return ____pointersForDeletion_25; }
	inline List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 ** get_address_of__pointersForDeletion_25() { return &____pointersForDeletion_25; }
	inline void set__pointersForDeletion_25(List_1_tEE19FCB3ED1ECE84FAD0344558ADAEBEABC01BA5 * value)
	{
		____pointersForDeletion_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointersForDeletion_25), (void*)value);
	}

	inline static int32_t get_offset_of__pointerCanvasActionMap_26() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____pointerCanvasActionMap_26)); }
	inline Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * get__pointerCanvasActionMap_26() const { return ____pointerCanvasActionMap_26; }
	inline Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 ** get_address_of__pointerCanvasActionMap_26() { return &____pointerCanvasActionMap_26; }
	inline void set__pointerCanvasActionMap_26(Dictionary_2_t94548CF873B2FA0EED90B87564ED2E997BB56A67 * value)
	{
		____pointerCanvasActionMap_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerCanvasActionMap_26), (void*)value);
	}

	inline static int32_t get_offset_of__started_27() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277, ____started_27)); }
	inline bool get__started_27() const { return ____started_27; }
	inline bool* get_address_of__started_27() { return &____started_27; }
	inline void set__started_27(bool value)
	{
		____started_27 = value;
	}
};

struct PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields
{
public:
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelected
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelected_16;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenUnselected
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenUnselected_17;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelectableHovered
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelectableHovered_18;
	// System.Action`1<Oculus.Interaction.PointableCanvasEventArgs> Oculus.Interaction.PointableCanvasModule::WhenSelectableUnhovered
	Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * ___WhenSelectableUnhovered_19;
	// Oculus.Interaction.PointableCanvasModule Oculus.Interaction.PointableCanvasModule::_instance
	PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * ____instance_22;

public:
	inline static int32_t get_offset_of_WhenSelected_16() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelected_16)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelected_16() const { return ___WhenSelected_16; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelected_16() { return &___WhenSelected_16; }
	inline void set_WhenSelected_16(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelected_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelected_16), (void*)value);
	}

	inline static int32_t get_offset_of_WhenUnselected_17() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenUnselected_17)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenUnselected_17() const { return ___WhenUnselected_17; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenUnselected_17() { return &___WhenUnselected_17; }
	inline void set_WhenUnselected_17(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenUnselected_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenUnselected_17), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectableHovered_18() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelectableHovered_18)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelectableHovered_18() const { return ___WhenSelectableHovered_18; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelectableHovered_18() { return &___WhenSelectableHovered_18; }
	inline void set_WhenSelectableHovered_18(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelectableHovered_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectableHovered_18), (void*)value);
	}

	inline static int32_t get_offset_of_WhenSelectableUnhovered_19() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ___WhenSelectableUnhovered_19)); }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * get_WhenSelectableUnhovered_19() const { return ___WhenSelectableUnhovered_19; }
	inline Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 ** get_address_of_WhenSelectableUnhovered_19() { return &___WhenSelectableUnhovered_19; }
	inline void set_WhenSelectableUnhovered_19(Action_1_t2C780FB9520653CE6DFFB01B081391D2A9D15699 * value)
	{
		___WhenSelectableUnhovered_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhenSelectableUnhovered_19), (void*)value);
	}

	inline static int32_t get_offset_of__instance_22() { return static_cast<int32_t>(offsetof(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277_StaticFields, ____instance_22)); }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * get__instance_22() const { return ____instance_22; }
	inline PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 ** get_address_of__instance_22() { return &____instance_22; }
	inline void set__instance_22(PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * value)
	{
		____instance_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_22), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  m_Items[1];

public:
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		m_Items[index] = value;
	}
};
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// Oculus.Interaction.PoseDetection.FeatureStateDescription[]
struct FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * m_Items[1];

public:
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureConfigBase_1__ctor_m26F049C52CEDD56FEB3D9B14E2A90AD561FDD96E_gshared (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, const RuntimeMethod* method);
// System.Int32 Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interactor_2_get_Identifier_m53712ADB2C29925D27CE5A0C9468F2E24C1BEB57_gshared (Interactor_2_t4F6C03FEC3CC138EF56A417A4CDA4CA11351E708 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32Enum,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m9E4352E3BB780E5AB2056E4FD70A4256A3F64BCA_gshared (ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E * __this, int32_t ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_Feature(TFeature)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Feature_m18720CAF62F2702FD7E488303396BC7281DD57CF_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_Mode(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<System.Int32Enum>::set_State(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);

// System.Void Oculus.Interaction.Input.HandSkeleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE363050D58AB1CD9BED43B4B4B938E84F1F174D4 (U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.HandVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3244700A7FDB2F149099644F898A1CE0725702A (U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.Hmd/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C92D53EA639576151B4BA04BA2559C426A7A161 (U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.IndexPinchSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA4EE34C58214F56E8CFF6BDE2F60B6B92D7D5FF3 (U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * AnimationCurve_EaseInOut_mF6EF091CED5651331D6115CEDF7BE27F3168B7DF (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// System.Void Oculus.Interaction.InteractableGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m35A14D60FC741624A28D57C1025737A91FB69954 (U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.InteractableGroupView/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6F9647A3F1C9A129ED96D7103D84DA097D892919 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.InteractableTriggerBroadcaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA0BC7E12ECFD7041F40C7228783FC788A423F34 (U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.InteractionOVRCameraRig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m029235F816827072C162E041C16399BB66760AA3 (U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.InteractorGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5610840D1179BE50AFA89A109EEAA34982675CB (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB990CF7A588C7E1E4396597B5192C5721AE5CAA9 (U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.Input.HandJointId>::.ctor()
inline void FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76 (FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72 * __this, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t6716EDAF62E4C6843107825B999B162EFDED4C72 *, const RuntimeMethod*))FeatureConfigBase_1__ctor_m26F049C52CEDD56FEB3D9B14E2A90AD561FDD96E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationFeatureState__ctor_m8E978612B41941048321DA29CDE8A7FDE90B078C (JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetAxis0, float ___amount1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA82564DE8DD192C09D6AA09294610768BBDA45D1 (U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E (JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8997EA85A3CD6BAFFBFEC4273B1DC3D9E9E05305 (U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_get_Item_m1CB0BB2735EFDCADA39F17F61A754F5483A1ADFE (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5 (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule::HandlePointerEvent(UnityEngine.Canvas,Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointableCanvasModule_HandlePointerEvent_m290F01A09E74DA8F9C371F8A49A164025333F41A (PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___evt1, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_MarkedForDeletion(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PointableElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::set_ActiveState(Oculus.Interaction.IActiveState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_ActiveState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method);
// System.Int32 Oculus.Interaction.Interactor`2<Oculus.Interaction.SnapInteractor,Oculus.Interaction.SnapInteractable>::get_Identifier()
inline int32_t Interactor_2_get_Identifier_m29EA36392357580A51A1CA938618AC67E6080809 (Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Interactor_2_t10F763E8B8A8238D2756D0C5A2FBF61166D84111 *, const RuntimeMethod*))Interactor_2_get_Identifier_m53712ADB2C29925D27CE5A0C9468F2E24C1BEB57_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer::GetFingerFeatureConfigs(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShapeRecognizer_GetFingerFeatureConfigs_m0198CB2C1CFBE885454BAEAF399679E822EAC5CB (ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * __this, int32_t ___finger0, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mD68652C1B02AC891C26AFA755BAC43C6B9D638F6 (ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 * __this, int32_t ___item10, RuntimeObject* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54 *, int32_t, RuntimeObject*, const RuntimeMethod*))ValueTuple_2__ctor_m9E4352E3BB780E5AB2056E4FD70A4256A3F64BCA_gshared)(__this, ___item10, ___item21, method);
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.FingerFeature>::.ctor()
inline void FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0 (FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C * __this, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t33C2C4E149951354D7A9B1A406D6CA5AFD8ABF5C *, const RuntimeMethod*))FeatureConfigBase_1__ctor_m26F049C52CEDD56FEB3D9B14E2A90AD561FDD96E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::.ctor(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431 (SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51 (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::.ctor(Oculus.Interaction.PoseDetection.FeatureStateActiveMode,Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, int32_t ___featureStateActiveMode0, int32_t ___transformFeature1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription> Oculus.Interaction.PoseDetection.TransformFeatureProperties::get_FeatureDescriptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformFeatureProperties_get_FeatureDescriptions_mBB3B9D11CFC9824B6F7EF80944D4C65581C7E49B_inline (const RuntimeMethod* method);
// Oculus.Interaction.PoseDetection.FeatureStateDescription[] Oculus.Interaction.PoseDetection.FeatureDescription::get_FeatureStates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline (FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_Feature(TFeature)
inline void FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, int32_t, const RuntimeMethod*))FeatureConfigBase_1_set_Feature_m18720CAF62F2702FD7E488303396BC7281DD57CF_gshared_inline)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_Mode(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
inline void FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, int32_t, const RuntimeMethod*))FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline)(__this, ___value0, method);
}
// System.String Oculus.Interaction.PoseDetection.FeatureStateDescription::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline (FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.FeatureConfigBase`1<Oculus.Interaction.PoseDetection.TransformFeature>::set_State(System.String)
inline void FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FeatureConfigBase_1_t1101BD0CBB778F07D7A5FEECC66CEC9A26EE0103 *, String_t*, const RuntimeMethod*))FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, const RuntimeMethod* method);
// System.Single Oculus.Interaction.PoseDetection.TransformFeatureValueProvider::GetValue(Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.TransformJointData,Oculus.Interaction.PoseDetection.TransformConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransformFeatureValueProvider_GetValue_m9F3E076EC00D70EB07B1CC6B87B8A44BE8A20FA1 (int32_t ___transformFeature0, TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * ___transformJointData1, TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F_gshared)(__this, ___value0, method);
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::.ctor(UnityEngine.Pose,UnityEngine.Pose,Oculus.Interaction.Input.Handedness,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF (TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method);
// System.Void Oculus.Interaction.Tween/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.VirtualPointable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, const RuntimeMethod* method);
// System.Void Oculus.Interaction.VirtualSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.HandSkeleton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE588AAD24C419BE2907695DE3A0B1BE38BDFABA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * L_0 = (U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD *)il2cpp_codegen_object_new(U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE363050D58AB1CD9BED43B4B4B938E84F1F174D4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.HandSkeleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE363050D58AB1CD9BED43B4B4B938E84F1F174D4 (U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.Input.HandSkeletonJoint Oculus.Interaction.Input.HandSkeleton/<>c::<.cctor>b__8_0(Oculus.Interaction.Input.HandSkeletonJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  U3CU3Ec_U3C_cctorU3Eb__8_0_mA2D6CEA7A9C60246059CFA796CE0A780090266C7 (U3CU3Ec_t1316B6E7B61A15ABD354C26484A37A87E482CCCD * __this, HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  ___joint0, const RuntimeMethod* method)
{
	HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// joints = DefaultLeftSkeleton.joints.Select(joint => new HandSkeletonJoint()
		// {
		//     parent = joint.parent,
		//     pose = new Pose(-joint.pose.position, joint.pose.rotation)
		// }).ToArray()
		il2cpp_codegen_initobj((&V_0), sizeof(HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3 ));
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_0 = ___joint0;
		int32_t L_1 = L_0.get_parent_0();
		(&V_0)->set_parent_0(L_1);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_2 = ___joint0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_3 = L_2.get_pose_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_4, /*hidden argument*/NULL);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_6 = ___joint0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = L_6.get_pose_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rotation_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_9), L_5, L_8, /*hidden argument*/NULL);
		(&V_0)->set_pose_1(L_9);
		HandSkeletonJoint_t5B4E2A23FDAC8BC4C8751E5FBC7C96A1056582F3  L_10 = V_0;
		return L_10;
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
// System.Void Oculus.Interaction.HandVisual/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD09C7134BFD02655B39D2D966849AA7384432BCD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * L_0 = (U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB *)il2cpp_codegen_object_new(U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF3244700A7FDB2F149099644F898A1CE0725702A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3244700A7FDB2F149099644F898A1CE0725702A (U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.HandVisual/<>c::<.ctor>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__34_0_m3059A05171949E7C6D2017C4F6A0E18B5749A584 (U3CU3Ec_t1FF5D613C48D6677975FABA07AA88BE334FA22CB * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenHandVisualUpdated = delegate { };
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
// System.Void Oculus.Interaction.Input.Hmd/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA26DD2ECB5124F2E75E7750B87266C3DBA20E70E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * L_0 = (U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C *)il2cpp_codegen_object_new(U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4C92D53EA639576151B4BA04BA2559C426A7A161(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.Hmd/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C92D53EA639576151B4BA04BA2559C426A7A161 (U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.Hmd/<>c::<.ctor>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__8_0_mCC3D17D2C43CADFBE626EBCC2912688815B4AF3E (U3CU3Ec_t7B74061BBD10640C4F77D285166161F188378E5C * __this, const RuntimeMethod* method)
{
	{
		// public event Action HmdUpdated = delegate { };
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
// System.Void Oculus.Interaction.IndexPinchSelector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE2B52690AFDF37389456719EBDDE29BDDB4908CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * L_0 = (U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 *)il2cpp_codegen_object_new(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA4EE34C58214F56E8CFF6BDE2F60B6B92D7D5FF3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.IndexPinchSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA4EE34C58214F56E8CFF6BDE2F60B6B92D7D5FF3 (U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.IndexPinchSelector/<>c::<.ctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__20_0_m61EA588C86C6F8AAB75653E272A73ED912C2EDD1 (U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenSelected = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.IndexPinchSelector/<>c::<.ctor>b__20_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__20_1_m29ED8B1FEA2DAF1B694FB7D324ED49541F75461A (U3CU3Ec_t3D0AB867E671C017FCA5466FB12524889E539226 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenUnselected = delegate { };
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
// System.Void Oculus.Interaction.InteractableColorVisual/ColorState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorState__ctor_mF93B77D41475ECD3B9BAA072B585E5B2C2D91898 (ColorState_t25F99B678210A628ADFC74DF132FCB48FCBC9818 * __this, const RuntimeMethod* method)
{
	{
		// public Color Color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_Color_0(L_0);
		// public AnimationCurve ColorCurve = AnimationCurve.EaseInOut(0, 0, 1, 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1;
		L_1 = AnimationCurve_EaseInOut_mF6EF091CED5651331D6115CEDF7BE27F3168B7DF((0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorCurve_1(L_1);
		// public float ColorTime = 0.1f;
		__this->set_ColorTime_2((0.100000001f));
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
// System.Void Oculus.Interaction.InteractableGroup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m373975E6A210050D6397486FCB1C0F780DC6545A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * L_0 = (U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 *)il2cpp_codegen_object_new(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m35A14D60FC741624A28D57C1025737A91FB69954(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m35A14D60FC741624A28D57C1025737A91FB69954 (U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.IInteractable Oculus.Interaction.InteractableGroup/<>c::<Awake>b__9_0(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__9_0_mC15094C8F75C36CB217DA391CD0B8A46B7E4A8FE (U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___mono0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactables = _interactables.ConvertAll(mono => mono as IInteractable);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___mono0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.MonoBehaviour Oculus.Interaction.InteractableGroup/<>c::<InjectInteractables>b__22_0(Oculus.Interaction.IInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * U3CU3Ec_U3CInjectInteractablesU3Eb__22_0_m246BC1C5EA70069A4B69D6DD885D41A8AFB942A5 (U3CU3Ec_t3A3D034B2F6BEFB743926C1D6B0E1AF0A7391D92 * __this, RuntimeObject* ___interactable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interactables.ConvertAll(interactable => interactable as MonoBehaviour);
		RuntimeObject* L_0 = ___interactable0;
		return ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var));
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
// System.Void Oculus.Interaction.InteractableGroupView/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m46C5013308C68D0A545C84D024616AA842049CB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * L_0 = (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 *)il2cpp_codegen_object_new(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6F9647A3F1C9A129ED96D7103D84DA097D892919(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6F9647A3F1C9A129ED96D7103D84DA097D892919 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<get_InteractorViews>b__7_0(Oculus.Interaction.IInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3Cget_InteractorViewsU3Eb__7_0_m05D87F203190FBC95CE6AAAC8D27E779E7EC752A (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___interactable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactables.SelectMany(interactable => interactable.InteractorViews).ToList();
		RuntimeObject* L_0 = ___interactable0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.IInteractableView::get_InteractorViews() */, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.InteractableGroupView/<>c::<get_SelectingInteractorViews>b__9_0(Oculus.Interaction.IInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3Cget_SelectingInteractorViewsU3Eb__9_0_mCD9D393877CB26B37A70BBB307625D8A72B83D77 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___interactable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactables.SelectMany(interactable => interactable.SelectingInteractorViews).ToList();
		RuntimeObject* L_0 = ___interactable0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.IInteractableView::get_SelectingInteractorViews() */, IInteractableView_tDB565FF06732C41D644F9AB5D0FBA3DCF14FEEAC_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Oculus.Interaction.IInteractable Oculus.Interaction.InteractableGroupView/<>c::<Awake>b__34_0(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__34_0_m719CBAFB842DC6220F5D19BC6BE9712ABEEA6D96 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___mono0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactables = _interactables.ConvertAll(mono => mono as IInteractable);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___mono0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractable_tE43578F0F7AAB24513DD6F194AA308E2D8085F7E_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.MonoBehaviour Oculus.Interaction.InteractableGroupView/<>c::<InjectInteractables>b__41_0(Oculus.Interaction.IInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * U3CU3Ec_U3CInjectInteractablesU3Eb__41_0_mB4D43AC56D68BDB4CA8BA58359638E3EA31FA99B (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___interactable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactables.ConvertAll(interactable => interactable as MonoBehaviour);
		RuntimeObject* L_0 = ___interactable0;
		return ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::<.ctor>b__42_0(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__42_0_mB991F5804E0BC375D25CBE7C271DE8CD3D2E8640 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<IInteractorView> WhenInteractorViewAdded = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::<.ctor>b__42_1(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__42_1_mD07DF2A6562BBBA0B62D9D4B71F8716C6715F3FB (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<IInteractorView> WhenInteractorViewRemoved = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::<.ctor>b__42_2(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__42_2_m7872EEB8E56C120B7DE15DC8FE336AD202F7AFB9 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<IInteractorView> WhenSelectingInteractorViewAdded = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::<.ctor>b__42_3(Oculus.Interaction.IInteractorView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__42_3_m8C0640AAB6D80066B461294E9460B885DBC84BCA (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<IInteractorView> WhenSelectingInteractorViewRemoved = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractableGroupView/<>c::<.ctor>b__42_4(Oculus.Interaction.InteractableStateChangeArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__42_4_m30BFCC79A40E3299D4071434C5B3A60AB553B4F2 (U3CU3Ec_tE7233BB4B5A18FBF93061E00BEB3D8FB78303921 * __this, InteractableStateChangeArgs_tE1264F91C25015A5A8BB55A93FE918F69024A513  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<InteractableStateChangeArgs> WhenStateChanged = delegate { };
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
// System.Void Oculus.Interaction.InteractableTriggerBroadcaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAF36EDAC43A70D8ACF4E6F242616FDDA52B9041A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * L_0 = (U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C *)il2cpp_codegen_object_new(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCA0BC7E12ECFD7041F40C7228783FC788A423F34(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.InteractableTriggerBroadcaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA0BC7E12ECFD7041F40C7228783FC788A423F34 (U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.InteractableTriggerBroadcaster/<>c::<.ctor>b__16_0(Oculus.Interaction.IInteractable,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__16_0_m40287AA435EB9DF52C26112B94D1D4A80E7C6CC9 (U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * __this, RuntimeObject* ___U3Cp0U3E0, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public Action<IInteractable, Rigidbody> OnTriggerEntered = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractableTriggerBroadcaster/<>c::<.ctor>b__16_1(Oculus.Interaction.IInteractable,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__16_1_m7D35033CB59E5952A8183AAABC38002B659F4744 (U3CU3Ec_t9945E4498A9153B3AC40CD811F8FCA754431BA7C * __this, RuntimeObject* ___U3Cp0U3E0, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public Action<IInteractable, Rigidbody> OnTriggerExited = delegate { };
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
// System.Void Oculus.Interaction.InteractionOVRCameraRig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3D808EFEBE3ED581DC429C26BA1696937D7132DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * L_0 = (U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D *)il2cpp_codegen_object_new(U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m029235F816827072C162E041C16399BB66760AA3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.InteractionOVRCameraRig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m029235F816827072C162E041C16399BB66760AA3 (U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.InteractionOVRCameraRig/<>c::<.ctor>b__6_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__6_0_m552E9616BF302D805F475124953816BDA07DC49C (U3CU3Ec_t2395A3BFB89A2344AE93842B52548702A57BF41D * __this, bool ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event System.Action<bool> WhenInputDataDirtied = delegate { };
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.InteractorGroup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m09DB554E3A3590BBFCA4F8C87D6BE812D526BA28 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * L_0 = (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 *)il2cpp_codegen_object_new(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC5610840D1179BE50AFA89A109EEAA34982675CB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.InteractorGroup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5610840D1179BE50AFA89A109EEAA34982675CB (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.IInteractor Oculus.Interaction.InteractorGroup/<>c::<Awake>b__23_0(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CAwakeU3Eb__23_0_mD13774080A43D46CD2F715477E24A843AA005574 (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___mono0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInteractor_tBD7FBCCA8820FFD3B1C31C1EE4571CF1FF6600D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Interactors = _interactors.ConvertAll(mono => mono as IInteractor);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___mono0;
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IInteractor_tBD7FBCCA8820FFD3B1C31C1EE4571CF1FF6600D5_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.MonoBehaviour Oculus.Interaction.InteractorGroup/<>c::<InjectInteractors>b__63_0(Oculus.Interaction.IInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * U3CU3Ec_U3CInjectInteractorsU3Eb__63_0_m97509D153A21FBFB76153764F21F2DC4EE2485D3 (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, RuntimeObject* ___interactor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _interactors = interactors.ConvertAll(interactor => interactor as MonoBehaviour);
		RuntimeObject* L_0 = ___interactor0;
		return ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_il2cpp_TypeInfo_var));
	}
}
// System.Void Oculus.Interaction.InteractorGroup/<>c::<.ctor>b__65_0(Oculus.Interaction.InteractorStateChangeArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__65_0_mF4C086ABBC4DBDB869F672E4E84094E66CE6054A (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, InteractorStateChangeArgs_t2EF1A26467D23866AAB5D899060FD654065BE062  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<InteractorStateChangeArgs> WhenStateChanged = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractorGroup/<>c::<.ctor>b__65_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__65_1_m43EA154755E23B5FED7F3485D8C4F5C6857DC187 (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenPreprocessed = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractorGroup/<>c::<.ctor>b__65_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__65_2_mEAD44736396DE53AB976B67496F6FBB40861642F (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenProcessed = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.InteractorGroup/<>c::<.ctor>b__65_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__65_3_m1DDC4482D6CB5C798D039345953CF64631F72E74 (U3CU3Ec_t3BC9DE6A87063E68C25CBC490A079EAD31356448 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenPostprocessed = delegate { };
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
// System.Void Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m229BA468D0510EAB0FE9D80B2B220673E1840358 (U3CU3Ec__DisplayClass2_0_tA0DFCD54E44EDFC00316ABB7D51CF1E6576D2038 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::<.ctor>b__0(Oculus.Interaction.HandGrab.Visuals.HandJointMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mECAF2D06A2BEAD7C44D9BDEF5E2CFA61290D60D1 (U3CU3Ec__DisplayClass2_0_tA0DFCD54E44EDFC00316ABB7D51CF1E6576D2038 * __this, HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF * ___bone0, const RuntimeMethod* method)
{
	{
		// _jointIndices[i] = joints.FindIndex(bone => bone.id == boneId);
		HandJointMap_t80C223E2CC3344D2AC718E2208A25FFA95977BCF * L_0 = ___bone0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_id_0();
		int32_t L_2 = __this->get_boneId_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Oculus.Interaction.PoseDetection.JointDeltaProvider/PoseData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseData__ctor_mE88CED6D7931CCCEB84CF8A046EB058AEA58BC9D (PoseData_t6D8A00589F1E5BF7E1BBD480A76EF3365AE2BB8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose Pose = Pose.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		__this->set_Pose_1(L_0);
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
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m055EA84F4AE3AF357729CFE60D86D5E662A2AB90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * L_0 = (U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C *)il2cpp_codegen_object_new(U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB990CF7A588C7E1E4396597B5192C5721AE5CAA9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB990CF7A588C7E1E4396597B5192C5721AE5CAA9 (U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c::<Awake>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__34_0_mA2502A95FA9D9463BD634DE0046819E76F3EB8A6 (U3CU3Ec_t4D6928A631A59F0EBB97E34952F67647C2AF940C * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.PoseDetection.JointRotationActiveState/RelativeTo Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointRotationFeatureConfig_get_RelativeTo_m518184353208C11B8A52375F7CF89662B08A40D8 (JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0 * __this, const RuntimeMethod* method)
{
	{
		// public RelativeTo RelativeTo => _relativeTo;
		int32_t L_0 = __this->get__relativeTo_3();
		return L_0;
	}
}
// Oculus.Interaction.PoseDetection.JointRotationActiveState/WorldAxis Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::get_WorldAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointRotationFeatureConfig_get_WorldAxis_m076C55C6534F635C09569823DE6959E84B7DAB76 (JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0 * __this, const RuntimeMethod* method)
{
	{
		// public WorldAxis WorldAxis => _worldAxis;
		int32_t L_0 = __this->get__worldAxis_4();
		return L_0;
	}
}
// Oculus.Interaction.PoseDetection.JointRotationActiveState/HandAxis Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::get_HandAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointRotationFeatureConfig_get_HandAxis_m222E5D1F613BFC7551A267B5E3DF050A6DB83EC0 (JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0 * __this, const RuntimeMethod* method)
{
	{
		// public HandAxis HandAxis => _handAxis;
		int32_t L_0 = __this->get__handAxis_5();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationFeatureConfig__ctor_m7AC02F4E135890E89AC193F5640AF866B2D4E4BE (JointRotationFeatureConfig_t9F9DBA3C7450FB8EF8D202DFAC833A32298782E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WorldAxis _worldAxis = WorldAxis.PositiveZ;
		__this->set__worldAxis_4(4);
		// private HandAxis _handAxis = HandAxis.RadialDeviation;
		__this->set__handAxis_5(2);
		FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76(__this, /*hidden argument*/FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76_RuntimeMethod_var);
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
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig> Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C * JointRotationFeatureConfigList_get_Values_m8736BEC10D12A15FC3F378F39030C2B77C005FFF (JointRotationFeatureConfigList_tA9DE9DAD8761F3C21667560006E996445EA656C1 * __this, const RuntimeMethod* method)
{
	{
		// public List<JointRotationFeatureConfig> Values => _values;
		List_1_t1A7843F63F313FF2D7542A065C0AD23067DA193C * L_0 = __this->get__values_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationFeatureConfigList__ctor_mDE1FDE90DCAAE57E65A12C3627A1D5856FC82072 (JointRotationFeatureConfigList_tA9DE9DAD8761F3C21667560006E996445EA656C1 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointRotationFeatureState__ctor_m8E978612B41941048321DA29CDE8A7FDE90B078C (JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetAxis0, float ___amount1, const RuntimeMethod* method)
{
	{
		// TargetAxis = targetAxis;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___targetAxis0;
		__this->set_TargetAxis_0(L_0);
		// Amount = amount;
		float L_1 = ___amount1;
		__this->set_Amount_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JointRotationFeatureState__ctor_m8E978612B41941048321DA29CDE8A7FDE90B078C_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetAxis0, float ___amount1, const RuntimeMethod* method)
{
	JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JointRotationFeatureState_tC4B1F5FC240B314535711B521C50ED6CFBF94597 *>(__this + _offset);
	JointRotationFeatureState__ctor_m8E978612B41941048321DA29CDE8A7FDE90B078C(_thisAdjusted, ___targetAxis0, ___amount1, method);
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
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF0F97ABCAA4A98AF09F871481AD0CF195A61AC87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * L_0 = (U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 *)il2cpp_codegen_object_new(U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA82564DE8DD192C09D6AA09294610768BBDA45D1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA82564DE8DD192C09D6AA09294610768BBDA45D1 (U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c::<Awake>b__40_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__40_0_mD162BE368463B267D4EC14CBA0BB9BF22859695A (U3CU3Ec_t25873517EE76571D3B845DDDBC62ECC1B940D8D2 * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
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
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/RelativeTo Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointVelocityFeatureConfig_get_RelativeTo_m6CC837F46AAA562D194F7AE31728D92A7B929BD1 (JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622 * __this, const RuntimeMethod* method)
{
	{
		// public RelativeTo RelativeTo => _relativeTo;
		int32_t L_0 = __this->get__relativeTo_3();
		return L_0;
	}
}
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/WorldAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::get_WorldAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointVelocityFeatureConfig_get_WorldAxis_m7AF1FDA2E72E13126C1A2280617267DDE6748BF8 (JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622 * __this, const RuntimeMethod* method)
{
	{
		// public WorldAxis WorldAxis => _worldAxis;
		int32_t L_0 = __this->get__worldAxis_4();
		return L_0;
	}
}
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HandAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::get_HandAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointVelocityFeatureConfig_get_HandAxis_m84B41F646A76551C451D30D291A5D7C9EC7614B6 (JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622 * __this, const RuntimeMethod* method)
{
	{
		// public HandAxis HandAxis => _handAxis;
		int32_t L_0 = __this->get__handAxis_5();
		return L_0;
	}
}
// Oculus.Interaction.PoseDetection.JointVelocityActiveState/HeadAxis Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::get_HeadAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointVelocityFeatureConfig_get_HeadAxis_mAA926BA192523108C07A18243BCBDAA737EE73FB (JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622 * __this, const RuntimeMethod* method)
{
	{
		// public HeadAxis HeadAxis => _headAxis;
		int32_t L_0 = __this->get__headAxis_6();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureConfig__ctor_mE97E4D8891D71DCB15189406C65A7B3A6A408B11 (JointVelocityFeatureConfig_tCE7709CC50C4D2815107A097C837B8908A14D622 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WorldAxis _worldAxis = WorldAxis.PositiveZ;
		__this->set__worldAxis_4(4);
		// private HandAxis _handAxis = HandAxis.WristForward;
		__this->set__handAxis_5(4);
		FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76(__this, /*hidden argument*/FeatureConfigBase_1__ctor_mA6AFAFC2D38EC23958DBCBA27E7A0EB1A666CE76_RuntimeMethod_var);
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
// System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig> Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * JointVelocityFeatureConfigList_get_Values_mB6D0034059802E607ADD981267A78B0E6363A513 (JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB * __this, const RuntimeMethod* method)
{
	{
		// public List<JointVelocityFeatureConfig> Values => _values;
		List_1_tD36FD69608FE7CD70BA41353DDEFE2246C1399BE * L_0 = __this->get__values_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureConfigList__ctor_mB794CE5FB6D412A2BA20B9AFB3E2A32388BC78E2 (JointVelocityFeatureConfigList_tDC96151669ABE011FF21EE3B441EEE0FF1876DEB * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureState::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E (JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method)
{
	{
		// TargetVector = targetVector;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___targetVector0;
		__this->set_TargetVector_0(L_0);
		// Amount = velocity;
		float L_1 = ___velocity1;
		__this->set_Amount_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetVector0, float ___velocity1, const RuntimeMethod* method)
{
	JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JointVelocityFeatureState_t3ADE1FBEB92978D83DA0802E9B1F528F4872DB14 *>(__this + _offset);
	JointVelocityFeatureState__ctor_m2F7DF75B8C120B96C61DA38C9F36F8C45667AC2E(_thisAdjusted, ___targetVector0, ___velocity1, method);
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
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDA0510930C4CEA18D8BFDD924D7A4A1CDD64153D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * L_0 = (U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 *)il2cpp_codegen_object_new(U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8997EA85A3CD6BAFFBFEC4273B1DC3D9E9E05305(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8997EA85A3CD6BAFFBFEC4273B1DC3D9E9E05305 (U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OVRCameraRigRef/<>c::<.ctor>b__26_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__26_0_m550B55EBC687A8C082F003920BDB9AE8745DE9F0 (U3CU3Ec_t14DDA66A4BDDA3AEA7FFAE04ADEE9365B91B5C97 * __this, bool ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<bool> WhenInputDataDirtied = delegate { };
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
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD53D8C88A135463B677511FD8CE912C3B14A9ED0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * L_0 = (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 *)il2cpp_codegen_object_new(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD023C2A0DB76FE6829E83ED8C6173E0D8591333A (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector2>b__16_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  U3CU3Ec_U3CCreateVector2U3Eb__16_0_mB1AB461687FCB124DE935CB03629E76409BDA9AF (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector2(values[0], values[1]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector2>b__16_1(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector2U3Eb__16_1_m4336C2F591263B5E72DFE350C86D5894FB1C774E (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector3>b__17_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  U3CU3Ec_U3CCreateVector3U3Eb__17_0_mC0C54BEFC21266A2B4A110592F4CA830F9EE51B5 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector3(values[0], values[1], values[2]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector3>b__17_1(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector3U3Eb__17_1_m10FAE008925630E55E9432410DF5D34DA1CDD217 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector4 Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector4>b__18_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  U3CU3Ec_U3CCreateVector4U3Eb__18_0_m0E1D0D50F02F4D2DC740B6DC93DC07AC27866F89 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	{
		// (values) => new Vector4(values[0], values[1], values[2], values[3]),
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___values0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateVector4>b__18_1(UnityEngine.Vector4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateVector4U3Eb__18_1_m20065168A5AFC1FC29A5C6730A1C615FB8525806 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(&___value0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateQuaternion>b__19_0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec_U3CCreateQuaternionU3Eb__19_0_mB2FC8283AFBAB360AD6952C6AB49B151CF59A3A2 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (values) => new Quaternion(values[0], values[1], values[2], values[3]).normalized,
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___values0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ___values0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_normalized_m32E57BB637B9A38379421B1C269C299AF3002C94((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/<>c::<CreateQuaternion>b__19_1(UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCreateQuaternionU3Eb__19_1_mF9DE2A6ADFA5FBAB79DB1D288AAE6E802EF34C38 (U3CU3Ec_t1E1DC443E4E6299D10EB2B26E2ED0940ECDC2878 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// (value, index) => value[index]);
		int32_t L_0 = ___index1;
		float L_1;
		L_1 = Quaternion_get_Item_m1CB0BB2735EFDCADA39F17F61A754F5483A1ADFE((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___value0), L_0, /*hidden argument*/NULL);
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
// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::get_PrevValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LowPassFilter_get_PrevValue_m737128D174A955B04EE3C1D1CDEBEFE06FF2DF9C (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	{
		// public float PrevValue => _hatxprev;
		float L_0 = __this->get__hatxprev_2();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPassFilter__ctor_m9CD0E8F6FC02F8E3ADC82DF75E2BF51D9F5FDDA1 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	{
		// public LowPassFilter()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _isFirstUpdate = true;
		__this->set__isFirstUpdate_0((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowPassFilter_Reset_m25B9DEE5D6C7DF215FFD10218C4C99A37EED09F4 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// _isFirstUpdate = true;
		__this->set__isFirstUpdate_0((bool)1);
		// _hatx = _hatxprev = default;
		float L_0 = (0.0f);
		V_0 = L_0;
		__this->set__hatxprev_2(L_0);
		float L_1 = V_0;
		__this->set__hatx_1(L_1);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.Input.OneEuroFilter/LowPassFilter::Filter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LowPassFilter_Filter_mB2E118CAD3E48735ECA67EDB7931D98F565DEC21 (LowPassFilter_t6CF720E53D3A5724C23DF5A723327A43691C1F38 * __this, float ___x0, float ___alpha1, const RuntimeMethod* method)
{
	{
		// if (_isFirstUpdate)
		bool L_0 = __this->get__isFirstUpdate_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// _isFirstUpdate = false;
		__this->set__isFirstUpdate_0((bool)0);
		// _hatxprev = x;
		float L_1 = ___x0;
		__this->set__hatxprev_2(L_1);
	}

IL_0016:
	{
		// _hatx = alpha * x + (1 - alpha) * _hatxprev;
		float L_2 = ___alpha1;
		float L_3 = ___x0;
		float L_4 = ___alpha1;
		float L_5 = __this->get__hatxprev_2();
		__this->set__hatx_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)), (float)L_5)))));
		// _hatxprev = _hatx;
		float L_6 = __this->get__hatx_1();
		__this->set__hatxprev_2(L_6);
		// return _hatx;
		float L_7 = __this->get__hatx_1();
		return L_7;
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
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m82DD6BD9C66DB3181C91F7DC414F20884127C310 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * L_0 = (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB *)il2cpp_codegen_object_new(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8D22D9DDD9CAF5B0669E15C828D44D3B45B1CED5 (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.OneGrabPhysicsJointTransformer/<>c::<GetGrabRigidbody>b__19_0(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetGrabRigidbodyU3Eb__19_0_mE4EF9C57BAE2C176F03ED999B0A37302AEC7EF5E (U3CU3Ec_tB8E87814C2A260A92067417E8776FAF005FE6CCB * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb0, const RuntimeMethod* method)
{
	{
		// Rigidbody rigidbody = _cachedGrabbingRigidbodies.Find(rb => !rb.gameObject.activeSelf);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = ___rb0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneGrabRotateConstraints__ctor_m81F42103979930559C363F506E05D4264E8721C0 (OneGrabRotateConstraints_t368B16646B62656E580BF31341D8C7E8A694296A * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.OneGrabTranslateTransformer/OneGrabTranslateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneGrabTranslateConstraints__ctor_m5470B7BB703F0918FCB72A924D7585CFDCD002DB (OneGrabTranslateConstraints_tBB0D95568133DF211886D62F2CE7756A0A816355 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA681FA7A5142A0A3AC6AB8F9129027AFCA10D843 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * L_0 = (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B *)il2cpp_codegen_object_new(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF7B6821D78CF59B5D0627F98D023F68A222200DE (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PhysicsGrabbable/<>c::<.ctor>b__27_0(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__27_0_m6B7B9CE0CA3B398E6EFFE2C7943B76A51BBC9090 (U3CU3Ec_t2CF08D3E6FF6A6A33872F19891904EF26ADD901B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cp0U3E0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event Action<Vector3, Vector3> WhenVelocitiesApplied = delegate { };
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
// System.Void Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m61786968267EC14BFC838127189A3886F5DD7AD7 (U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass23_0::<AddPointerCanvas>b__0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CAddPointerCanvasU3Eb__0_m4B42A1D98294A8A14E1EA9BFA5D7C4CAD9817DA6 (U3CU3Ec__DisplayClass23_0_t92B75576DB2EB8269AE5E07880BDFBCE5CACAB82 * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action<PointerEvent> pointerCanvasAction = (args) => HandlePointerEvent(pointerCanvas.Canvas, args);
		PointableCanvasModule_tF49A3DC2966139A1319BB79F731DCA60D5893277 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_pointerCanvas_1();
		NullCheck(L_1);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2;
		L_2 = InterfaceFuncInvoker0< Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * >::Invoke(0 /* UnityEngine.Canvas Oculus.Interaction.IPointableCanvas::get_Canvas() */, IPointableCanvas_t8893DADACD40BB31F4C53D66B75FFBD0A3D59918_il2cpp_TypeInfo_var, L_1);
		PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  L_3 = ___args0;
		NullCheck(L_0);
		PointableCanvasModule_HandlePointerEvent_m290F01A09E74DA8F9C371F8A49A164025333F41A(L_0, L_2, L_3, /*hidden argument*/NULL);
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
// UnityEngine.EventSystems.PointerEventData Oculus.Interaction.PointableCanvasModule/Pointer::get_PointerEventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * Pointer_get_PointerEventData_mC12452AE3F6E88BC279DBE76800ECDB8CFFE9783 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public PointerEventData PointerEventData { get; set; }
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = __this->get_U3CPointerEventDataU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_PointerEventData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_set_PointerEventData_m8DA1C2472ED2521B8FBB61A4FD8C0D159005C295 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___value0, const RuntimeMethod* method)
{
	{
		// public PointerEventData PointerEventData { get; set; }
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___value0;
		__this->set_U3CPointerEventDataU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.PointableCanvasModule/Pointer::get_MarkedForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_MarkedForDeletion_m51C8824FF9A6795B2F6DB7FE32B250198E575119 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = __this->get_U3CMarkedForDeletionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::set_MarkedForDeletion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CMarkedForDeletionU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Canvas Oculus.Interaction.PointableCanvasModule/Pointer::get_Canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Pointer_get_Canvas_m92BBE813381439FB78F249CB151BA583AD3DDC39 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public Canvas Canvas => _canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get__canvas_2();
		return L_0;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.PointableCanvasModule/Pointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Pointer_get_Position_m1186CA6C373907E9869980447E0A242FFD327F53 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position => _position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__position_3();
		return L_0;
	}
}
// UnityEngine.GameObject Oculus.Interaction.PointableCanvasModule/Pointer::get_HoveredSelectable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Pointer_get_HoveredSelectable_mBB3977167C254181ADF110BFFB8053FEE69F40FF (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HoveredSelectable => _hoveredSelectable;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__hoveredSelectable_4();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::.ctor(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_m35ED678D3F284E685E44984CFA084090F458E1EA (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public Pointer(Canvas canvas)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _canvas = canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = ___canvas0;
		__this->set__canvas_2(L_0);
		// _pressed = _released = false;
		int32_t L_1 = 0;
		V_0 = (bool)L_1;
		__this->set__released_7((bool)L_1);
		bool L_2 = V_0;
		__this->set__pressed_6(L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Press()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Press_mA38B9AF0EDE6085EC7192313DBA1CCE41E10108F (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// if (_pressing) return;
		bool L_0 = __this->get__pressing_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_pressing) return;
		return;
	}

IL_0009:
	{
		// _pressing = true;
		__this->set__pressing_5((bool)1);
		// _pressed = true;
		__this->set__pressed_6((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// if (!_pressing) return;
		bool L_0 = __this->get__pressing_5();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_pressing) return;
		return;
	}

IL_0009:
	{
		// _pressing = false;
		__this->set__pressing_5((bool)0);
		// _released = true;
		__this->set__released_7((bool)1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::ReadAndResetPressedReleased(System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_ReadAndResetPressedReleased_m6FA1C8A462B49B2CF997F239413D73DECD9482F2 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool* ___pressed0, bool* ___released1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// pressed = _pressed;
		bool* L_0 = ___pressed0;
		bool L_1 = __this->get__pressed_6();
		*((int8_t*)L_0) = (int8_t)L_1;
		// released = _released;
		bool* L_2 = ___released1;
		bool L_3 = __this->get__released_7();
		*((int8_t*)L_2) = (int8_t)L_3;
		// _pressed = _released = false;
		int32_t L_4 = 0;
		V_0 = (bool)L_4;
		__this->set__released_7((bool)L_4);
		bool L_5 = V_0;
		__this->set__pressed_6(L_5);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::MarkForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_MarkForDeletion_m154A47597A96FA4C7A8CD9EAA448F732D8786DEA (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, const RuntimeMethod* method)
{
	{
		// MarkedForDeletion = true;
		Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Release();
		Pointer_Release_m71C9069879826373F5D0D327D92C3D69672F94C2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_SetPosition_m9F43E3A75AC2F6CDA31D7386FE795C800B0A80AC (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		// _position = position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		__this->set__position_3(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PointableCanvasModule/Pointer::SetHoveredSelectable(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_SetHoveredSelectable_m566BC8587358FB659AC06C81EE05BA5F6EC09343 (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hoveredSelectable0, const RuntimeMethod* method)
{
	{
		// _hoveredSelectable = hoveredSelectable;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___hoveredSelectable0;
		__this->set__hoveredSelectable_4(L_0);
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Pose Oculus.Interaction.PointableDebugGizmos/PointData::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PointData_get_Pose_mFD78396C7C7F00268AD1500966E68D7E52E4C19F (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
{
	{
		// public Pose Pose { get; set; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CPoseU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::set_Pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData_set_Pose_m95687F4D420104F6E975C03D35ACD516C6FE0E1D (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// public Pose Pose { get; set; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_U3CPoseU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.PointableDebugGizmos/PointData::get_Selecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointData_get_Selecting_mC3B0580BFCEB25B133377397018FB8CA093F377D (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
{
	{
		// public bool Selecting { get; set; }
		bool L_0 = __this->get_U3CSelectingU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::set_Selecting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData_set_Selecting_m59290AAC6C8B2BD0CF3EA4E64590720EC1E28697 (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Selecting { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSelectingU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PointableDebugGizmos/PointData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointData__ctor_m6B2D67F8B62EAAE2C2A7114A8A5E844352DC3EC4 (PointData_t1C7F34007300A351B4AF501B126072CA95ECFE90 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PointableElement/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m45EE53B534F5F9C4A59EA1F0A19F64C34422C242 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * L_0 = (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 *)il2cpp_codegen_object_new(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PointableElement/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6200649E5EFD00FED8E9ED242BBC18B28547F2E (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.PointableElement/<>c::<.ctor>b__43_0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__43_0_m8738B6A79F527662E1303FE99C9A929789D38735 (U3CU3Ec_tD68B3C533A1745C9DC0AD8A5B4B9E3C4B2303DF9 * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<PointerEvent> WhenPointerEventRaised = delegate { };
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.PokeInteractable/PositionPinningConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPinningConfig__ctor_m88CA9366279577B335F66F1EC275E4C4075BE37A (PositionPinningConfig_t332C2B48183953B42EC9C8DCE7EACFB8478728CA * __this, const RuntimeMethod* method)
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
// Oculus.Interaction.RayInteractable Oculus.Interaction.RayInteractor/RayCandidate::get_ClosestInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * RayCandidate_get_ClosestInteractable_mCDBEA401C2C23F674BBF244889A86B4CD6417D4B (RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E * __this, const RuntimeMethod* method)
{
	{
		// public RayInteractable ClosestInteractable { get; }
		RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * L_0 = __this->get_U3CClosestInteractableU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Vector3 Oculus.Interaction.RayInteractor/RayCandidate::get_CandidatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayCandidate_get_CandidatePosition_m0ACFC9C187538FCAB713BCADB27B4A335895E20C (RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 CandidatePosition { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCandidatePositionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.RayInteractor/RayCandidate::.ctor(Oculus.Interaction.RayInteractable,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCandidate__ctor_m4F248B072A183C5343D843B89EBEE8D6FBA8DB11 (RayCandidate_t1512E6C1B787437C81E5B27AF3F1C0403C8AF74E * __this, RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * ___closestInteractable0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___candidatePosition1, const RuntimeMethod* method)
{
	{
		// public RayCandidate(RayInteractable closestInteractable, Vector3 candidatePosition)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ClosestInteractable = closestInteractable;
		RayInteractable_t1F17181B30F309615DB047356690CFD68C2FA175 * L_0 = ___closestInteractable0;
		__this->set_U3CClosestInteractableU3Ek__BackingField_0(L_0);
		// CandidatePosition = candidatePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___candidatePosition1;
		__this->set_U3CCandidatePositionU3Ek__BackingField_1(L_1);
		// }
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
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m435C93BF149917D503507A80B3AE5FEF67408F11 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_mA7CAF7005CBB0497633F4C32DDFFF1B63AC81883 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_m7FD5A6E8F1FA8725D3C841F0F97C44218B801CF2 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * V_1 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach (var pose in _poses)
		ReadOnlyHandJointPoses_tAB7C84C66F7217894B081D8F20D1ECB27A864822 * L_4 = V_1;
		NullCheck(L_4);
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_5 = L_4->get__poses_0();
		__this->set_U3CU3E7__wrap1_3(L_5);
		__this->set_U3CU3E7__wrap2_4(0);
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_6 = __this->get_U3CU3E7__wrap1_3();
		int32_t L_7 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = V_2;
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_11 = __this->get_U3CU3E7__wrap2_4();
		__this->set_U3CU3E7__wrap2_4(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->get_U3CU3E7__wrap2_4();
		PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* L_13 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0033;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_3((PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m616E08C95FCB09097E081EE1843F3EC38325F6E3 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m11117DBA3B3403BF14D9C5F0A7636FB8D06C922D_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Input.ReadOnlyHandJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_mE7963FA2F43D40CCFF9DB66BA4960AF3623C0CF6 (U3CGetEnumeratorU3Ed__2_t8FA29D617A7E5D1D04C9C369D848B42A776140B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_U3CU3E2__current_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = L_0;
		RuntimeObject * L_2 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_1);
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
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA694E29719DE80554BBA9B6AED6AB51165E88627 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * L_0 = (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D *)il2cpp_codegen_object_new(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB675C5E999AA01B217D197BB47AD0B8B9884E21 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/<>c::<Start>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CStartU3Eb__19_0_mD12EC6255D46D72E86E1699F2CDB99031F80DD94 (U3CU3Ec_t9EE32365AD08D693CE7B54427773919E83CD984D * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
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
// Oculus.Interaction.IActiveState Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_ActiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CActiveStateU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::set_ActiveState(Oculus.Interaction.IActiveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CActiveStateU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_MinActiveTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ActivationStep_get_MinActiveTime_mFE1A1D9595BDE74552D9E08A0610BB9AF1081BC3 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public float MinActiveTime => _minActiveTime;
		float L_0 = __this->get__minActiveTime_2();
		return L_0;
	}
}
// System.Single Oculus.Interaction.PoseDetection.Sequence/ActivationStep::get_MaxStepTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ActivationStep_get_MaxStepTime_mC5BBBA7EFB31A529EB9163881E199A28D02F0221 (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public float MaxStepTime => _maxStepTime;
		float L_0 = __this->get__maxStepTime_3();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep__ctor_m9D868AB163B0A7B674B97B367E40ACC1A1D54BCA (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public ActivationStep()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::.ctor(Oculus.Interaction.IActiveState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep__ctor_m8E6FC9539722C8977C7948B5BD88ED30265DEAEC (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___activeState0, float ___minActiveTime1, float ___maxStepTime2, const RuntimeMethod* method)
{
	{
		// public ActivationStep(IActiveState activeState, float minActiveTime, float maxStepTime)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ActiveState = activeState;
		RuntimeObject* L_0 = ___activeState0;
		ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline(__this, L_0, /*hidden argument*/NULL);
		// _minActiveTime = minActiveTime;
		float L_1 = ___minActiveTime1;
		__this->set__minActiveTime_2(L_1);
		// _maxStepTime = maxStepTime;
		float L_2 = ___maxStepTime2;
		__this->set__maxStepTime_3(L_2);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.Sequence/ActivationStep::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivationStep_Start_mAD28F5BE4F907DC50A5B06DEBCC1776FFA8FF9BA (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ActiveState == null)
		RuntimeObject* L_0;
		L_0 = ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// ActiveState = _activeState as IActiveState;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_1 = __this->get__activeState_0();
		ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IActiveState_t9ED8A6D2006A777A58B338429D68D725FDC8A567_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m77BFEAE36777AC11D66BBFD06DD3D30743DF878B (U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.SequentialSlotsProvider/<>c__DisplayClass9_0::<TryFindIndexForInteractor>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CTryFindIndexForInteractorU3Eb__0_mA6A0998700510CB1463DDDDF3F4469F77FE4A4C5 (U3CU3Ec__DisplayClass9_0_tF9908065510F820B5C8D0D301577B6E97D5044FF * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Identifier_m29EA36392357580A51A1CA938618AC67E6080809_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// index = Array.FindIndex(_slotInteractors, i => i == interactor.Identifier);
		int32_t L_0 = ___i0;
		SnapInteractor_t415DDF00EE06492D5D6D14BC73B93CEABEAC43C3 * L_1 = __this->get_interactor_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Interactor_2_get_Identifier_m29EA36392357580A51A1CA938618AC67E6080809(L_1, /*hidden argument*/Interactor_2_get_Identifier_m29EA36392357580A51A1CA938618AC67E6080809_RuntimeMethod_var);
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21_System_IDisposable_Dispose_m0B4588295B0A07E2B6323CDC00BF5EF343119C40 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetFingerFeatureConfigsU3Ed__21_MoveNext_m5411DD8F64374314BDBDB6CDBDFFC785D7040B9F (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mD68652C1B02AC891C26AFA755BAC43C6B9D638F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		__this->set_U3CfingerIdxU3E5__2_4(0);
		goto IL_006d;
	}

IL_0027:
	{
		// HandFinger finger = (HandFinger)fingerIdx;
		int32_t L_4 = __this->get_U3CfingerIdxU3E5__2_4();
		V_2 = L_4;
		// var configs = GetFingerFeatureConfigs(finger);
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = ShapeRecognizer_GetFingerFeatureConfigs_m0198CB2C1CFBE885454BAEAF399679E822EAC5CB(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// if (configs.Count == 0)
		RuntimeObject* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>::get_Count() */, IReadOnlyCollection_1_tCDA0DC7D0725EF547CDB8BD64CC747B646C98740_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// yield return new ValueTuple<HandFinger, IReadOnlyList<FingerFeatureConfig>>(finger,
		//     configs);
		int32_t L_10 = V_2;
		RuntimeObject* L_11 = V_3;
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_12;
		memset((&L_12), 0, sizeof(L_12));
		ValueTuple_2__ctor_mD68652C1B02AC891C26AFA755BAC43C6B9D638F6((&L_12), L_10, L_11, /*hidden argument*/ValueTuple_2__ctor_mD68652C1B02AC891C26AFA755BAC43C6B9D638F6_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0054:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005b:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		int32_t L_13 = __this->get_U3CfingerIdxU3E5__2_4();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_4;
		__this->set_U3CfingerIdxU3E5__2_4(L_14);
	}

IL_006d:
	{
		// for (var fingerIdx = 0; fingerIdx < Constants.NUM_FINGERS; ++fingerIdx)
		int32_t L_15 = __this->get_U3CfingerIdxU3E5__2_4();
		if ((((int32_t)L_15) < ((int32_t)5)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerator<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumeratorU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_get_Current_mA96C83E088E5B180B78129E2BE1D240A6ED02DCC (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_Reset_m905A925870ABD7B37A389A72C603496F596C69E8_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerator_get_Current_m5D0A1FFEF26629E0D750957394A3A6133F94B4B7 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tB26ABC3CB6D14D5D25614BA0D2C373946329FD54_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>>> Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.Generic.IEnumerable<(Oculus.Interaction.Input.HandFinger,System.Collections.Generic.IReadOnlyList<Oculus.Interaction.PoseDetection.ShapeRecognizer.FingerFeatureConfig>)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * V_0 = NULL;
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
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_3 = (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 *)il2cpp_codegen_object_new(U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3_il2cpp_TypeInfo_var);
		U3CGetFingerFeatureConfigsU3Ed__21__ctor_mC846CAC3612EBD2A80476F4FAD4A2F0A55591645(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_4 = V_0;
		ShapeRecognizer_t8247894B170E3775A1EAC38C6DC929B19FA32EE6 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.PoseDetection.ShapeRecognizer/<GetFingerFeatureConfigs>d__21::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_IEnumerable_GetEnumerator_m629424F9F83D0D2E9DC701D4047D385500D39AF3 (U3CGetFingerFeatureConfigsU3Ed__21_t22222DF72772B53DBB4EA982D2100439593754C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetFingerFeatureConfigsU3Ed__21_System_Collections_Generic_IEnumerableU3CU28Oculus_Interaction_Input_HandFingerU2CSystem_Collections_Generic_IReadOnlyListU3COculus_Interaction_PoseDetection_ShapeRecognizer_FingerFeatureConfigU3EU29U3E_GetEnumerator_m0ECCFC9B802D15973CEDC8C8290E4E5C062390E5(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfig__ctor_mA397016E43C443FECFE7ACED8DC44B1E12D2AE11 (FingerFeatureConfig_t34668FCCE74F98E0A608A5E8571186ED548D0BF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0(__this, /*hidden argument*/FeatureConfigBase_1__ctor_mA75B37431AEDA823F6F9558788676FB979CD29F0_RuntimeMethod_var);
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
// System.Collections.Generic.IReadOnlyList`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig> Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FingerFeatureConfigList_get_Value_mE3C3A6E3E2B111F13D70A13AD45195DCC799ADBB (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<FingerFeatureConfig> Value => _value;
		List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * L_0 = __this->get__value_0();
		return L_0;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfigList__ctor_mA8635F285B771FA0B251AE73B74CBAFA1BC006C6 (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, const RuntimeMethod* method)
{
	{
		// public FingerFeatureConfigList() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public FingerFeatureConfigList() { }
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfigList::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.ShapeRecognizer/FingerFeatureConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFeatureConfigList__ctor_m00EE44818CB565290826E8D648207D9FE6B61F46 (FingerFeatureConfigList_t4F92EF7772374CF5BFEEB80A9337DED774CBD2CF * __this, List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * ___value0, const RuntimeMethod* method)
{
	{
		// public FingerFeatureConfigList(List<FingerFeatureConfig> value)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _value = value;
		List_1_tFABDFBF12CBF937D16BB9997105A1025A9F21105 * L_0 = ___value0;
		__this->set__value_0(L_0);
		// }
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
// Conversion methods for marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke_back(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_pinvoke_cleanup(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com_back(const FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled, FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D& unmarshaled)
{
	Exception_t* ___config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'config' of type 'FingerFeatureStateUsage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.PoseDetection.ShapeRecognizerActiveState/FingerFeatureStateUsage
IL2CPP_EXTERN_C void FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshal_com_cleanup(FingerFeatureStateUsage_t610B7D45B74FD75CC890FC1BF11BDD5248CD1A5D_marshaled_com& marshaled)
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
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  DelegatePInvokeWrapper_PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A (PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___desiredPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___snapPose1, const RuntimeMethod* method)
{
	typedef Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (DEFAULT_CALL *PInvokeFunc)(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  returnValue = il2cppPInvokeFunc(___desiredPose0, ___snapPose1);

	return returnValue;
}
// System.Void Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseCalculator__ctor_m9C53588F731419F18D938D508968BC869D6EEEE8 (PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::Invoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PoseCalculator_Invoke_mE5050134991484E39AD5B7BA2F9BEF2DE2F19748 (PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___desiredPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___snapPose1, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  result;
	memset((&result), 0, sizeof(result));
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
				typedef Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (*FunctionPointerType) (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___desiredPose0, ___snapPose1, targetMethod);
			}
			else
			{
				// closed
				typedef Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (*FunctionPointerType) (void*, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___desiredPose0, ___snapPose1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (*FunctionPointerType) (RuntimeObject*, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(___desiredPose0) - 1), ___snapPose1, targetMethod);
			}
			else
			{
				typedef Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  (*FunctionPointerType) (void*, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___desiredPose0, ___snapPose1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::BeginInvoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseCalculator_BeginInvoke_mA1E61F0D62966EAC7532C173D49575AFF9F480F6 (PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___desiredPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___snapPose1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &*___desiredPose0);
	__d_args[1] = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &*___snapPose1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.SnapSurfaces.SnapSurfaceHelper/PoseCalculator::EndInvoke(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PoseCalculator_EndInvoke_m6C8CA0584C060C67BFB496F5BD14A7C6C5D6DA9A (PoseCalculator_t04CB37EA2C59DFD57AFB9F972AFB4D41EDF9350A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___desiredPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___snapPose1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, 0);
	return *(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0546C3FC29CE795330A68087392F55BA864B5881 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * L_0 = (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C *)il2cpp_codegen_object_new(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m67E4F6239BD4227A703037A4E29F6FE24415FAFF (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<.ctor>b__113_0(System.Collections.Generic.List`1<Oculus.Interaction.Throw.ReleaseVelocityInformation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__113_0_mE02B5081AED8F1AD100F3CAC93971E145F6AA1B5 (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, List_1_t999ACF57508AA9E4DA7644AE84335E4C6FEF3427 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<List<ReleaseVelocityInformation>> WhenThrowVelocitiesChanged = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/<>c::<.ctor>b__113_1(Oculus.Interaction.Throw.ReleaseVelocityInformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__113_1_m122BB2F3DC999FA574A1BF5D7BEC1E15CCC5CE55 (U3CU3Ec_t1FFEC66F3787EA61070FE107CFF9591546013D0C * __this, ReleaseVelocityInformation_t1DAFFAB3058378FC076B0A1DB6F2E2803177C5F7  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<ReleaseVelocityInformation> WhenNewSampleAvailable = delegate { };
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
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferingParams_Validate_m198445B4C7A5D15FED609A8D7C747585A3292DE6 (BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/BufferingParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferingParams__ctor_mF3BBF9455E54AE077C57E326F273A9A72DA52893 (BufferingParams_tFABF32398ECC20887BBBA0DD0BB26B808F7DB87C * __this, const RuntimeMethod* method)
{
	{
		// public float BufferLengthSeconds = 0.4f;
		__this->set_BufferLengthSeconds_0((0.400000006f));
		// public float SampleFrequency = 90.0f;
		__this->set_SampleFrequency_1((90.0f));
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
// System.Void Oculus.Interaction.Throw.StandardVelocityCalculator/SamplePoseData::.ctor(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431 (SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method)
{
	{
		// TransformPose = transformPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___transformPose0;
		__this->set_TransformPose_0(L_0);
		// LinearVelocity = linearVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___linearVelocity1;
		__this->set_LinearVelocity_1(L_1);
		// AngularVelocity = angularVelocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___angularVelocity2;
		__this->set_AngularVelocity_2(L_2);
		// Time = time;
		float L_3 = ___time3;
		__this->set_Time_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431_AdjustorThunk (RuntimeObject * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___transformPose0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___linearVelocity1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity2, float ___time3, const RuntimeMethod* method)
{
	SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SamplePoseData_tC5AC7BEB702FEBFAF93505F38C2199C6E7B90B81 *>(__this + _offset);
	SamplePoseData__ctor_mD10B878395124A2B1E643DDD5CF8C5551A575431(_thisAdjusted, ___transformPose0, ___linearVelocity1, ___angularVelocity2, ___time3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8FF536F6C91D1FF16AA49E0C2FEFC3ED4588916A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * L_0 = (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 *)il2cpp_codegen_object_new(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95B519241F2E8BFDEB3DA5BC7D276491AFC16E51 (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Input.SyntheticHand/<>c::<.ctor>b__55_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__55_0_mC2A1876571097D175BF34D4BF59DF6A20E76876F (U3CU3Ec_tC7B9BF0E9CB80C6AD862858855D001885BF26367 * __this, const RuntimeMethod* method)
{
	{
		// public System.Action UpdateRequired = delegate { };
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0448C014F49604CFF2711CDF97901DCBAD4F281C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * L_0 = (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 *)il2cpp_codegen_object_new(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0361CD875C420F4D4571BC4FCB4ABD396AE222A (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.TouchHandGrabInteractor/<>c::<Awake>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__37_0_m1EF66E491B75E97B2F502954A7D52C49ECEBB5EC (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractor/<>c::<.ctor>b__66_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__66_0_mAA870E4527275CBC801070AD75649CB608D03174 (U3CU3Ec_t3C6EFE76C66712452DE8CB977F59452805AB99E4 * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenFingerLocked = delegate() { };
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
// System.Void Oculus.Interaction.TouchHandGrabInteractor/FingerStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerStatus__ctor_m3AD7667BB93DDFA2B534AAA3AAD1003E3251D24C (FingerStatus_t87AF0419F3B948844246D97A708B2D2EB03D231C * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6BBDCD116DD8BA5EAB132333B9D1758CF9851053 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * L_0 = (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B *)il2cpp_codegen_object_new(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8337C0AA8B04C451F4A98DA835383E3F63D3425F (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.TouchHandGrabInteractorVisual/<>c::<UpdateLocks>b__6_0(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  U3CU3Ec_U3CUpdateLocksU3Eb__6_0_m2E759D38AC6C17A918D99AE5397396F77C898199 (U3CU3Ec_t47C8628538C19E15E51ABBB711BD19CC69F00C9B * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method)
{
	{
		// _interactor.GetFingerJoints(finger).Select(pose => pose.rotation).ToArray();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___pose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0.get_rotation_1();
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
// System.Void Oculus.Interaction.TouchShadowHand/GrabTouchInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabTouchInfo__ctor_m52D2F310D24633A15239DC8CCB92E8B033F3D116 (GrabTouchInfo_t0F68804F4665EF88F07FAA828ABB6B2C06099585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool[] grabbingFingers = new bool[5];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_grabbingFingers_2(L_0);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF49CEE8781BFE511D597E6C41C10EF97615C7679 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * L_0 = (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 *)il2cpp_codegen_object_new(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5928F50E0A6CC5B3CF47576D697B23CED513355 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_0(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_0_mD3B9E96A3439A80BB3A01EE2CBDC751303732760 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.WristUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_1(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_1_mFF4D2FDC174F9BEF01D093CB8651918BDBEF27DD (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.WristDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_2(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_2_mBE5D37FC830B6BAEC635954A9EA02797F76E453C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_3(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_3_m50403FFE1EC4254DFAAFEC3BAE72EDAE24FCF167 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 3, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_4(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_4_m43BE810894E9149990F554994799D501577A56A3 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmTowardsFace));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 4, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_5(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_5_mE31C43A1CD8055E78B9CCF5FCE6EB48E9AB61A9C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PalmAwayFromFace));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 5, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_6(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_6_mE13CFDE454E5138065255E1EF54926A6726B52A3 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.FingersUp));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 6, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_7(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_7_m819D59FDAE2E6126F73A21730E2241E8F9A8AA06 (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.FingersDown));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 7, /*hidden argument*/NULL);
		return L_1;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/<>c::<.cctor>b__29_8(Oculus.Interaction.PoseDetection.FeatureStateActiveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * U3CU3Ec_U3C_cctorU3Eb__29_8_m03EFFAAD4A28988F13375E5748C07F7A57509E4C (U3CU3Ec_tC14FAD93F9F423A55F7B45708AAE904B71E7A6A7 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new BuildCondition<TrueFalseStateBuilder>(mode => new TrueFalseStateBuilder(mode, TransformFeature.PinchClear));
		int32_t L_0 = ___mode0;
		TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * L_1 = (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D *)il2cpp_codegen_object_new(TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D_il2cpp_TypeInfo_var);
		TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78(L_1, L_0, 8, /*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::.ctor(Oculus.Interaction.PoseDetection.FeatureStateActiveMode,Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueFalseStateBuilder__ctor_m0008E70014723030A9601311E2FFD2373A93AD78 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, int32_t ___featureStateActiveMode0, int32_t ___transformFeature1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrueFalseStateBuilder(FeatureStateActiveMode featureStateActiveMode,
		//     TransformFeature transformFeature)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _mode = featureStateActiveMode;
		int32_t L_0 = ___featureStateActiveMode0;
		__this->set__mode_0(L_0);
		// _transformFeature = transformFeature;
		int32_t L_1 = ___transformFeature1;
		__this->set__transformFeature_1(L_1);
		// _states = TransformFeatureProperties.FeatureDescriptions[_transformFeature].FeatureStates;
		IL2CPP_RUNTIME_CLASS_INIT(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = TransformFeatureProperties_get_FeatureDescriptions_mBB3B9D11CFC9824B6F7EF80944D4C65581C7E49B_inline(/*hidden argument*/NULL);
		int32_t L_3 = __this->get__transformFeature_1();
		NullCheck(L_2);
		FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * L_4;
		L_4 = InterfaceFuncInvoker1< FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D *, int32_t >::Invoke(1 /* !1 System.Collections.Generic.IReadOnlyDictionary`2<Oculus.Interaction.PoseDetection.TransformFeature,Oculus.Interaction.PoseDetection.FeatureDescription>::get_Item(!0) */, IReadOnlyDictionary_2_tE09E04AE08A77C299F6B2897D45F53E5FA71FA38_il2cpp_TypeInfo_var, L_2, L_3);
		NullCheck(L_4);
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_5;
		L_5 = FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline(L_4, /*hidden argument*/NULL);
		__this->set__states_2(L_5);
		// }
		return;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfig Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::get_Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * TrueFalseStateBuilder_get_Open_mDD0670844C125E618585BC132A1EAB909B772C03 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new TransformFeatureConfig { Feature = _transformFeature, Mode = _mode, State = _states[0].Id };
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_0 = (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 *)il2cpp_codegen_object_new(TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC(L_0, /*hidden argument*/NULL);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_1 = L_0;
		int32_t L_2 = __this->get__transformFeature_1();
		NullCheck(L_1);
		FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_inline(L_1, L_2, /*hidden argument*/FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_3 = L_1;
		int32_t L_4 = __this->get__mode_0();
		NullCheck(L_3);
		FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline(L_3, L_4, /*hidden argument*/FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_5 = L_3;
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_6 = __this->get__states_2();
		NullCheck(L_6);
		int32_t L_7 = 0;
		FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline(L_5, L_9, /*hidden argument*/FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		return L_5;
	}
}
// Oculus.Interaction.PoseDetection.TransformFeatureConfig Oculus.Interaction.PoseDetection.TransformFeatureConfigBuilder/TrueFalseStateBuilder::get_Closed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * TrueFalseStateBuilder_get_Closed_mC522576B1BF4CCAA16CABE37FAB86CC077A10BB0 (TrueFalseStateBuilder_t23BAAF9F21E553A30C6BB2D548DB71299E85065D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new TransformFeatureConfig { Feature = _transformFeature, Mode = _mode, State = _states[1].Id };
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_0 = (TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 *)il2cpp_codegen_object_new(TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8_il2cpp_TypeInfo_var);
		TransformFeatureConfig__ctor_m8EAAF6AB47CBDC9E58C37C27A1A70F672E025AFC(L_0, /*hidden argument*/NULL);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_1 = L_0;
		int32_t L_2 = __this->get__transformFeature_1();
		NullCheck(L_1);
		FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_inline(L_1, L_2, /*hidden argument*/FeatureConfigBase_1_set_Feature_mE037E88B342831AC07B94D6504AFD5C0E0B98B0C_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_3 = L_1;
		int32_t L_4 = __this->get__mode_0();
		NullCheck(L_3);
		FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_inline(L_3, L_4, /*hidden argument*/FeatureConfigBase_1_set_Mode_m8799FD4F4CB20100E17F56701378D7D6D51963E1_RuntimeMethod_var);
		TransformFeatureConfig_tEB5436BF735FE9192E69CED83D7F2E9EFFA5EEC8 * L_5 = L_3;
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_6 = __this->get__states_2();
		NullCheck(L_6);
		int32_t L_7 = 1;
		FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_inline(L_5, L_9, /*hidden argument*/FeatureConfigBase_1_set_State_mE88094CF4A1364479713758443A6E0E74CF34D68_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCECCC9679BE3364A3AB9F07C6EDAC367A3B5950B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * L_0 = (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 *)il2cpp_codegen_object_new(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B3BC0E30FC03BE33E52A237D7158F1A112F38EE (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c::<RegisterConfig>b__2_1(Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegisterConfigU3Eb__2_1_m72332A2813F0B1E23E2781EDBA6CCEB62A318D7A (U3CU3Ec_t4CD7F71299572631BB9A1F553E0061AC409D7D97 * __this, int32_t ___feature0, const RuntimeMethod* method)
{
	{
		// feature => (int)feature,
		int32_t L_0 = ___feature0;
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m344383093388D680C1969DE731825FBE462084D2 (U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Single> Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/<>c__DisplayClass2_0::<RegisterConfig>b__0(Oculus.Interaction.PoseDetection.TransformFeature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  U3CU3Ec__DisplayClass2_0_U3CRegisterConfigU3Eb__0_m555664EF5617E693A6490752DB16386D07035631 (U3CU3Ec__DisplayClass2_0_tD48A4B8ED42AD66177F4CC4F09D8C996A7D42D5F * __this, int32_t ___feature0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((feature) => TransformFeatureValueProvider.GetValue(feature, jointData, transformConfig),
		int32_t L_0 = ___feature0;
		TransformJointData_t555573515E1A16DC67BBD1FC2259373E7DEDCD34 * L_1 = __this->get_jointData_0();
		TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * L_2 = __this->get_transformConfig_1();
		float L_3;
		L_3 = TransformFeatureValueProvider_GetValue_m9F3E076EC00D70EB07B1CC6B87B8A44BE8A20FA1(L_0, L_1, L_2, /*hidden argument*/NULL);
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mC71F3D8AB5E7FDF5364242B7E3500ADABF98AA6F_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateCollection/TransformStateInfo::.ctor(Oculus.Interaction.PoseDetection.TransformConfig,Oculus.Interaction.PoseDetection.FeatureStateProvider`2<Oculus.Interaction.PoseDetection.TransformFeature,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStateInfo__ctor_m185D7B5A3F2A19B137BD454E0DC78443277F10C9 (TransformStateInfo_tA074826B7FD23546DD3D851E147F92461B54AED9 * __this, TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * ___transformConfig0, FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * ___stateProvider1, const RuntimeMethod* method)
{
	{
		// public TransformStateInfo(TransformConfig transformConfig,
		//     FeatureStateProvider<TransformFeature, string> stateProvider)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Config = transformConfig;
		TransformConfig_tE3E1C590516A4916C1532817469AEF748AC63505 * L_0 = ___transformConfig0;
		__this->set_Config_0(L_0);
		// StateProvider = stateProvider;
		FeatureStateProvider_2_t7CA71CEFDEF5A72D57CBD370BFA6B7653A25D466 * L_1 = ___stateProvider1;
		__this->set_StateProvider_1(L_1);
		// }
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m86B258F70AF3E54012A2B2114DCA25337C6BC5B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * L_0 = (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 *)il2cpp_codegen_object_new(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF779741BBAA03040699778F66709AD71C1E76541 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Oculus.Interaction.PoseDetection.TransformFeatureStateProvider/<>c::<Awake>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAwakeU3Eb__15_0_m2D9181EBE9257DCE3DFB6D41ED7608F1899706A4 (U3CU3Ec_tEB50029FBEE352211323EEDF6E58BBCA314A1CC4 * __this, const RuntimeMethod* method)
{
	{
		// _timeProvider = () => Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
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
// System.Void Oculus.Interaction.PoseDetection.TransformFeatureValueProvider/TransformProperties::.ctor(UnityEngine.Pose,UnityEngine.Pose,Oculus.Interaction.Input.Handedness,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF (TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method)
{
	{
		// CenterEyePose = centerEyePos;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___centerEyePos0;
		__this->set_CenterEyePose_0(L_0);
		// WristPose = wristPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___wristPose1;
		__this->set_WristPose_1(L_1);
		// Handedness = handedness;
		int32_t L_2 = ___handedness2;
		__this->set_Handedness_2(L_2);
		// TrackingSystemUp = trackingSystemUp;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___trackingSystemUp3;
		__this->set_TrackingSystemUp_3(L_3);
		// TrackingSystemForward = trackingSystemForward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___trackingSystemForward4;
		__this->set_TrackingSystemForward_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF_AdjustorThunk (RuntimeObject * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___centerEyePos0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___wristPose1, int32_t ___handedness2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemUp3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackingSystemForward4, const RuntimeMethod* method)
{
	TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformProperties_tB32557724ED87B0D6D1EDF68CF9A9C0896AB09E1 *>(__this + _offset);
	TransformProperties__ctor_m77D1D69EB0A0F37ED395345D73A834DA4D7DDBCF(_thisAdjusted, ___centerEyePos0, ___wristPose1, ___handedness2, ___trackingSystemUp3, ___trackingSystemForward4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Tween/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m135B7AE81E577F96693ECAACD867CD1DCC77A695 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * L_0 = (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 *)il2cpp_codegen_object_new(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Tween/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6DAE0E3BA27B7167F62CC6FB17D20BD9C6DA34B (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.Tween/<>c::<get_Stopped>b__11_0(Oculus.Interaction.Tween/TweenCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_StoppedU3Eb__11_0_mC45C32B94D0EA3235D18CDCF25306274D312F10C (U3CU3Ec_tAA1A278CB62253950145AF94B207B221431AAA04 * __this, TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * ___t0, const RuntimeMethod* method)
{
	{
		// public bool Stopped => _tweenCurves.TrueForAll(t => t.PrevProgress >= 1f);
		TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * L_0 = ___t0;
		NullCheck(L_0);
		float L_1 = L_0->get_PrevProgress_1();
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Interaction.Tween/TweenCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCurve__ctor_m7F515CA146507FEEAF1A57B7591905A14CD566C6 (TweenCurve_t57134A57590B928E10CD981C74F6EDAB8475D135 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabFreeConstraints__ctor_mD299A5BA141F41F30C9CA5DF81EBB59AB9B5A7C1 (TwoGrabFreeConstraints_tB4BC435AB8182341F30DAD6D7958C67633977A40 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabPlaneConstraints__ctor_mB3FBD52D60FA28FE93463FAECA35851960026385 (TwoGrabPlaneConstraints_t0AE30255418B2E2FF42A2762C978DF4C0CCF912A * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoGrabRotateConstraints__ctor_mC6B04077413FF54F227E2AAFB2B4467765C64671 (TwoGrabRotateConstraints_tDF361D3A847CC9C9BA2BBA9F348475984F4EDB01 * __this, const RuntimeMethod* method)
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
// System.Void Oculus.Interaction.VirtualPointable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE39C8A9263BB3A67332F4F693DCCEF1AB48135AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * L_0 = (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F *)il2cpp_codegen_object_new(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualPointable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6DBB942543ED1DBDA7AB24D2ACEDCAD0482F8EB (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualPointable/<>c::<.ctor>b__10_0(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__10_0_m9F5AFF87E82571900246E03BD2BF8C1BEA43D1D9 (U3CU3Ec_tA8690442152BBD915BD1ADC0F9A976DA17CAA76F * __this, PointerEvent_t40D64472DECB26363B1FB81094E3458098115C4B  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public event Action<PointerEvent> WhenPointerEventRaised = delegate { };
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
// System.Void Oculus.Interaction.VirtualSelector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m239B1FC127C8A3DAA8A7EB5713CA166C556CEAA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * L_0 = (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B *)il2cpp_codegen_object_new(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m617C02BA1EA6F7412A4C5FF400153A6ECAC7F067 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::<.ctor>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_0_mD985108D5987E76496F2F7A9FE475D7164934771 (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenSelected = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.VirtualSelector/<>c::<.ctor>b__12_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_1_m4C590D608C5D10ACD39F0D8EDC3702CC6E18803B (U3CU3Ec_tBD1328B0840848BA168783368BE051100295B95B * __this, const RuntimeMethod* method)
{
	{
		// public event Action WhenUnselected = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_MarkedForDeletion_m886DCC246F119FFAA124C02C303645A8D2F80F19_inline (Pointer_t8F177D393665020358C0C4520193ACBBC99BF489 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool MarkedForDeletion { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CMarkedForDeletionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActivationStep_set_ActiveState_mE3B2DF6FF32C524343878282D1D1D1C70011FD90_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CActiveStateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ActivationStep_get_ActiveState_m5754395E7951F732778CBCA2208DA61EEBF0C351_inline (ActivationStep_t2EEA35218D14F86750B783564B0D50F016524B54 * __this, const RuntimeMethod* method)
{
	{
		// public IActiveState ActiveState { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CActiveStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformFeatureProperties_get_FeatureDescriptions_mBB3B9D11CFC9824B6F7EF80944D4C65581C7E49B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		IL2CPP_RUNTIME_CLASS_INIT(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_StaticFields*)il2cpp_codegen_static_fields_for(TransformFeatureProperties_tE7C89695306240C1F43BB27AB0132BD7A2A041BA_il2cpp_TypeInfo_var))->get_U3CFeatureDescriptionsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* FeatureDescription_get_FeatureStates_m6BD23527382020879F0DB4946031715F945A52D4_inline (FeatureDescription_t727AB06D4C1BC8B1C8CE2B9ABD6D20BA20AB032D * __this, const RuntimeMethod* method)
{
	{
		// public FeatureStateDescription[] FeatureStates { get; }
		FeatureStateDescriptionU5BU5D_t281EE39DFE42BFE6247E39FEAEBD96D1E4B23440* L_0 = __this->get_U3CFeatureStatesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FeatureStateDescription_get_Id_m7F852C150F0BD2AE679B954E9C1FF81AFEF23907_inline (FeatureStateDescription_t57C38790494C067C76267D0270D404BA153B4BF1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Feature_m18720CAF62F2702FD7E488303396BC7281DD57CF_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _feature = value; }
		int32_t L_0 = ___value0;
		__this->set__feature_1(L_0);
		// set { _feature = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_Mode_m0D345B1E10789082D237A02CEE39AD904342EFEC_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _mode = value; }
		int32_t L_0 = ___value0;
		__this->set__mode_0(L_0);
		// set { _mode = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FeatureConfigBase_1_set_State_m7551FC1B14B50EC51A001458FBB55E89F7D90779_gshared_inline (FeatureConfigBase_1_t24871E32A9512C489384BFAC41294E8C79111D9F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		String_t* L_0 = ___value0;
		__this->set__state_2(L_0);
		// set { _state = value; }
		return;
	}
}
