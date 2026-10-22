/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89A3C4AD4AE8D967DFE8D086CA5791F2449FF29EEF01C137EA0E7710B833FB75
 * Entry: 0x0001fe90, Ghidra index: 169, label: FUN_0001fe90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fe90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}
