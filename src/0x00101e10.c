/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 519A90DAFFF22C76E0F9360CCF503A396CF85FFEEC373BA5CE8E47D6AFABEF3C
 * Entry: 0x00101e10, Ghidra index: 3256, label: FUN_00101e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_00101e10(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int unaff_retaddr;
  
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x198))(param_2);
  if ((cVar1 != '\0') && (*(int *)(unaff_retaddr + 4) != 0)) {
    FUN_00100d10();
  }
  return cVar1;
}
