/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEE384FEF43C13CF10697B33A15184F3A501EE38C9B2C5109143CEDE095B40D9
 * Entry: 0x0004e030, Ghidra index: 665, label: FUN_0004e030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e030(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(int *)(*(int *)(in_EAX + 0x10) + 8) + 0x1f8) != 0) {
    FUN_000120f0();
    FUN_00057140();
    iVar3 = *(int *)(*(int *)(in_EAX + 0x10) + 8);
    uVar4 = 0;
    uVar2 = FUN_000120f0(0);
    FUN_00056fe0(*(undefined4 *)(iVar3 + 0x1f8),uVar2,uVar4);
  }
  piVar1 = *(int **)(in_EAX + 0x40c);
  if ((piVar1 != *(int **)(in_EAX + 0x410)) && (*(int *)(*piVar1 + 0xc) != 0)) {
    iVar3 = FUN_000388b0(*(undefined4 *)(in_EAX + 0x358));
    if ((iVar3 != 0) && (*(int *)(iVar3 + 100) == 1)) {
      *(undefined4 *)(*piVar1 + 0x2c) = 0x7f7fffff;
    }
  }
  FUN_00016030();
  iVar3 = *(int *)(in_EAX + 0x358);
  FUN_0001c1a0(*(undefined4 *)(*(int *)(iVar3 + 4) + 4));
  *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 4);
  *(int *)(*(int *)(iVar3 + 4) + 8) = *(int *)(iVar3 + 4);
  return;
}
