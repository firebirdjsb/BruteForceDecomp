/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C45356078D5D58EF1236EA1CD6C3D486C88E0CB28A1F591A0186106A45408202
 * Entry: 0x0023ca30, Ghidra index: 7937, label: FUN_0023ca30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023ca30(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_0023c960();
  }
  return;
}
