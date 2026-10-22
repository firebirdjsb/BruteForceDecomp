/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 393675F137AD31E3E1C99C0F3DF13E070BC052672600D5A9BDEAEC0D215337FD
 * Entry: 0x002fdc20, Ghidra index: 10994, label: FUN_002fdc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fdc20(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  float *in_ECX;
  int iVar3;
  
  if (0x20 < param_1) {
    iVar3 = param_1 >> 2;
    FUN_002fa2c0(in_EAX + (param_3 - iVar3) * 4);
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
    FUN_002f9090(param_2);
    return;
  }
  if (8 < param_1) {
    if (param_1 == 0x20) {
      FUN_002fbce0();
      FUN_002f9fe0();
      return;
    }
    FUN_002fc910();
    FUN_002fa1f0();
    return;
  }
  if (param_1 == 8) {
    FUN_002fcd30();
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
