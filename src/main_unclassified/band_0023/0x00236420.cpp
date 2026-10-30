/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17A2449970447D06DF21B67CF52D95F2A9039D474B1E98D6653CA8212CE0F0D1
 * Entry: 0x00236420, Ghidra index: 7829, label: FUN_00236420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
undefined4 FUN_00236420(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(*(int *)(param_2 + 0x10) + 100) != 0)) {
    return 0;
  }
  FUN_00235c00(param_1);
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(*(int *)(param_2 + 0x10) + 100) = unaff_ESI;
    (**(code **)(*DAT_00443310 + 0x74))(DAT_00443310,param_2);
    iVar1 = unaff_ESI;
    if (*(int *)(unaff_ESI + 0x10) != 0) {
      iVar1 = *(int *)(unaff_ESI + 8);
    }
    FUN_00235da0(iVar1);
  }
  FUN_001611d0();
  if ((*(int *)(unaff_ESI + 0x10) == 0) || (*(int *)(*(int *)(unaff_ESI + 0x10) + 100) == 0)) {
    (**(code **)(*DAT_00443310 + 0x70))(DAT_00443310);
  }
  return 1;
}
