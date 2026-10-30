/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F44A50BCDB2911D2EE7FF78E3907FB8C01C88AB8E1E0CB03F4BFC395B1EFBE7D
 * Entry: 0x001ec370, Ghidra index: 6908, label: FUN_001ec370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001ec370(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = FUN_002e5880();
  if (cVar1 != '\0') {
    pcVar3 = s_Parameters_004071bc;
    FUN_002e5920(s_Parameters_004071bc);
    iVar2 = FUN_002e4a30(pcVar3);
    if (iVar2 != 0) {
      if (((*(byte *)(iVar2 + 0x21c) & 1) != 0) && (cVar1 = FUN_001ebd30(), cVar1 == '\0')) {
        return 0;
      }
      if (((*(byte *)(iVar2 + 0x21c) & 2) != 0) && (cVar1 = FUN_001ebd30(), cVar1 == '\0')) {
        return 0;
      }
      if (((*(byte *)(iVar2 + 0x21c) & 4) != 0) && (cVar1 = FUN_001ebd30(), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
