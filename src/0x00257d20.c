/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B5D96B1B3576EB21D06621B57C1FCB05AE99C0B7F3FD0711B8BB60EF2B014BC
 * Entry: 0x00257d20, Ghidra index: 8462, label: FUN_00257d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00257d20(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *unaff_EBX;
  byte *unaff_EBP;
  int iVar4;
  int unaff_ESI;
  byte *pbVar5;
  int *unaff_EDI;
  bool bVar6;
  undefined4 local_c;
  
  (**(code **)(*unaff_EDI + 0x54))();
  iVar4 = 0;
  if (0 < unaff_ESI) {
    do {
      (**(code **)(*unaff_EDI + 0x58))();
      pbVar2 = unaff_EBP;
      pbVar5 = unaff_EBX;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00257d76:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00257d7b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00257d76;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00257d7b:
      if (iVar3 == 0) {
        return local_c;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
  }
  return 0;
}
