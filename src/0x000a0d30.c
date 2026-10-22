/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88E3D9C69542E91783C4F690FFDC861422B27A6207408B78781B43945A8802AF
 * Entry: 0x000a0d30, Ghidra index: 1904, label: FUN_000a0d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1c18;
void FUN_000a0d30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[0xd] = 0;
  }
  piVar1 = (int *)unaff_ESI[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[10] = 0;
  }
  piVar1 = (int *)unaff_ESI[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[7] = 0;
  }
  piVar1 = (int *)unaff_ESI[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[4] = 0;
  }
  iVar2 = unaff_ESI[2];
  *unaff_ESI = &PTR_FUN_003a1c18;
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0xc,*(undefined4 *)(iVar2 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  unaff_ESI[2] = 0;
  return;
}
