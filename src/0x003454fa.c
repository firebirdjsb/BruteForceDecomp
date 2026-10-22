/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5183D2937A1FC45367339396E3FB2434921598164FB965519EA154052EC55D76
 * Entry: 0x003454fa, Ghidra index: 12808, label: FUN_003454fa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003454fa(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00347d34(param_1);
  if (-1 < iVar1) {
    FUN_00352ebc(0x2000000);
    iVar1 = in_ECX + 0xbd8;
    *(int *)(in_ECX + 0xbdc) = iVar1;
    *(int *)iVar1 = iVar1;
    iVar1 = in_ECX + 0xbe0;
    *(int *)(in_ECX + 0xbe4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined2 *)(in_ECX + 0xbd6) = 0x400;
    iVar1 = 0;
  }
  return iVar1;
}
