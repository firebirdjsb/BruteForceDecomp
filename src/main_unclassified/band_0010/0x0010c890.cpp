/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92B82BFEB7EB85A2F74847ED358E37002271AAF93E3C97F97B2EC8A26CE30C9A
 * Entry: 0x0010c890, Ghidra index: 3472, label: FUN_0010c890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern void FUN_0010c7d0(void);
void FUN_0010c890(void)

{
  int in_EAX;
  uint uVar1;
  int *unaff_EDI;
  
  for (uVar1 = 0;
      (*(int *)(in_EAX + 100) != 0 &&
      (uVar1 < (uint)(*(int *)(in_EAX + 0x68) - *(int *)(in_EAX + 100) >> 2))); uVar1 = uVar1 + 1) {
    if (*(int *)(*(int *)(*(int *)(in_EAX + 100) + uVar1 * 4) + 0x24) == *unaff_EDI) {
      FUN_0010c7d0();
      return;
    }
  }
  return;
}
