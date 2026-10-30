/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A130F5699FB9227AB6298AE4103A4E5E21D2E28C262A2A744C687C9E6D8CB589
 * Entry: 0x0005edb0, Ghidra index: 999, label: FUN_0005edb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005edb0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_EAX;
  
  iVar1 = in_EAX[0xb];
  piVar2 = (int *)in_EAX[1];
  iVar3 = *in_EAX;
  if (piVar2 == (int *)0x0) {
    *(int *)(iVar1 + 0xe4) = iVar3;
  }
  else {
    *piVar2 = iVar3;
  }
  if (iVar3 == 0) {
    *(int **)(iVar1 + 0xe8) = piVar2;
  }
  else {
    *(int **)(iVar3 + 4) = piVar2;
  }
  in_EAX[1] = 0;
  *in_EAX = 0;
  FUN_00238300();
  return;
}
