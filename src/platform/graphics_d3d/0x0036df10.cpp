/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0675EAD3DB789DABE8E808DBC3042B2DD9441CEDE98B3E89CD61F9E92CC9DAB7
 * Entry: 0x0036df10, Ghidra index: 13299, label: FUN_0036df10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0036df10(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x15c4) + 0x14);
  iVar2 = *(int *)(in_EAX + 0x15c4);
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(in_EAX + 0x2c);
  uVar3 = D3D8LTCG__D3D_SetFence(0);
  *(undefined4 *)(in_EAX + 0x1524 + (*(uint *)(in_EAX + 0x2018) & 1) * 4) = uVar3;
  if (*(int *)(in_EAX + 0x1980) != 0) {
    FUN_0036ddd0();
  }
  return;
}
