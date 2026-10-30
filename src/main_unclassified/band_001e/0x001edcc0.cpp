/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DD1A30A6DC5CEB57AB9C3C61116CF854C1A339536E02B818135D849CB52F0CF
 * Entry: 0x001edcc0, Ghidra index: 6945, label: FUN_001edcc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001edcc0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x1c) != 0) &&
     (iVar1 = (param_1 + -1) * 0x598 + in_ECX, *(char *)(iVar1 + 0x15c) != '\0')) {
    return iVar1 + 0x670;
  }
  iVar1 = FUN_001e97c0();
  return iVar1;
}
