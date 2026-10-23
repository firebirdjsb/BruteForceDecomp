/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A019A27895B8F2A0551317420DD26AEE949595A47B9FF0AC8641F64877FAC6F
 * Entry: 0x000c7b30, Ghidra index: 2455, label: FUN_000c7b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000c7b30(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_ESI;
  int unaff_retaddr;
  int iVar5;
  short sVar6;
  
  if ((float)unaff_ESI[in_EAX * 3 + 0x14] == 0.0) {
    return 0;
  }
  iVar5 = unaff_ESI[in_EAX * 3 + 0x13];
  iVar2 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + 0xbec) + 0xc))(iVar5);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(unaff_ESI[10] + 8) + 0x60);
    iVar3 = (**(code **)(**(int **)(*(int *)(iVar5 + 8) + 0xbec) + 0xc))(iVar5);
    if (iVar3 != iVar2) {
      return 0;
    }
  }
  iVar2 = *unaff_ESI;
  unaff_ESI[0x11] = 0x3f800000;
  uVar4 = FUN_000b88a0((float)(int)*(short *)((int)unaff_ESI + 0xe),(float)(int)(short)unaff_ESI[3],
                       0,(float)unaff_retaddr,0xff,1,1,unaff_ESI[8],0,0,0,0,0x3f800000,0x3f800000,0,
                       0,0);
  (**(code **)(iVar2 + 4))(uVar4);
  unaff_ESI[0x11] = (int)(1.0 - (float)unaff_ESI[in_EAX * 3 + 0x14]);
  iVar2 = *unaff_ESI;
  sVar6 = 1;
  uVar4 = FUN_000b88a0((float)(int)*(short *)((int)unaff_ESI + 0xe),(float)(int)(short)unaff_ESI[3],
                       0,(float)unaff_retaddr,0xff,1,1,unaff_ESI[0x19],0,0,1,0,0x3f800000,0x3f800000
                       ,0,0,0);
  (**(code **)(iVar2 + 4))(uVar4);
  if (*(int *)(iVar5 + 0x640) == 0) {
    iVar5 = unaff_ESI[0x18];
  }
  else {
    iVar5 = unaff_ESI[0x18];
  }
  FUN_000bb9d0(iVar5);
  sVar1 = *(short *)((int)unaff_ESI + 10);
  iVar5 = unaff_ESI[0x10];
  iVar2 = unaff_ESI[0x18];
  *(short *)(iVar2 + 8) = (short)unaff_ESI[0xf] + (short)unaff_ESI[2];
  *(short *)(iVar2 + 10) = sVar1 + (short)iVar5 + sVar6;
  (**(code **)(*(int *)unaff_ESI[0x18] + 0x18))();
  return 1;
}
