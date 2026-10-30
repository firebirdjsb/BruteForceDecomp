/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27AD3488660808A650908EC42E8801145B67E99BB9FA14F4CB1551BFDB6B5BFE
 * Entry: 0x00088bc0, Ghidra index: 1636, label: FUN_00088bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_001f00e0(int param_1);

extern uint32_t DAT_0046995c;
int FUN_00088bc0(void)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  
  uVar3 = (uint)(*(int *)(in_ECX + 0x58 + in_EDX * 0x20) != 0);
  if (*(int *)((in_EDX + 3) * 0x20 + in_ECX) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(in_ECX + 0x68 + in_EDX * 0x20) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(in_ECX + 0x70 + in_EDX * 0x20) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    iVar1 = FUN_001f00e0(in_EDX);
    uVar3 = iVar1 + uVar3;
  }
  uVar2 = (uint3)(uVar3 >> 8);
  if (3 < (int)uVar3) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}
