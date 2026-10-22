/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFF3C5036056C72AF29E9B06078FF6774344F9303CE64986694417C71E81A96C
 * Entry: 0x00043470, Ghidra index: 523, label: FUN_00043470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
undefined1 FUN_00043470(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint unaff_EBX;
  int *piVar3;
  undefined1 local_41;
  char local_40 [4];
  undefined4 local_3c;
  int local_38 [7];
  int local_1c;
  
  local_41 = 0;
  iVar1 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
  if ((iVar1 == 0) || (*(int *)(iVar1 + 100) != 3)) {
    FUN_000120f0();
    if ((param_2 != '\0') &&
       ((iVar1 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358)), iVar1 != 0 &&
        (*(int *)(iVar1 + 100) == 1)))) {
      uVar2 = *(uint *)(param_1 + 0xa0);
      if ((uVar2 == 0) || ((uVar2 & -(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0)) == 0)) {
        uVar2 = 0;
      }
      if (uVar2 == unaff_EBX) {
        FUN_00012320(6);
        FUN_00012000(local_38[0],local_40);
        local_41 = 1;
        FUN_00012440();
      }
    }
    piVar3 = local_38;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    local_40[0] = '\0';
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_3c = (undefined **)((uint)local_3c._2_2_ << 0x10);
    FUN_00043000(param_1,unaff_EBX,3);
    if (local_40[0] != '\0') {
      FUN_00012320(0x14);
      FUN_00012000(local_38[0],local_40);
      local_3c = &PTR_FUN_003a4f64;
      if (local_1c != 0) {
        FUN_0008f6e0();
      }
      if (local_38[2] != 0) {
        FUN_0008f6e0();
      }
    }
  }
  return local_41;
}
