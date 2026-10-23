/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7A2FC8AACD4027C139A05EADA83348A5F45B5E91CEC75CD99064F57F97562D4
 * Entry: 0x00202820, Ghidra index: 7274, label: FUN_00202820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00202820(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  if ((param_3 != 0) && (*(int *)(*(int *)(param_3 + 0xc) + 4) == 3)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x40))();
    iVar2 = FUN_0004d630(iVar2 + 0x24);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 8;
      cVar1 = FUN_00202640();
      if ((cVar1 != '\0') && (iVar2 = FUN_0004d630(auStack_4c), iVar2 != 0)) {
        FUN_000122d0(0x3c);
        FUN_000555f0();
        FUN_00012000(uStack_38,auStack_40);
        FUN_00012440();
      }
    }
  }
  return;
}
