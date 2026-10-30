/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFF19C769DDD7EA96C60266D64D39731C2D2536A12C9F63881969357B045C123
 * Entry: 0x0008c6f0, Ghidra index: 1701, label: FUN_0008c6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008c6f0(undefined4 param_1)

{
  int iVar1;
  int *unaff_ESI;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = (**(code **)(*unaff_ESI + 8))(iVar2);
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x6c) & 8) == 0) {
        FUN_0008a2b0(param_1);
      }
      else {
        (**(code **)(*unaff_ESI + 0x38))(iVar2);
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x144))(iVar2);
        FUN_00115d50();
        (**(code **)(*unaff_ESI + 0x1c))();
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  return;
}
