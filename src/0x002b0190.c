/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F92E15065D0270B52895750D65A1F86DBF4917F513E14B61CFBF205B9E9A37B9
 * Entry: 0x002b0190, Ghidra index: 9723, label: FUN_002b0190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038edb0;
extern uint32_t PTR_FUN_003a35a4;
extern uint32_t PTR_FUN_003a35a8;
void FUN_002b0190(void)

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
  *unaff_ESI = &PTR_FUN_0038edb0;
  unaff_ESI[0x11] = &PTR_FUN_003a35a8;
  unaff_ESI[0x13] = &PTR_FUN_003a35a4;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  piVar4 = unaff_ESI + 0x1b;
  piVar3 = unaff_ESI + 0x1c;
  unaff_ESI[0x1d] = 0;
  piVar1 = unaff_ESI + 0x1d;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x19] = 0x302;
  unaff_ESI[0x1a] = 1;
  piVar2 = (int *)*piVar3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar3 = 0;
  }
  local_c = 0x3f4ccccd;
  local_8 = 0x3f4ccccd;
  local_4 = 0x3f4ccccd;
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
  FUN_00063360(0,unaff_ESI + 0x1e);
  piVar4 = (int *)unaff_ESI[0x1f];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    unaff_ESI[0x1f] = 0;
  }
  FUN_00062710(0,unaff_ESI + 0x1f);
  unaff_ESI[0x10] = 0;
  return;
}
