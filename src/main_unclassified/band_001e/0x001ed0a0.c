/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BF2ED0A87EBED369C784EA79367593C61BB01D904CD8131E8D1BDA3B1CD7267
 * Entry: 0x001ed0a0, Ghidra index: 6923, label: FUN_001ed0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001ed0a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  cVar1 = FUN_002e5880();
  if (cVar1 == '\0') {
    if (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x4898) == 7) {
      iVar2 = FUN_002e5900();
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
        if (puVar3 != (undefined4 *)0x0) {
          return *puVar3;
        }
      }
    }
  }
  else {
    iVar2 = FUN_002e5920();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
      if (puVar3 != (undefined4 *)0x0) {
        return *puVar3;
      }
    }
  }
  return 0;
}
