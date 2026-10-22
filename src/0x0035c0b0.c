/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DD000A5BC100A934B926AE7A1BEED7A525BB6A79127BA208DF0C49A12FEEC25
 * Entry: 0x0035c0b0, Ghidra index: 13206, label: FUN_0035c0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035c0b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 + 0x140;
  iVar1 = 0x10;
  iVar3 = param_3;
  do {
    FUN_0035bcf0(param_2,iVar2,iVar2 + -0x40,iVar3);
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0035bcf0(param_2,param_1 + 0x24,param_1 + 0x20,param_1 + 0x10);
  *(undefined4 *)(param_3 + 0x180) = 0;
  return;
}
