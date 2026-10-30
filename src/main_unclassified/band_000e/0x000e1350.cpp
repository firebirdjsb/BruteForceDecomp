/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A6A8C75B7147CB50885EF94D7E4DBB2D21F08C9D8DF8382FC50B3A817BEBDED
 * Entry: 0x000e1350, Ghidra index: 2768, label: FUN_000e1350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e1350(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  FUN_000e1500();
  if (*(int *)(in_EAX + 0x114) != 0) {
    FUN_000e2ea0(*(undefined4 *)(in_EAX + 0x118),in_EAX + 0x110,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x114));
  }
  *(undefined4 *)(in_EAX + 0x114) = 0;
  *(undefined4 *)(in_EAX + 0x118) = 0;
  *(undefined4 *)(in_EAX + 0x11c) = 0;
  FUN_000e1f40(in_EAX + 0x100);
  FUN_000e1440();
  FUN_000d6970();
  return;
}
