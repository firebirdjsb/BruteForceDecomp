/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BAA58BDCB1396559A2C5B5C3CE42F71C1BA06442659D3F5EFD895D4A5D1F7C0
 * Entry: 0x002bc920, Ghidra index: 9924, label: FUN_002bc920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
undefined4 FUN_002bc920(void)

{
  undefined4 uVar1;
  undefined1 local_10 [4];
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  short local_4;
  
  local_c = 0;
  local_a = 0;
  local_4 = 1;
  local_8 = 0;
  uVar1 = FUN_002b2b80();
  uVar1 = FUN_002beb90(local_10,uVar1);
  if ((local_4 != 0) && (local_8 != 0)) {
    uVar1 = (*(code *)PTR_FUN_003bc654)(local_8);
    return uVar1;
  }
  return uVar1;
}
