/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAC1341DEC443C0C5826C5F904473D4BD51F446D738F0EC7A0AB763DEF22DCC9
 * Entry: 0x00104a50, Ghidra index: 3326, label: FUN_00104a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte FUN_00104a50(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = ~(*(byte *)(param_1 + 0x114) >> 1) & 1;
  if (bVar4 == 0) {
    fVar1 = *(float *)(param_1 + 0x110) * 10.0;
    iVar2 = (int)fVar1;
    if ((float)iVar2 < fVar1 == ((float)iVar2 == fVar1)) {
      iVar2 = iVar2 + -1;
    }
    fVar1 = (param_2 + *(float *)(param_1 + 0x110)) * 10.0;
    iVar3 = (int)fVar1;
    if ((float)iVar3 < fVar1 == ((float)iVar3 == fVar1)) {
      iVar3 = iVar3 + -1;
    }
    if ((float)iVar3 != (float)iVar2) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      if (*(int *)(param_1 + 0x108) < 0xe) {
        FUN_001045a0(param_1,*(int *)(param_1 + 0x108));
        FUN_001046c0(param_1,*(int *)(param_1 + 0x108) + -2);
        FUN_00104800(param_1,*(int *)(param_1 + 0x108) + -4);
      }
      else {
        bVar4 = 1;
      }
    }
    *(float *)(param_1 + 0x110) = param_2 + *(float *)(param_1 + 0x110);
  }
  return bVar4;
}
