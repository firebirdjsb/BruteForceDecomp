/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F036B2FDE00DBD97E894915F8CE78DAB0D894AD820A4B52EE7E9F86F40DC14FA
 * Entry: 0x00236cf0, Ghidra index: 7838, label: FUN_00236cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00236cf0(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *in_EDX;
  
  if ((in_ECX == 0) || (in_ECX == -1)) {
    in_EDX[1] = 0;
    *in_EDX = 0;
    *(undefined1 *)(in_EDX + 2) = 0;
    return in_EDX[1];
  }
  *in_EDX = in_ECX;
  piVar1 = *(int **)(in_ECX + 0x4c);
  if ((piVar1 != (int *)0x0) && (*(int *)(in_ECX + 0x50) - (int)piVar1 >> 2 != 0)) {
    iVar2 = *piVar1;
    in_EDX[1] = iVar2;
    *(undefined1 *)(in_EDX + 2) = param_1;
    return iVar2;
  }
  in_EDX[1] = 0;
  *(undefined1 *)(in_EDX + 2) = param_1;
  return 0;
}
