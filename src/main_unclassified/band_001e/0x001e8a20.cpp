/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD712C3877C2B69E979FD7A3A4A77E75F6546E1FDE38C62127F1A03A154EC478
 * Entry: 0x001e8a20, Ghidra index: 6840, label: FUN_001e8a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8a20(void)

{
  char *pcVar1;
  char *pcVar2;
  char local_208 [520];
  
  FUN_002ea78d();
  if (local_208[0] != '\0') {
    pcVar1 = local_208;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (pcVar2[-1] != '-') {
      FUN_00132dc0();
    }
  }
  return;
}
