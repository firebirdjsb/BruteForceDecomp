/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29E5782ACCF0D093A50E08D3E827F31AE5AFB48465606D3E581CA45A371641AF
 * Entry: 0x001cf010, Ghidra index: 6088, label: FUN_001cf010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf010(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 3);
  }
  return;
}
