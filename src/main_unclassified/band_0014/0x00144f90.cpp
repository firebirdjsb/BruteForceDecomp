/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8ED7D1D1AEC1A179DAFB539F648B4D9DD4F89CD5A92268385E037D4337E68E8F
 * Entry: 0x00144f90, Ghidra index: 4184, label: FUN_00144f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_00144f90(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(in_EAX + 0x1c) + 0x24) + 0x20);
  if (((iVar1 != 0) && (-1 < iVar1)) && (iVar1 < 0x19)) {
    return *(undefined4 *)(DAT_00469948 + 0x250 + iVar1 * 4);
  }
  return 0;
}
