/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEFB86E20B8470F980E9B0171A9AA5025157CDA82489E02C195D420A78814CE2
 * Entry: 0x001635d0, Ghidra index: 4669, label: FUN_001635d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001635d0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00164420(param_3 + -6,param_4);
  piVar1 = piVar5 + 6;
  for (; param_2 < piVar5; piVar5 = piVar5 + -6) {
    if ((piVar5[-6] < *piVar5) || (*piVar5 < piVar5[-6])) break;
  }
  piVar4 = piVar1;
  local_4 = piVar1;
  piVar3 = piVar5;
  if (piVar1 < param_3) {
    do {
      piVar4 = piVar1;
      local_4 = piVar1;
      if ((*piVar1 < *piVar5) || (*piVar5 < *piVar1)) break;
      piVar1 = piVar1 + 6;
      piVar4 = piVar1;
      local_4 = piVar1;
    } while (piVar1 < param_3);
  }
joined_r0x00163656:
  do {
    if (param_3 <= piVar1) {
joined_r0x00163688:
      while (piVar2 = piVar3, param_2 < piVar2) {
        piVar3 = piVar2 + -6;
        if (*piVar5 <= piVar2[-6]) {
          if (*piVar5 < piVar2[-6]) break;
          piVar5 = piVar5 + -6;
          FUN_00164ab0(piVar5,piVar3);
          piVar4 = local_4;
        }
      }
      if (piVar2 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        piVar3 = piVar4;
        if (piVar4 != piVar1) {
          FUN_00164ab0(piVar5,piVar4);
          piVar3 = local_4;
        }
        FUN_00164ab0(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        piVar4 = piVar3 + 6;
        local_4 = piVar3 + 6;
        piVar5 = piVar5 + 6;
        piVar3 = piVar2;
      }
      else {
        piVar3 = piVar2 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piVar3 != piVar5) {
            FUN_00164ab0(piVar3,piVar5);
            piVar4 = local_4;
          }
          piVar4 = piVar4 + -6;
          FUN_00164ab0(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_00164ab0(piVar1,piVar3);
          piVar1 = piVar1 + 6;
          piVar4 = local_4;
        }
      }
      goto joined_r0x00163656;
    }
    piVar2 = piVar4;
    if (*piVar1 <= *piVar5) {
      if (*piVar1 < *piVar5) goto joined_r0x00163688;
      piVar2 = piVar4 + 6;
      FUN_00164ab0(piVar4,piVar1);
      local_4 = piVar2;
    }
    piVar1 = piVar1 + 6;
    piVar4 = piVar2;
  } while( true );
}
