/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FDA402B460531526912F18A9D248578399B922C1812F75237D38D64A3BB768C
 * Entry: 0x002fe888, Ghidra index: 11034, label: __wcsicmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern uint FUN_002ff361(uint param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f518;
/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2003 Release */

int __wcsicmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (DAT_0040f518 == 0) {
    do {
      uVar1 = *param_1;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      uVar2 = *param_2;
      if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
        uVar2 = uVar2 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while ((uVar1 != 0) && (uVar1 == uVar2));
  }
  else {
    do {
      uVar1 = FUN_002ff361(*param_1);
      param_1 = param_1 + 1;
      uVar2 = FUN_002ff361(*param_2);
      param_2 = param_2 + 1;
      if (uVar1 == 0) break;
    } while (uVar1 == uVar2);
  }
  return (uint)uVar1 - (uint)uVar2;
}
