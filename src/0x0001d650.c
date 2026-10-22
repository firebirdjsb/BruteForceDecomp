/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EA58AD633ED1EDD0A1C912F2419033EA755D9DB4A4E3F5F73E7C3193FFCFD5B
 * Entry: 0x0001d650, Ghidra index: 136, label: FUN_0001d650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
void FUN_0001d650(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00307240u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0001d700(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
