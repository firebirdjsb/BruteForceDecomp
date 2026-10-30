/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB59D5BC3AF4B4AD47C7A3DE12B70A4ED4B01427FD7BA279B015C6BACA5CF8FE
 * Entry: 0x00126a90, Ghidra index: 3719, label: FUN_00126a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00126a90(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1f8);
  if ((((iVar1 != 0x14) && (iVar1 != 0x18)) && (iVar1 != 0x15)) && (iVar1 != 0x16)) {
    return 0;
  }
  return 1;
}
