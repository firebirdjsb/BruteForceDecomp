/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28099DBCB19CD6CA393906DDFE973917C1BAA556EAB27C807F480114A7CB585F
 * Entry: 0x0029ba30, Ghidra index: 9429, label: FUN_0029ba30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029ba30(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_ESI;
  int local_c;
  int local_8;
  
  FUN_0029aeb0();
  *unaff_EBX = 1;
  iVar1 = *(int *)(unaff_ESI + 4);
  while (iVar1 == 0x2c) {
    *unaff_EBX = *unaff_EBX + 1;
    FUN_00299cd0();
    uVar2 = FUN_00296110();
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
    FUN_0029aeb0();
    iVar1 = *(int *)(unaff_ESI + 4);
  }
  if (local_c != 4) {
    FUN_00299cd0();
    unaff_EBX[1] = 0;
    return;
  }
  unaff_EBX[1] = local_8;
  return;
}
