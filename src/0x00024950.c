/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F37E2301BE5D773680CF8AB53003334852E9D2906FD2F708FEF747FC8256BE7
 * Entry: 0x00024950, Ghidra index: 254, label: FUN_00024950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_000249b8_caseD_5[];
void FUN_00024950(undefined1 *param_1)

{
  float fVar1;
  float *in_EAX;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  undefined1 *unaff_retaddr;
  
  piVar2 = (int *)(**(code **)(*unaff_ESI + 0x24))();
  *param_1 = 0;
  if (((unaff_ESI[0xf1] & 0x100U) == 0) || (unaff_ESI[0x16] != 3)) {
    if (in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX < 3600.0) {
      switch(unaff_ESI[0x11]) {
      case 5:
      case 7:
      case 0xe:
      case 0xf:
      case 0x2b:
        goto switchD_000249b8_caseD_5;
      }
    }
    if ((unaff_ESI[0x11] == 0x13) || ((unaff_ESI[0x11] == 0x78 && (unaff_ESI[0x1e6] == 0)))) {
      iVar3 = (**(code **)(*piVar2 + 8))();
      fVar1 = *(float *)(iVar3 + 0x80);
      if (1.1920929e-07 < fVar1) {
        unaff_ESI[0xe9] = (int)fVar1;
        unaff_ESI[0xe7] = (int)fVar1;
        *(byte *)(unaff_ESI + 0xe8) = *(byte *)(unaff_ESI + 0xe8) & 0xf9 | 1;
      }
      unaff_ESI[0xed] = 0;
      unaff_ESI[0xeb] = 0;
      *(byte *)(unaff_ESI + 0xec) = *(byte *)(unaff_ESI + 0xec) & 0xfa | 2;
      *param_1 = 1;
      return;
    }
    (**(code **)unaff_ESI[0xe6])(unaff_ESI[0x110]);
    if (((*(byte *)(unaff_ESI + 0xe8) & 1) != 0) && ((*(byte *)(unaff_ESI + 0xe8) >> 1 & 1) != 0)) {
      *(byte *)(unaff_ESI + 0xe8) = *(byte *)(unaff_ESI + 0xe8) & 0xfa | 2;
      unaff_ESI[0xe9] = 0;
      unaff_ESI[0xe7] = 0;
      iVar3 = (**(code **)(*piVar2 + 8))();
      FUN_000124f0(*(undefined4 *)(iVar3 + 0x84));
    }
    param_1 = unaff_retaddr;
    if ((*(byte *)(unaff_ESI + 0xe8) & 1) == 0) {
      return;
    }
  }
switchD_000249b8_caseD_5:
  *param_1 = 1;
  return;
}
