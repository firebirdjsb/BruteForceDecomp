/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31B76E509542356D19B9378FCDD02A208EC153C71920D2AB2672F9D041FB619C
 * Entry: 0x0027b290, Ghidra index: 8962, label: FUN_0027b290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s___f__f__f___00404fb0[];
undefined4 FUN_0027b290(int *param_1,int param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint unaff_EBX;
  uint uVar4;
  float fStack_18;
  float fStack_14;
  
  fVar1 = (float)(**(code **)(param_1[-2] + 0x14))(param_1 + -2);
  uVar2 = (**(code **)(*param_1 + 0x14))(param_1);
  if ((fVar1 != 0.0) && (uVar2 <= param_3)) {
    uVar2 = FUN_002eaa86();
    FUN_0028c910();
    uVar4 = 0;
    if (unaff_EBX != 0) {
      do {
        (**(code **)(param_1[-2] + 0x18))();
        iVar3 = FUN_002eaa86(uVar2 + param_2,s___f__f__f___00404fb0,(double)fVar1,(double)fStack_18,
                             (double)fStack_14);
        uVar2 = uVar2 + iVar3;
        if (param_3 <= uVar2) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < unaff_EBX);
    }
    if (unaff_EBX == uVar4) {
      return 0;
    }
  }
  return 0x80004005;
}
