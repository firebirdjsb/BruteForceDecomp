/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A44DAD08CB0A58E184C10C6E6C2A82138A5CA4F830C28224E964CC65424BE551
 * Entry: 0x00228c10, Ghidra index: 7659, label: FUN_00228c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-aligned draft declaration only: guest Xbox ABI_UNVERIFIED. */
extern void FUN_0021c380(float param_1);
void FUN_00228c10(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  float local_4;
  
  if (*(float *)(in_ECX + 0x1dc) == 0.0) {
    local_4 = 1.0;
  }
  else {
    local_4 = *(float *)(in_ECX + 0x1d8) / *(float *)(in_ECX + 0x1dc);
  }
  piVar1 = (int *)(in_ECX + 0x88);
  iVar2 = 8;
  do {
    if (*piVar1 != 0) {
      FUN_0021c380(local_4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
