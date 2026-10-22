/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 574D75580E6D980F92EAD3F38FBBB546071F6BF98EA663E90F0801269361C3C7
 * Entry: 0x002a83a0, Ghidra index: 9613, label: FUN_002a83a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003a3688;
void FUN_002a83a0(int *param_1)

{
  byte bVar1;
  int *in_EAX;
  int *piVar2;
  byte bStack_32;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_1c = param_1;
  piStack_20 = (int *)0x2a83b4;
  (**(code **)(*param_1 + 0xc))();
  if ((float)param_1 == 1.0) {
    piStack_20 = (int *)0x28;
    uStack_24 = 0x2a83cc;
    piVar2 = (int *)FUN_002ea01d();
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 4;
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      *piVar2 = (int)&PTR_DAT_003a3688;
      piVar2[9] = 1;
    }
    piStack_20 = param_1;
    uStack_24 = 0x2a8402;
    FUN_002a82a0();
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
    (**(code **)(*param_1 + 0x34))();
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
          *piVar2 = (int)&PTR_DAT_003a3688;
          piVar2[9] = 1;
        }
        (**(code **)(*in_EAX + 0x10))();
        FUN_002a82a0(param_1);
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
