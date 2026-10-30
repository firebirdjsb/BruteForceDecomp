/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F1BD493CCB5901BD96A33EEC56EA80A32AEAE6883B766761697E7B16A77443D
 * Entry: 0x0021dc70, Ghidra index: 7552, label: FUN_0021dc70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021dc70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  in_ECX[0x10] = param_1[0x10];
  uVar2 = (**(code **)(*param_1 + 0x40))();
  (**(code **)(iVar1 + 0x44))(uVar2);
  *(char *)(in_ECX + 0x27) = (char)param_1[0x27];
  *(undefined1 *)((int)in_ECX + 0x9d) = *(undefined1 *)((int)param_1 + 0x9d);
  *(undefined1 *)((int)in_ECX + 0x9e) = *(undefined1 *)((int)param_1 + 0x9e);
  *(undefined1 *)((int)in_ECX + 0x9f) = *(undefined1 *)((int)param_1 + 0x9f);
  in_ECX[0x21] = param_1[0x21];
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  in_ECX[0x1f] = param_1[0x1f];
  in_ECX[0x20] = param_1[0x20];
  in_ECX[0x24] = param_1[0x24];
  in_ECX[0x25] = param_1[0x25];
  in_ECX[0x11] = param_1[0x11];
  return;
}
