/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC56BFF4FD6BED844A35C3BB0EB5FB7FD4CF1F5AF59DD305C6244A4E31BC8214
 * Entry: 0x00347fe3, Ghidra index: 12886, label: FUN_00347fe3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347fe3(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int *piVar4;
  int in_ECX;
  
  puVar3 = (undefined1 *)*param_1;
  *puVar3 = 0x45;
  uVar2 = *(undefined1 *)(in_ECX + 0x16);
  *(undefined2 *)(puVar3 + 2) = 0;
  puVar3[1] = uVar2;
  piVar4 = (int *)(in_ECX + 0x8b0);
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + 1;
  *(undefined2 *)(puVar3 + 6) = 0;
  *(ushort *)(puVar3 + 4) = CONCAT11((char)(iVar1 + 1),(char)((uint)(iVar1 + 1) >> 8));
  puVar3[8] = *(undefined1 *)(in_ECX + 0x17);
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[9] = param_3;
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  return;
}
