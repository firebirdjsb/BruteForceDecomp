/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E678029CC7C649470DAAD6DA94C7DF1FBE2C42EDE81743C4C578058C1732D4B2
 * Entry: 0x0012df60, Ghidra index: 3808, label: FUN_0012df60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0012df60(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(0x710);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0012dfa0();
    (**(code **)(*piVar2 + 4))();
    return piVar2;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
