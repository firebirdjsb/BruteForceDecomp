/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26FBC9FA5CC0937C236257E628634634A3ED7A3B9A46ED954DF715CA2895631B
 * Entry: 0x0013af20, Ghidra index: 3978, label: FUN_0013af20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0013af20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  iVar2 = param_2 - param_1 >> 3;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar3) {
    puVar4 = (uint *)(param_1 + 4 + iVar3 * 8);
    do {
      local_24 = param_3;
      local_20 = param_4;
      puVar4 = puVar4 + -2;
      local_1c = param_5;
      local_18 = param_6;
      local_28 = 0;
      uVar1 = *puVar4;
      iVar3 = iVar3 + -1;
      if ((uVar1 != 0) && (local_28 = uVar1, (uVar1 & 1) == 0)) {
        uVar1 = uVar1 * 0x19660d + 0x3c6ef35f >> 0x15;
        local_2c = *(undefined4 *)(&DAT_00414da0 + uVar1 * 4);
        *(undefined4 **)(&DAT_00414da0 + uVar1 * 4) = &local_2c;
      }
      FUN_0013b050(param_1,iVar3,iVar2);
    } while (0 < iVar3);
  }
  return;
}
