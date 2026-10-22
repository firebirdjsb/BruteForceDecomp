/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32B9E4CBFB16FEAC3D416178BF1E14D293A257046C554CDF78D31BC41F4B678F
 * Entry: 0x002ecf9c, Ghidra index: 10681, label: FUN_002ecf9c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8d5c;
extern uint32_t DAT_004a8d60;
extern uint32_t DAT_004a8e64;
extern uint32_t DAT_004a8e80;
extern uint32_t _DAT_004a8d58;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ecf9c(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004a8d60;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = &DAT_004a8e80;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004a8e64 = 0;
  DAT_004a8d5c = 0;
  _DAT_004a8d58 = 0;
  return;
}
