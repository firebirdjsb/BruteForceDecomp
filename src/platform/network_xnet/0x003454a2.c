/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC9A15A82FBFBA4A2AB34DEDB7E3524226EA273FDE7DCF2550631B144E707609
 * Entry: 0x003454a2, Ghidra index: 12807, label: FUN_003454a2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003454a2(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_1 == -1)) {
    iVar1 = 0x2736;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0x2b434f53) {
      *(int *)(param_1 + 8) = 0x2a434f53;
      iVar1 = 0x2b434f53;
    }
    if (iVar1 == 0x2b434f53) {
      return param_1;
    }
    iVar1 = (uint)(iVar1 != 0x2a434f53) * 2 + 0x2734;
  }
  XAPILIB__SetLastError(iVar1);
  return 0;
}
