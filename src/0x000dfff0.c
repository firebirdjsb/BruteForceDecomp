/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5679972C579F62F7FA6FFB1A276072EB143789101BD16DB01E8E8D37303C6D52
 * Entry: 0x000dfff0, Ghidra index: 2740, label: FUN_000dfff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000dfff0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = 0;
  if (param_1 != 0) {
    FUN_0008f6a0(param_1);
  }
  iVar1 = *(int *)(unaff_EBX + 4);
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar2 = FUN_000e1990(unaff_EBX,iVar1,*(undefined4 *)(iVar1 + 4),local_30);
  FUN_000e1a20();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if ((*(byte *)(param_1 + 0x7d8) & 3) == 0) {
    *(byte *)(param_1 + 0x7d8) = *(byte *)(param_1 + 0x7d8) | 2;
  }
  if (local_2c != 0) {
    FUN_0008f6e0();
  }
  return;
}
