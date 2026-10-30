/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DC9F81481D218538AC5D6662B214B4F73C53B00F50F0D70473C7F4C37E3EAA2
 * Entry: 0x000791c0, Ghidra index: 1443, label: FUN_000791c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040ddd4;
void FUN_000791c0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char local_410 [260];
  undefined1 local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  FUN_002ea78d(param_1,local_104,local_208,local_30c,0);
  FUN_002ea8dc(local_410,local_104,local_208,local_30c,&DAT_0040ddd4);
  pcVar2 = local_410;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(local_410,(int)pcVar2 - (int)(local_410 + 1));
  return;
}
