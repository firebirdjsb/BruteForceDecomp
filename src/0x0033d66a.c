/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72C306B57F8A671D97D2491C0AA92B9AB05176529AF4A8D11849243066A848E5
 * Entry: 0x0033d66a, Ghidra index: 12586, label: FUN_0033d66a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d66a(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_24 [8];
  int local_1c;
  int local_14;
  int local_c;
  
  iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
  local_c = *(int *)(param_1 + 8) << 9;
  FUN_0033bb7c(param_1);
  local_14 = local_14 - local_1c;
  local_1c = 0;
  uVar2 = FUN_0033cede(*param_2,local_24,4,1,in_ECX + 0x24);
  *param_2 = uVar2;
  if (*(int *)(param_1 + 8) == *(int *)(in_ECX + 0x10) + -1) {
    iVar1 = *(int *)(param_1 + 0xc);
    puVar5 = (undefined4 *)(iVar1 + 0x24 + in_ECX);
    puVar6 = (undefined4 *)(*(int *)(param_1 + 8) * 0x200 + *(int *)(in_ECX + 0xc) + iVar1);
    for (uVar3 = 500U - iVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = 500U - iVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  FUN_0033bf88(in_ECX + 0x24,0,iVar4);
  FUN_0033ee35(*(undefined4 *)(in_ECX + 4),in_ECX + 0x24,(iVar4 + 1) * 0x200,local_c,0,
               *(undefined4 *)(in_ECX + 0x8b8),param_3);
  FUN_0033edd5(param_3,0);
  return;
}
