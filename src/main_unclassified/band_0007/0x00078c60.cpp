/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77A2F7B28915249CB521E3F31651E48B04D2D84DCBA1793488EF9FE1A148C13C
 * Entry: 0x00078c60, Ghidra index: 1433, label: FUN_00078c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);

void FUN_00078c60(void)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  return;
}
