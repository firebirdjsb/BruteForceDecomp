/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E68CEC939DACD1A84AD3A92B9D76BD94BFECBCC8BB47E218F52D7D032795657
 * Entry: 0x0004c970, Ghidra index: 638, label: FUN_0004c970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0004c970(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar2 = (**(code **)(*in_ECX + 0xf4))();
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x42c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00055aa0();
    }
    if ((*(int *)(iVar2 + 0x40c) == 0) ||
       (*(int *)(iVar2 + 0x410) - *(int *)(iVar2 + 0x40c) >> 2 == 0)) {
      iVar2 = 0;
    }
    else {
      piVar3 = (int *)FUN_0001ba10();
      iVar2 = *piVar3;
    }
    if ((iVar4 == 0) || (iVar2 == 0)) {
      return 0;
    }
    if ((param_1 == 0x118bf2e7) || (param_1 == 0xfe4bc988)) {
      uVar1 = FUN_00023110();
      return uVar1;
    }
    fVar6 = (float10)FUN_0003a990();
    fVar7 = (float10)FUN_0003a990();
    if ((float)fVar6 < 0.0) {
      return 0;
    }
    if ((float)fVar7 < 0.0) {
      return 0;
    }
    if (param_1 < 0x1eab5bca) {
      if ((param_1 == 0x1eab5bc9) || (param_1 == 0x8267484)) goto LAB_0004ca70;
      bVar5 = param_1 == 0x13cd5faa;
    }
    else {
      bVar5 = param_1 == 0xfc443c28;
    }
    if (bVar5) {
LAB_0004ca70:
      if ((float)fVar6 <= (float)fVar7) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}
