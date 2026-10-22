/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5891DA23583234617D9681F46BC566E54FCFF50D7401A90A15B01EA4E7A04F68
 * Entry: 0x0033cede, Ghidra index: 12569, label: FUN_0033cede
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0950;
void FUN_0033cede(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int *in_ECX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = in_ECX[0x210] != 0;
  if (bVar4) {
    FUN_0033c404(param_5,param_2);
    in_ECX[0x210] = 0;
  }
  if ((param_4 != 0) && ((uint)(in_ECX[0x20d] - in_ECX[0x20b]) < param_3)) {
    FUN_0033c44a(param_5,param_2);
    uVar2 = *(uint *)(param_2 + 4);
    uVar1 = uVar2 >> 2;
    puVar3 = param_5;
    if (bVar4) {
      puVar3 = (undefined4 *)((int)param_5 + 1);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      uVar2 = (uint)*(ushort *)(&DAT_004b0950 + *in_ECX * 10);
    }
    else {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      uVar2 = *(ushort *)(&DAT_004b0950 + *in_ECX * 10) + 1;
    }
    *(uint *)(param_2 + 4) = uVar2 % 2000;
  }
  FUN_0033c130(param_1,param_2,param_5);
  return;
}
