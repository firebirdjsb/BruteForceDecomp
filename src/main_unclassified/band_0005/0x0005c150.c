/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFADD8E0DC308826E77EDF6866C46E6F451390F1F667063707BEDCFBF8D57BF4
 * Entry: 0x0005c150, Ghidra index: 945, label: FUN_0005c150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005c150(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int unaff_EDI;
  
  uVar1 = *(uint *)(in_ECX + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005c162;
    iVar4 = 0;
    while (*(int *)(iVar4 + 4) != unaff_EDI) {
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) {
        return;
      }
LAB_0005c162:
      iVar4 = *(int *)(*(int *)(in_ECX + 8) + uVar3 * 4);
    }
    if (uVar3 != 0xffffffff) {
      uVar2 = *(undefined4 *)(unaff_EDI + 0x5a0);
      *(undefined4 *)(unaff_EDI + 0x5a0) = 0;
      if (uVar3 < *(uint *)(in_ECX + 4)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 8) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      *(undefined4 *)(iVar4 + 0x18) = uVar2;
      if (*(uint *)(in_ECX + 4) <= uVar3) {
        uRam0000001c = 0;
        return;
      }
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + uVar3 * 4) + 0x1c) = 0;
    }
  }
  return;
}
