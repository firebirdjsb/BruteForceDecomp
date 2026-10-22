/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EAE25D8831998C20D422A9EB1062B76966D336CFE7E18E7102CDEFD96106CDF
 * Entry: 0x0034a72a, Ghidra index: 12934, label: FUN_0034a72a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a72a(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  byte *pbVar3;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x10);
  if (((char)iVar2 == '\x7f') || (iVar2 == *(int *)(in_ECX + 0x268))) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  else {
    if (3 < ((byte)param_1[2] & 7)) {
      if (iVar2 != -1) {
        pbVar3 = (byte *)FUN_00348472(iVar2);
        if ((pbVar3 != (byte *)0x0) && (pbVar3[2] != 1)) {
          if (5 < pbVar3[2]) goto LAB_0034a77b;
          if (((*pbVar3 & 4) == 0) || (5 < *(uint *)(in_ECX + 0xae4))) {
            FUN_0034a437(pbVar3,param_1);
            return;
          }
        }
LAB_0034a7a9:
        FUN_00355bae(param_1,0);
        return;
      }
      param_2 = 0;
      pbVar3 = (byte *)0x0;
LAB_0034a77b:
      FUN_00348e95(param_1,pbVar3,param_2);
      return;
    }
    if ((*(byte *)((int)param_1 + 0xb) & 0x10) == 0) goto LAB_0034a7a9;
    *(int *)(iVar1 + 0xc) = *(int *)(in_ECX + 0x268);
  }
  FUN_00348b9a(param_1,param_2);
  return;
}
