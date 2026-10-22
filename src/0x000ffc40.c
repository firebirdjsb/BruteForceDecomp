/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A6E7BF30A012345B1E118AFCBB0BEF594895FE090934D98D7B99FAACF3EC14E
 * Entry: 0x000ffc40, Ghidra index: 3204, label: FUN_000ffc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ffc40(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = FUN_000ffb60(in_EAX,&local_c,&local_14,local_4,local_8,&local_10);
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
