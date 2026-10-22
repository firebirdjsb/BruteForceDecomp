/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E36F0422801410946CC5B9113BA510DE4E5579C5242E467691BBD41C718EE955
 * Entry: 0x00126690, Ghidra index: 3710, label: FUN_00126690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00126690(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  iVar1 = FUN_0017beb0(unaff_EBX);
  if ((iVar1 != 0) && (unaff_ESI != 0)) {
    uVar2 = FUN_00178e50(&stack0xfffffff8);
  }
  *(undefined4 *)(unaff_ESI + 0x820) = uVar2;
  if (param_2 != '\0') {
    _param_2 = 0.0;
    iVar1 = FUN_0017beb0(unaff_EBX);
    if (iVar1 != 0) {
      fVar3 = (float10)(**(code **)(*DAT_00469940 + 100))(iVar1 + 4);
      _param_2 = (float)fVar3;
    }
    FUN_00141100(_param_2);
    *(byte *)(unaff_ESI + 0x818) = *(byte *)(unaff_ESI + 0x818) | 4;
  }
  return;
}
