/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB1EF587BFC187B41FF64CFE369DBABEF6B1E5B57FBB0FA6E8D891963CF455C5
 * Entry: 0x001543c0, Ghidra index: 4436, label: FUN_001543c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001543c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    FUN_00154420();
  }
  return;
}
