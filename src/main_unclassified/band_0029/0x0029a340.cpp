/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E91FAED8AF4BADF65CBD7F64482E51E5D98A729D7F16B9650DABB2105393888
 * Entry: 0x0029a340, Ghidra index: 9404, label: FUN_0029a340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029a340(void)

{
  int in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != in_EAX) {
    FUN_0029a130();
  }
  uVar1 = FUN_00296110();
  *(undefined4 *)(in_ECX + 4) = uVar1;
  return;
}
