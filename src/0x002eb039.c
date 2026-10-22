/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D16D2D1A5AB4A7968B61F9E27C9A7F00E42F1AA1A1F2B876BAAE2493E8A286B6
 * Entry: 0x002eb039, Ghidra index: 10609, label: _isspace
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *PTR_DAT_003b6c3c;
/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2003 Release */

int __cdecl _isspace(int param_1)

{
  int iVar1;
  
  if (1 < DAT_003b6c30) {
    iVar1 = FUN_002eba73(param_1,8);
    return iVar1;
  }
  return (byte)PTR_DAT_003b6c3c[param_1 * 2] & 8;
}
