/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DD1E11103EB4299927E781AAAFB034FD9DAA5EF7AEB8054DD58067425A9618F
 * Entry: 0x001ed550, Ghidra index: 6933, label: FUN_001ed550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396bc8;
void FUN_001ed550(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  undefined **local_20 [6];
  undefined4 local_8;
  
  if (*(int *)(unaff_ESI + 0x1c) == 5) {
    FUN_001ed5d0();
    return;
  }
  FUN_002e8c40();
  local_8 = 0xffffffff;
  local_20[0] = &PTR_FUN_00396bc8;
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar2 = FUN_002e5bf0(0);
      local_8 = *(undefined4 *)(iVar2 + 0x2c);
    }
    else {
      local_8 = 0;
    }
  }
  FUN_002e7f50(0xfffffffd,local_20,1,1);
  FUN_002e8b80();
  return;
}
