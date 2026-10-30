/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D99C40E3F1F79A0D08113896C85903187C82074D0D82BA9CC0EF4CE2E196A9B
 * Entry: 0x002fe3e8, Ghidra index: 11020, label: ?_CreateFrameInfo@@YAPAUFrameInfo@@PAU1@PAX@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b48;
/* Library Function - Single Match
    ?_CreateFrameInfo@@YAPAUFrameInfo@@PAU1@PAX@Z
   
   Library: Visual Studio 2003 Release */

void __CreateFrameInfo__YAPAUFrameInfo__PAU1_PAX_Z(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = DAT_00414b48;
  DAT_00414b48 = param_1;
  return;
}
