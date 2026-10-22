/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFA4DF2F8AA4FC90487C7A08AAEBA3A1DEA87D81EF320CFD455423EFE79D6F59
 * Entry: 0x0017c470, Ghidra index: 5047, label: FUN_0017c470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0017c470(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_ec [8];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8 [5];
  undefined4 local_c4 [5];
  undefined4 local_b0 [5];
  undefined4 local_9c [5];
  undefined4 local_88 [5];
  undefined4 local_74;
  undefined4 local_68 [5];
  undefined4 local_54 [5];
  undefined4 local_40 [5];
  undefined4 local_2c [5];
  undefined4 local_18 [6];
  
  local_e4 = *in_EAX;
  local_e0 = 0;
  puVar3 = local_68;
  puVar4 = local_d8;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_54;
  puVar4 = local_c4;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_40;
  puVar4 = local_b0;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_2c;
  puVar4 = local_9c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_18;
  puVar4 = local_88;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_74 = 0;
  piVar1 = (int *)FUN_0017c970(local_ec,&local_e4);
  return *piVar1 + 0x10;
}
