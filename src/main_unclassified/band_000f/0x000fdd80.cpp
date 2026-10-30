/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15F476A949A870C0ED8B13C60C66685D397F0D18FAF0049CF684D017F2C0A445
 * Entry: 0x000fdd80, Ghidra index: 3179, label: FUN_000fdd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t PTR_LAB_0039e420;
void FUN_000fdd80(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0039e420;
  uVar2 = FUN_00061500(unaff_ESI + 1);
  unaff_ESI[2] = uVar2;
  unaff_ESI[3] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 4);
  unaff_ESI[5] = uVar2;
  unaff_ESI[6] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 9);
  piVar1 = DAT_00469b54;
  unaff_ESI[10] = uVar2;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  (**(code **)(*piVar1 + 0x48))();
  iVar3 = FUN_000fcfd0();
  unaff_ESI[7] = iVar3;
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x10;
  piVar1 = (int *)unaff_ESI[7];
  if ((*(byte *)(piVar1 + 10) & 4) != 0) {
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfb;
    (**(code **)(*piVar1 + 0x28))();
  }
  return;
}
