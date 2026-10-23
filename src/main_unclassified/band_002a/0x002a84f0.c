/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1969C945B53760B08AF64E2FF904189F047C04CCE80E9FA4F6853AECBE416D4
 * Entry: 0x002a84f0, Ghidra index: 9614, label: FUN_002a84f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a35c8;
void FUN_002a84f0(int *param_1)

{
  byte bVar1;
  int *in_EAX;
  int *piVar2;
  byte bStack_32;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_1c = param_1;
  piStack_20 = (int *)0x2a8504;
  (**(code **)(*param_1 + 0xc))();
  if ((float)param_1 == 1.0) {
    piStack_20 = (int *)0x28;
    uStack_24 = 0x2a851c;
    piVar2 = (int *)FUN_002ea01d();
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 4;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      *piVar2 = (int)&PTR_LAB_003a35c8;
      piVar2[9] = 1;
    }
    piStack_20 = param_1;
    uStack_24 = 0x2a8552;
    FUN_002a8320();
    uStack_24 = 0;
    piStack_20 = piVar2;
    (**(code **)(*param_1 + 0x14))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      return;
    }
  }
  else if (1.1 <= (float)param_1) {
    piStack_20 = (int *)0x0;
    uStack_24 = 1;
    (**(code **)(*in_EAX + 0x10))();
    (**(code **)(*param_1 + 0x38))();
    (**(code **)(*in_EAX + 0x10))();
    bStack_32 = (byte)((uint)param_1 >> 0x10);
    bVar1 = 0;
    if (bStack_32 != 0) {
      do {
        piVar2 = (int *)FUN_002ea01d(0x28);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2[1] = 4;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          *piVar2 = (int)&PTR_LAB_003a35c8;
          piVar2[9] = 1;
        }
        (**(code **)(*in_EAX + 0x10))();
        FUN_002a8320(param_1);
        (**(code **)(*param_1 + 0x14))(param_1,(int)&uStack_24 + 2,piVar2);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < bStack_32);
    }
  }
  return;
}
