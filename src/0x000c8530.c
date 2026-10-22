/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C27922540C69065501BF57D25AEFD0C64252F897E962677D39375F03F2EB08DA
 * Entry: 0x000c8530, Ghidra index: 2463, label: FUN_000c8530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c8530(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int in_EDX;
  
  iVar1 = 0;
  piVar2 = (int *)(in_EDX + 0x34);
  do {
    if (*piVar2 == in_EAX) {
      if ((iVar1 != 0) && (*(int *)(in_EDX + iVar1 * 8 + 0x34) != 0)) {
        FUN_0008f6a0(0);
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 5);
  return;
}
