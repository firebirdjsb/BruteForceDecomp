/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D8FACC1BA31E07DF0502DB75D903672AE5B08943E7DEC7BDFE67FDF4BF4AA84
 * Entry: 0x00038eb0, Ghidra index: 389, label: FUN_00038eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00038eb0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_2 != param_3) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      param_4 = param_2[3];
      if ((iVar1 == 0) ||
         ((uint)(*(int *)(iVar2 + 0xc) - iVar1 >> 2) <= (uint)(*(int *)(iVar2 + 8) - iVar1 >> 2))) {
        FUN_000a7d80(*(undefined4 *)(iVar2 + 8),&param_4);
      }
      else {
        iVar1 = *(int *)(iVar2 + 8);
        FUN_0003efa0(iVar1,1,iVar2,param_3);
        *(int *)(iVar2 + 8) = iVar1 + 4;
      }
      param_2 = (int *)*param_2;
    } while (param_2 != param_3);
    *param_1 = iVar2;
    return;
  }
  *param_1 = param_4;
  return;
}
