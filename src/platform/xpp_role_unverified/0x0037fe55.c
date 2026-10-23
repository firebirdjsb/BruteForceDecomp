/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9732B6C21CB134C0AA57DB232A979A0D6804796434B36689A1121304C97E4123
 * Entry: 0x0037fe55, Ghidra index: 13519, label: FUN_0037fe55
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f660;
void FUN_0037fe55(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(int *)(param_1 + 8) = DAT_0040f660;
  DAT_0040f660 = param_1;
  return;
}
