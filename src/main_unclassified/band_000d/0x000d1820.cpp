/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60375A78846EF2FF3BD93D9F4C3932BA7ED4A5818DF6902CF196B3E9D4B17003
 * Entry: 0x000d1820, Ghidra index: 2600, label: FUN_000d1820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d1820(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) <= *(int *)(in_ECX + 0xc)) {
    iVar1 = *(int *)(in_ECX + 0x10) + 1;
    *(int *)(in_ECX + 0x10) = iVar1;
    if (*(int *)(in_ECX + 0x1c) <= iVar1) {
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x1c);
      return 0;
    }
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0x14);
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  *(int *)(in_ECX + 0xc) = iVar1 + 1;
  return (**(int **)(*(int *)(in_ECX + 4) + 0x20) * *(int *)(in_ECX + 0x10) + iVar1) * 0x40 +
         *(int *)(*(int *)(in_ECX + 4) + 0x18);
}
