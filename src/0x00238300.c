/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D09B91C09C49DB76D65E66CA27B93FE5DEA3AFDF9E9311A9831F9426CA7D4CD
 * Entry: 0x00238300, Ghidra index: 7869, label: FUN_00238300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00238300(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int *unaff_ESI;
  
  if (unaff_ESI[5] == 0) {
    piVar3 = (int *)(unaff_ESI[1] + ((uint)(in_EAX - *unaff_ESI) / (uint)unaff_ESI[2]) * 8);
  }
  else {
    piVar3 = (int *)(unaff_ESI[1] + ((uint)(in_EAX - *unaff_ESI) >> ((byte)unaff_ESI[5] & 0x1f)) * 8
                    );
  }
  piVar1 = (int *)piVar3[1];
  iVar2 = *piVar3;
  if (piVar1 == (int *)0x0) {
    unaff_ESI[6] = iVar2;
  }
  else {
    *piVar1 = iVar2;
  }
  if (iVar2 == 0) {
    unaff_ESI[7] = (int)piVar1;
  }
  else {
    *(int **)(iVar2 + 4) = piVar1;
  }
  piVar3[1] = 0;
  *piVar3 = 0;
  if ((undefined4 *)unaff_ESI[9] != (undefined4 *)0x0) {
    *(undefined4 *)unaff_ESI[9] = piVar3;
    piVar3[1] = unaff_ESI[9];
    unaff_ESI[9] = (int)piVar3;
    unaff_ESI[4] = unaff_ESI[4] + 1;
    return;
  }
  piVar3[1] = 0;
  unaff_ESI[8] = (int)piVar3;
  unaff_ESI[9] = (int)piVar3;
  unaff_ESI[4] = unaff_ESI[4] + 1;
  return;
}
