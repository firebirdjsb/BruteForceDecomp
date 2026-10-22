/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A2FB54E1D94B15C1AE91477C343AC8D82A29C0225A128A86AE4D40296CCEDB5
 * Entry: 0x000f6b10, Ghidra index: 3086, label: FUN_000f6b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000f6b10(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xa8);
  iVar3 = (in_EAX >> 8) << 8;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == -0x67193c3) {
      iVar2 = FUN_000f68f0(iVar2);
      return iVar2;
    }
    if (iVar1 == -0x66b6d80) {
      return (in_EAX >> 8) << 8;
    }
    if (iVar1 == 0x1c1b8b3b) {
      iVar3 = FUN_000f6990();
    }
  }
  return iVar3;
}
