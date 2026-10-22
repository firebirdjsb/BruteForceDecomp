/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77877879F519B2A2434C284FA1805FC7B287C2C4F2BD62BE26478E385698E884
 * Entry: 0x002fdae0, Ghidra index: 10992, label: FUN_002fdae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fdae0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_002fb3a0(param_1,param_4 + (param_3 + (param_1 >> 2) * -2) * 4);
  iVar2 = param_1 >> 2;
  while (iVar1 = iVar2, 0x200 < param_1) {
    FUN_002fdae0(iVar1,param_2,param_3,param_4);
    FUN_002fdb80(iVar1,param_2 + iVar1 * 4,param_3,param_4);
    FUN_002fdae0(iVar1,param_2 + iVar1 * 8,param_3,param_4);
    param_2 = param_2 + iVar1 * 0xc;
    FUN_002fb3a0(iVar1,param_4 + (param_3 + (iVar1 >> 2) * -2) * 4);
    iVar2 = iVar1 >> 2;
    param_1 = iVar1;
  }
  FUN_002fd240(param_1,param_2,param_3,param_4);
  return;
}
