/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33040732BADF30A2A0C2450FC4C5482DA80FAF8015714BE4F6B247CE8696AC90
 * Entry: 0x00055a60, Ghidra index: 817, label: FUN_00055a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00022dc0(void);
extern void FUN_00055d30(undefined4 param_1);
extern void FUN_0001d470(void);

void FUN_00055a60(void)

{
  undefined1 local_a0 [92];
  undefined4 local_44;
  
  FUN_00022dc0();
  local_44 = 1;
  FUN_00055d30(local_a0);
  FUN_0001d470();
  return;
}
