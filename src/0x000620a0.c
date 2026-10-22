/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65F0011195D79C9841E73E07B30C0A246B5A148E4024585C686C8EC2F8F48663
 * Entry: 0x000620a0, Ghidra index: 1047, label: FUN_000620a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
extern uint32_t PTR_FUN_003a3898;
extern uint32_t PTR_LAB_003a3854;
void FUN_000620a0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a3898;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = &PTR_FUN_003a35a8;
  unaff_ESI[5] = &PTR_FUN_003a35a4;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  piVar2 = (int *)FUN_002ea01d(0x34);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0029ecf0();
    *piVar2 = (int)&PTR_LAB_003a3854;
    piVar2[0xc] = 1;
  }
  piVar1 = (int *)unaff_ESI[2];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[2] = 0;
    }
    unaff_ESI[2] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  (**(code **)(*(int *)unaff_ESI[2] + 0xc))((int *)unaff_ESI[2]);
  if ((unaff_ESI[6] != 0) && (unaff_ESI[7] != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[7]);
  }
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[8] = 0;
  uVar3 = FUN_00238430();
  unaff_ESI[4] = uVar3;
  return;
}
