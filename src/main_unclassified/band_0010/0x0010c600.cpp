/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 016584774D8151173DD8BB392D9943D4EEF4D9ADB805F95D0BA92E4AE3120B0E
 * Entry: 0x0010c600, Ghidra index: 3468, label: FUN_0010c600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010c600(undefined4 param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  
  if ((*(byte *)(in_ECX + 0x28) & 1) == 0) {
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(undefined4 *)(in_ECX + 0x94) = 0x3f800000;
  }
  else {
    FUN_000b2070(param_1);
  }
  puVar1 = *(undefined4 **)(in_ECX + 100);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x68)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x3c))(param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(in_ECX + 0x68));
  }
  return;
}
