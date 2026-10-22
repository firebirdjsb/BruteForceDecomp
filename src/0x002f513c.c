/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADE961FC22C87E382D735B8C75500ACB74F0B4D248F0E1783ABF8628C999DADA
 * Entry: 0x002f513c, Ghidra index: 10889, label: XPhysicalFree
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XPhysicalFree(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f513c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MmFreeContiguousMemory();
  return;
}
