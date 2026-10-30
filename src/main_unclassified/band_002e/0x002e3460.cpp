/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1ABB512459E0F9BF53D97C4AB90CEB43089A4E7B8881897072BC79DB1A81859
 * Entry: 0x002e3460, Ghidra index: 10401, label: FUN_002e3460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3460(void)

{
  int iVar1;
  int *in_ECX;
  
  if (*in_ECX != -1) {
    iVar1 = FUN_00345084(*in_ECX);
    *in_ECX = -1;
    if (iVar1 != 0) {
      XAPILIB__GetLastError();
      XAPILIB__GetLastError();
      return;
    }
  }
  return;
}
