/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E33098FA09F98C108AD1E93DB6256C536458D654E3511393A5947A2BCD57C3F7
 * Entry: 0x000b0d50, Ghidra index: 2100, label: FUN_000b0d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000b0d50(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 4));
  }
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  FUN_000b0db0();
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc;
}
