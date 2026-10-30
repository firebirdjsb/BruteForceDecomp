/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C557D76EF02ECC8CA95C91932512D78FA5359ECC9C535D8F497A7C158F18AB03
 * Entry: 0x00079480, Ghidra index: 1447, label: FUN_00079480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_002383b0(void);

extern uint32_t DAT_00469b58;
undefined4 FUN_00079480(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = FUN_002383b0();
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xd4))(&local_4);
  if (iVar1 != 0) {
    uVar2 = FUN_001e97c0();
    return uVar2;
  }
  return 0;
}
