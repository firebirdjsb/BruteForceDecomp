/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EAA914444F6A79725608E89D7B198D4E6C1FDE8767CE3DF747B4E04059B3E47
 * Entry: 0x0031c513, Ghidra index: 12334, label: FUN_0031c513
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c513(void)

{
  int in_ECX;
  
  FUN_003118f0();
  FUN_0031c3c9(1);
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_003148b7(*(int *)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_003148b7(*(int *)(in_ECX + 0x20));
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  FUN_00311923();
  return;
}
