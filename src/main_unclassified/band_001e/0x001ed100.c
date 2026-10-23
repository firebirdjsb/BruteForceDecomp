/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C734AA6EE611AC86EDFCB86815E220277036B7D1CF4B34DFAAECD5D300147C16
 * Entry: 0x001ed100, Ghidra index: 6924, label: FUN_001ed100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001ed100(undefined4 *param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = FUN_002e5880();
  if (cVar1 == '\0') {
    if (*(int *)(*(int *)(in_EAX + 0x18) + 0x4898) != 7) {
      return 0;
    }
    iVar2 = FUN_002e5900();
  }
  else {
    iVar2 = FUN_002e5920();
  }
  if ((iVar2 != 0) &&
     (puVar3 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc), puVar3 != (undefined4 *)0x0)) {
    for (iVar2 = 0x89; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  return 0;
}
