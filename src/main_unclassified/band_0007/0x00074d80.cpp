/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 836EE2465BF27970E10058C5349D71B248FC88010F6FA2880D15D002B03BB7D8
 * Entry: 0x00074d80, Ghidra index: 1337, label: FUN_00074d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00126b40(void);
extern int FUN_00126a40(void);
extern undefined4 FUN_00112800(void);
extern undefined1 FUN_00074680(int param_1);
extern void FUN_00075720(void);

void FUN_00074d80(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int extraout_EDX;
  float local_18;
  
  piVar1 = *(int **)(param_1 + 0x28);
  piVar2 = (int *)*piVar1;
  bVar3 = false;
  local_18 = 0.0;
  bVar4 = false;
  if (piVar2 != piVar1) {
    do {
      if (piVar2[9] != 0) {
        if (local_18 <= (float)piVar2[7]) {
          local_18 = (float)piVar2[7];
        }
        cVar5 = FUN_00126b40();
        if (((((cVar5 == '\0') && (cVar5 = FUN_00126a40(), cVar5 == '\0')) &&
             (*(int *)(extraout_EDX + 0x1f8) != 8)) &&
            (((*(byte *)(extraout_EDX + 0x70) & 1) == 0 && (*(int *)(extraout_EDX + 0x1f8) != 7))))
           && (cVar5 = FUN_00112800(), cVar5 != '\0')) {
          if (((float)piVar2[6] + *(float *)(param_1 + 0x34) < *(float *)(param_1 + 0x1c)) &&
             (!bVar3)) {
            FUN_00074680(param_1);
            bVar3 = true;
          }
        }
        else {
          piVar2[6] = *(undefined4 *)(param_1 + 0x1c);
        }
      }
      FUN_00075720();
    } while (piVar2 != piVar1);
    if (*(float *)(param_1 + 0x1c) <= local_18 + *(float *)(param_1 + 0x38)) {
      if (!bVar3) {
        return;
      }
    }
    else {
      FUN_00074680(param_1);
      bVar4 = true;
    }
    do {
      if (bVar4) {
        piVar2[7] = *(undefined4 *)(param_1 + 0x1c);
      }
      if (bVar3) {
        piVar2[6] = *(undefined4 *)(param_1 + 0x1c);
      }
      FUN_00075720();
    } while (piVar2 != piVar1);
  }
  return;
}
