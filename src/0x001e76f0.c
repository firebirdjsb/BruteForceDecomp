/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F329B4681B47FB0033544E0594E4BE81475C7B6C8C4E427AD3AEBBECD145F4DF
 * Entry: 0x001e76f0, Ghidra index: 6812, label: FUN_001e76f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e76f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x250);
  do {
    if (((-1 < iVar3) && (iVar3 < 0x19)) && (*piVar4 != 0)) {
      puVar1 = *(undefined4 **)(*piVar4 + 0x1c);
      if (puVar1 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *puVar1;
      }
      FUN_001298b0(&param_1,uVar2,puVar1);
      FUN_001e8cd0(0x3f800000);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x19);
  return;
}
