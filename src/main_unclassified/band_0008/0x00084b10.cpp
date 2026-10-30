/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9EF071C0B882A5D0C4CFC4B4891226577BD8BE943925F7E948E81E0ADCF7EDD
 * Entry: 0x00084b10, Ghidra index: 1543, label: FUN_00084b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);

void FUN_00084b10(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}
