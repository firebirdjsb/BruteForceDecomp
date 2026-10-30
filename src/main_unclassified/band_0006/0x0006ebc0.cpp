/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDBD1D7FBC36A1621E15677C8105949D5538E2742D9731C71C60E18960BD02E2
 * Entry: 0x0006ebc0, Ghidra index: 1248, label: FUN_0006ebc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0006ebc0(char param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  uint uVar2;
  char *in_ECX;
  undefined4 *in_EDX;
  
  uVar2 = (uint)in_EAX & 0xffffff00;
  if (*in_ECX == '\0') {
    if (*param_2 == *param_3) {
      if (param_1 != '\0') {
        *in_EDX = *in_EAX;
        *in_ECX = '\x01';
        return uVar2;
      }
      uVar1 = *in_EDX;
      *in_EAX = uVar1;
      uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),1);
      *in_ECX = '\x01';
    }
  }
  return uVar2;
}
