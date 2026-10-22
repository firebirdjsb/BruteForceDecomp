/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6398249B9E64D4075368643FDE2F47B8ED52154CE48CC4F4EE9F1049AEF4C1B2
 * Entry: 0x0022efe0, Ghidra index: 7731, label: FUN_0022efe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022efe0(void)

{
  int in_EAX;
  
  if ((*(byte *)(*(int *)(in_EAX + 8) + 0xc50) & 0x10) != 0) {
    *(undefined4 *)(in_EAX + 0x218) = 0;
    *(undefined4 *)(in_EAX + 0x28c) = 0;
    *(undefined4 *)(in_EAX + 0x21c) = 0;
    *(byte *)(in_EAX + 0x224) = *(byte *)(in_EAX + 0x224) & 0xfb;
    FUN_0022f770();
    return;
  }
  if ((*(byte *)(in_EAX + 0x224) & 4) == 0) {
    *(byte *)(in_EAX + 0x224) = *(byte *)(in_EAX + 0x224) & 0xfe;
    if (*(int *)(in_EAX + 0x360) != 0) {
      FUN_0008f6a0(0);
    }
  }
  else {
    FUN_0022f2a0();
    if (*(int *)(in_EAX + 0x28c) == 0) {
      FUN_0022f770();
      return;
    }
  }
  return;
}
