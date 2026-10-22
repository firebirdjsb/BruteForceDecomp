/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99D69A24BC0E5B8E22D92C3AB6A4A1B32955B5C757878A7DD53919756540DC98
 * Entry: 0x00347871, Ghidra index: 12866, label: FUN_00347871
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_00347871(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1f0 [10];
  undefined1 local_1c8 [20];
  undefined4 local_1b4 [107];
  undefined4 local_8;
  
  if (DAT_0040f5b4 == 0) {
    uVar1 = FUN_00347629();
  }
  else {
    uVar1 = *(undefined4 *)(DAT_0040f5b4 + 0xbe8);
  }
  puVar4 = local_1f0;
  for (iVar3 = 0x7b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1b4[0] = 0x58425632;
  local_8 = 0x58424350;
  FUN_0034c461(XboxHDKey_exref,0x10,local_1b4,0x1b0,local_1b4,4,local_1c8,0x14);
  uVar2 = FUN_003477ce(uVar1,0,local_1f0,0x1ec);
  if (DAT_0040f5b4 == 0) {
    FUN_00347677(uVar1);
  }
  return uVar2;
}
