/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2504233D8F3E200C8C667BAA6D62B402DE6A4340421197402522061DFB2D94D
 * Entry: 0x002a0640, Ghidra index: 9510, label: FUN_002a0640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003909e8;
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
extern uint32_t PTR_LAB_003a3854;
void FUN_002a0640(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00060bb0();
  *unaff_ESI = &PTR_FUN_003909e8;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x1a] = &PTR_FUN_003a35a8;
  unaff_ESI[0x1c] = &PTR_FUN_003a35a4;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  piVar3 = unaff_ESI + 0x26;
  unaff_ESI[0x27] = 0;
  piVar2 = unaff_ESI + 0x27;
  unaff_ESI[0x23] = 0x302;
  unaff_ESI[0x24] = 1;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 5;
  local_8 = 0x3f4ccccd;
  piVar1 = (int *)*piVar3;
  local_c = 0x3f4ccccd;
  local_4 = 0x3f4ccccd;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar3 = 0;
  }
  FUN_000639a0(&local_c,piVar3);
  piVar3 = (int *)*piVar2;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar2 = 0;
  }
  FUN_00063360(0x3f800000,piVar2);
  piVar3 = (int *)unaff_ESI[0x25];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x25] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x25);
  piVar3 = (int *)unaff_ESI[0x16];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x16] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x16);
  piVar3 = (int *)unaff_ESI[0x17];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x17] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x17);
  piVar3 = (int *)unaff_ESI[0x18];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x18] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x18);
  piVar3 = (int *)unaff_ESI[0x15];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x15] = 0;
  }
  FUN_00063360(0,unaff_ESI + 0x15);
  piVar3 = (int *)unaff_ESI[0x22];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    unaff_ESI[0x22] = 0;
  }
  FUN_00063360(0,unaff_ESI + 0x22);
  piVar3 = (int *)FUN_002ea01d(0x34);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_0029ecf0();
    *piVar3 = (int)&PTR_LAB_003a3854;
    piVar3[0xc] = 1;
  }
  piVar2 = (int *)unaff_ESI[0x14];
  if (piVar2 != piVar3) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      unaff_ESI[0x14] = 0;
    }
    unaff_ESI[0x14] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  unaff_ESI[0x10] = 0;
  return;
}
