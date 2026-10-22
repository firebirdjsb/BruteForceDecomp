/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E95BEF91B8504AB5DCBBBB003EE0D5F630AB3F94AF24D3A971FAD272D93AEE3
 * Entry: 0x002e00f0, Ghidra index: 10347, label: FUN_002e00f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e00f0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  cVar2 = *param_1;
  if ((cVar1 != cVar2) &&
     ((cVar2 == '\0' || (((byte)(cVar1 - cVar2) <= (byte)(cVar2 - cVar1) && (cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}
