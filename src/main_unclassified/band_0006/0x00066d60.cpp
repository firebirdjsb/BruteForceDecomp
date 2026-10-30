/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFD87B327D75AA99379EF3101D26358D8F9E800D05F2EC3754778408FA8AC600
 * Entry: 0x00066d60, Ghidra index: 1124, label: FUN_00066d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00060bb0(void);
extern void FUN_000639a0(undefined4 param_1);
extern void FUN_00063360(undefined4 param_1);
extern void FUN_00062710(undefined4 param_1);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0029ecf0(void);

extern uint32_t PTR_FUN_003a2cf0;
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
extern uint32_t PTR_LAB_003a3854;
void FUN_00066d60(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00060bb0();
  *unaff_ESI = &PTR_FUN_003a2cf0;
  unaff_ESI[0x11] = &PTR_FUN_003a35a8;
  unaff_ESI[0x13] = &PTR_FUN_003a35a4;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  piVar4 = unaff_ESI + 0x1b;
  piVar3 = unaff_ESI + 0x1c;
  unaff_ESI[0x1f] = 0;
  piVar1 = unaff_ESI + 0x1d;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x19] = 0x302;
  unaff_ESI[0x1a] = 1;
  local_8 = 0x3f4ccccd;
  piVar2 = (int *)*piVar3;
  local_c = 0x3f4ccccd;
  local_4 = 0x3f4ccccd;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar3 = 0;
  }
  FUN_000639a0(&local_c,piVar3);
  piVar3 = (int *)*piVar4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *piVar4 = 0;
  }
  FUN_00063360(0x3f800000,piVar4);
  piVar4 = (int *)*piVar1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *piVar1 = 0;
  }
  FUN_00063360(0x3f800000,piVar1);
  piVar4 = (int *)unaff_ESI[0x1e];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x1e] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x1e);
  piVar4 = (int *)unaff_ESI[0x1f];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x1f] = 0;
  }
  FUN_00063360(0x3f800000,unaff_ESI + 0x1f);
  piVar4 = (int *)unaff_ESI[0x20];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x20] = 0;
  }
  FUN_00063360(0,unaff_ESI + 0x20);
  piVar4 = (int *)unaff_ESI[0x21];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x21] = 0;
  }
  FUN_00062710(0,unaff_ESI + 0x21);
  piVar4 = (int *)FUN_002ea01d(0x34);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    FUN_0029ecf0();
    *piVar4 = (int)&PTR_LAB_003a3854;
    piVar4[0xc] = 1;
  }
  piVar3 = (int *)unaff_ESI[0x22];
  if (piVar3 != piVar4) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      unaff_ESI[0x22] = 0;
    }
    unaff_ESI[0x22] = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  unaff_ESI[0x10] = 0x80;
  return;
}
