/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B207B0C1C6E7D5F91FB48077D5AF278D380D27F5D4624CAD2F9D5D5B12149E9
 * Entry: 0x00347918, Ghidra index: 12868, label: FUN_00347918
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5b4;
undefined4 FUN_00347918(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_0040f5b4 == 0) {
    local_8 = FUN_00347629();
  }
  else {
    local_8 = *(undefined4 *)(DAT_0040f5b4 + 0xbe8);
  }
  FUN_0034771b(local_8,0,param_1,0x1ec);
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  local_c = 0x58425632;
  iVar2 = FUN_0034c4a1(XboxHDKey_exref,0x10,puVar1,0x1b0,&local_c,4,param_1 + 0x28,0x14);
  if (iVar2 == 0) {
    puVar3 = puVar1;
    for (iVar2 = 0x6c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *puVar1 = 0x58425632;
    *(undefined4 *)(param_1 + 0x1e8) = 0x58424350;
    FUN_00347871(param_1);
  }
  if (DAT_0040f5b4 == 0) {
    FUN_00347677(local_8);
  }
  return 1;
}
