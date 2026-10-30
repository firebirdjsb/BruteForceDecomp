/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F680EF15AE99B68A4CBEB828385679750628C47AA14C22AB8EE6CF20938E7497
 * Entry: 0x0037f20e, Ghidra index: 13495, label: FUN_0037f20e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412718;
void FUN_0037f20e(undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = param_2 + 0x18;
  puVar1 = (uint *)FUN_00382086(uVar4,0x44425355);
  if (puVar1 != (uint *)0x0) {
    puVar5 = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    DAT_00412718 = DAT_00412718 + 1;
    *puVar1 = (uint)DAT_00412718;
    puVar2 = (undefined1 *)FUN_00380e8a();
    puVar5 = puVar1 + 1;
    *puVar5 = (uint)puVar2;
    *puVar2 = 0;
    *(undefined1 *)(*puVar5 + 2) = 0x80;
    *(undefined1 *)(*puVar5 + 1) = 0x80;
    *(undefined1 *)(*puVar5 + 3) = 0x80;
    *(uint **)(*puVar5 + 0xc) = puVar1;
    FUN_0037f712(puVar1 + 6,(char)*puVar1,param_1);
  }
  return;
}
