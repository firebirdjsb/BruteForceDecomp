/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B10CC87DED519AAB56FB7BCD6917123D8A10BAA26D12C16A4888DE0519BBC974
 * Entry: 0x000f47f0, Ghidra index: 3064, label: FUN_000f47f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000f47f0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x24) == 0x14761942) {
    *(undefined4 *)(in_ECX + 0xc) = 0;
    FUN_00105840();
    return 1;
  }
  if ((*(byte *)(param_1 + 100) & 0x40) != 0) {
    cVar1 = FUN_000efbb0();
    if (cVar1 != '\0') {
      FUN_000efb40();
    }
  }
  return 1;
}
