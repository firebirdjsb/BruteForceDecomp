/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F33FFDB7E403D77BBE7FCBD92A24D517A8EFA4227AE905C339DC8430D3E83DF2
 * Entry: 0x0014aae0, Ghidra index: 4301, label: FUN_0014aae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0014aae0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x20))();
  if (cVar1 == '\0') {
    *(undefined2 *)((int)in_ECX + 0x1a) = 0;
    return 0;
  }
  if ((param_1 == 0) && (*(short *)((int)in_ECX + 0x1a) != 0)) {
    *(undefined2 *)((int)in_ECX + 0x1a) = 0;
    (**(code **)(*in_ECX + 0x38))();
  }
  cVar1 = (**(code **)(*in_ECX + 0x20))();
  if (cVar1 != '\0') {
    *(short *)((int)in_ECX + 0x1a) = (short)param_1;
    iVar2 = (**(code **)(*in_ECX + 0x5c))();
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*in_ECX + 0x5c))();
      iVar2 = *(int *)(iVar3 + 0x180);
      if ((int)*(short *)((int)in_ECX + 0x1a) < *(int *)(iVar3 + 0x180)) {
        iVar2 = (int)*(short *)((int)in_ECX + 0x1a);
      }
      *(short *)((int)in_ECX + 0x1a) = (short)iVar2;
    }
  }
  return (int)*(short *)((int)in_ECX + 0x1a);
}
