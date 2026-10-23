/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E43DD3BAB4A68C2BB452DF666A96886F5ACFF39991F56905CD505D9978F07882
 * Entry: 0x001050a0, Ghidra index: 3336, label: FUN_001050a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_001050a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EDI;
  
  piVar2 = (int *)FUN_00103000();
  iVar1 = *piVar2;
  *param_1 = iVar1;
  if (iVar1 != -0x1602dc1f) {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar2 + 4))(*(undefined4 *)(unaff_EDI + 4));
    return 1;
  }
  uVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x268))();
  if (uVar3 < 10) {
    FUN_00101c80();
    return 1;
  }
  FUN_00101d30();
  return 1;
}
