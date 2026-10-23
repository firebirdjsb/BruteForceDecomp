/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C17A18F97612429039D4DEDDC194301A5983A2F09BAD5CCB28A18929E31F9E21
 * Entry: 0x00271330, Ghidra index: 8810, label: FUN_00271330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271330(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_EAX;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *in_EDX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = in_EDX[2];
  uVar2 = in_EDX[1];
  *(undefined4 *)(in_EAX + 8) = *in_EDX;
  *(undefined4 *)(in_EAX + 0xc) = uVar2;
  *(undefined4 *)(in_EAX + 0x10) = uVar1;
  piVar3 = *(int **)(in_ECX + 8);
  if (piVar3 != (int *)0x0) {
    local_10 = in_EDX[2];
    local_14 = in_EDX[1];
    local_18 = *in_EDX;
    if (*(int *)(in_ECX + 4) != 0) {
      puVar4 = (undefined4 *)FUN_00039510();
      local_10 = puVar4[2];
      local_14 = puVar4[1];
      local_18 = *puVar4;
    }
    (**(code **)(*piVar3 + 0xc))(piVar3,&local_18);
  }
  return;
}
