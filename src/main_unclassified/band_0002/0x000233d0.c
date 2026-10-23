/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFB976B6B57A03EAA214A5A35F8CD623A4F8391D812AB5A901B7B6F893A8EEA7
 * Entry: 0x000233d0, Ghidra index: 223, label: FUN_000233d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000233d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *unaff_ESI;
  
  iVar1 = *(int *)(in_ECX + 4) + *(int *)(in_ECX + 0x10) * 0x18;
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)(iVar1 + 4);
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 8) + 4))();
  }
  uVar3 = puVar5[2];
  uVar4 = puVar5[1];
  *unaff_ESI = *puVar5;
  unaff_ESI[1] = uVar4;
  unaff_ESI[2] = uVar3;
  return;
}
