/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2127E14387AEC5EE4F8E352B57F39946D11A942B6BD5451D879F1D7ED7DF15CC
 * Entry: 0x00174740, Ghidra index: 4915, label: FUN_00174740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_0039a0a8;
extern uint32_t PTR_FUN_0039a0c0;
extern uint32_t PTR_FUN_0039a5e4;
extern uint32_t PTR_LAB_0039a05c;
extern uint32_t PTR_LAB_0039a060;
extern uint32_t PTR_LAB_0039a074;
extern uint32_t PTR_LAB_0039a090;
void FUN_00174740(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_EBP;
  undefined4 *unaff_ESI;
  int iVar5;
  undefined4 *puVar6;
  
  unaff_ESI[-1] = &PTR_FUN_0039a0c0;
  *unaff_ESI = &PTR_FUN_0039a0a8;
  unaff_ESI[0x16] = &PTR_LAB_0039a090;
  unaff_ESI[0x17] = &PTR_LAB_0039a074;
  unaff_ESI[0x18] = &PTR_LAB_0039a060;
  unaff_ESI[0x1a] = &PTR_LAB_0039a05c;
  iVar3 = (**(code **)(*(int *)unaff_ESI[0x1c] + 0x38))((int *)unaff_ESI[0x1c]);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      piVar4 = (int *)(**(code **)(*(int *)unaff_ESI[0x1c] + 0x3c))((int *)unaff_ESI[0x1c],iVar5);
      if ((*piVar4 == 1) && ((undefined4 *)piVar4[4] != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)piVar4[4])(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  if (unaff_ESI[0x41] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x41]);
  }
  unaff_ESI[0x41] = 0;
  if (unaff_ESI[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x13]);
  }
  unaff_ESI[0x13] = 0;
  (**(code **)(*(int *)unaff_ESI[0x1c] + 8))((int *)unaff_ESI[0x1c]);
  unaff_ESI[0x1c] = 0;
  if (unaff_ESI[0x30] != 0) {
    FUN_0001d590(unaff_ESI + 0x2f,unaff_EBP);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x30]);
  }
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  uVar1 = unaff_ESI[0x2e];
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    unaff_ESI[0x2e] = 0;
    iVar3 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    while (iVar3 != 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == unaff_ESI + 0x2d) {
        *piVar4 = *(int *)*piVar4;
        break;
      }
      piVar4 = piVar2;
      iVar3 = *piVar2;
    }
  }
  uVar1 = unaff_ESI[0x2c];
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    unaff_ESI[0x2c] = 0;
    iVar3 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    while (iVar3 != 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == unaff_ESI + 0x2b) {
        *piVar4 = *(int *)*piVar4;
        break;
      }
      piVar4 = piVar2;
      iVar3 = *piVar2;
    }
  }
  if (unaff_ESI[0x25] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x25]);
  }
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  uVar1 = unaff_ESI[0x23];
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    unaff_ESI[0x23] = 0;
    iVar3 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
    while (iVar3 != 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == unaff_ESI + 0x22) {
        *piVar4 = *(int *)*piVar4;
        break;
      }
      piVar4 = piVar2;
      iVar3 = *piVar2;
    }
  }
  puVar6 = (undefined4 *)(-(uint)(unaff_ESI != (undefined4 *)0x4) & (uint)unaff_ESI);
  *puVar6 = &PTR_FUN_0039a5e4;
  if (puVar6[2] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar6[2]);
  }
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  return;
}
