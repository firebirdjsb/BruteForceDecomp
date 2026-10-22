/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02A2DB1886E8C9525A3B777895F0AB901BE0130638447E511CD1A5CEB0AF55B9
 * Entry: 0x002f7834, Ghidra index: 10927, label: DebugBreak
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x002fe214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DbgBreakPoint();
  return;
}
