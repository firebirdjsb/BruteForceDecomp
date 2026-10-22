/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE35C7AEDA99D3E09CB79C15249D33E3EBE46D966302B7E9EB4F01CCD4AB499D
 * Entry: 0x0035acd0, Ghidra index: 13186, label: FUN_0035acd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035acd0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 1;
  if (iVar1 == 0) {
    XAPILIB__ResumeThread();
    return;
  }
  XAPILIB__ReleaseMutex();
  return;
}
