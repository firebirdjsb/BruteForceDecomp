/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C0930866130358DB878423DE8A6AA9A8A9156509FB068133A459F85B0309F96
 * Entry: 0x003746af, Ghidra index: 13429, label: FUN_003746af
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00374721) */
/* WARNING: Removing unreachable block (ram,0x00374713) */

undefined4 FUN_003746af(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 *unaff_ESI;
  uint uVar4;
  
  iVar1 = *in_EAX;
  FUN_00374668(in_EAX,0);
  iVar2 = in_EAX[0x58];
  in_EAX[0x58] = iVar2 + 1;
  uVar4 = 2;
  if (param_2 != 2) {
    if (param_2 == 3) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0x3d;
    }
  }
  iVar3 = iVar2 * 0x10 + iVar1;
  *(undefined4 *)(iVar3 + 0x700008) = 3;
  *(undefined4 *)(iVar3 + 0x70000c) = 3;
  *(uint *)((iVar2 + 0x70000) * 0x10 + iVar1) = uVar4 | 0xb000;
  *(undefined4 *)(iVar3 + 0x700004) = param_4;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  *(undefined2 *)((int)unaff_ESI + 6) = 0;
  *unaff_ESI = param_1;
  unaff_ESI[2] = param_2;
  unaff_ESI[3] = iVar2;
  return 1;
}
