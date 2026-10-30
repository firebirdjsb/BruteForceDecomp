/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01251D84BEDE7970423CFD9ECDC5BE5C1C6517B0486B7AA3FBF74EBA02E5195D
 * Entry: 0x00280d50, Ghidra index: 9038, label: FUN_00280d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003917a8;
void FUN_00280d50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 1;
  *unaff_ESI = PTR_LAB_003917a8;
  piVar1 = (int *)unaff_ESI[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((int *)unaff_ESI[2] != in_EAX) {
    if (piVar1 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x40))(piVar1);
      if (puVar3 == unaff_ESI) {
        (**(code **)(*piVar1 + 0x3c))(piVar1,0);
      }
    }
    piVar2 = (int *)unaff_ESI[2];
    if (piVar2 != in_EAX) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        unaff_ESI[2] = 0;
      }
      unaff_ESI[2] = in_EAX;
      if (in_EAX == (int *)0x0) goto LAB_00280dc0;
      (**(code **)(*in_EAX + 4))();
    }
    if (in_EAX != (int *)0x0) {
      (**(code **)(*in_EAX + 0x3c))();
    }
  }
LAB_00280dc0:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((int *)unaff_ESI[3] != param_2) {
    if (piVar1 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x40))(piVar1);
      if (puVar3 == unaff_ESI) {
        (**(code **)(*piVar1 + 0x3c))(piVar1,0);
      }
    }
    piVar2 = (int *)unaff_ESI[3];
    if (piVar2 != param_2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        unaff_ESI[3] = 0;
      }
      unaff_ESI[3] = param_2;
      if (param_2 == (int *)0x0) goto LAB_00280e21;
      (**(code **)(*param_2 + 4))(param_2);
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x3c))(param_2);
    }
  }
LAB_00280e21:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  unaff_ESI[5] = param_1;
  unaff_ESI[7] = param_3;
  unaff_ESI[8] = param_4;
  unaff_ESI[9] = param_5;
  unaff_ESI[6] = param_6;
  return;
}
