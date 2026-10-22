/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D4A315BE6EF3A80BC907B1DCF40A95C2FDF2E1855FB047919468415D722387D
 * Entry: 0x001e25b0, Ghidra index: 6750, label: FUN_001e25b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e25b0(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    pcVar2 = (char *)*param_3;
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_000e0b20(0,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    if (iVar4 == 0) break;
  }
  *unaff_EBX = param_1;
  return;
}
