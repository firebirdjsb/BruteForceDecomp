/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E414625BE5476577016E9D090EDE35167387C88586A25AC94907D05D558121A
 * Entry: 0x0014df80, Ghidra index: 4381, label: FUN_0014df80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014df80(void)

{
  int *unaff_ESI;
  
  (**(code **)(unaff_ESI[0x2f] + 0x38))();
  (**(code **)(unaff_ESI[0x22] + 0x38))();
  (**(code **)(*unaff_ESI + 0x38))();
  (**(code **)(unaff_ESI[0x11] + 0x38))();
  (**(code **)(unaff_ESI[0x44] + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0014dfc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_ESI[0x51] + 0x38))();
  return;
}
