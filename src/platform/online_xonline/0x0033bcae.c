/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B283330811A1E01F7A5699C7B62F8C5344552C7C41223EEEC524F9D30673B5A9
 * Entry: 0x0033bcae, Ghidra index: 12533, label: FUN_0033bcae
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033bcae(int param_1)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_0033ee8d(*(undefined4 *)(in_ECX + 0x18),&local_8,0);
  if ((-1 < iVar1) && (local_8 != param_1)) {
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}
