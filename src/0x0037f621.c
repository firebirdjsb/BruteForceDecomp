/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FA3C5B8948EFA4E67D27AB6E456445A6E64D5E42336A388CBE72BCD2F4FDCF1
 * Entry: 0x0037f621, Ghidra index: 13500, label: FUN_0037f621
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037f621(byte param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *in_ECX;
  
  in_ECX[0x7a] = param_1;
  *in_ECX = 0;
  in_ECX[0x79] = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  iVar2 = FUN_00382086((uint)param_1 << 5,0x44425355);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0001fe40(iVar2,0x20,(uint)param_1,&LAB_003820ee);
  }
  *(int *)(in_ECX + 0xe0) = iVar2;
  in_ECX[0x7b] = param_2;
  cVar1 = '\0';
  if ((byte)in_ECX[0x7a] != 1 && -1 < (int)((byte)in_ECX[0x7a] - 1)) {
    iVar2 = 0;
    do {
      cVar1 = cVar1 + '\x01';
      *(char *)(iVar2 * 0x20 + 1 + *(int *)(in_ECX + 0xe0)) = cVar1;
      iVar2 = (int)cVar1;
    } while (iVar2 < (int)((byte)in_ECX[0x7a] - 1));
  }
  KeInitializeDpc(in_ECX + 0x34,&LAB_00382e36,0);
  KeInitializeTimerEx(in_ECX + 0x50,0);
  return;
}
