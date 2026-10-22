/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33E62CAE6FF3F9F7E297E6C4BFDC2BA79C08C3BF4E154E103DDBC105DE86AC21
 * Entry: 0x001351c0, Ghidra index: 3870, label: FUN_001351c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
int FUN_001351c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_000120f0();
  if (*(undefined4 **)(DAT_00469ab0 + 0x1348) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(DAT_00469ab0 + 0x1348);
  }
  while( true ) {
    if (puVar2 == *(undefined4 **)(DAT_00469ab0 + 0x1348)) {
      return 0;
    }
    if (*(int *)(puVar2[2] + 0xe0) == iVar1) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2[2];
}
