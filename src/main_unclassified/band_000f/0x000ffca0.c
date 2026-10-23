/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B328A8796D7BDD5855FF539F1AE03FC58EEB0C96F37510B0EFF117962851D504
 * Entry: 0x000ffca0, Ghidra index: 3205, label: FUN_000ffca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ffca0(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = FUN_000ffb60(in_EAX,&local_c,local_4,&local_14,&local_10,local_8);
  if ((char)uVar1 != '\0') {
    if (local_14 == -1) {
      local_14 = local_10;
    }
    if (local_14 != local_c) {
      uVar1 = FUN_000ffdc0();
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}
