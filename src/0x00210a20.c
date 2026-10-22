/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3368E59887B1D2A83B80E1C92AA010E7EA04851E73F68149F5A59FD2057E3C44
 * Entry: 0x00210a20, Ghidra index: 7432, label: FUN_00210a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00210a20(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  float local_8;
  
  piVar1 = *(int **)(in_EAX + 8);
  piVar2 = (int *)*piVar1;
  local_8 = 0.0;
  while (piVar2 != piVar1) {
    if ((((int *)piVar2[4] != (int *)0x0) &&
        (cVar3 = (**(code **)(*(int *)piVar2[4] + 0x20))(0), cVar3 != '\0')) &&
       (local_8 < *(float *)(piVar2[4] + 0x14))) {
      local_8 = *(float *)(piVar2[4] + 0x14);
    }
    FUN_0012aba0();
  }
  return (float10)local_8;
}
