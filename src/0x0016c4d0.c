/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 686045BF894088F37DCBA88A25860A922BEB949CEC5F5BCF0A84381A1BB2FF53
 * Entry: 0x0016c4d0, Ghidra index: 4782, label: FUN_0016c4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c4d0(float param_1,undefined4 *param_2)

{
  char *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  if (*in_EAX == '\0') {
    FUN_0016c190();
    *in_EAX = '\x01';
  }
  puVar2 = *(undefined4 **)(*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 4) * 4);
  if ((float)(int)puVar2[3] < param_1) {
    puVar2 = *(undefined4 **)(*(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 8) * 4);
    if ((float)(int)puVar2[3] < param_1 == ((float)(int)puVar2[3] == param_1)) {
      iVar1 = FUN_0016c3c0(param_1);
      if (iVar1 != -1) {
        FUN_0016b5c0();
      }
      return;
    }
    local_8 = puVar2[2];
    param_1 = (float)puVar2[1];
  }
  else {
    local_8 = puVar2[2];
    param_1 = (float)puVar2[1];
  }
  *param_2 = *puVar2;
  param_2[1] = param_1;
  param_2[2] = local_8;
  return;
}
