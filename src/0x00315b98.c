/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C4C4169C5A0CE88AE9319F2A91DB4AC82E0DF2924783CBF0A3FBDACF51B5C8A
 * Entry: 0x00315b98, Ghidra index: 12115, label: FUN_00315b98
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315b98(void)

{
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_8;
  
  FUN_003118f0();
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
  puVar1 = (undefined4 *)(in_ECX + 0x6c0);
  local_8 = 3;
  do {
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      FUN_00318851(0);
    }
    puVar1 = puVar1 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + -1;
  FUN_0031bf8d();
  FUN_00311923();
  return;
}
