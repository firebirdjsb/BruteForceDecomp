/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A38F70CEC55C936B6D1770B82B8556694ADEA238A91639F59BFBEB6B3D45B48
 * Entry: 0x001ed840, Ghidra index: 6938, label: FUN_001ed840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396a84;
void FUN_001ed840(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  undefined **local_1c [6];
  undefined4 local_4;
  
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 4;
    FUN_002e8c40();
    local_4 = 0xffffffff;
    local_1c[0] = &PTR_FUN_00396a84;
    if (*(int *)(unaff_ESI + 0x1c) != 0) {
      cVar1 = FUN_002e5880();
      if (cVar1 == '\0') {
        iVar2 = FUN_002e5bf0(0);
        local_4 = *(undefined4 *)(iVar2 + 0x2c);
      }
      else {
        local_4 = 0;
      }
    }
    FUN_002e7f50(0xfffffffb,local_1c,1,1);
    FUN_002e8b80();
  }
  return;
}
