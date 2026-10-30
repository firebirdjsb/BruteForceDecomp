/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58F9176045B428159004C0A3CCC3EE905CCE6ED5872D307E606B0F5545257FC5
 * Entry: 0x000c9170, Ghidra index: 2484, label: FUN_000c9170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000c8cc0(int param_1);
extern void FUN_0008b8c0(void);
extern void FUN_0008ba30(int param_1);

extern uint32_t DAT_00469aac;
extern uint32_t *DAT_00469b58;
void FUN_000c9170(float param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x68) != 0) && ((*(byte *)(*(int *)(unaff_ESI + 0x68) + 0x70) & 1) == 0)
     ) {
    *(undefined4 *)(unaff_ESI + 0x80) = 0;
  }
  if (*(float *)(unaff_ESI + 0x80) == 0.0) {
    *(undefined4 *)(unaff_ESI + 0x80) = 0x40600000;
  }
  else {
    if (((*(byte *)(DAT_00469aac + 0xc50) & 0x10) == 0) &&
       (cVar2 = (**(code **)(*DAT_00469b58 + 0x14))(), cVar2 == '\0')) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    iVar1 = *(int *)(DAT_00469aac + 0xc4c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == 0x159bec67)) {
      if (bVar3 == 0) {
        return;
      }
      bVar3 = *(byte *)(iVar1 + 0x24) >> 4 & 1;
    }
    if (bVar3 != 0) {
      iVar1 = *(int *)(unaff_ESI + 0x68);
      param_1 = *(float *)(unaff_ESI + 0x80) - param_1;
      *(float *)(unaff_ESI + 0x80) = param_1;
      if (iVar1 != 0) {
        param_1 = param_1 + 1.0;
        if (param_1 <= *(float *)(iVar1 + 0x1a8)) {
          param_1 = *(float *)(iVar1 + 0x1a8);
        }
        *(float *)(iVar1 + 0x1a8) = param_1;
      }
      if (*(float *)(unaff_ESI + 0x80) < 0.0 != (*(float *)(unaff_ESI + 0x80) == 0.0)) {
        *(undefined4 *)(unaff_ESI + 0x80) = 0;
        cVar2 = FUN_000c8cc0(unaff_ESI);
        if ((cVar2 == '\0') && (*(int *)(unaff_ESI + 0x68) != 0)) {
          piVar4 = (int *)(**(code **)(*(int *)DAT_00469b58[2] + 0x58))();
          if (*piVar4 == 0x17506391) {
            if (*(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 8) + 0x60) != 0) {
              FUN_0008b8c0();
              return;
            }
          }
          else {
            piVar4 = (int *)(**(code **)(*(int *)DAT_00469b58[2] + 0x58))();
            if ((*piVar4 == -0x104e72d8) &&
               (iVar1 = *(int *)(*(int *)(unaff_ESI + 0x28) + 8), *(int *)(iVar1 + 0x30) != 0)) {
              iVar1 = *(int *)(iVar1 + 0x60);
              bVar3 = *(byte *)(iVar1 + 0x6c);
              if ((bVar3 & 1) == 0) {
                *(byte *)(iVar1 + 0x6c) = bVar3 | 1;
                FUN_0008ba30();
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}
