/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8F986B0B097643657E973E27F4C3E2852826E906A8F27667A4A6F95EB302AD4
 * Entry: 0x00106c30, Ghidra index: 3364, label: FUN_00106c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00106c30(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_d4 [212];
  
  FUN_00106660();
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d0))(local_d4);
  if (cVar1 != '\0') {
    FUN_001067a0();
    uVar2 = FUN_002ebf10();
    return uVar2;
  }
  return 0;
}
