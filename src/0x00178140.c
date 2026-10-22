/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4A4E765ABD63423BFD7064023908861EA5E200B1E1A06FCF0D63324C5A784BE
 * Entry: 0x00178140, Ghidra index: 4961, label: FUN_00178140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00178140(void)

{
  int *in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = D3D8LTCG__D3DDevice_GetBackBuffer2_0__LTCG_eax1();
  D3D8LTCG__D3D_BlockOnResource_0();
  FUN_00373f00(uVar1,0,0,&local_14,&local_10,local_4,local_8,local_c);
  iVar2 = FUN_00359280(*in_EAX,local_14 | 0xf0000000,local_10,*(undefined4 *)(*in_EAX + 4),in_EAX[3]
                       ,in_EAX[4],0x80080003);
  D3D8LTCG__D3DResource_Release(uVar1);
  return iVar2 == 0;
}
