/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A171C5F20C9D4F88AF0764305FCAB72EA2F76DE7E06A3373C009E5E217F29491
 * Entry: 0x0010d970, Ghidra index: 3499, label: FUN_0010d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_0010d970(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 local_4;
  
  iVar1 = *(int *)(unaff_EDI + 0xc0);
  iVar2 = *(int *)(unaff_EDI + 0xbc);
  *(bool *)(unaff_EDI + 0x91) = *(char *)(unaff_EDI + 0x91) == '\0';
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_0010de90(unaff_EDI);
  }
  local_4 = 0xf06bc0ab;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&local_4);
  return 1;
}
