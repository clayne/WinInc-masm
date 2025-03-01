;--- include file created by h2incx v0.96, copyright 2005 japheth
;--- source file: d:\ddraw\include\d3dx9mesh.h, last modified: 12/1/2004 15:7
	include d3dx9.inc
ifndef __D3DX9MESH_H__
__D3DX9MESH_H__	EQU	<>
DEFINE_GUID(IID_ID3DXBaseMesh,7ed943ddh,52e8h,40b5h,0a8h,0d8h,76h,68h,5ch,40h,63h,30h)
DEFINE_GUID(IID_ID3DXMesh,4020e5c2h,1403h,4929h,88h,3fh,0e2h,0e8h,49h,0fah,0c1h,95h)
DEFINE_GUID(IID_ID3DXPMesh,8875769ah,0d579h,4088h,0aah,0ebh,53h,4dh,1ah,0d8h,4eh,96h)
DEFINE_GUID(IID_ID3DXSPMesh,667ea4c7h,0f1cdh,4386h,0b5h,23h,7ch,2h,90h,0b8h,3ch,0c5h)
DEFINE_GUID(IID_ID3DXSkinInfo,11eaa540h,0f9a6h,4d49h,0aeh,6ah,0e1h,92h,21h,0f7h,0ch,0c4h)
DEFINE_GUID(IID_ID3DXPatchMesh,3ce6cc22h,0dbf2h,44f4h,89h,4dh,0f9h,0c3h,4ah,33h,71h,39h)
D3DXPATCHMESHTYPE typedef DWORD
D3DXPATCHMESH_RECT = 001h 
D3DXPATCHMESH_TRI = 002h 
D3DXPATCHMESH_NPATCH = 003h 
D3DXPATCHMESH_FORCE_DWORD = 7fffffffh 

_D3DXMESH typedef DWORD
D3DXMESH_32BIT = 001h 
D3DXMESH_DONOTCLIP = 002h 
D3DXMESH_POINTS = 004h 
D3DXMESH_RTPATCHES = 008h 
D3DXMESH_NPATCHES = 4000h 
D3DXMESH_VB_SYSTEMMEM = 010h 
D3DXMESH_VB_MANAGED = 020h 
D3DXMESH_VB_WRITEONLY = 040h 
D3DXMESH_VB_DYNAMIC = 080h 
D3DXMESH_VB_SOFTWAREPROCESSING = 8000h 
D3DXMESH_IB_SYSTEMMEM = 100h 
D3DXMESH_IB_MANAGED = 200h 
D3DXMESH_IB_WRITEONLY = 400h 
D3DXMESH_IB_DYNAMIC = 800h 
D3DXMESH_IB_SOFTWAREPROCESSING = 10000h 
D3DXMESH_VB_SHARE = 1000h 
D3DXMESH_USEHWONLY = 2000h 
D3DXMESH_SYSTEMMEM = 110h 
D3DXMESH_MANAGED = 220h 
D3DXMESH_WRITEONLY = 440h 
D3DXMESH_DYNAMIC = 880h 
D3DXMESH_SOFTWAREPROCESSING = 18000h 

_D3DXPATCHMESH typedef DWORD
D3DXPATCHMESH_DEFAULT = 000 

_D3DXMESHSIMP typedef DWORD
D3DXMESHSIMP_VERTEX = 1h 
D3DXMESHSIMP_FACE = 2h 

D3DXCLEANTYPE typedef DWORD
D3DXCLEAN_BACKFACING = 00000001h 
D3DXCLEAN_BOWTIES = 00000002h 
D3DXCLEAN_SKINNING = D3DXCLEAN_BACKFACING 
D3DXCLEAN_OPTIMIZATION = D3DXCLEAN_BACKFACING 
D3DXCLEAN_SIMPLIFICATION = D3DXCLEAN_BACKFACING  or  D3DXCLEAN_BOWTIES 

_MAX_FVF_DECL_SIZE typedef DWORD
MAX_FVF_DECL_SIZE = MAXD3DDECLLENGTH + 1 

D3DXTANGENT typedef DWORD
D3DXTANGENT_WRAP_U = 01h 
D3DXTANGENT_WRAP_V = 02h 
D3DXTANGENT_WRAP_UV = 03h 
D3DXTANGENT_DONT_NORMALIZE_PARTIALS = 04h 
D3DXTANGENT_DONT_ORTHOGONALIZE = 08h 
D3DXTANGENT_ORTHOGONALIZE_FROM_V = 010h 
D3DXTANGENT_ORTHOGONALIZE_FROM_U = 020h 
D3DXTANGENT_WEIGHT_BY_AREA = 040h 
D3DXTANGENT_WEIGHT_EQUAL = 080h 
D3DXTANGENT_WIND_CW = 0100h 
D3DXTANGENT_CALCULATE_NORMALS = 0200h 
D3DXTANGENT_GENERATE_IN_PLACE = 0400h 

LPD3DXBASEMESH typedef ptr ID3DXBaseMesh
LPD3DXMESH typedef ptr ID3DXMesh
LPD3DXPMESH typedef ptr ID3DXPMesh
LPD3DXSPMESH typedef ptr ID3DXSPMesh
LPD3DXSKININFO typedef ptr ID3DXSkinInfo
LPD3DXPATCHMESH typedef ptr ID3DXPatchMesh

D3DXATTRIBUTERANGE	struct
AttribId	DWORD	?
FaceStart	DWORD	?
FaceCount	DWORD	?
VertexStart	DWORD	?
VertexCount	DWORD	?
D3DXATTRIBUTERANGE	ends

LPD3DXATTRIBUTERANGE  typedef ptr D3DXATTRIBUTERANGE
D3DXMATERIAL	struct
MatD3D	D3DMATERIAL9	<>
pTextureFilename	LPSTR	?
D3DXMATERIAL	ends

LPD3DXMATERIAL  typedef ptr D3DXMATERIAL
D3DXEFFECTDEFAULTTYPE typedef DWORD
D3DXEDT_STRING = 1h 
D3DXEDT_FLOATS = 2h 
D3DXEDT_DWORD = 3h 
D3DXEDT_FORCEDWORD = 7fffffffh 

D3DXEFFECTDEFAULT	struct
pParamName	LPSTR	?
Type_	D3DXEFFECTDEFAULTTYPE	?
NumBytes	DWORD	?
pValue	LPVOID	?
D3DXEFFECTDEFAULT	ends

LPD3DXEFFECTDEFAULT typedef ptr D3DXEFFECTDEFAULT

D3DXEFFECTINSTANCE	struct
pEffectFilename	LPSTR	?
NumDefaults	DWORD	?
pDefaults	LPD3DXEFFECTDEFAULT	?
D3DXEFFECTINSTANCE	ends

LPD3DXEFFECTINSTANCE typedef ptr D3DXEFFECTINSTANCE

D3DXATTRIBUTEWEIGHTS	struct
Position	REAL4	?
Boundary	REAL4	?
Normal	REAL4	?
Diffuse	REAL4	?
Specular	REAL4	?
Texcoord	REAL4 8 dup (?)
Tangent	REAL4	?
Binormal	REAL4	?
D3DXATTRIBUTEWEIGHTS	ends

LPD3DXATTRIBUTEWEIGHTS typedef ptr D3DXATTRIBUTEWEIGHTS

_D3DXWELDEPSILONSFLAGS typedef DWORD
D3DXWELDEPSILONS_WELDALL = 1h 
D3DXWELDEPSILONS_WELDPARTIALMATCHES = 2h 
D3DXWELDEPSILONS_DONOTREMOVEVERTICES = 4h 
D3DXWELDEPSILONS_DONOTSPLIT = 8h 

D3DXWELDEPSILONS	struct
Position	REAL4	?
BlendWeights	REAL4	?
Normal	REAL4	?
PSize	REAL4	?
Specular	REAL4	?
Diffuse	REAL4	?
Texcoord	REAL4 8 dup (?)
Tangent	REAL4	?
Binormal	REAL4	?
TessFactor	REAL4	?
D3DXWELDEPSILONS	ends

LPD3DXWELDEPSILONS  typedef ptr D3DXWELDEPSILONS
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXBaseMesh>
DECLARE_INTERFACE_(ID3DXBaseMesh,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD DrawSubset , :DWORD
STDMETHOD_ DWORD_,GetNumFaces 
STDMETHOD_ DWORD_,GetNumVertices 
STDMETHOD_ DWORD_,GetFVF 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetNumBytesPerVertex 
STDMETHOD_ DWORD_,GetOptions 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD CloneMeshFVF , :DWORD
STDMETHOD CloneMesh , :DWORD
STDMETHOD GetVertexBuffer , :ptr LPDIRECT3DVERTEXBUFFER9
STDMETHOD GetIndexBuffer , :ptr LPDIRECT3DINDEXBUFFER9
STDMETHOD LockVertexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockVertexBuffer 
STDMETHOD LockIndexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockIndexBuffer 
STDMETHOD GetAttributeTable 
STDMETHOD ConvertPointRepsToAdjacency , :ptr DWORD, :ptr DWORD
STDMETHOD ConvertAdjacencyToPointReps , :ptr DWORD, :ptr DWORD
STDMETHOD GenerateAdjacency , :REAL4, :ptr DWORD
STDMETHOD UpdateSemantics , :ptr D3DVERTEXELEMENT9
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXMesh>
DECLARE_INTERFACE_(ID3DXMesh,ID3DXBaseMesh)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD DrawSubset , :DWORD
STDMETHOD_ DWORD_,GetNumFaces 
STDMETHOD_ DWORD_,GetNumVertices 
STDMETHOD_ DWORD_,GetFVF 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetNumBytesPerVertex 
STDMETHOD_ DWORD_,GetOptions 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD CloneMeshFVF , :DWORD
STDMETHOD CloneMesh , :DWORD
STDMETHOD GetVertexBuffer , :ptr LPDIRECT3DVERTEXBUFFER9
STDMETHOD GetIndexBuffer , :ptr LPDIRECT3DINDEXBUFFER9
STDMETHOD LockVertexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockVertexBuffer 
STDMETHOD LockIndexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockIndexBuffer 
STDMETHOD GetAttributeTable 
STDMETHOD ConvertPointRepsToAdjacency , :ptr DWORD, :ptr DWORD
STDMETHOD ConvertAdjacencyToPointReps , :ptr DWORD, :ptr DWORD
STDMETHOD GenerateAdjacency , :REAL4, :ptr DWORD
STDMETHOD UpdateSemantics , :ptr D3DVERTEXELEMENT9
STDMETHOD LockAttributeBuffer , :DWORD, :ptr ptr DWORD
STDMETHOD UnlockAttributeBuffer 
STDMETHOD Optimize , :DWORD, :ptr DWORD, :ptr DWORD
STDMETHOD OptimizeInplace , :DWORD, :ptr DWORD, :ptr DWORD
STDMETHOD SetAttributeTable , :ptr D3DXATTRIBUTERANGE, :DWORD
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXPMesh>
DECLARE_INTERFACE_(ID3DXPMesh,ID3DXBaseMesh)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD DrawSubset , :DWORD
STDMETHOD_ DWORD_,GetNumFaces 
STDMETHOD_ DWORD_,GetNumVertices 
STDMETHOD_ DWORD_,GetFVF 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetNumBytesPerVertex 
STDMETHOD_ DWORD_,GetOptions 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD CloneMeshFVF , :DWORD
STDMETHOD CloneMesh , :DWORD
STDMETHOD GetVertexBuffer , :ptr LPDIRECT3DVERTEXBUFFER9
STDMETHOD GetIndexBuffer , :ptr LPDIRECT3DINDEXBUFFER9
STDMETHOD LockVertexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockVertexBuffer 
STDMETHOD LockIndexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockIndexBuffer 
STDMETHOD GetAttributeTable 
STDMETHOD ConvertPointRepsToAdjacency , :ptr DWORD, :ptr DWORD
STDMETHOD ConvertAdjacencyToPointReps , :ptr DWORD, :ptr DWORD
STDMETHOD GenerateAdjacency , :REAL4, :ptr DWORD
STDMETHOD UpdateSemantics , :ptr D3DVERTEXELEMENT9
STDMETHOD ClonePMeshFVF , :DWORD
STDMETHOD ClonePMesh , :DWORD
STDMETHOD SetNumFaces , :DWORD
STDMETHOD SetNumVertices , :DWORD
STDMETHOD_ DWORD_,GetMaxFaces 
STDMETHOD_ DWORD_,GetMinFaces 
STDMETHOD_ DWORD_,GetMaxVertices 
STDMETHOD_ DWORD_,GetMinVertices 
STDMETHOD Save , :ptr IStream, :ptr D3DXMATERIAL, :ptr D3DXEFFECTINSTANCE, :DWORD
STDMETHOD Optimize , :DWORD, :ptr DWORD
STDMETHOD OptimizeBaseLOD , :DWORD, :ptr DWORD
STDMETHOD TrimByFaces , :DWORD, :DWORD, :ptr DWORD, :ptr DWORD
STDMETHOD TrimByVertices , :DWORD, :DWORD, :ptr DWORD, :ptr DWORD
STDMETHOD GetAdjacency , :ptr DWORD
STDMETHOD GenerateVertexHistory , :ptr DWORD
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXSPMesh>
DECLARE_INTERFACE_(ID3DXSPMesh,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ DWORD_,GetNumFaces 
STDMETHOD_ DWORD_,GetNumVertices 
STDMETHOD_ DWORD_,GetFVF 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetOptions 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD CloneMeshFVF , :DWORD
STDMETHOD CloneMesh , :DWORD
STDMETHOD ClonePMeshFVF , :DWORD
STDMETHOD ClonePMesh , :DWORD
STDMETHOD ReduceFaces , :DWORD
STDMETHOD ReduceVertices , :DWORD
STDMETHOD_ DWORD_,GetMaxFaces 
STDMETHOD_ DWORD_,GetMaxVertices 
STDMETHOD GetVertexAttributeWeights , :LPD3DXATTRIBUTEWEIGHTS
STDMETHOD GetVertexWeights , :ptr REAL4
;}
DECLARE_INTERFACE__END

UNUSED16	EQU	0ffffh
UNUSED32	EQU	0ffffffffh
_D3DXMESHOPT typedef DWORD
D3DXMESHOPT_COMPACT = 01000000h 
D3DXMESHOPT_ATTRSORT = 02000000h 
D3DXMESHOPT_VERTEXCACHE = 04000000h 
D3DXMESHOPT_STRIPREORDER = 08000000h 
D3DXMESHOPT_IGNOREVERTS = 10000000h 
D3DXMESHOPT_DONOTSPLIT = 20000000h 
D3DXMESHOPT_DEVICEINDEPENDENT = 00400000h 

D3DXBONECOMBINATION	struct
AttribId	DWORD	?
FaceStart	DWORD	?
FaceCount	DWORD	?
VertexStart	DWORD	?
VertexCount	DWORD	?
BoneId	DWORD	?
D3DXBONECOMBINATION	ends

LPD3DXBONECOMBINATION typedef ptr D3DXBONECOMBINATION

D3DXPATCHINFO	struct
PatchType	D3DXPATCHMESHTYPE	?
Degree	D3DDEGREETYPE	?
Basis	D3DBASISTYPE	?
D3DXPATCHINFO	ends

LPD3DXPATCHINFO typedef ptr D3DXPATCHINFO

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXPatchMesh>
DECLARE_INTERFACE_(ID3DXPatchMesh,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ DWORD_,GetNumPatches 
STDMETHOD_ DWORD_,GetNumVertices 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetControlVerticesPerPatch 
STDMETHOD_ DWORD_,GetOptions 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD GetPatchInfo , :LPD3DXPATCHINFO
STDMETHOD GetVertexBuffer , :ptr LPDIRECT3DVERTEXBUFFER9
STDMETHOD GetIndexBuffer , :ptr LPDIRECT3DINDEXBUFFER9
STDMETHOD LockVertexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockVertexBuffer 
STDMETHOD LockIndexBuffer , :DWORD, :ptr LPVOID
STDMETHOD UnlockIndexBuffer 
STDMETHOD LockAttributeBuffer , :DWORD, :ptr ptr DWORD
STDMETHOD UnlockAttributeBuffer 
STDMETHOD GetTessSize , :REAL4, :DWORD, :ptr DWORD, :ptr DWORD
STDMETHOD GenerateAdjacency , :REAL4
STDMETHOD CloneMesh , :DWORD, :ptr D3DVERTEXELEMENT9, :ptr LPD3DXPATCHMESH
STDMETHOD Optimize , :DWORD
STDMETHOD SetDisplaceParam , :LPDIRECT3DBASETEXTURE9
STDMETHOD GetDisplaceParam , :ptr LPDIRECT3DBASETEXTURE9
STDMETHOD Tessellate , :REAL4, :LPD3DXMESH
STDMETHOD TessellateAdaptive 
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXSkinInfo>
DECLARE_INTERFACE_(ID3DXSkinInfo,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD SetBoneInfluence , :DWORD, :DWORD, :ptr DWORD, :ptr REAL4
STDMETHOD SetBoneVertexInfluence , :DWORD, :DWORD, :REAL4
STDMETHOD_ DWORD_,GetNumBoneInfluences , :DWORD
STDMETHOD GetBoneInfluence , :DWORD, :ptr DWORD, :ptr REAL4
STDMETHOD GetBoneVertexInfluence , :DWORD, :DWORD, :ptr REAL4, :ptr DWORD
STDMETHOD GetMaxVertexInfluences , :ptr DWORD
STDMETHOD_ DWORD_,GetNumBones 
STDMETHOD FindBoneVertexInfluenceIndex , :DWORD, :DWORD, :ptr DWORD
STDMETHOD GetMaxFaceInfluences , :LPDIRECT3DINDEXBUFFER9, :DWORD, :ptr DWORD
STDMETHOD SetMinBoneInfluence , :REAL4
STDMETHOD_ FLOAT,GetMinBoneInfluence 
STDMETHOD SetBoneName , :DWORD, :LPSTR
STDMETHOD_ LPCSTR,GetBoneName , :DWORD
STDMETHOD SetBoneOffsetMatrix , :DWORD, :ptr D3DXMATRIX
STDMETHOD_ LPD3DXMATRIX,GetBoneOffsetMatrix , :DWORD
STDMETHOD Clone , :ptr LPD3DXSKININFO
STDMETHOD Remap , :DWORD, :ptr DWORD
STDMETHOD SetFVF , :DWORD
STDMETHOD SetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD_ DWORD_,GetFVF 
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9
STDMETHOD UpdateSkinnedMesh 
STDMETHOD ConvertToBlendedMesh 
STDMETHOD ConvertToIndexedBlendedMesh 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateMesh proto stdcall  :DWORD, :DWORD, :DWORD, :ptr D3DVERTEXELEMENT9, :LPDIRECT3DDEVICE9, :ptr LPD3DXMESH
D3DXCreateMeshFVF proto stdcall  :DWORD, :DWORD, :DWORD, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXMESH
D3DXCreateSPMesh proto stdcall  :LPD3DXMESH, :ptr DWORD, :ptr D3DXATTRIBUTEWEIGHTS, :ptr REAL4, :ptr LPD3DXSPMESH
D3DXCleanMesh proto stdcall  :D3DXCLEANTYPE, :LPD3DXMESH, :ptr DWORD, :ptr LPD3DXMESH, :ptr DWORD, :ptr LPD3DXBUFFER
D3DXValidMesh proto stdcall  :LPD3DXMESH, :ptr DWORD, :ptr LPD3DXBUFFER
D3DXGeneratePMesh proto stdcall  :LPD3DXMESH, :ptr DWORD, :ptr D3DXATTRIBUTEWEIGHTS, :ptr REAL4, :DWORD, :DWORD, :ptr LPD3DXPMESH
D3DXSimplifyMesh proto stdcall  :LPD3DXMESH, :ptr DWORD, :ptr D3DXATTRIBUTEWEIGHTS, :ptr REAL4, :DWORD, :DWORD, :ptr LPD3DXMESH
D3DXComputeBoundingSphere proto stdcall  :ptr D3DXVECTOR3, :DWORD, :DWORD, :ptr D3DXVECTOR3, :ptr REAL4
D3DXComputeBoundingBox proto stdcall  :ptr D3DXVECTOR3, :DWORD, :DWORD, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXComputeNormals proto stdcall  :LPD3DXBASEMESH, :ptr DWORD
D3DXCreateBuffer proto stdcall  :DWORD, :ptr LPD3DXBUFFER
D3DXLoadMeshFromXA proto stdcall  :LPSTR, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXMESH
D3DXLoadMeshFromXW proto stdcall  :LPWSTR, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXMESH
ifdef UNICODE 
D3DXLoadMeshFromX	EQU	<D3DXLoadMeshFromXW>
else 
D3DXLoadMeshFromX	EQU	<D3DXLoadMeshFromXA>
endif 
D3DXLoadMeshFromXInMemory proto stdcall  :LPCVOID, :DWORD, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXMESH
D3DXLoadMeshFromXResource proto stdcall  :HMODULE, :LPSTR, :LPSTR, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXMESH
D3DXSaveMeshToXA proto stdcall  :LPSTR, :LPD3DXMESH, :ptr DWORD, :ptr D3DXMATERIAL, :ptr D3DXEFFECTINSTANCE, :DWORD, :DWORD
D3DXSaveMeshToXW proto stdcall  :LPWSTR, :LPD3DXMESH, :ptr DWORD, :ptr D3DXMATERIAL, :ptr D3DXEFFECTINSTANCE, :DWORD, :DWORD
ifdef UNICODE 
D3DXSaveMeshToX	EQU	<D3DXSaveMeshToXW>
else 
D3DXSaveMeshToX	EQU	<D3DXSaveMeshToXA>
endif 
D3DXCreatePMeshFromStream proto stdcall  :ptr IStream, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXPMESH
D3DXCreateSkinInfo proto stdcall  :DWORD, :ptr D3DVERTEXELEMENT9, :DWORD, :ptr LPD3DXSKININFO
D3DXCreateSkinInfoFVF proto stdcall  :DWORD, :DWORD, :DWORD, :ptr LPD3DXSKININFO
ifdef __cplusplus 
;}
;extern "C"
;{
endif 
D3DXLoadMeshFromXof proto stdcall  :LPD3DXFILEDATA, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXMESH
D3DXLoadSkinMeshFromXof proto stdcall  :LPD3DXFILEDATA, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr LPD3DXSKININFO, :ptr LPD3DXMESH
D3DXCreateSkinInfoFromBlendedMesh proto stdcall  :LPD3DXBASEMESH, :DWORD, :ptr D3DXBONECOMBINATION, :ptr LPD3DXSKININFO
D3DXTessellateNPatches proto stdcall  :LPD3DXMESH, :ptr DWORD, :REAL4, :BOOL, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXGenerateOutputDecl proto stdcall  :ptr D3DVERTEXELEMENT9, :ptr D3DVERTEXELEMENT9
D3DXLoadPatchMeshFromXof proto stdcall  :LPD3DXFILEDATA, :DWORD, :LPDIRECT3DDEVICE9, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :PDWORD, :ptr LPD3DXPATCHMESH
D3DXRectPatchSize proto stdcall  :ptr REAL4, :ptr DWORD, :ptr DWORD
D3DXTriPatchSize proto stdcall  :ptr REAL4, :ptr DWORD, :ptr DWORD
D3DXTessellateRectPatch proto stdcall  :LPDIRECT3DVERTEXBUFFER9, :ptr REAL4, :ptr D3DVERTEXELEMENT9, :ptr D3DRECTPATCH_INFO, :LPD3DXMESH
D3DXTessellateTriPatch proto stdcall  :LPDIRECT3DVERTEXBUFFER9, :ptr REAL4, :ptr D3DVERTEXELEMENT9, :ptr D3DTRIPATCH_INFO, :LPD3DXMESH
D3DXCreateNPatchMesh proto stdcall  :LPD3DXMESH, :ptr LPD3DXPATCHMESH
D3DXCreatePatchMesh proto stdcall  :ptr D3DXPATCHINFO, :DWORD, :DWORD, :DWORD, :ptr D3DVERTEXELEMENT9, :LPDIRECT3DDEVICE9, :ptr LPD3DXPATCHMESH
D3DXValidPatchMesh proto stdcall  :LPD3DXPATCHMESH, :ptr DWORD, :ptr DWORD, :ptr LPD3DXBUFFER
D3DXGetFVFVertexSize proto stdcall  :DWORD
D3DXGetDeclVertexSize proto stdcall  :ptr D3DVERTEXELEMENT9, :DWORD
D3DXGetDeclLength proto stdcall  :ptr D3DVERTEXELEMENT9
D3DXDeclaratorFromFVF proto stdcall  :DWORD, :ptr D3DVERTEXELEMENT9
D3DXFVFFromDeclarator proto stdcall  :ptr D3DVERTEXELEMENT9, :ptr DWORD
D3DXWeldVertices proto stdcall  :LPD3DXMESH, :DWORD, :ptr D3DXWELDEPSILONS, :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr LPD3DXBUFFER
D3DXINTERSECTINFO	struct
FaceIndex	DWORD	?
U	REAL4	?
V	REAL4	?
Dist	REAL4	?
D3DXINTERSECTINFO	ends

LPD3DXINTERSECTINFO typedef ptr D3DXINTERSECTINFO

D3DXIntersect proto stdcall  :LPD3DXBASEMESH, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr BOOL, :ptr DWORD, :ptr REAL4, :ptr REAL4, :ptr REAL4, :ptr LPD3DXBUFFER, :ptr DWORD
D3DXIntersectSubset proto stdcall  :LPD3DXBASEMESH, :DWORD, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr BOOL, :ptr DWORD, :ptr REAL4, :ptr REAL4, :ptr REAL4, :ptr LPD3DXBUFFER, :ptr DWORD
D3DXSplitMesh proto stdcall  :LPD3DXMESH, :ptr DWORD, :DWORD, :DWORD, :ptr DWORD, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER
D3DXIntersectTri proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr REAL4, :ptr REAL4, :ptr REAL4
D3DXSphereBoundProbe proto stdcall  :ptr D3DXVECTOR3, :REAL4, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXBoxBoundProbe proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXComputeTangentFrame proto stdcall  :ptr ID3DXMesh, :DWORD
D3DXComputeTangentFrameEx proto stdcall  :ptr ID3DXMesh, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :REAL4, :REAL4, :REAL4, :ptr ptr ID3DXMesh, :ptr ptr ID3DXBuffer
D3DXComputeTangent proto stdcall  :LPD3DXMESH, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
D3DXConvertMeshSubsetToSingleStrip proto stdcall  :LPD3DXBASEMESH, :DWORD, :DWORD, :ptr LPDIRECT3DINDEXBUFFER9, :ptr DWORD
D3DXConvertMeshSubsetToStrips proto stdcall  :LPD3DXBASEMESH, :DWORD, :DWORD, :ptr LPDIRECT3DINDEXBUFFER9, :ptr DWORD, :ptr LPD3DXBUFFER, :ptr DWORD
D3DXOptimizeFaces proto stdcall  :LPCVOID, :DWORD, :DWORD, :BOOL, :ptr DWORD
D3DXOptimizeVertices proto stdcall  :LPCVOID, :DWORD, :DWORD, :BOOL, :ptr DWORD
ifdef __cplusplus 
;}
endif 
D3DXSHCOMPRESSQUALITYTYPE typedef DWORD
D3DXSHCQUAL_FASTLOWQUALITY = 1 
D3DXSHCQUAL_SLOWHIGHQUALITY = 2 
D3DXSHCQUAL_FORCE_DWORD = 7fffffffh 

D3DXSHGPUSIMOPT typedef DWORD
D3DXSHGPUSIMOPT_SHADOWRES256 = 1 
D3DXSHGPUSIMOPT_SHADOWRES512 = 0 
D3DXSHGPUSIMOPT_SHADOWRES1024 = 2 
D3DXSHGPUSIMOPT_SHADOWRES2048 = 3 
D3DXSHGPUSIMOPT_HIGHQUALITY = 4 
D3DXSHGPUSIMOPT_FORCE_DWORD = 7fffffffh 

D3DXSHMATERIAL	struct
Diffuse	D3DCOLORVALUE	<>
bMirror	BOOL	?
bSubSurf	BOOL	?
RelativeIndexOfRefraction	REAL4	?
Absorption	D3DCOLORVALUE	<>
ReducedScattering	D3DCOLORVALUE	<>
D3DXSHMATERIAL	ends

D3DXSHPRTSPLITMESHVERTDATA	struct
uVertRemap	DWORD	?
uSubCluster	DWORD	?
ucVertStatus	BYTE	?
D3DXSHPRTSPLITMESHVERTDATA	ends

D3DXSHPRTSPLITMESHCLUSTERDATA	struct
uVertStart	DWORD	?
uVertLength	DWORD	?
uFaceStart	DWORD	?
uFaceLength	DWORD	?
uClusterStart	DWORD	?
uClusterLength	DWORD	?
D3DXSHPRTSPLITMESHCLUSTERDATA	ends

proto_LPD3DXSHPRTSIMCB typedef proto stdcall :REAL4,:LPVOID
LPD3DXSHPRTSIMCB typedef ptr proto_LPD3DXSHPRTSIMCB
DEFINE_GUID(IID_ID3DXPRTBuffer,0f1827e47h,0a8h,49cdh,90h,8ch,9dh,11h,95h,5fh,87h,28h)
DEFINE_GUID(IID_ID3DXPRTCompBuffer,0a758d465h,0fe8dh,45adh,9ch,0f0h,0d0h,1eh,56h,26h,6ah,7h)
DEFINE_GUID(IID_ID3DXTextureGutterHelper,6f57e0ah,0bd95h,43f1h,0a3h,0dah,79h,1ch,0f6h,0cah,29h,7bh)
DEFINE_GUID(IID_ID3DXPRTEngine,0c3f4adbfh,0e6d2h,4b7bh,0bfh,0e8h,9eh,72h,8h,74h,6ah,0dfh)

;ID3DXTextureGutterHelper typedef ID3DXTextureGutterHelper

LPD3DXTEXTUREGUTTERHELPER typedef ptr ID3DXTextureGutterHelper

;ID3DXPRTBuffer typedef ID3DXPRTBuffer

LPD3DXPRTBUFFER typedef ptr ID3DXPRTBuffer

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXPRTBuffer>
DECLARE_INTERFACE_(ID3DXPRTBuffer,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ UINT,GetNumSamples 
STDMETHOD_ UINT,GetNumCoeffs 
STDMETHOD_ UINT,GetNumChannels 
STDMETHOD_ BOOL,IsTexture 
STDMETHOD_ UINT,GetWidth 
STDMETHOD_ UINT,GetHeight 
STDMETHOD Resize , :DWORD
STDMETHOD LockBuffer , :DWORD, :DWORD, :ptr ptr REAL4
STDMETHOD UnlockBuffer 
STDMETHOD ScaleBuffer , :REAL4
STDMETHOD AddBuffer , :LPD3DXPRTBUFFER
STDMETHOD AttachGH , :LPD3DXTEXTUREGUTTERHELPER
STDMETHOD ReleaseGH 
STDMETHOD EvalGH 
STDMETHOD ExtractTexture , :DWORD, :DWORD
STDMETHOD ExtractToMesh , :DWORD, :D3DDECLUSAGE, :DWORD
;}
DECLARE_INTERFACE__END

;ID3DXPRTCompBuffer typedef ID3DXPRTCompBuffer

LPD3DXPRTCOMPBUFFER typedef ptr ID3DXPRTCompBuffer

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXPRTCompBuffer>
DECLARE_INTERFACE_(ID3DXPRTCompBuffer,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ UINT,GetNumSamples 
STDMETHOD_ UINT,GetNumCoeffs 
STDMETHOD_ UINT,GetNumChannels 
STDMETHOD_ BOOL,IsTexture 
STDMETHOD_ UINT,GetWidth 
STDMETHOD_ UINT,GetHeight 
STDMETHOD_ UINT,GetNumClusters 
STDMETHOD_ UINT,GetNumPCA 
STDMETHOD NormalizeData 
STDMETHOD ExtractBasis , :DWORD, :ptr REAL4
STDMETHOD ExtractClusterIDs , :ptr DWORD
STDMETHOD ExtractPCA , :DWORD, :DWORD, :ptr REAL4
STDMETHOD ExtractTexture , :DWORD, :DWORD
STDMETHOD ExtractToMesh , :DWORD, :D3DDECLUSAGE, :DWORD
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXTextureGutterHelper>
DECLARE_INTERFACE_(ID3DXTextureGutterHelper,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ UINT,GetWidth 
STDMETHOD_ UINT,GetHeight 
STDMETHOD ApplyGuttersFloat , :ptr REAL4, :DWORD, :DWORD, :DWORD
STDMETHOD ApplyGuttersTex , :LPDIRECT3DTEXTURE9
STDMETHOD ApplyGuttersPRT , :LPD3DXPRTBUFFER
STDMETHOD GetFaceMap , :ptr DWORD
STDMETHOD GetBaryMap , :ptr D3DXVECTOR2
STDMETHOD GetTexelMap , :ptr D3DXVECTOR2
STDMETHOD GetGutterMap , :ptr BYTE
STDMETHOD SetFaceMap , :ptr DWORD
STDMETHOD SetBaryMap , :ptr D3DXVECTOR2
STDMETHOD SetTexelMap , :ptr D3DXVECTOR2
STDMETHOD SetGutterMap , :ptr BYTE
;}
DECLARE_INTERFACE__END

;ID3DXPRTEngine typedef ID3DXPRTEngine

LPD3DXPRTENGINE typedef ptr ID3DXPRTEngine

;#undef INTERFACE 
INTERFACE	EQU	<ID3DXPRTEngine>
DECLARE_INTERFACE_(ID3DXPRTEngine,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD SetMeshMaterials , :ptr ptr D3DXSHMATERIAL, :DWORD
STDMETHOD SetPerVertexAlbedo , :ptr , :DWORD, :DWORD
STDMETHOD SetPerTexelAlbedo , :LPDIRECT3DTEXTURE9
STDMETHOD GetVertexAlbedo , :ptr D3DXCOLOR, :DWORD
STDMETHOD SetPerTexelNormal , :LPDIRECT3DTEXTURE9
STDMETHOD ExtractPerVertexAlbedo , :LPD3DXMESH
STDMETHOD ResampleBuffer , :LPD3DXPRTBUFFER, :LPD3DXPRTBUFFER
STDMETHOD GetAdaptedMesh , :LPDIRECT3DDEVICE9, :ptr DWORD, :ptr DWORD, :ptr REAL4, :ptr LPD3DXMESH
STDMETHOD_ UINT,GetNumVerts 
STDMETHOD_ UINT,GetNumFaces 
STDMETHOD SetMinMaxIntersection , :REAL4, :REAL4
STDMETHOD RobustMeshRefine , :REAL4, :DWORD
STDMETHOD SetSamplingInfo , :DWORD
STDMETHOD ComputeDirectLightingSH , :DWORD
STDMETHOD ComputeDirectLightingSHAdaptive , :DWORD
STDMETHOD ComputeDirectLightingSHGPU , :LPDIRECT3DDEVICE9
STDMETHOD ComputeSS , :LPD3DXPRTBUFFER
STDMETHOD ComputeSSAdaptive , :LPD3DXPRTBUFFER
STDMETHOD ComputeBounce , :LPD3DXPRTBUFFER
STDMETHOD ComputeBounceAdaptive , :LPD3DXPRTBUFFER
STDMETHOD ComputeVolumeSamplesDirectSH , :DWORD
STDMETHOD ComputeVolumeSamples , :LPD3DXPRTBUFFER
STDMETHOD ComputeSurfSamplesDirectSH , :DWORD
STDMETHOD ComputeSurfSamplesBounce , :LPD3DXPRTBUFFER
STDMETHOD FreeSSData 
STDMETHOD FreeBounceData 
STDMETHOD ComputeLDPRTCoeffs , :LPD3DXPRTBUFFER
STDMETHOD ScaleMeshChunk , :DWORD, :REAL4, :LPD3DXPRTBUFFER
STDMETHOD MultiplyAlbedo , :LPD3DXPRTBUFFER
STDMETHOD SetCallBack , :LPD3DXSHPRTSIMCB, :REAL4, :LPVOID
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreatePRTBuffer proto stdcall  :DWORD, :DWORD, :DWORD, :ptr LPD3DXPRTBUFFER
D3DXCreatePRTBufferTex proto stdcall  :DWORD, :DWORD, :DWORD, :DWORD, :ptr LPD3DXPRTBUFFER
D3DXLoadPRTBufferFromFileA proto stdcall  :LPSTR, :ptr LPD3DXPRTBUFFER
D3DXLoadPRTBufferFromFileW proto stdcall  :LPWSTR, :ptr LPD3DXPRTBUFFER
ifdef UNICODE 
D3DXLoadPRTBufferFromFile	EQU	<D3DXLoadPRTBufferFromFileW>
else 
D3DXLoadPRTBufferFromFile	EQU	<D3DXLoadPRTBufferFromFileA>
endif 
D3DXSavePRTBufferToFileA proto stdcall  :LPSTR, :LPD3DXPRTBUFFER
D3DXSavePRTBufferToFileW proto stdcall  :LPWSTR, :LPD3DXPRTBUFFER
ifdef UNICODE 
D3DXSavePRTBufferToFile	EQU	<D3DXSavePRTBufferToFileW>
else 
D3DXSavePRTBufferToFile	EQU	<D3DXSavePRTBufferToFileA>
endif 
D3DXLoadPRTCompBufferFromFileA proto stdcall  :LPSTR, :ptr LPD3DXPRTCOMPBUFFER
D3DXLoadPRTCompBufferFromFileW proto stdcall  :LPWSTR, :ptr LPD3DXPRTCOMPBUFFER
ifdef UNICODE 
D3DXLoadPRTCompBufferFromFile	EQU	<D3DXLoadPRTCompBufferFromFileW>
else 
D3DXLoadPRTCompBufferFromFile	EQU	<D3DXLoadPRTCompBufferFromFileA>
endif 
D3DXSavePRTCompBufferToFileA proto stdcall  :LPSTR, :LPD3DXPRTCOMPBUFFER
D3DXSavePRTCompBufferToFileW proto stdcall  :LPWSTR, :LPD3DXPRTCOMPBUFFER
ifdef UNICODE 
D3DXSavePRTCompBufferToFile	EQU	<D3DXSavePRTCompBufferToFileW>
else 
D3DXSavePRTCompBufferToFile	EQU	<D3DXSavePRTCompBufferToFileA>
endif 
D3DXCreatePRTCompBuffer proto stdcall  :D3DXSHCOMPRESSQUALITYTYPE, :DWORD, :DWORD, :LPD3DXSHPRTSIMCB, :LPVOID, :LPD3DXPRTBUFFER, :ptr LPD3DXPRTCOMPBUFFER
D3DXCreateTextureGutterHelper proto stdcall  :DWORD, :DWORD, :LPD3DXMESH, :REAL4, :ptr LPD3DXTEXTUREGUTTERHELPER
D3DXCreatePRTEngine proto stdcall  :LPD3DXMESH, :ptr DWORD, :BOOL, :LPD3DXMESH, :ptr LPD3DXPRTENGINE
D3DXConcatenateMeshes proto stdcall  :ptr LPD3DXMESH, :DWORD, :DWORD, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DVERTEXELEMENT9, :LPDIRECT3DDEVICE9, :ptr LPD3DXMESH
D3DXSHPRTCompSuperCluster proto stdcall  :ptr DWORD, :LPD3DXMESH, :DWORD, :DWORD, :ptr DWORD, :ptr DWORD
D3DXSHPRTCompSplitMeshSC proto stdcall  :ptr DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :LPVOID, :BOOL, :DWORD, :ptr LPD3DXBUFFER, :ptr DWORD, :BOOL, :ptr LPD3DXBUFFER, :ptr LPD3DXBUFFER, :ptr DWORD, :ptr DWORD, :ptr D3DXSHPRTSPLITMESHCLUSTERDATA
ifdef __cplusplus 
;}
endif 
DEFINE_GUID(DXFILEOBJ_XSkinMeshHeader,3cf169ceh,0ff7ch,44abh,93h,0c0h,0f7h,8fh,62h,0d1h,72h,0e2h)
DEFINE_GUID(DXFILEOBJ_VertexDuplicationIndices,0b8d65549h,0d7c9h,4995h,89h,0cfh,53h,0a9h,0a8h,0b0h,31h,0e3h)
DEFINE_GUID(DXFILEOBJ_FaceAdjacency,0a64c844ah,0e282h,4756h,8bh,80h,25h,0ch,0deh,4h,39h,8ch)
DEFINE_GUID(DXFILEOBJ_SkinWeights,6f0d123bh,0bad2h,4167h,0a0h,0d0h,80h,22h,4fh,25h,0fah,0bbh)
DEFINE_GUID(DXFILEOBJ_Patch,0a3eb5d44h,0fc22h,429dh,9ah,0fbh,32h,21h,0cbh,97h,19h,0a6h)
DEFINE_GUID(DXFILEOBJ_PatchMesh,0d02c95cch,0edbah,4305h,9bh,5dh,18h,20h,0d7h,70h,4bh,0bfh)
DEFINE_GUID(DXFILEOBJ_PatchMesh9,0b9ec94e1h,0b9a6h,4251h,0bah,18h,94h,89h,3fh,2h,0c0h,0eah)
DEFINE_GUID(DXFILEOBJ_PMInfo,0b6c3e656h,0ec8bh,4b92h,9bh,62h,68h,16h,59h,52h,29h,47h)
DEFINE_GUID(DXFILEOBJ_PMAttributeRange,917e0427h,0c61eh,4a14h,9ch,64h,0afh,0e6h,5fh,9eh,98h,44h)
DEFINE_GUID(DXFILEOBJ_PMVSplitRecord,574ccc14h,0f0b3h,4333h,82h,2dh,93h,0e8h,0a8h,0a0h,8eh,4ch)
DEFINE_GUID(DXFILEOBJ_FVFData,0b6e70a0eh,8ef9h,4e83h,94h,0adh,0ech,0c8h,0b0h,0c0h,48h,97h)
DEFINE_GUID(DXFILEOBJ_VertexElement,0f752461ch,1e23h,48f6h,0b9h,0f8h,83h,50h,85h,0fh,33h,6fh)
DEFINE_GUID(DXFILEOBJ_DeclData,0bf22e553h,292ch,4781h,9fh,0eah,62h,0bdh,55h,4bh,0ddh,93h)
DEFINE_GUID(DXFILEOBJ_EffectFloats,0f1cfe2b3h,0de3h,4e28h,0afh,0a1h,15h,5ah,75h,0ah,28h,2dh)
DEFINE_GUID(DXFILEOBJ_EffectString,0d55b097eh,0bdb6h,4c52h,0b0h,3dh,60h,51h,0c8h,9dh,0eh,42h)
DEFINE_GUID(DXFILEOBJ_EffectDWord,622c0ed0h,956eh,4da9h,90h,8ah,2ah,0f9h,4fh,3ch,0e7h,16h)
DEFINE_GUID(DXFILEOBJ_EffectParamFloats,3014b9a0h,62f5h,478ch,9bh,86h,0e4h,0ach,9fh,4eh,41h,8bh)
DEFINE_GUID(DXFILEOBJ_EffectParamString,1dbc4c88h,94c1h,46eeh,90h,76h,2ch,28h,81h,8ch,94h,81h)
DEFINE_GUID(DXFILEOBJ_EffectParamDWord,0e13963bch,0ae51h,4c5dh,0b0h,0fh,0cfh,0a3h,0a9h,0d9h,7ch,0e5h)
DEFINE_GUID(DXFILEOBJ_EffectInstance,0e331f7e4h,559h,4cc2h,8eh,99h,1ch,0ech,16h,57h,92h,8fh)
DEFINE_GUID(DXFILEOBJ_AnimTicksPerSecond,9e415a43h,7ba6h,4a73h,87h,43h,0b7h,3dh,47h,0e8h,84h,76h)
DEFINE_GUID(DXFILEOBJ_CompressedAnimationSet,7f9b00b3h,0f125h,4890h,87h,6eh,1ch,42h,0bfh,69h,7ch,4dh)
;#pragma pack ( push , 1 ) 
XFILECOMPRESSEDANIMATIONSET	struct
CompressedBlockSize	DWORD	?
TicksPerSec	REAL4	?
PlaybackType	DWORD	?
BufferLength	DWORD	?
XFILECOMPRESSEDANIMATIONSET	ends

;#pragma pack ( pop ) 
XSKINEXP_TEMPLATES	EQU	<>
XEXTENSIONS_TEMPLATES EQU <>
endif 

;--- errors: 0
;--- end of file ---
