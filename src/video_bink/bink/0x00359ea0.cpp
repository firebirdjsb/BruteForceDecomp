/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08C1CD827E3FA14914183AE8A7511A36D27C9F1BEA2B4ECD2E9CA37C0F361972
 * Entry: 0x00359ea0, Ghidra index: 13172, label: FUN_00359ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00359ea0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *unaff_ESI;
  uint *puVar5;
  
  puVar5 = unaff_ESI + 0x13;
  puVar1 = unaff_ESI + 0x14;
  *puVar1 = 0;
  *puVar5 = 0;
  DSOUND__IDirectSoundBuffer_Lock
            (*unaff_ESI,param_1,param_2,puVar1,puVar5,unaff_ESI + 0x16,unaff_ESI + 0x15,0);
  uVar4 = *puVar5;
  bVar2 = (unaff_ESI[5] == 0x10) - 1;
  puVar5 = (uint *)*puVar1;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(byte *)puVar5 = bVar2 & 0x80;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  if ((uint *)unaff_ESI[0x16] != (uint *)0x0) {
    uVar4 = unaff_ESI[0x15];
    puVar5 = (uint *)unaff_ESI[0x16];
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar5 = bVar2 & 0x80;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  DSOUND__IDirectSoundBuffer_Unlock
            (*unaff_ESI,unaff_ESI[0x14],unaff_ESI[0x13],unaff_ESI[0x16],unaff_ESI[0x15]);
  return;
}
