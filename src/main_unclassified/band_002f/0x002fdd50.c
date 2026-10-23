/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5723EE383A895054EC10CC81CCE80D31BF459A99C6CC57A6730B1DE82673CA99
 * Entry: 0x002fdd50, Ghidra index: 10995, label: FUN_002fdd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fdd50(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  float *in_ECX;
  int iVar3;
  
  if (0x20 < param_1) {
    iVar3 = param_1 >> 2;
    FUN_002fab20(in_EAX + (param_3 - iVar3) * 4);
    if (param_1 < 0x201) {
      if (iVar3 < 0x21) {
        FUN_002fd1d0();
      }
      else {
        FUN_002fd240(param_1);
      }
    }
    else {
      FUN_002fdae0(iVar3);
      FUN_002fdb80(iVar3,in_ECX + iVar3,param_3);
      FUN_002fdae0(iVar3,in_ECX + iVar3 * 2,param_3);
      FUN_002fdae0(iVar3,in_ECX + iVar3 * 3,param_3);
    }
    FUN_002f97e0(param_2);
    return;
  }
  if (8 < param_1) {
    if (param_1 == 0x20) {
      FUN_002fbce0();
      FUN_002fa0c0();
      return;
    }
    FUN_002fc910();
    FUN_002fa240();
    return;
  }
  if (param_1 == 8) {
    FUN_002fcdd0();
    return;
  }
  if (param_1 == 4) {
    fVar1 = *in_ECX;
    fVar2 = in_ECX[1];
    *in_ECX = *in_ECX + in_ECX[2];
    in_ECX[1] = in_ECX[3] + in_ECX[1];
    in_ECX[2] = fVar1 - in_ECX[2];
    in_ECX[3] = fVar2 - in_ECX[3];
  }
  return;
}
