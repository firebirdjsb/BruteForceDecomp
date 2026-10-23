/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99A2FF386977D5CF4C8EF3710DD20DA1D1E812C9E67D5AF0777292977BA893D7
 * Entry: 0x00319974, Ghidra index: 12236, label: FUN_00319974
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319974(void)

{
  int *in_ECX;
  
  if ((*(byte *)((int)in_ECX + 0x12) & 1) == 0) {
    (**(code **)(*in_ECX + 0x1c))(1);
  }
  else if ((*(ushort *)((int)in_ECX + 0x12) & 0x8002) == 0) {
    FUN_00319896();
    return;
  }
  return;
}
