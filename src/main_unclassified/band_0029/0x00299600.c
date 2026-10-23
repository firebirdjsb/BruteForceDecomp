/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42EC2559A342AD6404C62D3ACAF4F985A8CEE30CB3599B60E910DEFCD41BA250
 * Entry: 0x00299600, Ghidra index: 9377, label: FUN_00299600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
void FUN_00299600(undefined1 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_00299360();
  piVar1 = *(int **)(in_ECX + 8);
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar1 + 0x10) = uVar2;
  *(undefined1 *)(*(int *)(*piVar1 + 0x10) + piVar1[2]) = param_1;
  piVar1[2] = piVar1[2] + 1;
  return;
}
