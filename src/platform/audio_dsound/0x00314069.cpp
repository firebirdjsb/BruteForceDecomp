/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 576FEDEDF10A1633B1C147C3AB5B33DF42F974BE9BED44378C37EDB5DA0C5F4D
 * Entry: 0x00314069, Ghidra index: 12045, label: FUN_00314069
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra source-matched call only; original guest ABI_UNVERIFIED. */
extern int FUN_00313e74(uint param_1,undefined4 param_2,int param_3);
void FUN_00314069(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00313e74(*param_1,param_1[2],param_1[5]);
  if (-1 < iVar1) {
    *(undefined4 *)(in_ECX + 0xb8) = param_1[1];
    *(undefined4 *)(in_ECX + 0xbc) = param_1[3];
    *(undefined4 *)(in_ECX + 0xc0) = param_1[4];
  }
  return;
}
