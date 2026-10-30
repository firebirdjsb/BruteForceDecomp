/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00C12EE44DFDA71BB16C91E2DBBCB2737BCC9D4C23D4C6CA13C4CBAB1A40A880
 * Entry: 0x00288c20, Ghidra index: 9120, label: FUN_00288c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
uint FUN_00288c20(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 unaff_EDI;
  int local_418 [260];
  undefined4 local_8;
  
  local_418[0] = 0;
  local_418[1] = 0;
  local_8 = 0;
  local_418[3] = 10;
  local_418[2] = 0;
  cVar1 = FUN_00289010(unaff_EDI);
  if (cVar1 != '\0') {
    bVar2 = FUN_00288d40(local_418,unaff_EDI);
    if (local_418[0] != 0) {
      uVar3 = (*(code *)PTR_FUN_003bc654)(local_418[0]);
      return uVar3;
    }
    return (uint)bVar2;
  }
  if (local_418[0] != 0) {
    uVar3 = (*(code *)PTR_FUN_003bc654)(local_418[0]);
    return uVar3;
  }
  return 0;
}
