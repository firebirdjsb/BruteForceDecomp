/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 832FE004567853A35F4D04C8FE0B0DFBA257EB9B02A43BEDC78D3689A834624B
 * Entry: 0x0013d420, Ghidra index: 4015, label: FUN_0013d420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013d420(void)

{
  int *in_ECX;
  int in_EDX;
  
  if (in_EDX < *(short *)((int)in_ECX + 0x1a)) {
    (**(code **)(*in_ECX + 0x24))(*(short *)((int)in_ECX + 0x1a) - in_EDX);
    return;
  }
  (**(code **)(*in_ECX + 0x24))(0);
  return;
}
