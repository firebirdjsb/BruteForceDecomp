/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F6C11EF729D762EF2716F6A4A564A4EA3AA5F9101DA1F19E23970EFA705808F
 * Entry: 0x00174c30, Ghidra index: 4921, label: FUN_00174c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004004e0;
/* WARNING: Removing unreachable block (ram,0x00174c89) */

undefined4 FUN_00174c30(void)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int iVar3;
  char *in_EDX;
  undefined1 local_104 [260];
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  FUN_001e8830(&DAT_004004e0);
  iVar3 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x10))(*(int **)(in_EAX + 0x74),local_104);
  if (-1 < iVar3) {
    cVar1 = FUN_001752c0();
    if (cVar1 == '\0') {
      FUN_00175300();
    }
    return 1;
  }
  return 0;
}
