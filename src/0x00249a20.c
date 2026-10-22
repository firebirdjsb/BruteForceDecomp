/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BE0FDDEFB6101C2B91D738782A1595D3F07D64D41786D50AD25359C70FF7894
 * Entry: 0x00249a20, Ghidra index: 8201, label: FUN_00249a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249a20(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[1] = 0;
  }
  piVar1 = (int *)unaff_EDI[1];
  unaff_ESI[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  unaff_ESI[2] = unaff_EDI[2];
  uVar2 = unaff_EDI[4];
  uVar3 = unaff_EDI[5];
  unaff_ESI[3] = unaff_EDI[3];
  unaff_ESI[4] = uVar2;
  unaff_ESI[5] = uVar3;
  FUN_00249e60(unaff_EDI + 6);
  *(undefined1 *)(unaff_ESI + 10) = *(undefined1 *)(unaff_EDI + 10);
  return;
}
