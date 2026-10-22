/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CAA6C80CCA7DE3A2C63C749AF4AFAB8959F5B5DAA04BF4C5FD850910A2EBF42
 * Entry: 0x002ad670, Ghidra index: 9687, label: FUN_002ad670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038f7b0;
extern uint32_t PTR_LAB_0038f774;
void FUN_002ad670(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = &PTR_FUN_0038f7b0;
  *(undefined1 *)(unaff_EDI + 1) = local_1;
  iVar1 = FUN_002ad910(unaff_EDI + 1);
  unaff_EDI[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(undefined4 *)(unaff_EDI[2] + 4) = unaff_EDI[2];
  *(undefined4 *)unaff_EDI[2] = unaff_EDI[2];
  *(undefined4 *)(unaff_EDI[2] + 8) = unaff_EDI[2];
  unaff_EDI[3] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[5] = 0;
  *unaff_EDI = &PTR_LAB_0038f774;
  unaff_EDI[7] = 1;
  return;
}
