/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 854DFA0FF04056BEFF80B3CDCD23D2A61A7028B17F4E06FEFA887ED606C083AC
 * Entry: 0x00047960, Ghidra index: 562, label: FUN_00047960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_000124f0(float param_1, int32_t in_ECX);

void FUN_00047960(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *unaff_EDI;
  
  piVar3 = (int *)FUN_000120f0();
  if (piVar3 == (int *)0x0) {
    return;
  }
  cVar1 = unaff_EDI[1];
  if (*unaff_EDI != cVar1) {
    if (cVar1 == '\0') {
      unaff_EDI[1] = '\x01';
      (**(code **)(*piVar3 + 0x15c))(0xf,0);
    }
    else {
      if (cVar1 != '\x01') goto LAB_000479b2;
      unaff_EDI[1] = '\0';
      (**(code **)(*piVar3 + 0x15c))(0xf,0);
    }
    FUN_000124f0(0x3f000000);
  }
LAB_000479b2:
  (*(code *)**(undefined4 **)(unaff_EDI + 4))(param_1);
  if (((unaff_EDI[0xc] & 1U) == 0) ||
     (*(float *)(unaff_EDI + 8) < 0.0 != (*(float *)(unaff_EDI + 8) == 0.0))) {
    unaff_EDI[0x10] = -0x33;
    unaff_EDI[0x11] = -0x34;
    unaff_EDI[0x12] = 'L';
    unaff_EDI[0x13] = '>';
    unaff_EDI[8] = -0x33;
    unaff_EDI[9] = -0x34;
    unaff_EDI[10] = 'L';
    unaff_EDI[0xb] = '>';
    unaff_EDI[0xc] = unaff_EDI[0xc] & 0xf9U | 1;
    iVar2 = piVar3[0x7e];
    if (unaff_EDI[1] == '\x01') {
      if ((iVar2 != 6) && (iVar2 != 7)) {
        (**(code **)(*piVar3 + 0x15c))(0xf,0);
        return;
      }
    }
    else if ((iVar2 == 6) || (iVar2 == 7)) {
      (**(code **)(*piVar3 + 0x15c))(0xf,0);
    }
  }
  return;
}
