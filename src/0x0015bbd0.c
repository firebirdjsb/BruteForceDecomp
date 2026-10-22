/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A378F0AB2F7CE67FD4840C5A92E0828B3731596CB14539B3F33FCC55739FDDF
 * Entry: 0x0015bbd0, Ghidra index: 4538, label: FUN_0015bbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015bbd0(void)

{
  int *in_EAX;
  
  (**(code **)(*in_EAX + 0x10))();
  (**(code **)(*in_EAX + 0x20))(in_EAX,0);
  if (in_EAX != (int *)0x0) {
    (**(code **)(*in_EAX + 8))(in_EAX);
  }
  return;
}
