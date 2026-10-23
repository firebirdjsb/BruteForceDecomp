/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE09AFFA9F4219C3AF1E92EE3E9BE0AC06ADE6450EFEAB4259904C3B79F0EBC8
 * Entry: 0x002f4ca0, Ghidra index: 10877, label: ExitThread
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__ExitThread(undefined4 param_1)

{
  code *pcVar1;
  
  XapiCallThreadNotifyRoutines(0);
  PsTerminateSystemThread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
