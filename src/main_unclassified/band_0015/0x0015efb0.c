/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51A64282CEDD1672883B81829C2B3D0DDFEE5898BBA12FB5B3529CB9DEF5BDEA
 * Entry: 0x0015efb0, Ghidra index: 4568, label: FUN_0015efb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
undefined4 FUN_0015efb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0xc);
  if (*(int *)(in_EAX + 0xc) == 1) {
    if (*(int *)(in_EAX + 4) == 0) {
      unaff_ESI[1] = DAT_0046d064;
    }
    else {
      unaff_ESI[1] = *(undefined4 *)(*(int *)(in_EAX + 4) + 4);
    }
    iVar3 = FUN_002ea01d(0x30);
    if (iVar3 == 0) {
      unaff_ESI[2] = 0;
    }
    else {
      FUN_0003d6c0(iVar3,in_EAX + 0x10,in_EAX + 0x34);
      unaff_ESI[2] = iVar3;
    }
    if (unaff_ESI[3] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(unaff_ESI[3]);
    }
    unaff_ESI[3] = 0;
    return 1;
  }
  if (*(int *)(in_EAX + 0xc) != 2) {
    unaff_ESI[1] = DAT_0046d064;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[2]);
  }
  if (*(int *)(in_EAX + 4) == 0) {
    unaff_ESI[1] = DAT_0046d064;
  }
  else {
    unaff_ESI[1] = *(undefined4 *)(*(int *)(in_EAX + 4) + 4);
  }
  if (unaff_ESI[3] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[3]);
  }
  unaff_ESI[3] = 0;
  uVar1 = *(undefined4 *)(in_EAX + 0x40);
  uVar2 = *(undefined4 *)(in_EAX + 0x44);
  puVar4 = (undefined4 *)FUN_002ea01d(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
  }
  unaff_ESI[3] = puVar4;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[2]);
}
