/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B49A2D07770BECB37B70990D6D918959E713294188A9D84E30652E6FF20DC5D
 * Entry: 0x00174cd0, Ghidra index: 4922, label: FUN_00174cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00174d31) */

void FUN_00174cd0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EDI;
  
  if (unaff_EDI != 0) {
    if ((*(int *)(*(int *)(unaff_EDI + 0xc) + 4) == 3) &&
       (iVar2 = FUN_000de3f0(*(undefined4 *)(unaff_EDI + 8),unaff_EDI,1,0), iVar2 != 0)) {
      FUN_0008f6a0();
      FUN_0005eab0();
      bVar1 = *(byte *)(unaff_EDI + 0x834);
      if (((bVar1 & 1) == 0) || ((bVar1 & 2) != 0)) {
        *(byte *)(unaff_EDI + 0x834) = bVar1 & 0xfd | 1;
        FUN_00129530();
      }
      *(undefined4 *)(unaff_EDI + 0x5e8) = 0;
      *(undefined4 *)(unaff_EDI + 0x5ec) = 0;
      *(undefined4 *)(unaff_EDI + 0x5f0) = 0;
    }
    uVar3 = -(uint)((*(byte *)(unaff_EDI + 0x26) & 0x40) != 0) & unaff_EDI;
    if ((uVar3 != 0) && (*(int *)(uVar3 + 0x6c) != -1)) {
      FUN_0015a030(1);
    }
  }
  return;
}
