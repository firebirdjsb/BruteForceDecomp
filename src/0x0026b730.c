/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12CC456FC8D2D696BD4C4619481403B3505B59937D74FFFABBBDE25DB9899250
 * Entry: 0x0026b730, Ghidra index: 8765, label: FUN_0026b730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0026b730(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0026b210();
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
    *param_1 = uVar2;
  }
  return;
}
