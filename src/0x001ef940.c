/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFDAD1F5DDA3658681624606F375C4C924C6622E80791D54F7656E4E7DAA8B76
 * Entry: 0x001ef940, Ghidra index: 6969, label: FUN_001ef940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_Parameters_004071bc[];
undefined4 FUN_001ef940(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_001ed0a0();
  if (iVar2 != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar2 = FUN_002e5900();
      if (iVar2 != 0) {
        FUN_002e4980(s_Parameters_004071bc,param_1 + 0x18,0x224);
        *(undefined1 *)(in_ECX + 0x2e2c) = 1;
      }
    }
  }
  return 0;
}
