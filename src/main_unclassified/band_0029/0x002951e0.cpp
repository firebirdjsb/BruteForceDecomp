/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45A19F76B0451F365CA09EF514EFE02D31AC268384BB6E3DADFF5E8F779C9998
 * Entry: 0x002951e0, Ghidra index: 9311, label: FUN_002951e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002951e0(undefined4 *param_1)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  pbVar2 = (byte *)*param_1;
  iVar5 = 0;
  do {
    pbVar4 = in_EAX;
    if (pbVar2 == (byte *)0x0) {
      return -1;
    }
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00295217:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0029521c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00295217;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0029521c:
    if (iVar3 == 0) {
      return iVar5;
    }
    pbVar2 = (byte *)param_1[iVar5 + 1];
    iVar5 = iVar5 + 1;
  } while( true );
}
